import azure.cosmos.documents as documents
import azure.cosmos.cosmos_client as cosmos_client
import azure.cosmos.exceptions as exceptions
import datetime
import hashlib
import config
import sys
import getopt

HOST = config.settings['host']
DATABASE_ID = ''
CONTAINER_ID = config.settings['container_id']


def create_items(container):
    print('\nCreating Items\n')

    # First user
    user1 = get_user1("User1")
    container.create_item(body=user1)

    # Second user
    user2 = get_user2("User2")
    container.create_item(body=user2)


def get_user1(item_id):
    user1 = {'id': item_id,
             'UserId': '1',
             'username': 'johndoe',
             'password': hashlib.md5("123456".encode('utf-8')).hexdigest(),
             'firstname': 'John',
             'lastname': 'Doe',
             'created_at': datetime.date(2018, 9, 11).strftime('%c'),
             'last_login': datetime.date(2022, 2, 14).strftime('%c'),
             'last_login_ip': '1.2.3.4'
             }

    return user1


def get_user2(item_id):
    user2 = {'id': item_id,
             'UserId': '2',
             'username': 'janedoe',
             'password': hashlib.md5("password1".encode('utf-8')).hexdigest(),
             'firstname': 'Jane',
             'lastname': 'Doe',
             'created_at': datetime.date(2018, 9, 23).strftime('%c'),
             'last_login': datetime.date(2021, 12, 25).strftime('%c'),
             'last_login_ip': '5.6.7.8'
             }

    return user2


def populate_users(argv):
    master_key = ''
    try:
        opts, args = getopt.getopt(argv, "hi:n:", "")
    except getopt.GetoptError:
        print('populate_users.py -i <write_key> -n <database_name>')
        exit(-1)
    found_i = False
    for opt, arg in opts:
        if opt == '-h':
            print('populate_users.py -i <write_key>')
            exit()
        elif opt == '-i':
            found_i = True
            master_key = arg
        elif opt == '-n':
            found_n = True
            DATABASE_ID = arg
    if not found_i:
        print('ERROR: -i <write_key> argument missing')
        exit(-1)
    if not found_n:
        print('ERROR: -n <database_name> argument missing')
        exit(-1)

    client = cosmos_client.CosmosClient(
        HOST, master_key, user_agent="CosmosDBPythonQuickstart", user_agent_overwrite=True)
    try:
        # setup database
        try:
            db = client.get_database_client(DATABASE_ID)
            print('Database with id \'{0}\' was found'.format(DATABASE_ID))

        except exceptions.CosmosResourceNotFoundError:
            print('Database with id \'{0}\' was not found'.format(DATABASE_ID))
            exit(-1)

        # setup container
        try:
            container = db.get_container_client(CONTAINER_ID)
            print('Container with id \'{0}\' was found'.format(CONTAINER_ID))

        except exceptions.CosmosResourceNotFoundError:
            print('Container with id \'{0}\' was not found'.format(
                CONTAINER_ID))
            exit(-1)

        create_items(container)

    except exceptions.CosmosHttpResponseError as e:
        print('\npopulate users has caught an error. {0}'.format(e.message))

    finally:
        print("\npopulate users done")


if __name__ == '__main__':
    populate_users(sys.argv[1:])

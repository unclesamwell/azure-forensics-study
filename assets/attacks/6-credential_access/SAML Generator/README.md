SAML Response Generator
=======================

This is a small utility program that makes it easy to generate SAML responses for testing. This is a fork of an open-source SAML generator found here: https://github.com/rackerlabs/saml-generator. This code is modified to work for Microsoft's Azure AD

Creating Private and Public Keys for Testing
--------------------------------------------

You will need to generate a private and public key to use for generating saml assertions. The following steps are used for creating the keys:
```
#create the keypair
openssl req -new -x509 -days 3652 -nodes -out saml.crt -keyout saml.pem

#convert the private key to pkcs8 format
openssl pkcs8 -topk8 -inform PEM -outform DER -in saml.pem -out saml.pkcs8 -nocrypt
```

Command line tool
-----------------

You will need to create the jar file in order to use the command line tool. cd to this folder then run 'mvn package' to create a jar file called 'saml-generator-1.0.jar'. This jar file will be used to create saml assertions. Alternatively, use the precompiled jar file named saml-generator-precompiled.jar

Usage
-----

java -jar saml-generator-1.0.jar [-issuer <arg>] [-privateKey <arg>] [-publicKey <arg>] [-roles <arg>] [-email <arg>] [-samlAssertionExpirationDays <arg>] [-subject <arg>] [-certificateString <arg>]

```
-issuer
The URI of the issuer for the saml assertion, as specified in the external identities in Azure

-subject
The Object-ID of the user in Azure AD

-email
The UPN of the user in Azure AD

-publicKey
THe path to the location of the public key to decrypt assertions

-privateKey
The path to the location of the private key to use to sign assertions

-samlAssertionExpirationDays
How long before the assertion is no longer valid

-certificateString
The Base64 encoded certificate, as specified in the external identities in Azure
```

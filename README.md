# Azure Cloud Forensic Logging
This repository contains terraform deployments and attack scripts used to validate Azure logging capabilities. It is used for writing my Master's thesis found here: **To be added when permission is granted**

## Description
This repository is used for validating logging capabilities for forensic investigation in Azure. It contains three Azure configurations:

1. Default configuration

   This Azure environment contains the most popularly used Azure services and is not modified manually to enable logging. Therefore, the loggging that is available in this environment is always available by default.
2. Azure Security Benchmark (v3) compliant

   This Azure environment is compliant with the latest Azure Security Benchmark, which is version 3. The environment is only compliant to the controls that dictate logging capabilities.
3. Full configuration

   This Azure environment has all logging capabilities enabled that are existent currently in Azure.
   
The environments consist of the following resources:
* Resource Group
* Public IP
* Network Interface
* Virtual Network
* Subnet
* Network Security Group
* Virtual Machine
* Disk
* Network Wachter
* Flow Log
* Cosmos DB
* Key Vault
* Function App
* App Service Plan
* Log Analytics Workspace
* VM Snapshot
* VM Image
* Storage Account
* Blob
* Azure Monitor
* Diagnostic Settings
* Azure Policy
* Azure AD

**WARNING: These clouds are NOT SECURE to ensure attack tactics of the MITRE ATT&CK framework can be used against them.**

Using the attack scripts in `assets/attacks`, the attack descriptions found in the thesis and the cloud environments, attacks can be conducted and forensic investigation can be performed to validate logging capabilities of Azure.

## Deploy
To deploy the environments using terraform, go through the following steps:
1. Install [Terraform](https://www.terraform.io/downloads.html) on your computer, or use the portable exe included.
2. Install the [Azure CLI](https://docs.microsoft.com/en-us/cli/azure/install-azure-cli) and log in using an account with sufficient privileges.
3. Create SSH keys using `ssh-keygen -b 4096 -t rsa -f ./ssh_key -q -N ""` and place them in `assets/keys`.
4. Rename `variables.tf.example` to `variables.tf` for the environment you want to deploy and change the variables to your liking.
5. Navigate to either the `terraform/default`, `terraform/benchmark` or the `terraform/full` folder, depending on the environment you want to deploy.
6. Run `terraform init`.
7. Run `terraform apply`.
8. To destroy the environment, run `terraform destroy`.

## Attacks
To validate logging capabilities, attacks must be conducted. The tactics used for the attacks are taken from the MITRE ATT&CK framework for cloud. The scripts in `assets/attacks` are organized per phase of the kill chain. Not all tactics or techniques have scripts for them. The thesis includes the attack descriptions for all techniques and sub-techniques.

## Logs
The collected log entries after simulating the attacks on the cloud environments are located in `assets/logs`. These can be used for forensic analysis.

## Mapping
The source for the mappings are located in `assets/mapping`. They can be used on the [ATT\&CK Navigator](https://mitre-attack.github.io/attack-navigator/)

## Policy Definitions
The new recommended policy definitions are located in `assets/policy-definitions`. The script `addAllPolicies.ps1` adds all policies and makes assignments for them for the default subscription. Alternatively, the seperate scripts can be used to only add the definitions without assignments.

##

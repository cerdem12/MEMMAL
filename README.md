# MEMMAL

MEMMAL is a simple recipe to construct large-scale mechanistic models using machine learned associations as new connections. MEMMAL is based on two recent tools: [SPARCED](https://github.com/birtwistlelab/SPARCED) and [MOBILE](https://github.com/cerdem12/MOBILE). More info about them can be found [here](https://rdcu.be/cP6tK) and [here](https://www.biorxiv.org/content/10.1101/2022.07.24.501297v1.full). The pre-print for MEMMAL is [here](http://cemale.people.clemson.edu/).


## Dependencies

- [SPARCED](https://github.com/birtwistlelab/SPARCED)
- [MOBILE](https://github.com/cerdem12/MOBILE)

## Instructions
### Setting up your environment

1. Follow the SPARCED installation steps and start your docker container.  
2. Download the MEMMAL folders here and upload "input_files and jupyter_notebooks" to the above container. Notice that you will be replacing default SPARCED folders.
3. Upload the MOBILE produced files (associations list and data files) into the input_files folder. 
4. Run: 
    - `enlargeModel` notebook
    - `createModel_o4a` notebook
    - `runModel` notebook

### Model testing and performance

The simulation times for both SPARCED and MOBILE are applicable here. Please refer to the respective repositories for details.

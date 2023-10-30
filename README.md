# MEMMAL

MEMMAL is a simple recipe to construct large-scale mechanistic models using machine learned associations as new connections. MEMMAL is based on two recent tools: [SPARCED](https://github.com/birtwistlelab/SPARCED) and [MOBILE](https://github.com/cerdem12/MOBILE).


## Dependencies

- [SPARCED](https://github.com/birtwistlelab/SPARCED)
- [MOBILE](https://github.com/cerdem12/MOBILE)

## Instructions
### Setting up your environment

1. Follow the SPARCED installation steps and start your docker container.  
2. Download the MEMMAL folders here and upload "input_files" and "jupyter_notebooks" to the above container. Notice that you will be replacing default SPARCED folders.
3. (Optional) Install MOBILE and run it to obtain your favorite associations list.
4. Upload the MOBILE produced files (associations list and data files) into the "input_files" folder. 
5. Run: 
    - `testMEMMAL` notebook: Runs all the notebooks below.
    - `enlargeModel` notebook: Main notebook to create updated input files for model (SPARCED) expansion.
    - `createModel_o4a` notebook: Creates and compiles SBML model file.
    - `runModel` notebook: Simulates the model and plots the figures.

### Model testing

The expanded SPARCED model Antimony (MEMMAL_v1.txt) and SBML (MEMMAL_v1.xml) files are provided for model testing. Simply run the `runModel` notebook to recreate simulation results.

### Expanding other SBML models

See enlargeSBML folder and the `enlargeSBMLModel` notebook.

### Model performance

The simulation times for both SPARCED and MOBILE are applicable here. Please refer to the respective repositories for details.

## References

Please cite below work if you use MEMMAL:
1. [MEMMAL](https://www.frontiersin.org/articles/10.3389/fsysb.2023.1099413/full): Erdem C and Birtwistle MR (2023). MEMMAL: A tool for expanding large-scale mechanistic models with machine learned associations and big datasets. Frontiers in Systems Biology. 3.
2. [SPARCED](https://rdcu.be/cP6tK): Erdem C, Mutsuddy A, Bensman EM, Saint-Antoine MM, Bouhaddou M, Blake RC, Dodd W, Gross SM, Heiser LM, Feltus FA, Birtwistle MR (2022). A scalable, open-source implementation of a large-scale mechanistic model for single cell proliferation and death signaling. Nature Communications. 13, 3555.
3. [MOBILE](https://www.nature.com/articles/s41467-023-39729-2): Erdem C, Gross SM, Heiser LM, Birtwistle MR (2023). MOBILE pipeline enables identification of context-specific networks and regulatory mechanisms. Nature Communications. 14, 3991.


# MEMMAL

MEMMAL is a simple recipe to construct large-scale mechanistic models using machine learned associations as new connections. MEMMAL is based on two recent tools: [SPARCED](https://github.com/birtwistlelab/SPARCED) and [MOBILE](https://github.com/cerdem12/MOBILE). The pre-print for MEMMAL is [here](https://www.biorxiv.org/content/10.1101/2022.11.21.517431v1.full).


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
    - `testMEMMAL` notebook: Runs all notebooks below.
    - `enlargeModel` notebook: Main notebook to create updated input files for (SPARCED) model expansion.
    - `createModel_o4a`: Creates and compiles integrated SBML model files.
    - `runModel` notebook: Simulates and plots the model+data.

### Model testing

The expanded SPARCED model Antimony (MEMMAL_v1.txt) and SBML (MEMMAL_v1.xml) files are provided for model testing. Simply run the `runModel` notebook to recreate simulation results.

### Expanding other SBML models

See enlargeSBML folder and the `enlargeSBMLModel` notebook.

### Model performance

The simulation times for both SPARCED and MOBILE are applicable here. Please refer to the respective repositories for details.

## References

Please cite below work if you use MEMMAL:
1. [MEMMAL](https://www.biorxiv.org/content/10.1101/2022.11.21.517431v1.full): Expanding large-scale mechanistic models with machine learned associations and big datasets. bioRxiv. doi.org/10.1101/2022.11.21.517431
2. [SPARCED](https://rdcu.be/cP6tK): Erdem C, Mutsuddy A, Bensman EM, Saint-Antoine MM, Bouhaddou M, Blake RC, Dodd W, Gross SM, Heiser LM, Feltus FA, Birtwistle MR (2022). A scalable, open-source implementation of a large-scale mechanistic model for single cell proliferation and death signaling. Nature Communications. 13, 3555.
3. [MOBILE](https://www.biorxiv.org/content/10.1101/2022.07.24.501297v1.full): Erdem C, Gross SM, Heiser LM*, Birtwistle MR (2022). Multi-Omics Binary Integration via Lasso Ensembles (MOBILE) for identification of context-specific networks and new regulatory mechanisms. bioRxiv. doi.org/10.1101/2022.07.24.501297.


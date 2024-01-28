# RecoNTT-CGRA Project

## Overview
The RecoNTT-CGRA focuses on mapping the butterfly kernel of Number Theoretic Transform (NTT) onto Coarse-Grained Reconfigurable Arrays (CGRA). This project uses the OpenCGRA framework from PNNL, accessible at [OpenCGRA](https://github.com/pnnl/OpenCGRA).

## Dependencies
This project is built upon following repositories:
1. [VectorCGRA](https://github.com/tancheng/VectorCGRA)
2. [CGRA-Mapper](https://github.com/tancheng/CGRA-Mapper)

For installation, follow these two repositories. You can also check this repository - [CGRA-Bench](https://github.com/tancheng/CGRA-Bench) .


## Prerequisites

The mapper requires the following additional prerequisites:

* LLVM 12.0
* CMAKE 3.1
* Python 3.7/3.8/3.9/3.10
* graphviz, verilator
* git, Python headers, and libffi
* virtualenv
* PyMTL3


## Implementation
The core workflow of RecoNTT-CGRA is implemented in Jupyter notebooks. The notebooks are located in the [test_build/codes](https://github.com/shourovrm/RecoNTT-CGRA/blob/main/test_build/codes) directory.

An implementation of the butterfly kernel on CGRA is tested in the notebook - [cgra_flow_ntt.ipynb](https://github.com/shourovrm/RecoNTT-CGRA/blob/main/test_build/codes/cgra_flow_ntt.ipynb).




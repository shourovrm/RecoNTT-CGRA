## Compile and setup CGRA-Mapper

sudo apt install -y clang-12 llvm-12 verilator graphviz git libffi-dev yosys haskell-stack python3-tk iverilog shunit2

sudo ln -sf /usr/bin/opt-12 /usr/bin/opt

sudo ln -sf /usr/bin/llvm-dis-12 /usr/bin/llvm-dis

cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/ && mkdir build && cd build && cmake .. && make

cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/ && cp -r test/ a-test/ && cd a-test/ && source compile.sh && ./run.sh

cd /home/rms/repos/RecoNTT-CGRA/CGRA-Mapper/a-test/ && ./dot.sh

## Install mamba

wget -c https://github.com/conda-forge/miniforge/releases/latest/download/Mambaforge-Linux-x86_64.sh

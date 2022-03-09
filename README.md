# expansivity_estimation

## estimate.c

Estimates the dimensional expansivity constant ([expantion rate](https://people.csail.mit.edu/karger/Papers/neighbor.pdf)) of the numbers in a specified file in a binary hamming space.

#### Compilation
`gcc estimate.c -o estimate`

#### Usage
`./estimate <filename>`


## generate.py

Generates N uniformly distributed numbers within a given range and outputs them to a specified text file.

#### Usage
`python3 generate.py <output_filename> <lower> <upper> <N>`

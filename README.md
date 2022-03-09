# expansivity_estimation

## estimate.c

Given a list of numbers in a file, calculates the dimensional expansivity as defined [here](https://people.csail.mit.edu/karger/Papers/neighbor.pdf).

#### Compilation
`gcc estimate.c -o estimate`

#### Usage
`./estimate <filename>`


## generate.py

Generates N uniformly distributed numbers within a given range and outputs them to a specified text file.

#### Usage
`python3 generate.py <output_filename> <lower> <upper> <N>`

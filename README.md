# expansivity_estimation

## estimate.c

Given a list of numbers in a file, calculates the dimensional expansivity of that dataset in a hamming space according to [this paper](https://people.csail.mit.edu/karger/Papers/neighbor.pdf)'s definition of expansivity.

#### Compilation
`gcc estimate.c -o estimate`

#### Usage
`./estimate <filename>`


## generate.py

Generates N uniformly distributed numbers within a given range and outputs them to a specified text file.

#### Usage
`python3 generate.py <output_filename> <lower> <upper> <N>`

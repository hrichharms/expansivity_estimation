#include <stdio.h>
#include <stdlib.h>
#include <float.h>


int hamming_weight(long x) {
    int weight = 0;
    while (x > 0) {
        weight += x & 1;
        x >>= 1;
    }
    return weight;
}


int hamming_distance(long a, long b) {
    return hamming_weight(a ^ b);
}


void get_counts(
    long *points,
    long points_n,
    long point,
    int r,
    long *count_s,
    long *count_l
) {

    *count_s = 0;
    *count_l = 0;

    int d;

    for (long int i=0; i<points_n; i++) {
        d = hamming_distance(point, points[i]);
        if (d <= r) {
            (*count_s) ++;
        }
        if (d <= 2 * r) {
            (*count_l) ++;
        }
    }

}


double estimate_expansivity(long int *points, long int points_n) {

    double _c, c = 2.0;

    long count_s, count_l;

    for (long i=0; i<points_n; i++) {
        for (int r=1; r<=16; r++) {
            get_counts(points, points_n, points[i], r, &count_s, &count_l);
            _c = count_l / (double) count_s;
            if (_c > c) {
                c = _c;
            }
        }
    }

    return c;
}


int main(int argc, char *argv[]) {

    // create file pointer to points file
    FILE *points_file = fopen(argv[1], "r");

    // get number of points listed in points file
    long points_n = 0;
    fscanf(points_file, "%lu\n", &points_n);

    // read points into long int array
    long *points = (long *) calloc(points_n, sizeof(long));
    for (long i=0; i<points_n; i++) {
        fscanf(points_file, "%lu\n", &points[i]);
    }

    // estimate and output expansivity constant for given data
    printf("%f\n", estimate_expansivity(points, points_n));

    // return exit code 0
    return 0;

}

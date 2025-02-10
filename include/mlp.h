#ifndef MLP_H
#define MLP_H

#include <stdio.h>
#include <stddef.h>

typedef struct {
    size_t input_nodes;
    size_t hidden_nodes;
    size_t output_nodes;
    double *weights_input_hidden;
    double *weights_hidden_output;
    double *bias_hidden;
    double *bias_output;
} MLP;

MLP *mlp_init(size_t input, size_t hidden, size_t output);
void mlp_forward(MLP *mlp, double *input, double *output);
void free_mlp(MLP *mlp);

#endif


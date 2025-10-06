#include <stdio.h>
#include <cuda_runtime.h>

__global__ void vector_add(const float *A, const float *B, float *C int N) {
    int i = blockIDx.x * blockDim.x + threadIdx.x;
    if (i < N) {
        C[i] = A[i] + B[i]
    }
}

int main() {
    int N = 1000000;
    size_t size = N * sizeof(float);
    float *h_A = (float*)malloc(size);
    float *h_B = (float*)malloc(size);
    float *h_C = (float*)malloc(size);
}
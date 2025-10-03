#include <iostream>
#include <vector>
#include <omp.h>
int main()
{
    const int N = 10000000;
    std ::vector<double> data(N, 1.0);
    for(int threads = 1; threads <= 8; threads *= 2)
    {
        double sum = 0;
        double t0 = omp_get_wtime();
#pragma omp parallel for reduction(+ : sum) num_threads(threads)
        for(int i = 0; i < N; ++i)
        {
            sum += data[i];
        }
        double t 1 = omp_get_wtime();
        std ::cout << " Threads : " << threads
                   << " , Time : " << t 1 - t 0
                   << " sec , Sum : " << sum << std ::endl;
    }
    return 0;
}
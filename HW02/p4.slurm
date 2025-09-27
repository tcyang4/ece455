#!/usr/bin/env zsh
#SBATCH--partition=instruction
#SBATCH--time=00:02:00
#SBATCH--ntasks=1
#SBATCH--cpus-per-task=4
#SBATCH--output=producer_consumer.output
CD $SLURM_SUBMIT_DIR
g++ -02 -std=c++17 producer_consumer.cpp -o producer_consumer -pthread
./producer_consumer
#include <iostream>
#include <thread>
#include <vector>
void hello(intid,inttotal){
std::cout<<"Hellofromthread"<<id<<"of"<<total<<"\n";
}
int main() {
constintN=5;
std::vector<std::thread>threads;
threads.reserve(N);
for(int i=0;i<N;++i)
threads.emplace_back(hello,i,N);
for(auto &t:threads)t.join();
return0;
}
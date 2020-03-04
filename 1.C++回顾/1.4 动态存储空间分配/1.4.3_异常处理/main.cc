/* 当没有足够的内存以供分配时，new会抛出bad_alloc异常 */
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float *x;
    try{
        x = new float[18];
    }catch(bad_alloc){
        cerr << " Out of memory" << endl;
        exit(1);
    }
    return 0;
}

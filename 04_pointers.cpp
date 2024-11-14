#include <iostream>

using std::cin;
using std::cout;

int main(){
    const int max = 10;
    int i = 10;
    int *ptr = nullptr;
    int **ptr2 = nullptr;

    cout<<"Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr = &i; //copping the addres of the memory that i is allocated
    *ptr = 20; //get the address value of the pointer. Use it as a pointer to the memory *ptr. Change the value of that memory.

    cout<<"Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr2 = &ptr; //&&ptr
    **ptr2 = 30;

    cout<<"Address 2: "<<ptr2<< " Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    // do a ptr3 and get the value of max

    return 0;
}
// github next class
// pointer to array
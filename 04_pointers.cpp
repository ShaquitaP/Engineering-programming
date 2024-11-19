#include <iostream>
#include <utility>

using std::cin;
using std::cout;

void swap(std::string* ptr1, std::string* ptr2);

int main(){
/*     const int max = 10;
    int i = 10;
    int *ptr = nullptr;
    int **ptr2 = nullptr;
    int ***ptr3 = nullptr;
    int newMax = 0;

    cout<<"Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr = &i; //copping the addres of the memory that i is allocated
    *ptr = 20; //get the address value of the pointer. Use it as a pointer to the memory *ptr. Change the value of that memory.

    cout<<"Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr2 = &ptr; //&&ptr
    **ptr2 = 30;

    cout<<"Address 2: "<<ptr2<< " Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr = &newMax;
    cout<<"Address 2: "<<ptr2<< " Address: "<<ptr<<" Value: "<<i<<" Max: "<<max<<'\n';

    ptr3 = &ptr2;
    ***ptr3 = 40;

    cout<<"Address 2: "<<ptr2<< " Address: "<<ptr<<" Address 3: "<<ptr3<< " Value: "<<i<<" Max: "<<max<<" New max: "<<newMax<<'\n';
    // to get the address we need to use commerical e &i
    // to access the address we need to a pointer to the address *ptr
    // do a ptr3 and get the value of max */

    std::string a = " ";
    std::string b = " ";

    std::cin >> a >> b;

    swap(&a, &b);
    std::cout << a << " " << b << "\n";

    return 0;
}
// github next class
// pointer to array
void swap(std::string* ptr1, std::string* ptr2) {
    std::string temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}

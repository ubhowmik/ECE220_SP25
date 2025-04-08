#include <iostream>
using namespace std;

void swap(int *a, int *b){
cout<<"Pass by pointer"<<endl;

int temp = *a;
 *a = *b;
 *b = temp;
}


void swap(int &a, int &b){
 cout<<"Pass by reference"<<endl;

 int temp = a;
 a = b;
 b = temp;
}

int main()
{
int val1, val2;
 val1 = 10, val2 = 20;
swap(&val1, &val2);
swap(val1, val2);

}
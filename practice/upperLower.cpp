#include <iostream> 
using namespace std; 
int main(){ 
    char a[10] = "HuMan"; 

   for(int i=0; i<5; i++){
    if(int(a[i])>= 65 && int(a[i]) <= 90)
      a[i] = int(a[i])+32;
    cout << a[i];
   } 
    return 0; 
}
//Pyramid
#include<iostream>
using namespace std;

int main(){
    int i,j;
    int n = 5;
    for(i=1; i<=n; i++){
       for(j=1;j<=i;j++){
          cout<<"*";
       }
       cout<<endl;
    }
    return 0;
}
OUTPUT: 
*
**
***
****
*****

=== Code Execution Successful ===

//Inverted Pyramid
#include<iostream> 
using namespace std;
int main(){ 
    int i,j; int n = 5; 
    for(i=n; i>=1; i--){ 
        for(j=1;j<=i;j++){ 
            cout<<"*"; 
        } cout<<endl; 
    } return 0; 
}
OUTPUT:
*****
****
***
**
*

=== Code Execution Successful ===

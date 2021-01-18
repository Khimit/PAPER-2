#include <bits/stdc++.h>
using namespace std;

int main() {

   int i , j , k = 0;
 
   for(i = 1 ; i <= 10 ; i++){    // outer loop for total rows
     
       if(i <= 5){
           k = i;
       }
       else{
           k = 11 - i;
       }

       for(j = 1 ; j <= 10 ; j++){      // inner loop for total columns
           if(j <= k || j >= ( 11 - k ) ){
               cout << "*";
           }
           else{
               cout << " ";
           }
       }
       cout << endl;
   }
   return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {

   vector <int> v , answer;       // declearing two vectors
   int t;
   while( cin >> t ){
       v.push_back( t );          // taking input array from user
   }

   int flag = 0;
   for(int i = 0 ; i < v.size()-1 ; i++){
       for(int j = i+1 ; j < v.size() ; j++){
           if( v[i] < v[j] ){     // checking the number is greater from rightmost elements or not
               flag++;
           }
       }
       if( flag == 0 ){
           answer.push_back( v[i] ); // if yes then push it into the answer vector
       }
       flag = 0;                   // make flag to zero again
   }

   answer.push_back( v.back() );   // as element at right end is always a leader push it to answer vector

   cout << "Leaders are : ";

   // printing answer vector
   for(auto i : answer){
       cout << i << " ";
   }
   return 0;
}

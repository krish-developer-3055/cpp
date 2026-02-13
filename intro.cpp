// {
//   int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << j;
//             }
//             cout << endl;
//         }
//         else
//         {
//             for (int k = 65; k <= 64 + i; k++)
//             {
//                 cout << char(k);
//             }
//             cout << endl;
//         }
//     }
// int n=8;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//     if(i%2!=0){   


// if(j%2!=0){
//     cout<<1;
// }
// else{
//     cout<<0;
// }}


// else{


// if(j%2!=0){
//     cout<<0;
// }
// else{
//     cout<<1;
// }
// }
// }cout<<endl;}
// 
//------------------------------------------------------------------
// # include <iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<j+1;
//         }
//          cout<<endl;
//     }

//     return 0;
// }
//-------------------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// cout<<"enter the number:";
// int n;
// cin>>n;
// for(int i=1;i>=0;i++){
//     for(int j=1;j<=(2*n-1);j++){
//         if(j>=n-i&&j<=n+i){
//             cout<<"#";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }
//----------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
//     int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*(n-i)+1;j++){
//             cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }
//--------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
//     int n=3;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=1;i<=n;i++){
//     for(int j=1;j<i;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=2*(n-i)+1;j++){
//             cout<<"*";
//     }
//     cout<<endl;
    
//         }
// return 0;
// }
//--------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
//     int n=5;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
// cout<<endl;}
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=(n-i);j++){
//             cout<<"*";
//         }
//  cout<<endl;
// }
// return 0;
// }
//--------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n=5;
// int a=1;
// for(int i=1;i<=2*n-1;i++){
//     for(int j=1;j<=a;j++){
//     cout<<"*";}
//     if(i<n){
//         a++;
//     }
//     if(i>=n){
//         a--;
//     }
//     cout<<endl;
// }
// return 0;
// }
//-----------------------------------------------------------
//   *
//  ***
// ******
//-----------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for(int j=1;j<=2*(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=i;j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
// return 0;
// }
//-----------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<char(j+64);
//     }
//     cout<<endl;
// }
// return 0;
// }
//--------------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<i;j++){
//         cout<<char(j+65);
//     }
//     for(int j=i+1;j>=0;j--){
//         cout<<char(j+64);
//     }

//     cout<<endl;
// }
// return 0;
// }
//-------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
//     int n=5;
// for(int i=1;i<=n;i++){
//    if(i%2!=0){
//     for(int j=1;j<=i;j++){
// if(j%2!=0){
//     cout<<1;}
//     else{
//         cout<<0;
//     }
// }}
// else{
//      for(int j=1;j<=i;j++){
// if(j%2!=0){
//     cout<<0;}                                 (I+J)/2 se bhi kar skta hai!!
//     else{
//         cout<<1;
//     }
// }
//    }
    
//     cout<<endl;
// }
// return 0;
// }
//------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n=5;
// for(int i=n;i>=1;i--){
//     for(int j=i;j<=n;j++){
//         cout<<char(j+64);
//     }
//     cout<<endl;
// }
// return 0;
// }
//-----------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=1;i<=n/2;i++){
//     for(int j=1;j<=(n/2-i+1);j++){
//         cout<<"*";
//     }
//      for(int j=1;j<=2*(i-1);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=(n/2-i+1);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=1;i<=n/2;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//      for(int j=1;j<=2*(n/2-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }

// cout<<endl;}
// return 0;
// }
//------------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n=10;
// for(int i=1;i<=n/2;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     for(int j=1;j<=(n/2-i)*2;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=1;i<n/2;i++){
//     for(int j=1;j<=(n/2-i);j++){
//         cout<<"*";
//     }
//     for(int j=1;j<=i*2;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=(n/2-i);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }
//----------------------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n=4;
// for(int i=1;i<=n;i++){
// if(i==1||i==n){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }}
//   else{
//     for(int j=1;j<=n;j++){
// if(j==1||j==n){
//     cout<<"*";
// }
// else{
//     cout<<" ";
// }
//     }
//     }
//     cout<<endl;
// }
// return 0;
// }
//----------------------------------------------------
// #include<iostream>
// using namespace std ;
// int main(){
// int n=4;
// for(int i=1;i<=2*n-1;i++){
//     for(int j=1;j<=2*n-1;j++){
// if(i==1||j==7||i==7||j==1){
//     cout<<4;
// }
//    else if(i==2||j==6||i==6||j==2){
//     cout<<3;
// }
//  else if(i==3||j==5||i==5||j==3){
//     cout<<2;
// }
//  else if(i==4||j==4||i==4||j==4){
//     cout<<1;
// }
// else{
//     cout<<" ";
// }   }
//     cout<<endl;
// }
// return 0;
// }
//-----------------------------------------------
//                                               C++ STL
// #include<bits/stdc++.h>
// using namespace std ;
// void explainvector(){
//   vector<int> p(5,100);  
//   p.push_back(1);
//   cout<<p[5];
//   cout<<endl;
//   vector<pair<int,int>>q;
//   q.push_back({18,45});
//   cout<<q[0].second;
//   cout<<endl;
//   vector<pair<int,int>>r={{12,13},{14,15}};
//   r.push_back({18,45});
//   cout<<r[1].second;
// }
// int main(){
//     explainvector();
// return 0;
// }
//----------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// void spartan(){
// vector<int> p={1,2,3,4,5};
// for(auto it=p.begin();it!=p.end();it++){            auto==vector<int>::iterator
//   cout<<*(it)<<" ";  
// }
// cout<<endl;
// p.erase(p.begin(),p.begin()+2);
// p.insert(p.begin()+2,2,9); 
// for(auto it=p.begin();it!=p.end();it++){
//   cout<<*(it)<<" ";  
// }}
// int main(){
//  spartan();
// return 0;
// }
//-----------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std ;
// void rampyari(){
//     stack<int>p;           
//     p.push(1);     //{1}
//     cout<<p.top()<<" ";  //STACK ME ELEMENT UPPER SE ADD HOTA HAI AUR QUEUE ME BACK SE ADD HOTA HAI
//      p.push(2);    //{1,2}
//      cout<<p.top()<<" ";
//       p.pop();
//      cout<<p.size();
//     }
// int main(){
// rampyari();
// return 0;
// }
//--------------------------------------------------------
//  #include<bits/stdc++.h>
// using namespace std ;
// void shyampyari(){
//     priority_queue<int>q;
//     q.push(5);
//     q.emplace(15);
//     q.push(55);
//     q.emplace(10);
//     cout<<q.top()<<endl;
//     priority_queue<int,vector<int>,greater<int>>r;
//     r.push(5);
//     r.emplace(15);
//     r.push(55);
//     r.emplace(10);
//     cout<<r.top();
// }
// int main(){
//     shyampyari();
// return 0;
// }
//-------------------------------------------------------------
//  #include<bits/stdc++.h>
// using namespace std ;
// void sitapyari(){
//     set<int>st;
//     st.insert(1);
//     st.emplace(4);
//     st.insert(60);
//     st.emplace(40);
//     auto it1=st.find(1);
//     auto it2=st.find(4);
//     st.erase(it1,it2);
// for(auto it=st.begin();it!=st.end();it++){
//     cout<<*it<<endl;
// }
// }
// int main(){
// sitapyari();
// return 0;
// }
//----------------------------------------------------------------------------
//  #include<bits/stdc++.h>
// using namespace std ;
// void sitapyari(){
//     set<int>st;
//     st.insert(1);
//     st.emplace(4);
//     st.insert(60);
//     st.emplace(40);
//     auto it1=st.find(1);
//     auto it2=st.find(4);
//     st.erase(it1,it2);
// for(auto it=st.begin();it!=st.end();it++){
//     cout<<*it<<endl;
// }
// }
// int main(){
// sitapyari();
// return 0;
// }
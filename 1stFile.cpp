#include <bits/stdc++.h>
using namespace std;
//ctrl+shift+b --> to compile and run the code ctrl+ shift+3 -- > to split the
//window in 3 parts
// const int n=1e7;//this we can define as  in globaly we can do upto 1e7 order
// 	void printHello(){
// 		cout<<"Hello";
// 	}
// 	int sum( int a, int b)
// 	{
// 		int result  = a+b;
// 		return result;
// 	}
// 	int digit_sum(int n){
// 		int digit_sum=0;
// 		while(n){
// 		digit_sum=digit_sum+n%10;
// 		n=n/10;
// 	}
// 	return digit_sum;
// 	}

	// int increment(int n){
	// 	n++;
	// 	return n;
	// }
	// void increment(int n){
	// 	n++;
	// }
// void increment(int &n){//pass by reference
// 		n++;
// 	}
// void increment(int &n,int n1){
// 	n++;
// 	n1++;
// }
// void swap(int &a, int &b)
// {
// 	int temp=a;
// 	a=b;
// 	b=temp;
// }
// void func(string &s){
// 	s="";
// }
//NOTE: arrays always pass by reference
// void func(int a[])
// {
// a[0]=5;
// }	
// void func(int a[][20])
// {
// a[0][0]=5;
// }	
// const int N=1e3+10;
// int a[N][N];
// void func(){
// 	a[0][0]=5;
// }
// void increment ( int *x){
// 	//(*x)++;
// 	*x=*x+1;
// }

// int main()
// {
	// int a=4;
	// cout<< a<< endl;
	// increment(&a);
	// cout<< a<< endl;
// 	a[0][0]=7;
// 	cout<<a[0][0]<<endl;
// 	func();
// 	cout<< a[0][0]<<endl;
	// int a[10];
	// a[0]=7;
	// cout<< a[0]<<endl;
	// func(a);
	// cout<< a[0]<<endl;

	// int a[10][20];
	// a[0][0]=7;
	// cout<< a[0][0]<<endl;
	// func(a);
	// cout<< a[0][0]<<endl;
	// string s=  "sdfffg";
	// cout<<s<<endl;
	// func(s);
	// cout<<s<<endl;
	// int a=3;
	// int b=5;
	// cout<< a<< " "<< b<<endl;
	// increment(a,b);
	
	// cout<< a<<" "<<b<<endl;
	// int a=3;
	// int b=5;
	// cout<< a<< " "<< b<<endl;
	// swap(a,b);
	// cout<< a<<" "<<b<<endl;
	// int a=3;

	// cout<<a<<endl;
	// a=increment(a);
	// cout<<a<<endl;
	// 	int a=3;
	// cout<<a<<endl;
	// increment(a);//it is pass by value so the copy will be transfered not the real value changed

	// cout<<a<<endl;
	// cout<<sum(90,8);
	// int a,b;
	// cin>>a>>b;
	// cout<<digit_sum(a)+digit_sum(b);
	// // int b=0;
	// string a;
	// cin>>a ;
	// cout<< "hello "<<" "<<a<<endl<<"how are you bro";
	// int a =5;
	// a= a+1;
	// cout<< a<< endl;
	// cout<< a++<< endl;//1st use than increament
	// cout<< a<< endl;//here use the increamented value
	// cout<< ++a<< endl;//1st increment than use
	// char c= 'a';
	// // cout<< ( int )c;
	// char b='c';
	// cout<< c-b;
	// int a;
	// double b;
	// char c;
	// cin>> a>> b>>c;
	// // cout<< a<< " "<<b<<" "<<c<< " " << (int )c;
	// cout<< a<< "\n";
	// for character we use only single cote('')
	// for string we double cots(" ")
	// int a,b, c;
	// char d;
	// cin>>d>>a;
	// cout<< d<< " "<<a;
	// Double 
	// Float 
	// Long Long Int
	// Long Int 
	// Int 
	// Characters
	// these are the precidence order

	// cout<< 'c'+1<<endl;
	// cout<< 7/2*3;//order left to right
	// cout<< 3*7/2;//order left to right
	// -10^9<int<10^9
 // 	-10^12< long int<10^12
 // 	-10^18< long long int<10^18
	// int a= 100000;
	// int b= 100000;
	// int c= a*b;
	// cout<<c<< endl;
	// int mx= INT_MAX;
	// cout<< INT_MAX+1<<endl;//overflow
	//INT_MIN < int< INT_MAX
	// long long int a= 100000;
	// long long int b= 100000;
	// long long int c= a*b;
	// cout<< c<< endl;
	//  int a= 100000;
	//  int b= 100000;
	// long long int c= a*b;
	// cout<< c<< endl;
	
	// double a= 100000;
	// double b= 100000;
	//  // double c= a*b;
	// double c= 1e24;
	//  cout<< fixed<<setprecision(0)<<c<< endl;
	// long long l, b;
	// int l,b;
	// cin>>l>>b;
	// cout<< l*1LL *b<< endl;

	// int i=1;
	// while ( i<=10){
	// 	cout<< i<<endl;
	// 	i++;
	// }
	// for(initialisation;condition;operations){}
	// for (int i = 1; i <=10; ++i)
	// {
	// 	/* code */cout<< i<<endl;
	// }
		// for(int i=1; i<=10;cout<< i++<< endl){}
	// int n;
	// cin>>n;
	// for( int i=1; i<=n; ++i){
	// 	for( int j=1; j<=i;++j){
	// 		cout<< "*";

	// 	}
	// 	cout<< endl;
	// }
	// while(1){//infinite loop

	// }
	// for(int i=0;true;++i){}//infinite loop
	// for( int i=0; i<10;++i){
	// 	if(i==8)
	// 	{
	// 		break;
	// 	}
	// 	cout<<i<<endl;
	// }
	// for( int i=0; i<10;++i){
	// 	if(i==8)
	// 	{
	// 		continue;
	// 	}
	// 	cout<<i<<endl;
	// }
	// while (true){
	// 	int x;
	// 	cin>>x;
	// 	if(x==42){
	// 		break;
	// 	}
	// 	cout<< x<< endl;
	// }
// 	int t;
// 	cin>> t;
// 	while(t--){
// 	int n;
// 	cin>>n;
// 	int digit_sum=0;
// 	while ( n>0)
// 	{
// 		int last_digit=n%10;
// 		digit_sum=digit_sum+last_digit;
// 		n=n/10;

// 	}
// 	cout<< digit_sum<<endl;

// }

	// string str= "Hello";
	// string str2="Hello";
	// string result= str+ str2;
	// if( str== str2)
	// {
	// 	cout<< " equal ";
	// }
	// else {
	// 	cout<< " Not Equal";

	// }
	// string str= "Hello";
	// // str[0]='a';
	// // // str[0]="a";//it cannot be done as '' is for character only " " for string 
	// // cout<<str.size();
	// for ( int i=0; i< str.size();++i){
	// 	cout<< str[i]<<endl;
	// }
	// string str1, str2;
	// cin>> str1>>str2;
	// cout<<str1<< " "<<str2<<endl;
	// string str1, str2;
	// getline(cin,str1);
	// getline(cin,str2);
	// cout<<str1<<endl;
	// cout<<str2<<endl;
	// int t;
	// cin>>t;
	// cin.ignore();
	// while(t--){
	// 	string s;
	// 	getline ( cin, s);
	// 	cout<< s<< endl;
	// }
//NOTE: cin executes after the new line or backslace

// 	string str;
// 	cin>>str;
// 	string str_rev;
// 	for( int i= str.size()-1;i>=0;--i){
// 		str_rev=str_rev+str[i];

// 	}	
// 	cout<<str_rev;//we should not do like this because of time coplexicity and here we adding string with character that is not good
// string str;
// cin>> str;
// string str_rev;
// for( int i= str.size()-1; i>=0;--i){
// 	str_rev.push_back(str[i]);
// }
// if( str==str_rev){
// 	cout<<"YES";

// }else {
// 	cout<<"NO";
// }
	// string s;
	// cin>>s;
	// int last_digit= s[s.size()-1]-'0';
	// cout<< last_digit;
	// int n;
	// cin>>n;
	// int a[n];
	// for( int i=0;i<n;++i)
	// {
	// 	cin>>a[i];
	// }
	// int sum=0;
	// for(int i=0; i<n;++i){
	// 	sum= sum+a[i];
	// }
	// cout<<sum;
	// int n,m;
	// cin>>n>>m;
	// int a[n][m];
	// for( int i=0;i<n;++i)
	// {
	// 	for( int j=0;j<m;++j){
	// 		cin>>a[i][j];
	// 	}
	// }
	// for( int i=0;i<n;++i)
	// {
	// 	for( int j=0; j<m;++j )
	// 	{
	// 		cout<<a[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }

	// int n=1e5;
	// int n=1e7;//I can't define as locally array can store upto 1e5 only

	// int a[n];
	// a[n-1]=7;
	// cout<<a[n-1];
	// * -> read as value at
	// int x=4;
	// int *p_x=&x;
	// cout<< "Addr x: "<<&x<<endl;
	// cout<<"Val p_x: "<<p_x<<endl;
	// cout<< "val *p_x: "<<*p_x<<endl;
	// *p_x=5;//*p_x is read as value at p_x
	// cout<< "x: "<<x<<endl;
	// cout<< "p_x+1: "<<p_x+1<<endl;
	// int **p_p_x=&p_x;
	// cout<< "Addr p_x: "<<&p_x<<endl;
	// cout<< "val p_p_x: "<<p_p_x<<endl;
	// cout<< "val *p_p_x:"<<*p_p_x<<endl;
	// cout<<" val **p_p_x: "<<**p_p_x<<endl;
	// **p_p_x=7;
	// cout<< "x: "<<x<<endl;
	// int a[10];
	// a[0]=2;
	// a[1]=4;
	// cout<< "a: "<< a<< endl;
	// cout<< "&a[0]: "<<&a[0]<<endl;
	// cout<< "*a: "<<*a<<endl;
	// cout<< "a+1 :"<<a+1<< endl;
	// cout<< "&a[1]: "<< &a[1]<<endl;
	// cout<< "*(a+1): "<< *(a+1)<< endl;

// 	int x;
// 	int sum=0;
// 	sum= x+x;
// 	int n;
// 	for (int i = 0; i < n; ++i)
// 	{
// 		int y;
// 		y=5;
// 		y++;
// 	}

// }	

//Number of iterations =3;
// n<100000
// O(5)+O(3*n)
//O(n)
		
			// int n;
			// cin>>n;
			// int M=47;
			// long long fact =1;
			// for (int i=2;i<=n;++i){
			// 	fact=(fact*i)%M;

			// }
			// cout<<fact;

		



/*Given T Testt cases and in eachh test case a number N. Print its factorial for each test case %M
where M=10^9+7.
constraints
1<=T<=10^5
1<=N<=10^5
*/
// const int M=1e9+7;
// int main()
// {
// 	int t;
// 	cin>> t;
// 	while(t--)
// 	{
// 		int n;
// 		cin>>n;
// 		long long fact =1;
// 		for (int i=2; i<=n;++i){
// 			fact = ( fact *i)%M;
// 		} 
// 		cout<< fact%M << endl;
// 	}
	//O(T*N)==10^10


// const int M=1e9+7;
// const int N = 1e5+10;
// long long fact [N];
// int main()
// {
// 	fact[0]=fact[1]=1;
// 	for( int i=2; i<N;++i)//precomputation done here to reduce the complexity

// 	{
// 		fact[i]=fact [i-1]*i;
// 	}
// 	int t;
// 	cin>>t;
// 	while ( t--)
// 	{
// 		int n;
// 		cin>>n;
// 		// long long fact=1;
// 		// for( int i=2;i<=n;++i){
// 		// 	fact =(fact*i)%M;

// 		// }
// 		cout<<fact[n] << endl;

// 	}
// }
//O(N)+O(T)=10^5+10^5=10^5

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for( int i=0;i<n; ++i)
// 	{
// 		cin>>a[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while (q--){
// 		int x;
// 		cin>>x;
// 	int ct=0;
// 	for ( int i=0; i<n;++i)
// 	{
// 		if( a[i]==x)
// 		{
// 			ct++;
// 		}

// 	}
// 	cout<< ct<< endl;
//   }
// //O(N)+O(Q*N)=O(N^2)=10^10
// }

/*
Given array a of N intergers. Given Q queries and in each query given a number X , print count of that number in array.
constraints 
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for ( int i=0; i<n;++i){
// 		cin>>a[i];
// 	}
// 	int q;
// 	cin>>q;
// 	while ( q--){
// 		int x;
// 		cin>>x;
// 		int ct=0;
// 		for ( int i=0; i<n; ++i)
// 		{
// 			if ( a[i]==x)
// 			{
// 				ct++;
// 			}
// 		}
// 		cout<<ct<<endl;


// 	}

// }
//O(N)+O(Q*N)=O(N^2)=10^10
const int N=1e7+10;
int hsh[N];
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		hsh[a[i]]++;
	}
	int q;
	cin>>q;
	while (q--){
		int x;
		cin>>x;
		cout<<hsh[x]<<endl;

	}
}
//O(N)+O(Q)=O(N)=2*10^5







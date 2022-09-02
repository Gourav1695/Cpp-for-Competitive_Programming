#include <bits/stdc++.h>
using namespace std;
// //Qn no. 1
// char upper(char c){
// 	return 'A'+ (c-'a');
// }
// int main()
// {
// 	while (true)
// 	{
// 		string s;
// 		cin>>s;
// 		if(s.size()==0){
// 			break;

// 		}
// 		for( int i=0;i<s.size();++i){
// 			s[i]=upper(s[i]);
// 		}
// 		cout<<s<<endl;
// 	}
// }

//Qn no.2
// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
// 	int t;
// 	cin >>t;
// 	while (t--)
// 	{
// 		int n;
// 		cin>>n;
// 		long long product=1;
// 		for( int i=0; i<n;++i)
// 		{
// 			int x;
// 			cin>>x;
// 			product=product*x;
// 		}
// 		int lsDigit=product%10;
// 		if(lsDigit==2||lsDigit==3||lsDigit==5)
// 		{
// 			cout<<"YES"<<endl;
// 		}
// 		else
// 		{
// 			cout<< "NO"<<endl;
// 		}
// 	}
// }

//Qn no.3
// int main()
// {
// 	int t;
// 	cin >>t;
// 	while (t--)
// 	{
// 		int n;
// 		cin>>n;
// 		string s;
// 		cin>>s;
// 		long long result =0;
// 		long long power2=1;
// 		for ( int i=s.size()-1;i>=0;--i)
// 		{
// 			int binery_digit =s[i]-'0';
// 			result=result+(binery_digit*power2);
// 			power2=power2*2;

// 		}
// 		cout<<result<<endl;
// 	}
// }
//Qnno.4
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while (t--)
// 	{
// 		long long int n;
// 		cin>>n;
// 		cout<<4*n<<endl;
// 	}
// }
//Qn no.6
char upper (char c)
{
	return 'A'+(c-'a');
}
char lower(char c)
{
	return 'a'+(c-'A');
}
int main ()

{
	string s;
	cin>>s;
	for (int i=0; i<s.size();++i)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i]=upper(s[i]);
		else if(s[i]>='A'&& s[i]<='Z'){

			s[i]=lower(s[i]);
		}
	}
	int result =0;
		for (int i=0; i<s.size();++i)
	{
		if(s[i]>='a' && s[i]<='z')
			result=result-s[i];
		else if(s[i]>='A'&& s[i]<='Z'){
			result=result+s[i];
			
		}

	}
	if(result<0)
	{
		result=result*-1;
	}
	int flag=0;
	for (int i=2; i<result;++i)
	{
		if(result%i==0){
			flag=1;
			break;
		}

	}
	if(flag==0){
		cout<<1;
	}
	else {
		cout<<0;
	}

}





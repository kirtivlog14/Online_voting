#include<iostream>
using namespace std;
int main()
{
	int partyselect,pti=0,pmln=0,ppp=0;
	abc:
	cout<<"welcome to online voting system.\n press 4 to vote PTI candidate.\npress 2 to vote PMLN candidate.\npress 3 to vote PPP candidate.\n";
   
    
	cin>>partyselect;
	switch (partyselect)
	{
		case1:
		cout<<"\n you gave your vote to PTI candidate";
		pti++;
		 break;
		 case 2:
		 cout<<"\n you gave your vote to PMLN candidate";
		pmln++;
		 break;
		 case 3:
		 cout<<"\n you gave your vote to PPP candidate";
		ppp++;
		 break;	
		 default:
		 cout<<"\n you pressed wrong key.";
		 goto abc;
		 
		 	
		}
		cout<<"\n if you wnt to check result of this polling station\n then press R .\n otherwise press any key to comtinue polling.\n press any key to movr further = ";
		char ch;
		cin>>ch;
		if(ch=='R')
		{
			xyz:
			cout<<"\n enter administrative username =";
			string uname;
			cin>>uname;
			cout<<"\enter administrative password = ";
			int pass;
			cin>>pass;
			if(uname=="admin"&& pass==1234)
		{
				cout<<"\nvotes of PTI in this polling station="<<pti;
			cout<<"\nvotes of PMLN in this polling station="<<pmln;
			cout<<"\n votes of PPP in this polling station="<<ppp;
			
		
		
		
		
		
		
		
		if(pti>pmln && pmln>=ppp)
		cout<<"\npti is winner in this polling station"	;
		if(pmln>pti && pti>=ppp)
		cout<<"\npmln is winner in this polling station"	;
		if(ppp>pti && pti>=pmln)
		cout<<"\nppp is winner in this polling station"	;
		else
		cout<<"\nvotes are tried in this polling station"	;
	}
	else 
	{
		cout<<"\nwarning! your username or password is incorrect.retype your username or password";
		goto xyz;
	}
}
	else 
	goto abc;
		
	return 0;
}

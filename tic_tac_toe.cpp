#include<iostream>
using namespace std;
char square[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char token='x';
bool tie= false;

void function1()
{	

	
	
	cout<<"    |    |    \n";
	cout<<"  "<<square[0][0]<<" |"<<"  "<<square[0][1]<<" |"<<"  "<<square[0][2]<<"\n";
	cout<<"____|____|____\n";
	cout<<"    |    |    \n";
	cout<<"  "<<square[1][0]<<" |"<<"  "<<square[1][1]<<" |"<<"  "<<square[1][2]<<"\n";
	cout<<"____|____|____\n";
	cout<<"    |    |    \n";
	cout<<"  "<<square[2][0]<<" |"<<"  "<<square[2][1]<<" |"<<"  "<<square[2][2]<<"\n";
	cout<<"    |    |    \n";
}
void function2()
{
	int digit;
	if (token=='x')
	{
		//cout<<n1<<"please enter";
		cout<<" PLAYER ONE:\n";
		cin>>digit;
		
	}
	if (token=='0')
	{
	//	cout<<n1<<"please enter";
		cout<<"PLAYER TWO:\n";
		cin>>digit;
		
	}
	if (digit==1)
	{
		row=0;
		column=0;
	}
	if (digit==2)
	{
		row=0;
		column=1;
	}
	if (digit==3)
	{
		row=0;
		column=2;
	}
	if (digit==4)
	{
		row=1;
		column=0;
	}
	if (digit==5)
	{
		row=1;
		column=1;
	}
	if (digit==6)
	{
		row=1;
		column=2;
	}
	if (digit==7)
	{
		row=2;
		column=0;
	}
	if (digit==8)
	{
		row=2;
		column=1;
	}
	if (digit==9)
	{
		row=2;
		column=2;
	}
	else if(digit<1||digit>9)
	{
		cout<<"Invalid input"<<"\n";
	}
	if(token=='x'&&square[row][column]!='x'&&square[row][column]!='0')
	{
		square[row][column]='x';
		token='0';
	}
	else if(token=='0'&&square[row][column]!='x'&&square[row][column]!='0')
	{
		square[row][column]='0';
		token='x';
	}
	else{
		cout<<"no square is empty\n";
		function2();
	}
	function1();
}
bool function3()
{
	for(int i=0;i<3;i++)
	{
		if (square[i][0]==square[i][1] && square[i][0]==square[i][2]||square[0][i]==square[1][i]&& square[0][i]==square[2][i])
		return true;
		
	}
	if (square[0][0]==square[1][1] && square[1][1]==square[2][2]||square[0][2]==square[1][1]&& square[1][1]==square[2][0])
	{
			return true;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(square[i][j]!='x'&& square[i][j]!='0')
			{
				return false;
			}
		}
	}
	tie=true;
	return false;
	
}
int main()
{	char n1[10],n2[10];
	cout<<"ENTER THE NAME OF FIRST PLAYER:\n";
	cin>>n1;
	cout<<"ENTER THE NAME OF SECOND PLAYER:\n";
	cin>>n2;
	while(!function3())
	{
	
	function1();
	function2();
	function3();
	}
	
	if(token=='x'&& tie==false)
	{
		cout<<n2<<"WINS\n";
	}
	
	if(token=='0'&& tie==false)
	{
		cout<<n1<<"WINS\n";
	}
	else
	{
		cout<<"IT IS DRAW\n";
		
	}
	
}
	

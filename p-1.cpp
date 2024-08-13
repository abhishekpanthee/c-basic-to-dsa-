#include <iostream>
using namespace std;
namespace bct{
	char sub[50] = "Computer engineering";
	int lab = 301;
    char block ='E';
    char cr[50]="Abhishek Panthee";
	void Sub()
	{
		cout<<sub<<endl;
	}
    void showroombct()
    {
    	cout<<lab<<endl;
    }
     void abctblock()
     {
    	cout<<block<<endl;
    }
    void showcr()
    {
    cout<<cr<<endl;
    }
    namespace bei{
	char sub[50] = "Electronik";
	int room = 401;
    char block = 'E';
    int students= 47;
    char cr[50]="someone";
	void Sub()
	{
		cout<<sub<<endl;
	}
    void showroom()
    {
    	cout<<room<<endl;
    }
     void abblock()
     {
    	cout<<block<<endl;
    }
         void stcnt()
         {
    	cout<<students<<endl;
    }
}
}

int main()
{
    using namespace bct;
    showroombct();
    abctblock();
    showcr();
    bct::bei::Sub();
    bct::Sub();
    bct::showcr();
    return 0;
}

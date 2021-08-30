
#include <bits/stdc++.h>
#include<fstream>
#include <conio.h>
#include<cstring>
#include<vector>
using namespace std;

void write_account();	//function to write record in binary file
void mess_details();    //function to show the mess timings
void display_all();		//function to display all account details
void all_items(); //function to display  all items
void intro();	//introductory screen function
void add_item();//add item in the  item list
void edit_item(); //edit item in list
void delete_item(); //delete item in item list
struct Items
    {
        string itemname;
        int price;
    };
vector<Items> item;

class account
{
    // data members declaration
	unsigned int sum, add, d, i, j, e, f, g, h, k, l, W, X, Y, Z, A, B, C, D;
    unsigned int Bis = 10, Tea = 15, Sam = 15, Kac = 15, Pao = 150, Sand = 50, Pasta = 150, Piz = 200, Spr = 100,Cold = 50, Noodles = 150, Chilli = 100, Manchurian = 100, Patties = 30;
    int biscuit, tea, samosa, kachori, pao_bhaji, sandwich, pasta_opt, pizza, spring_roll, cold_drink, noodles_opt, chilli_opt, manchurian, patties;
    int m=0, n=0, o=0, p=0, q=0, r=0, s=0, t=0, u=0, v=0, w=0, x=0, y=0, z=0;
	int age;
	char name[50];
	char type;
    int total=0;
public:                         //member functions declaration
	void create_account();
	void show_account() const;
	void report() const;
};

void account::create_account()
{
    //int i=1,x=1;
    int i=1,x=0;
	cout<<"\n\nEnter The Name of customer : ";
	cin.ignore();
	cin.getline(name,50);
	cout<<"\nEnter The age :";
	cin>>age;
	cout<<"\nEnter gender of customer (m/f) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\n\n\n Customer Created.."<<endl<<endl;
	all_items();
	cout<<endl;
	while(1)
    {
        cout<<"\n\nEnter the Item ID you want to purchase:";
        int quant=0;
        if(i<=item.size())
        {
        cin>>i;
        if(i==0)
            break;
        else if(i==1)
        {
 			cout<<"Quantity Required:";
        	cin>>m;
        	quant=m;
		}
		else if(i==2)
        {
			cout<<"Quantity Required:";
        	cin>>n;
        	quant=n;
		}
		else if(i==3)
        {
			cout<<"Quantity Required:";
        	cin>>o;
        	quant=o;
		}
		else if(i==4)
        {
			cout<<"Quantity Required:";
        	cin>>p;
        	quant=p;
		}
		else if(i==5)
        {
			cout<<"Quantity Required:";
        	cin>>q;
        	quant=q;
		}
		else if(i==6)
        {
			cout<<"Quantity Required:";
        	cin>>r;
        	quant=r;
		}
		else if(i==7)
        {
			cout<<"Quantity Required:";
        	cin>>s;
        	quant=s;
		}
		else if(i==8)
        {
			cout<<"Quantity Required:";
        	cin>>t;
        	quant=t;
		}
		else if(i==9)
        {
			cout<<"Quantity Required:";
        	cin>>u;
        	quant=u;
		}
		else if(i==10)
        {
			cout<<"Quantity Required:";
        	cin>>v;
        	quant=v;
		}
		else if(i==11)
        {
			cout<<"Quantity Required:";
        	cin>>w;
        	quant=w;
		}
		else if(i==12)
        {
			cout<<"Quantity Required:";
        	cin>>x;
        	quant=x;
		}
		else if(i==13)
        {
			cout<<"Quantity Required:";
        	cin>>y;
        	quant=y;
		}
		else if(i==14)
        {
			cout<<"Quantity Required:";
        	cin>>z;
        	quant=z;
		}
        total=total+(item[i-1].price*quant);
        }
        else
        {
            cout<<"Invalid entry\n";
            break;
        }
        cout<<"\nPress 0 to Submit"<<endl<<endl;
    }
    cout<<"\nBill: Rs."<<total<<endl;

    cout << "\n\n\n";
    cout<< /*setw(51) <<*/"\t********************************* B I L L *************************************"<<endl;
            cout << "\t";

			for(int i=1;i<80;i++)
            {
            	cout<<"=";
			}

            cout << "\n\tITEMS" << setw(40) << "QUANTITY" << setw(35) << "PRICE(Rs.)\n";   //setw is library function of iomanip
            cout << "\t";

			for(int i=1;i<80;i++)
            {
            	cout<<"=";
			}

            if(m>0)
                cout << "\n\n\tBISCUIT" << setw(35) << m << setw(32) << "Rs." << m * Bis;
            if(n>0)
                cout << "\n\n\tTea" << setw(39) << n << setw(32) << "Rs." << n * Tea;
            if(o>0)
                cout << "\n\n\tSAMOSA" << setw(36) << o << setw(32) << "Rs." << o * Sam;
            if(p>0)
                cout << "\n\n\tKACHORI" << setw(35) << p << setw(32) << "Rs." << p * Kac;
            if(q>0)
                cout << "\n\n\tPAO BHAJI" << setw(33) << q << setw(32) << "Rs." << q * Pao;
            if(r>0)
                cout << "\n\n\tSANDWICH(VEG/GRILLED)" << setw(21) << r << setw(32) << "Rs." << r * Sand;
            if(s>0)
                cout << "\n\n\tPASTA(WHITE/RED SAUCE)" << setw(20) << s << setw(32) << "Rs." << s * Pasta;
            if(t>0)
                cout << "\n\n\tPIZZA(CORN/CAPSICUM/ONION/MUSHROOM)" << setw(7) << t << setw(32) << "Rs." << t * Piz;
            if(u>0)
                cout << "\n\n\tSPRING ROLL" << setw(31) << u << setw(32) << "Rs." << u * Spr;
            if(v>0)
                cout << "\n\n\tCOLD DRINK(COCA COLA/SPRITE/LIMCA/FANTA)" << setw(2) << v << setw(32) << "Rs." << v * Cold;
            if(w>0)
                cout << "\n\n\tNOODLES(SINGAPORI CHOWMEIN/HAKKA/VEG)" << setw(5) << w << setw(32) << "Rs." << w * Noodles;
            if(x>0)
                cout << "\n\n\tCHILLI POTATO/PANEER" << setw(22) << x << setw(32) << "Rs." << x * Chilli;
            if(y>0)
                cout << "\n\n\tMANCHURIAN" << setw(32) << y << setw(32) << "Rs." << y * Manchurian;
            if(z>0)
                cout << "\n\n\tPATTIES(AALO/PANEER)" << setw(22) << z << setw(32) << "Rs." << z * Patties;
            e = m * Bis;
            f = n * Tea;
            g = o * Sam;
            h = p * Kac;
            k = q * Pao;
            l = r * Sand;
            W = s * Pasta;
            X = t * Piz;
            Y = u * Spr;
            Z = v * Cold;
            A = w * Noodles;
            B = x * Chilli;
            C = y * Manchurian;
            D = z * Patties;

            sum = e + f + g + h + k + l + W + X + Y + Z + A + B + C + D;
            add = m + n + o + p + q + r + s + t + u + v + w + x + y + z;
            cout << "\n\t";

			for(int i=1;i<79;i++)
            {
            	cout<<"=";
			}

            cout << "\n\tTOTAL:" << setw(36) << add << setw(31) << "Rs." << total;
            cout << "\n\t";
			for(int i=1;i<79;i++)
            {
            	cout<<"=";
			}

}

void account::show_account() const
{
	cout<<"\nAge : "<<age;
	cout<<"\ncustomer Name : ";
	cout<<name;
	cout<<"\ngender of customer : "<<type;
}


void account::report() const
{
	cout<<age<<setw(10)<<" "<<name<<setw(10)<<" "<<type<<setw(6)<<sum<<endl<<endl;
}

int main()
{
	char ch;

    item.push_back({"\n\tBiscuit\t\t\t\t\t\t\t",10});
    item.push_back({"\n\tTea\t\t\t\t\t\t\t",15});
    item.push_back({"\n\tSamosa\t\t\t\t\t\t\t",15});
    item.push_back({"\n\tKachori\t\t\t\t\t\t\t",15});
    item.push_back({"\n\tPao Bhaji\t\t\t\t\t\t",150});
    item.push_back({"\n\tSandwich(Veg/Grilled)\t\t\t\t\t",50});
    item.push_back({"\n\tPasta(Red/White Sauce)\t\t\t\t\t",150});
    item.push_back({"\n\tPizza(Corn/Capsicum/Onion/Mushroom)\t\t\t",200});
    item.push_back({"\n\tSpring Roll\t\t\t\t\t\t",100});
    item.push_back({"\n\tCold Drink (Coca Cola/Sprite/Limca/Fanta)\t\t",150});
    item.push_back({"\n\tNoodles(Singapori Chowmein/Hakka/Veg)\t\t\t",150});
    item.push_back({"\n\tChilli Potato/Paneer\t\t\t\t\t",100});
    item.push_back({"\n\tManchurian\t\t\t\t\t\t",100});
    item.push_back({"\n\tPatties(Aalo/Paneer)\t\t\t\t\t",30});
    system("cls");
	intro();
	do
	{
		system("cls");
		cout<<"\n\n\n            \t";
		for(int i=1;i<44;i++)
		{
			cout<<"=";
		}
    	cout<<"\n\t\t||\t        MAIN MENU                ||\n";
    	cout<<"            \t";
		for(int i=1;i<44;i++)
		{
			cout<<"=";
		}
		cout<<"\n\n\t\t01. CAFETERIA DETAILS";
		cout<<"\n\n\t\t02. NEW CUSTOMER";
		cout<<"\n\n\t\t03. ALL ITEMS";
		cout<<"\n\n\t\t04. ADD NEW ITEMS";
		cout<<"\n\n\t\t05. EDIT ITEM";
		cout<<"\n\n\t\t06. ALL CUSTOMERS LIST";
		cout<<"\n\n\t\t07. DELETE ITEM";
		cout<<"\n\n\t\t08. EXIT";
		cout<<"\n\n\t\tSelect Your Option (1-8) ";
		cin>>ch;
        system("cls");
		switch(ch)
		{
		case '1':
			mess_details();
			break;

		case '2':
			write_account();
			break;

		case '3':
		    all_items();
            break;

		case '4':
            add_item();
			break;

		case '5':
            edit_item();
			break;

		case '6':
			display_all();
			break;

		case '7':
            delete_item();
			break;

		 case '8':
			cout<<"\n\n\tThanks for using cafeteria management system";
			break;

		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='8');
	return 0;
}


void write_account()
{
	account ac;
	ofstream outFile; // here we have used file handling ofstream and we have made object outFile
	outFile.open("account.dat",ios::binary|ios::app); //we opened account.dat file in append mode
	ac.create_account(); //details of create account are stored in ac object first
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account)); //object is write in the opened file
	outFile.close();

}


void  all_items()
{
    int i=0;
    //cout<<"item id"<<"\t"<<"itemname"<<"\t"<<"price"<<endl<<endl;
    cout<<"\n      ";
    for(int i=1;i<67;i++)
    {
    	cout<<"=";
	}

    cout<<"\n\tITEMS\t\t\t\t\t\t       PRICE  ";
    cout<<"\n      ";

	for(int i=1;i<67;i++)
    {
    	cout<<"=";
	}

    for(i=0;i<14;i++)
    {
        //cout<<i+1<<"\t"<<item[i].itemname<<"\t\t"<<item[i].price<<endl;
        cout<<"\n\t"<<item[i].itemname<<item[i].price;
        cout<<endl;
    }
    for(i=14; i<item.size(); i++)
    {
        cout<<"\n\t\n\t"<<item[i].itemname<<"\t\t\t\t\t\t"<<item[i].price;
        cout<<endl;
    }
    cout<<"\n      ";
    	for(int i=1;i<67;i++)
    {
    	cout<<"=";
	}

}


void add_item()
{
    string a;
    int b;
    cout<<"Enter the item name:";
 	cin.sync();
    getline(cin,a);
    cout<<endl;
	cout<<endl;
    cout<<"Enter the item price:";
    cin>>b;
    cout<<"\t";
    item.push_back({a,b});
    cout<<"Item added successfully"<<endl<<endl;
    all_items();
}

void edit_item()
{
    int j;
    cout<<"Enter the id of item:";
    cin>>j;
    cout<<endl;
	cout<<endl;
    if(j<=item.size()){
    //cout<<"Enter the item name:";
    //cin>>item[j-1].itemname;
    //cout<<endl;
	//cout<<endl;
    cout<<"Enter the item price:";
    cin>>item[j-1].price;
    cout<<endl;
	cout<<endl;
    cout<<endl<<"Item edited successfully:";
    }
    else
    {
        cout<<"Invalid entry";
    }
}
void delete_item()
{
    int j;
    cout<<"Enter the id of item:";
    cin>>j;
    if(j<=item.size()){
    item.erase(item.begin()+j-1); //item is a vector , begin is the member function of vector class and it is
    cout<<endl<<"Item Deleted Successfully"<<endl;  //returning the base address of array maintained by item object
    }
    else
    {
        cout<<"Invalid entry";
    }
}


void display_all()
{
	account ac;
	ifstream inFile;
	inFile.open("Account.dat",ios::binary); // read only mode append can only be done on write , ios:: is telling compiler it is a binary file
	if(!inFile) //check condition if file is not created (!inFile is true i.e. inFile is false)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\tCUSTOMER LIST\n\n";

	for(int i=1;i<55;i++)
	{
		cout<<"=";
	}
	cout<<"\nAge          NAME                 Type      Bill\n";

	for(int i=1;i<55;i++)
	{
		cout<<"=";
	}
	cout<<endl;

	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account))) // object is read here row wise till end of file
	{
		ac.report();
	}
	inFile.close();
}

void mess_details()
{
	for(int i=1;i<54;i++)
	{
		cout<<"=";
	}

    cout<<"\n|                CAFETERIA DETAILS                  |\n";
	for(int i=1;i<54;i++)
	{
		cout<<"=";
	}

    cout<<"\n|->->->->->TIMING : 10.00 AM TO 07.00 PM<-<-<-<-<-<-|";
    cout<<"\n|                                                   |";
    cout<<"\n| # GOODS ONCE SOLD WON'T BE EXCHANGED/REPLACED     |";
    cout<<"\n|                                                   |";
    cout<<"\n| # COLLECT YOUR BILL AFTER PAYMENT                 |";
    cout<<"\n|                                                   |\n";
    	for(int i=1;i<54;i++)
	{
		cout<<"=";
	}

}

void intro()
{
	cout << "\n\n\n            \t";

	for(int i=1;i<55;i++)
	{
		cout<<"=";
	}
    cout << "\n\t\t||\t        WELCOME TO JIIT CAFETERIA           ||\n";
    cout << "            \t";

    for(int i=1;i<55;i++)
	{
		cout<<"=";
	}

	cin.get();
}

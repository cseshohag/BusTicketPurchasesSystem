/*********************************************************
Bus tickets purchase Software (1.0v)
Develop by: GROUP-A
Department: CSE, 21st Intake.
*********************************************************/

#include<iostream>
#include<ctime>
#include<windows.h>
using namespace std;

/*void time_f(){
while(true) {
    //system("cls"); //to clear screen
    time_t tim;
    time(&tim);
    cout <<"\t\t\t|    "<< ctime(&tim);
    Sleep(1000);
  }
}*/


// Array For Sit Number
char sit_number[13] = {'0','A','B','C','D','E','F','G','H','I','J','K','L'};



//Time function for time capture
void time_n(){
time_t now = time(0);
    char* date_time = ctime(&now);

    cout<<"\t\t\t|    "<<date_time<<"";
}



//Bus Function for show bus Structure
void BUS()
{
    //system("cls");


    cout<<"\n\n\t\t\t|-----------------------------------|";
    cout << "\n\t\t\t|       Bus Ticket purchase         |"<<endl;
    time_n();
    cout<<"\t\t\t\|-----------------------------------|\n\n";
    cout << "                            ____ " << endl;
	cout << "                           |    |" << endl;
    cout << "                           |  "<<"" /*sit_number[0]*/<<"  |" << endl;
    cout << "      ____ _____ _____ ____|____|" << endl;
	cout << "     |    |     |     |    |    |" << endl;
	cout << "     | " << sit_number[1] << "  |  " << sit_number[2] << "  |  " << "   |  " << sit_number[3] <<" |  " << sit_number[4] <<" |  " << endl;

	cout << "     |____|_____|     |____|____|" << endl;
	cout << "     |    |     |     |    |    |" << endl;

	cout << "     | " << sit_number[5] << "  |  "  << sit_number[6] << "  |  " << "   |  "<< sit_number[7] <<" |  " << sit_number[8] <<" |  " << endl;

	cout << "     |____|_____|     |____|____|" << endl;
	cout << "     |    |     |     |    |    |" << endl;

	cout << "     | " << sit_number[9] << "  |  " << sit_number[10] << "  |  " << "   |  " << sit_number[11] <<" |  " << sit_number[12] <<" |  " << endl;

	cout << "     |____|_____|_____|____|____|     " << endl<< endl;
}



//Bus element function for entering bus information
void bus_element(){


	//int passenger = 1;

	char mark,choice;
	do
	{
		BUS();


		cout << "     Dear Passenger, enter a sit number in Capital Character form (A to L) :  "<<endl;

		cin >> choice;


		mark='X';

		if (choice == 'A' && sit_number[1] == 'A'){

			sit_number[1] = mark;
			if(sit_number[1] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}
		}
		else if (choice == 'B' && sit_number[2] == 'B'){

            if(sit_number[2] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'C' && sit_number[3] == 'C'){

            if(sit_number[3] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'D' && sit_number[4] == 'D'){

            if(sit_number[4] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'E' && sit_number[5] == 'E'){

            if(sit_number[5] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'F' && sit_number[6] == 'F'){

            if(sit_number[6] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'G' && sit_number[7] == 'G'){

            if(sit_number[7] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'H' && sit_number[8] == 'H'){

            if(sit_number[8] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else if (choice == 'I' && sit_number[9] == 'I'){

            if(sit_number[9] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
        else if (choice == 'J' && sit_number[10] == 'J'){

            if(sit_number[10] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
        else if (choice == 'K' && sit_number[11] == 'K'){

            if(sit_number[11] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
        else if (choice == 'L' && sit_number[12] == 'L'){

            if(sit_number[12] = mark){
                cout<<"\n\n\t==>  "<<choice<<" Number Sit is booked for you. Thank you for ticket purchase\n\n\n";
			}

		}
		else
		{


			cout<<"\t\t==> Sit is fillup <==";
			/*system ( "color 01" );
			Sleep(200);
            system("Color F6");
            system ( "cls" );*/
			}
}while(sit_number[1] !='X' || sit_number[2] !='X' || sit_number[2]!='X' || sit_number[3]!='X' || sit_number[4]!='X' || sit_number[5]!='X' || sit_number[6]!='X' || sit_number[7]!='X' || sit_number[8]!='X' || sit_number[9]!='X' || sit_number[10]!='X' || sit_number[11]!='X' || sit_number[12]!='X');
    if(sit_number[1] =='X' && sit_number[2] =='X' && sit_number[2]=='X' && sit_number[3]=='X' && sit_number[4]=='X' && sit_number[5]=='X' && sit_number[6]=='X' && sit_number[7]=='X' && sit_number[8]=='X' && sit_number[9]=='X' && sit_number[10]=='X' && sit_number[11]=='X' && sit_number[12]=='X'){

            cout<<"\n\n\t\t||==> All seats are fill-up <==||";

        }
}

int main()
{
    int o;
    system("cls");                  //For Clear Screen
    system("Color F6");             //For color screen
    system("mode 90, 50");          //For Window size
    int i=0;
    do{
    bus_element();
	BUS();


               char sit_number[13] = {'0','A','B','C','D','E','F','G','H','I','J','K','L'};

            }
            while(i++);

	return 0;
}





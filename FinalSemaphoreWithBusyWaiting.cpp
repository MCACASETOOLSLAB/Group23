//Final Version of the Semaphore Module with Busy Waiting:: with graphics.
//By Saloni Gupta (205112027)
/*
Implementing Semaphores with Busy Waiting in Process Synchronization With Graphical User Interface.
*/

#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

void washer1()
{
     int n=5;
     system ( "color 06" );
     
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\n WASHERMAN 1";   cout<<"\t WASHERMAN 2  ";         cout<<"\t\t                WASH ROOM  ";
     cout<<"\n   ......   ";     cout<<"\t   ......   ";             cout<<"\t\t        |----------------------|   ";
     cout<<"\n <. @  @ .> ";     cout<<"\t <. @  @ .> ";             cout<<"\t\t        |                      |   ";
     cout<<"\n  .  ||  .  ";     cout<<"\t  .  ||  .  ";             cout<<"\t\t  ++++  |                      |   ";
     cout<<"\n  .  <>  .  ";     cout<<"\t  .  <>  .  ";             cout<<"\t\t || ++++|        EMPTY         |   ";
     cout<<"\n   ......   ";     cout<<"\t   ......   ";             cout<<"\t\t ||   ++|                      |   ";
     cout<<"\n     ..     ";     cout<<"\t     ..     ";             cout<<"\t\t ||     |                      |   ";
     cout<<"\n     ..     ";     cout<<"\t     ..     ";             cout<<"\t\t ||     |                      |   ";
                                                             cout<<"\n\t\t\t\t\t || DOOR|                      |   ";
                                                             cout<<"\n\t\t\t\t\t || OPEN|                      |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |                      |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   | WASH PANEL  |    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |             |    |   ";
                                                             cout<<"\n\t\t\t\t\t  ++++  |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t    ++++|                      |   ";
                                                             cout<<"\n\t\t\t\t\t      ++|----------------------|   ";
     Sleep(1000);
     
     system ( "color 03" );
     
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\n WASHERMAN 2 WAITING";        cout<<"\t\t\t              WASH ROOM ";
     cout<<"\n   ......   ";                  cout<<"\t\t\t\t       |----------------------|   ";
     cout<<"\n <. @  @ .> ";                  cout<<"\t\t\t\t       |       ......         |   ";
     cout<<"\n  .  ||  .  ";                  cout<<"\t\t\t\t       |     <. @  @ .>       |   ";
     cout<<"\n  .  <>  .  ";                  cout<<"\t\t\t\t      +|      .  ||  .        |   ";
     cout<<"\n   ......   ";                  cout<<"\t\t\t\t      ||      .  <>  .        |   ";
     cout<<"\n     ..     ";                  cout<<"\t\t\t\t      ||       ......         |   ";
     cout<<"\n     ..     ";                  cout<<"\t\t\t\t      ||         ..           |   ";
                                          cout<<"\n\t\t\t\t\t      ||         ..           |   ";
                                          cout<<"\n\t\t\t\t\tDOOR  ||                      |   ";
                                          cout<<"\n\t\t\t\t\tLOCKED||     WASHERMAN 1      |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   | WASH PANEL  |    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |             |    |   ";
                                          cout<<"\n\t\t\t\t\t      +|   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t       |                      |   ";
                                          cout<<"\n\t\t\t\t\t       |----------------------|   ";
     Sleep(1000);     
     while(n--)
     {
               cout<<"\n\n\n\tWash room door is locked...\tWasherMan 2 is waiting.... ";
               Sleep(1000);
     }     
}

void washer2()
{
     int n=5;
     system ( "color 06" );
     
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\n WASHERMAN 1";   cout<<"\t WASHERMAN 2  ";         cout<<"\t\t                WASH ROOM  ";
     cout<<"\n   ......   ";     cout<<"\t   ......   ";             cout<<"\t\t        |----------------------|   ";
     cout<<"\n <. @  @ .> ";     cout<<"\t <. @  @ .> ";             cout<<"\t\t        |                      |   ";
     cout<<"\n  .  ||  .  ";     cout<<"\t  .  ||  .  ";             cout<<"\t\t  ++++  |                      |   ";
     cout<<"\n  .  <>  .  ";     cout<<"\t  .  <>  .  ";             cout<<"\t\t || ++++|        EMPTY         |   ";
     cout<<"\n   ......   ";     cout<<"\t   ......   ";             cout<<"\t\t ||   ++|                      |   ";
     cout<<"\n     ..     ";     cout<<"\t     ..     ";             cout<<"\t\t ||     |                      |   ";
     cout<<"\n     ..     ";     cout<<"\t     ..     ";             cout<<"\t\t ||     |                      |   ";
                                                             cout<<"\n\t\t\t\t\t || DOOR|                      |   ";
                                                             cout<<"\n\t\t\t\t\t || OPEN|                      |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |                      |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   | WASH PANEL  |    |   ";
                                                             cout<<"\n\t\t\t\t\t ||     |   |             |    |   ";
                                                             cout<<"\n\t\t\t\t\t  ++++  |   |-------------|    |   ";
                                                             cout<<"\n\t\t\t\t\t    ++++|                      |   ";
                                                             cout<<"\n\t\t\t\t\t      ++|----------------------|   ";
     Sleep(1000);
     
     system ( "color 03" );
     
     cout<<"\n-------------------------------------------------------------------------";
     cout<<"\n\n WASHERMAN 1 WAITING";        cout<<"\t\t\t              WASH ROOM ";
     cout<<"\n   ......   ";                  cout<<"\t\t\t\t       |----------------------|   ";
     cout<<"\n <. @  @ .> ";                  cout<<"\t\t\t\t       |       ......         |   ";
     cout<<"\n  .  ||  .  ";                  cout<<"\t\t\t\t       |     <. @  @ .>       |   ";
     cout<<"\n  .  <>  .  ";                  cout<<"\t\t\t\t      +|      .  ||  .        |   ";
     cout<<"\n   ......   ";                  cout<<"\t\t\t\t      ||      .  <>  .        |   ";
     cout<<"\n     ..     ";                  cout<<"\t\t\t\t      ||       ......         |   ";
     cout<<"\n     ..     ";                  cout<<"\t\t\t\t      ||         ..           |   ";
                                          cout<<"\n\t\t\t\t\t      ||         ..           |   ";
                                          cout<<"\n\t\t\t\t\tDOOR  ||                      |   ";
                                          cout<<"\n\t\t\t\t\tLOCKED||     WASHERMAN 2      |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   | WASH PANEL  |    |   ";
                                          cout<<"\n\t\t\t\t\t      ||   |             |    |   ";
                                          cout<<"\n\t\t\t\t\t      +|   |-------------|    |   ";
                                          cout<<"\n\t\t\t\t\t       |                      |   ";
                                          cout<<"\n\t\t\t\t\t       |----------------------|   ";
     Sleep(1000);
     while(n--)
     {
               cout<<"\n\n\n\tWash room door is locked...\tWasherMan 1 is waiting.... ";
               Sleep(1000);
     }           
}



int washroom_door=0;         //Acting as the Semaphore
int washplatform=0;         //Acting as the Shared Resource
    
class washerman1
{
      public:
             void checkDoor();
             void wait();
             void signal();

}w1;

void washerman1::checkDoor()
{
     int n=3;
     cout<<"\n\t\t\tWasherMan 1 checks wash room if it is empty\n";
     Sleep(1000);

     if(washroom_door==0)
     {
                cout<<"\n\t\t\t\tWash room door is open\n";
                Sleep(1000);
                
                wait();                
     }
     else
     if(washroom_door==1)
     {
                cout<<"\n\tWash room door is locked...\n\tSomeone using the platform ";
                Sleep(1000);              
                while(n--)
                {
                          cout<<"\n\n\n\tWash room door is locked...\tWasherMan 2 is waiting.... ";
                          Sleep(1000);
                }  
     }

}

void washerman1::wait()
{
     cout<<"\n\t\tWasherMan 1 Locks the door and uses platform\n";
                              washroom_door=1;
                              washplatform=1;
                              washer1();
     Sleep(1000);
      
     signal();
     
}

void washerman1::signal()
{
     cout<<"\n\n\n\t\tWasherMan 1 Opens the door and leaves\n";
     washplatform=0;
     washroom_door=0;
     Sleep(1000);
}

class washerman2
{
      public:
             void checkDoor();
             void wait();
             void signal();

}w2;

void washerman2::checkDoor()
{
     int n=3;
     cout<<"\n\t\t\tWasherMan 2 checks wash room if it is empty\n";
     Sleep(1000);

     if(washroom_door==0)
     {
                cout<<"\n\t\t\t\tWash room door is open\n";
                Sleep(1000);
                
                wait();                
     }
     else
     if(washroom_door==1)
     {
                cout<<"\n\tWash room door is locked...\n\tSomeone using the platform ";
                Sleep(1000);
                while(n--)
                {
                          cout<<"\n\n\n\tWash room door is locked...\tWasherMan 1 is waiting.... ";
                          Sleep(1000);
                } 
     }

}

void washerman2::wait()
{
     cout<<"\n\n\n\t\tWasherMan 2 Locks the door and uses platform\n";
                              washroom_door=1;
                              washplatform=1;
                              washer2();
     Sleep(1000);
     
     signal();
}

void washerman2::signal()
{
     cout<<"\n\t\tWasherMan 2 Opens the door and leaves\n";
     washplatform=0;
     washroom_door=0;
     Sleep(1000);
}


void washerman()
{
    int choice;

    while(1)
    {
            cout<<"\n\n";
            system("pause");
            system("cls");
            system("color 07");
            
            cout<<"\n PROCESS SYNCHRONIZATION TUTORIAL USING SEMAPHORES WITH BUSY WAITING MODULE \n";
            cout<<"\n____________________________________________________________________________\n";
            cout<<"\n   WASHERMAN PROBLEM: 2 Washermen wishing to occupy available 1 wash platform\n";
            cout<<"\n   SEMAPHORE: WashRoom Door\n";
            cout<<"\n   Shared Resource: Washing Platform\n\n\n";
            cout<<"\n   ******** MENU ************\n";
            cout<<"\n1. Check Washroom Use Status.\n";
            cout<<"\n2. WasherMan 1 goes.\n";
            cout<<"\n3. WasherMan 2 goes.\n";
            cout<<"\n4. To Exit.\n";
            cin>>choice;

            switch(choice)
            {
                          case 1: if(washroom_door)
                                          cout<<"\nWashroom is not Empty\n";
                                  else
                                          cout<<"\nWashroom is Empty\n";
                                  break;

                          case 2: w1.checkDoor();
                                  break;

                          case 3: w2.checkDoor();
                                  break;

                          case 4: cout<<"\n\nExiting";
                                  Sleep(1000);
                                  exit(0);
                                  break;

                          default: cout<<"\nWrong choice entered...\n";
                                   break;
            }
    }
}


int main()
{
    washerman();

    getch();
    return 0;
}

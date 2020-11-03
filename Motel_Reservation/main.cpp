#include <iostream>

using namespace std;

int main()
{
    int secenek,rate,standartCost,deluxeCost,premiumCost,chooseRoom;
    string futureDate;



    cout <<"\t\t\t\t\t      Welcome to the Motel 86 Way !     \n\n\t\t\t\t We are so happy to see you :)     What we can do for you ? \n\n\n";

    cout << "Press 1 >>>>  Room Prices For Night\n\n";
    cout << "Press 2 >>>>  Book a Room\n\n";
    cout << "Press 3 >>>>  Book a Room For Future Date\n\n";
    cout << "Press 4 >>>>  Rate Our Motel :)\n\n";
    Baslangic:
    cout << "So, What do you want to do ? \n\n";

    cin >> secenek;

    switch(secenek)

    {

     case 1 :

        cout << "We have 3 different type room. And there is the price list :\n\nNormal Room : 20$\n\nDeluxe Room : 30$\n\nPremium Room : 50$\n\n";

        break;



     case 2 :

        cout << "Please Choose Your Room: \n\n1-) Normal Room\n2-) Deluxe Room\n3-) Premium Room\n\n";

        cin >>chooseRoom;


        if (chooseRoom==1) {

            cout << "Congrats, You booked the normal room for a 20$";
        }
        else if (chooseRoom==2) {

            cout << "Congrats, You booked the deluxe room for a 30$";
        }

        else if (chooseRoom==3)  {

            cout << "Congrats, You booked the premium room for a 50$";
        }


        break;


     case 3 :


        cout << "Please enter a future date that you want to book a room for that : Example : 23-November-2020\n\n";

        cin >> futureDate;


        cout << "Congrats, You booked a room for : " << (string)futureDate;

        break ;


     case 4 :

        cout << "You can rate our motel between 1-10 . Please give us a high rate :) \n\n Your Rate : \n ";

        cin >> rate;

        cout << "You gave us a " << rate << " point thank you so much :)" ;

        break ;

    }



}

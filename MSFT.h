/*

MSFT = Green
server = Red
underling = (Rainbow)
   __  _________________
  /  |/  / __/ __/_  __/__ ___  ___  _  _ __  ___
 / /|_/ /\ \/ _/  / / (_-</ -_)/ - )/ / / -_)/ - )
/_/  /_/___/_/   /_/ /___/___//_/_//___/___//_/_/
=oo==oo==oo==oo==oo==oo==oo==oo==oo==oo==oo==oo=

*/

void MSFT(){
textColor textColor;
string myname1part1 = "   __  _________________";
string myname1part2 = "                         \n";
string myname1part3 = "  /  |/  / __/ __/_  __/";
string myname1part4 = "__ ___  ___  _  _ __  ___\n";
string myname1part5 = " / /|_/ /\\ \\/ _/  / /";
string myname1part6 = " (_-</ -_)/ - )/ / / -_)/ - ) \n";
string myname1part7 = "/_/  /_/___/_/   /_/";
string myname1part8 = " /___/\___//_/_//___/\___//_/_/ \n";
string endName = "=oo=";
    textColor.setTextColor("Green");
    cout << myname1part1;
    textColor.setTextColor("White");
    cout << myname1part2;
    textColor.setTextColor("Green");
    cout << myname1part3;
    textColor.setTextColor("Red");
    cout << myname1part4;
    textColor.setTextColor("Green");
    cout << myname1part5;
    textColor.setTextColor("Red");
    cout << myname1part6;
    textColor.setTextColor("Green");
    cout << myname1part7;
    textColor.setTextColor("Red");
    cout << myname1part8;
    textColor.setTextColor("Blue");
    cout << endName;
    textColor.setTextColor("Light_Blue");
    cout << endName;
    textColor.setTextColor("Aqua");
    cout << endName;
    textColor.setTextColor("Light_Aqua");
    cout << endName;
    textColor.setTextColor("Green");
    cout << endName;
    textColor.setTextColor("Light_Green");
    cout << endName;
    textColor.setTextColor("Yellow");
    cout << endName;
    textColor.setTextColor("Light_Yellow");
    cout << endName;
    textColor.setTextColor("Purple");
    cout << endName;
    textColor.setTextColor("Light_Purple");
    cout << endName;
    textColor.setTextColor("Red");
    cout << endName;
    textColor.setTextColor("Light_Red");
    cout << endName << endl;
    textColor.setTextColor("White");
}


/*

 /||||||||||||||||||\
<||[]setTextColor[]||>
 \||||||||||||||||||/

Description:
    //////////////////////////////////////////
    // sets the console windows text color! //
    //////////////////////////////////////////

Colors:
    ////////////////////////////////////////////////
    // Black, Gray, White, Bright_White,          //
    // Blue, Light_Blue, Green, Light_Green,      //
    // Aqua, Light_Aqua, Red, Light_Red,          //
    // Purple, Light_Purple, Yellow, Light_Yellow //
    ////////////////////////////////////////////////

EXAMPLE:
    ///////////////////////////////////////////////////////
    //                                                   //
    //   #include <setTextColor.h>                       //
    //   int main() {                                    //
    //       textColor textColor;                        //
    //       textColor.setTextColor("White");            //
    //       cout << "this line is White!" << endl;      //
    //       textColor.setTextColor("Green");            //
    //       cout << "and this line is Green!" << endl;  //
    //   }                                               //
    ///////////////////////////////////////////////////////

*/

class textColor {
public:
    void setTextColor(string colorName);
};
void textColor::setTextColor(string colorName) {
    regex pattern("^([0-9]|1[0-5])$");
    map<string,int> colors;
    map<string,int>::iterator it;
    colors["Black"]=0;
    colors["Blue"]=1;
    colors["Green"]=2;
    colors["Aqua"]=3;
    colors["Red"]=4;
    colors["Purple"]=5;
    colors["Yellow"]=6;
    colors["White"]=7;
    colors["Gray"]=8;
    colors["Light_Blue"]=9;
    colors["Light_Green"]=10;
    colors["Light_Aqua"]=11;
    colors["Light_Red"]=12;
    colors["Light_Purple"]=13;
    colors["Light_Yellow"]=14;
    colors["Bright_White"]=15;
    it = colors.find(colorName);
    if (colorName == it->first){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), it->second);
    }
}

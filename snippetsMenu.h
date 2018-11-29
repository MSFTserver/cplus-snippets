class snippetsMenu
{
public:
    void MainMenu();
    void DemoColorChanger();
};

void snippetsMenu::MainMenu() {
    textColor textColor;
    string menuBorderH = "//";
    string menuBorderL = "////////////////////////////////";
    string space = "                            ";
    string menuOptionsL1 = " 1. Color Changer           ";
    string menu = "        Snippets Menu       ";
    MSFT();
    cout << menuBorderL << endl;
    cout << menuBorderH << menu << menuBorderH << endl;
    cout << menuBorderH << menuOptionsL1 << menuBorderH << endl;
    cout << menuBorderH << space << menuBorderH<< endl;
    cout << menuBorderH << space << menuBorderH<< endl;
    cout << menuBorderH << space << menuBorderH<< endl;
    cout << menuBorderL << endl;
    int userSelection;
    cout << "Selection: ";
    cin >> userSelection;
    if (userSelection == 1){
        DemoColorChanger();
    } else {
    system("CLS");
    textColor.setTextColor("Red");
    cout << "Error: ";
    cout << "Invalid Snippet #!" << endl;
    textColor.setTextColor("White");
        cin.clear();
        while (cin.get() != '\n')
        {
            continue;
        }
        MainMenu();
    }
}

void snippetsMenu::DemoColorChanger() {
    system("CLS");
    textColor textColor;
    string menuBorderH = "//";
    string menuBorderL = "//////////////////////////////////////////////////";
    string colors1 = "      Black, Gray, White, Bright_White,       ";
    string colors2 = "     Blue, Light_Blue, Green, Light_Green,    ";
    string colors3 = "      Aqua, Light_Aqua, Red, Light_Red,       ";
    string colors4 = "  Purple, Light_Purple, Yellow, Light_Yellow  ";
    string menu = "                     Colors!                  ";
    string exitMessage = "      Type 'Back' to return to Main Menu.     ";
    string userSelection;
    cout << menuBorderL << endl;
    cout << menuBorderH << menu << menuBorderH << endl;
    cout << menuBorderH << colors1 << menuBorderH<< endl;
    cout << menuBorderH << colors2 << menuBorderH<< endl;
    cout << menuBorderH << colors3 << menuBorderH<< endl;
    cout << menuBorderH << colors4 << menuBorderH<< endl;
        cout << menuBorderH << exitMessage << menuBorderH << endl;
    cout << menuBorderL << endl;
    while (userSelection != "Back") {
        cout << "please select a color:";
        cin >> userSelection;
        regex list1 ("^(Black|Gray|White|Bright_White|Blue|Light_Blue|Green|Light_Green|Aqua|Light_Aqua|Red|Light_Red|Purple|Light_Purple|Yellow|Light_Yellow)$");
        bool check = regex_match(userSelection,list1);
        if (userSelection == "Back"){
            textColor.setTextColor("White");
            system("CLS");
            MainMenu();
        } else if (check){
            textColor.setTextColor(userSelection);
            cout << "You Selected to Print in " << userSelection << endl;
        } else {
            cout << "Error: Invalid Color!" << endl;
        }
    }
}

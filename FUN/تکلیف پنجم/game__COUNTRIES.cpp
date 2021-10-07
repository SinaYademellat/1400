// game__COUNTRIES.cpp : This file contains the 'main' function. Program execution begins and ends there.

// ================================================================== << GAME >>

/**************************************************
**                                               **
**      SINA_YADEMELLAT,  9813027346,  H_W # 5   **
**                                               **
**************************************************/

/*  با سلام و عرض ادب

برای این که نشان دهیم برنامه درست اجرا میشود
تنها یک بار کلمه را نشان کاربر میدهیم و اگر مایل به عدم نمایش کلمه تصادفی حتی برای  یک بار هستید خط های زیر را حذف کنید

1819 ---------------------------->  cout << "\t" << random << "\n";        

cout << "\t" << random << "\n";       بعدا پاک کن این فقط من باید ببینم 

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <Windows.h>
#include <stdlib.h>
#include <locale>    
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cerrno>
#include <cstdio>
#include <stdlib.h>  
#include <sstream>

using namespace std;

/*=========================================================
==========================================================*/

void loding(double stop);

void story();

void menu();

string menu_of_start();

int befor_MENU_oF_START(int a);

int continrnt(string a);

vector<char> make_CAPTAL(string a);

char Tabdel_B_CAPTAL_CHAR(char a);

int TABDEL_MABNA_str_B_int(string A);

string TABDEL_int_B_str(int F);

bool only_number_0_00_1234_input_string(string& d);

char front_of_the_game(string ASIA_OR_EUROPA_OR, int JO, int TADAD, vector<char>REPEAT_veCtor, int REPEAT_veCtor_SIZE, int WORD_COMPLETED);

void ERROR_tabel(string cause);

void front_00_p_and_JO(int life, int SHOW_PoINt);

vector<string>Tabdel_list_TXT_B_VECTor();

void start_game_whit_your_list(vector<string>& Sina);

void write_A_LIST();

void dELETe_sina_yad_txt_and___Global_vector();

void pirnt_2_BOX_for_my_tabel();

void pirnt_2_BOX_for_my_tabel_P_SMALLER_THAN_R();

void Check_Name_List(vector<string>list_whit_0_and_else, vector<string>play_NAME);

//vector<string>Tabdel_Vector_Local_B_VECTor_GLOBAL(vector<string>MAHALE);

void Tabdel_Vector_Local_B_VECTor_GLOBAL(vector<string>MAHALE, vector<string>& JAHANE);

void Just_for_FUN_B();

void menu_2_in_game();

/*=========================================================
==========================================================*/

vector<string>play_NAME_GOLOBAL_FOR_YOUR_LIST;

vector<string>list_whit_0_and_else_GLOBAL_for_CHECK_NAME;

int TMP_LIFE_first_time_play_00 = 0 ;
int TMP_POint_frist_time_play_00 = 0;

int FLAG_TO_countinue = 0;

vector<char> MIS;

vector<char>print_Answer_GLOBALL;


/*=========================================================
==========================================================*/


int main()
{

    menu();
    cout << "\n";
    cout << "\n";

}



/*=========================================================
==========================================================*/

void loding(double stop)
{
    stop = stop * 1000;
    Sleep(stop);
    system("cls");
}

/*=========================================================
==========================================================*/

// sina gharaman :)

void story()
{
    
    system("cls");

    //part befor_MENU_oF_START
    int befor_MENU_oF_STARt_int;
    



    int TOW_OK = 1; //      پیش فض این که از قبل لیست وارد کرده

    //          کامل کن چون اگر نباشه فایلی نیست که بخواد بخواند بعد خطا هم نشون نمی ده 
    
    ifstream TMP_1("sina_yad.txt");
    if (!(TMP_1))
    {
        TOW_OK = 0;
    }
    TMP_1.close();
    //کامل شد :)
    befor_MENU_oF_STARt_int = befor_MENU_oF_START(TOW_OK);




    /*=============================================================================================================
    ======================================================(  ASSUMPTION  )===========================================*/


    if (befor_MENU_oF_STARt_int == 1) //start OF << ASSUMPTION >>  پیشفرض :)
    {
        //part MENU_OF_START
        string X;
        X = menu_of_start();
        loding(0.01);
        int x;
        x = continrnt(X);

        if (x != 0)
        {
            return; //??  MAjborm :
        }

    }
    /*=============================================================================================================
        ======================================================(  MAKE LIST  )===========================================*/

    if (befor_MENU_oF_STARt_int == 2)
    {
        //cout << "MAKE LIST STAR";   //پاک شود
       
        write_A_LIST();

        menu();
        
        return;
    }
    /*=============================================================================================================
        ========================================================(  Yor lest LIST  )===========================================*/

    if (befor_MENU_oF_STARt_int == 3)
    {
        vector<string>your_list;
        your_list = Tabdel_list_TXT_B_VECTor();
        //
        your_list.pop_back();
        int daasadsk = 0;
        for (int i = 0; i<your_list.size(); i++)
        {
            daasadsk += 1;
        }
        if (daasadsk < 3)
        {
            cout << "your list too small to play.\n";
          ;
            // abort(); Error ???
            cout << "\nAnswer (yes) or (no)\n";
            cout << "DO you want to back menu? ";
            string QQWER = "yes";
            cin >> QQWER;
            if (QQWER == "yes")
            {
                menu();
            }
            else
            {
                cout << "\t<< GOOD BYE >>";
                return;
            }
           
        }
        else
        {
            start_game_whit_your_list(your_list);
        }

        return;
    }

    /*=============================================================================================================
       ========================================================( input_0_00 :) )===========================================*/


    else
    {
        /*cout << "0 OR 00 input"; */
        return;
    }

}


/*=========================================================
==========================================================*/

// ==> o
void menu()
{
    system("cls");
    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(25) << char(191) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*4*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(7) << "1.Start"; cout << setfill(' ') << setw(18) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "2.Enter Name List"; cout << setfill(' ') << setw(8) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*8*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "3.Check Name List"; cout << setfill(' ') << setw(8) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*8*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "4.Delete Name List"; cout << setfill(' ') << setw(7) << char(179) << "\n";

   
    /*E*/	cout << "\t" << "\t" << char(195) << setfill(char(196)) << setw(25) << char(180) << "\n";
    /*4*/	cout << "\t" << "\t" << char(179); cout<<"Write << exit >> to end "; cout <<char(179) << "\n";

    /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(25) << char(217) << "\n";



    //input

    string a;

    /*E*/	cout << "\t" << "\t" << "Enter number that you chose: ";

    //just number :)
    cin >> a;
 
    if (only_number_0_00_1234_input_string(a))
    {
        cout << "finsh."; //???????????
        return;
    }
    if (a == "0")
    {
        menu();
        return;

    }

    if (a == "00")
    {
        front_00_p_and_JO(TMP_LIFE_first_time_play_00, TMP_POint_frist_time_play_00);
        return;

    }

    int a_int = atoi(a.c_str());      // tabdel str b int
      /*
      0==> men.. 1==>start  !!! 2==>Enter  !!! 3==>C... !!! 4==>DLET
      */


      //1 ==> start

    if (a_int == 1)
    {
        story();

        return;
    }

    //2==>Enter

    if (a_int == 2)
    {
        //  cout<<"2==>Enter"; // pak sh vad


        write_A_LIST();

        menu();

        return;

    }

    //3==>C...
    if (a_int == 3)
    {



        //Tabdel_Vector_Local_B_VECTor_GLOBAL(, list_whit_0_and_else_GLOBAL_for_CHECK_NAME);

        Check_Name_List(list_whit_0_and_else_GLOBAL_for_CHECK_NAME, play_NAME_GOLOBAL_FOR_YOUR_LIST);

        //cout << "3==>C..."; // pak sh vad

        string Y_0_n;
        cout << "\n << To continue == input << countinue >>\n";
        cout << "Do you want  back to menue? ";
        cin >> Y_0_n;
        if (Y_0_n=="yes")
        {
            menu();
            FLAG_TO_countinue = 0;
            return;
        }
        if (Y_0_n == "countinue")
        {
            FLAG_TO_countinue += 1;
            return;
        }
      
        return;
    }


    //4==>DLET
    if (a_int == 4)
    {
        dELETe_sina_yad_txt_and___Global_vector();

        return;
    }



}


/*=========================================================
==========================================================*/


string menu_of_start()
{
    cout << "\n";
    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(40) << char(191) << "\n";
    /*1*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179) << "1.easy  ==> Asia or Europe (Choice)"; cout << setfill(' ') << setw(5) << char(179) << "\n";
    /*3*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
    /*4*/	cout << "\t" << "\t" << char(179) << "2.Normal==> Asia or Europe (random)"; cout << setfill(' ') << setw(5) << char(179) << "\n";
    /*5*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";

    /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(40) << char(217) << "\n";

    //input
    string str;
    cout << "\t" << "\t" << "Enter number: ";
    cin >> str;

    while (true)
    {
        if (only_number_0_00_1234_input_string(str))
        {
            cout << "\nfinsh.\n"; //????????????????///
            return  "f";
        }

        if (str == "1")
        {
            return str;
            break;
        }
        if (str == "2") // Asia or Europe (random)
        {
            //cout << " Asia or Europe (random)";
            return str;
            break;
        }
        if (str == "0")
        {
            menu();
            string W = "1378";
            return W;
        }
        if (str == "00")
        {
            front_00_p_and_JO(0, 0);
            string W = "1378";
            return W;
        }
        else
        {
            ERROR_tabel("I can not understand what you mean.");
            cout << "trying again: ";
            cin >> str;

        }
    }

    //  return 0;
}


/*=========================================================
==========================================================*/

//EXTRA

int continrnt(string a)
{
    //Assumption


    string Europe[] =
    {
        "Albania","Andorra","Armenia","Austria","Azerbaijan","Belarus","Belgium","Bulgaria","Croatia","Cyprus","Czechia","Denmark","Estonia","Finland","France","Georgia","Germany","Greece","Hungary","Iceland","Ireland",
        "Italy","Kazakhstan","Kosovo","Latvia","Liechtenstein","Lithuania","Luxembourg","Malta","Moldova","Monaco","Montenegro","Norway","Netherlands","Vatican","Ukraine","Turkey"
        ,"Serbia","Slovakia","Slovenia","Spain","Sweden","Switzerland","Romania","Russia","Poland","Portugal"/*48*/
    };

    string Asia[] =
    { "Afghanistan","Armenia","Azerbaijan","Bahrain","Bangladesh","Bhutan","Brunei","Cambodia","China","Cyprus","Georgia","India","Indonesia","Iran","Iraq","Israel","Japan","Jordan","Kazakhstan","Kuwait","Kyrgyzstan""Laos","Lebano","Malaysia","Maldives","Mongolia",
       "Myanmar","Nepal","oman","Pakistan","Palestine","Philippines","Qatar","russia","SaudiArabia","Singapore","Korea","SriLanka","Syria","Taiwan","Tajikistan","Thailand","Turkey","Turkmenistan","yemen","Uzbekistan","vietnam","UnitedArabEmirates"
    }; /*48*/


    string A_E[2] = { "Asia","Europe" };

    if (a == "1") /*Assumption==>Asia/Europe  CHOse*/
    {
        /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(12) << char(191) << "\n";
        /*1*/	cout << "\t" << "\t" << char(179); cout << "1)  Asia" << setfill(' ') << setw(4) << char(179) << "\n";
        /*1*/	cout << "\t" << "\t" << char(179); cout << setfill('=') << setw(12) << char(179) << "\n";
        /*1*/	cout << "\t" << "\t" << char(179); cout << "2) Europe" << setfill(' ') << setw(3) << char(179) << "\n";
        /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(12) << char(217) << "\n";

        /*========================================================================================
        ==========================================================================================*/

        // part main :)
        srand(time(NULL));
        string input;   /*اگر مقاوم نمی خواست با عدد می نوشتم*/
        cout << "\t\tEnter number that you chose: ";
        cin >> input;

        /*========================================================================================
        ===============================<< TRING AGIN  >>===================================================*/
        while (true)
        {
            if (only_number_0_00_1234_input_string(input))
            {
                cout << "\nfinsh.\n"; //????????????????///
                return  1378;

            }

            //======================================================================================
            //======================================================================================
            if (input == "1")   /*این بخش آسیا است*/
            {
                int Number_of_contries;
                int i = 0;
                int  Word = 0;

                cout << "\nThe number of your lives depends on the number you input.\n";
                cout << "Number_of_contries: ";
                cin >> Number_of_contries;

                while (Number_of_contries > 20 || Number_of_contries < 3)
                {
                    cout << ":(  ";
                    ERROR_tabel("number must be between [3,20]");
                    cout << "Number_of_countries: ";
                    cin >> Number_of_contries;

                }

                int jon = ((Number_of_contries) / (3));

                int Game_Score_f = 0;
                int TMP_Game_score_f = 0, TMP_COUNT = 0;

                while (jon > 0 && i < Number_of_contries)
                {

                    int random_number = rand() % 45;
                    string random = Asia[random_number];



                    if (random != "0")
                    {
                        print_Answer_GLOBALL.clear();
                        int size = random.length();

                        //part 0
                        vector<char>print_Answer;
                        for (int i = 0; i < size; i++)
                        {
                            print_Answer.push_back('-');
                            print_Answer_GLOBALL.push_back('-');
                        }
                        int Game_Score = 0;

                        //PART DON`T Repeat
                        vector<char>Repeat_veCtor;
                        int Repeat_int = 0;
                        int Repeat_Flag_int = 0;
                        for (int i = 0; i < size; i++)
                        {
                            Repeat_veCtor.push_back('~');
                        }


                        cout << "\t" << random << "\n";  /*                 بعدا پاک کن این فقط من باید ببینم */
                        vector<char>a;
                        a = make_CAPTAL(random);

                        int NUMBER_OF_RAND = 1;
                        char ch, sina;
                        sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                        ch = Tabdel_B_CAPTAL_CHAR(sina);
                        int flag = 0;
                        while (jon > 0)
                        {
                            for (int i = 0; i < size; i++)
                            {
                                if (ch == a[i])
                                {
                                    // point
                                    Game_Score += 1;
                                    flag += 1;
                                    print_Answer[i] = ch;
                                    print_Answer_GLOBALL[i] = ch;
                                    Game_Score_f += 1;
                                    Repeat_veCtor[i] = ch;
                                }
                            }

                            if (flag > 0)
                            {
                                for (int i = 0; i < size; i++)
                                {
                                    cout << print_Answer[i];
                                }

                                cout << "\n";

                                if (Game_Score == size)
                                {
                                    cout << "\n<< Next word >>";
                                    break;
                                    Game_Score = 0;
                                }
                                sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                ch = Tabdel_B_CAPTAL_CHAR(sina);
                                flag = 0;
                            }
                            else
                            {
                                jon -= 1;
                                if (jon <= 0)
                                {
                                    system("cls");
                                    Just_for_FUN_B();
                                    cout << "\n\t\t << GAME OVER >>\n";
                                    cout << "Total points: " << Game_Score_f;
                                    cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                                    exit(0);
                                }
                                if (jon != 0)
                                {
                                    cout << "\n \tO__O" << "\nyou made a mistake.\n" << "Don`t worry you have <<" << jon << ">> chances.\n\n";

                                    for (int i = 0; i < size; i++)
                                    {
                                        cout << print_Answer[i];
                                    }
                                    cout << "\n\n";

                                    // input;
                                    sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                    ch = Tabdel_B_CAPTAL_CHAR(sina);
                                    flag = 0;
                                }

                            }

                        }
                        TMP_Game_score_f = Game_Score_f;
                        Game_Score_f = size;
                        Game_Score_f = Game_Score_f + TMP_Game_score_f - size;
                    }
                    Asia[random_number] = "0";
                    i = i + 1;
                    Word = Word + 1;


                }
                if (jon > 0)
                {
                    system("cls");
                    Just_for_FUN_B();
                    cout << "\n\t<< Congratulations >>\n\t   << YOU WIN >>\n\n";
                    cout << "Total points: " << Game_Score_f;
                    cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                    exit(0);
                }





                //==========================================
                break;// for trying agin :)
            }

            /*========================================================================================
            ==========================================================================================*/
            if (input == "2")
            {
                /*این بخش اروپا است*/
                {
                    int Number_of_contries;
                    int i = 0;
                    int  Word = 0;

                    cout << "\nThe number of your lives depends on the number you input.\n";
                    cout << "Number_of_countries: ";
                    cin >> Number_of_contries;

                    while (Number_of_contries > 20 || Number_of_contries < 3)
                    {
                        cout << ":(  ";
                        ERROR_tabel("number must be between [3,20]");
                        cout << "Number_of_countries: ";
                        cin >> Number_of_contries;

                    }

                    int jon = ((Number_of_contries) / (3));

                    int Game_Score_f = 0;
                    int TMP_Game_score_f = 0, TMP_COUNT = 0;

                    while (jon > 0 && i < Number_of_contries)
                    {

                        int random_number = rand() % 33;
                        string random = Europe[random_number];



                        if (random != "0")
                        {
                            int size = random.length();
                            print_Answer_GLOBALL.clear();
                            //part 0
                            vector<char>print_Answer;
                            for (int i = 0; i < size; i++)
                            {
                                print_Answer.push_back('-');
                                print_Answer_GLOBALL.push_back('-');
                            }
                            int Game_Score = 0;

                            //PART DON`T Repeat
                            vector<char>Repeat_veCtor;
                            int Repeat_int = 0;
                            int Repeat_Flag_int = 0;
                            for (int i = 0; i < size; i++)
                            {
                                Repeat_veCtor.push_back('~');
                            }


                            cout << "\t" << random << "\n";  /*                 بعدا پاک کن این فقط من باید ببینم */
                            vector<char>a;
                            a = make_CAPTAL(random);

                            int NUMBER_OF_RAND = 1;
                            char ch, sina;
                            sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                            ch = Tabdel_B_CAPTAL_CHAR(sina);
                            int flag = 0;
                            while (jon > 0)
                            {
                                for (int i = 0; i < size; i++)
                                {
                                    if (ch == a[i])
                                    {
                                        // point
                                        Game_Score += 1;
                                        flag += 1;
                                        print_Answer[i] = ch;
                                        print_Answer_GLOBALL[i] = ch;
                                        Game_Score_f += 1;
                                        Repeat_veCtor[i] = ch;
                                    }
                                }

                                if (flag > 0)
                                {
                                    for (int i = 0; i < size; i++)
                                    {
                                        cout << print_Answer[i];
                                    }

                                    cout << "\n";

                                    if (Game_Score == size)
                                    {
                                        cout << "\n<< Next word >>";
                                        break;
                                        Game_Score = 0;
                                    }
                                    sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                    ch = Tabdel_B_CAPTAL_CHAR(sina);
                                    flag = 0;
                                }
                                else
                                {
                                    jon -= 1;
                                    if (jon <= 0)
                                    {
                                        system("cls");
                                        Just_for_FUN_B();
                                        cout << "\n\t\t << GAME OVER >>\n";
                                        cout << "Total points: " << Game_Score_f;
                                        cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                                        exit(0);
                                    }
                                    if (jon != 0)
                                    {
                                        cout << "\n \tO__O" << "\nyou made a mistake.\n" << "Don`t worry you have <<" << jon << ">> chances.\n\n";

                                        for (int i = 0; i < size; i++)
                                        {
                                            cout << print_Answer[i];
                                        }
                                        cout << "\n\n";

                                        // input;
                                        sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                        ch = Tabdel_B_CAPTAL_CHAR(sina);
                                        flag = 0;
                                    }

                                }

                            }
                            TMP_Game_score_f = Game_Score_f;
                            Game_Score_f = size;
                            Game_Score_f = Game_Score_f + TMP_Game_score_f - size;
                        }
                        Europe[random_number] = "0";
                        i = i + 1;
                        Word = Word + 1;


                    }
                    if (jon > 0)
                    {
                        system("cls");
                        system("cls");
                        Just_for_FUN_B();
                        cout << "\n\t<< Congratulations >>\n\t   << YOU WIN >>\n\n";
                        cout << "Total points: " << Game_Score_f;
                        cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                        exit(0);
                    }


                    //==========================================
                    break;// for trying agin :)
                }
            }



            /*========================================================================================
            ==========================================================================================*/
            else
            {
                ERROR_tabel("Are you Kidding ?");
                cout << "trying again: ";
                cin >> input;
            }

        }

        /*========================================================================================
 ===============================<< TRING AGIN Finsh >>===================================================*/
        return 0;
    }

    if (a == "2")/*Assumption==>Asia/Europe  RANDOM*/
    {
        srand(time(NULL));

        int RANDOM_Asia_or_Europe_int = 0;
        RANDOM_Asia_or_Europe_int = rand() % 2;

        /*
           string RANDOM_Asia_or_Europe_str = "0";
        RANDOM_Asia_or_Europe_str = A_E[RANDOM_Asia_or_Europe_int];
        */

        if (RANDOM_Asia_or_Europe_int == 0)
        {
            // Asia
            int Number_of_contries;
            int i = 0;
            int  Word = 0;

            cout << "\nThe number of your lives depends on the number you input.\n";
            cout << "Number_of_contries: ";
            cin >> Number_of_contries;

            while (Number_of_contries > 20 || Number_of_contries < 3)
            {
                cout << ":(  ";
                ERROR_tabel("number must be between [3,20]");
                cout << "Number_of_countries: ";
                cin >> Number_of_contries;

            }

            int jon = ((Number_of_contries) / (3));

            int Game_Score_f = 0;
            int TMP_Game_score_f = 0, TMP_COUNT = 0;

            while (jon > 0 && i < Number_of_contries)
            {

                int random_number = rand() % 45;
                string random = Asia[random_number];



                if (random != "0")
                {
                    int size = random.length();
                    print_Answer_GLOBALL.clear();
                    //part 0
                    vector<char>print_Answer;
                    for (int i = 0; i < size; i++)
                    {
                        print_Answer.push_back('-');
                        print_Answer_GLOBALL.push_back('-');
                    }
                    int Game_Score = 0;

                    //PART DON`T Repeat
                    vector<char>Repeat_veCtor;
                    int Repeat_int = 0;
                    int Repeat_Flag_int = 0;
                    for (int i = 0; i < size; i++)
                    {
                        Repeat_veCtor.push_back('~');
                    }


                    cout << "\t" << random << "\n";  /*                 بعدا پاک کن این فقط من باید ببینم */
                    vector<char>a;
                    a = make_CAPTAL(random);

                    int NUMBER_OF_RAND = 1;
                    char ch, sina;
                    sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                    ch = Tabdel_B_CAPTAL_CHAR(sina);
                    int flag = 0;
                    while (jon > 0)
                    {
                        for (int i = 0; i < size; i++)
                        {
                            if (ch == a[i])
                            {
                                // point
                                Game_Score += 1;
                                flag += 1;
                                print_Answer[i] = ch;
                                print_Answer_GLOBALL[i] = ch;
                                Game_Score_f += 1;
                                Repeat_veCtor[i] = ch;
                            }
                        }

                        if (flag > 0)
                        {
                            for (int i = 0; i < size; i++)
                            {
                                cout << print_Answer[i];
                            }

                            cout << "\n";

                            if (Game_Score == size)
                            {
                                cout << "\n<< Next word >>";
                                break;
                                Game_Score = 0;
                            }
                            sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                            ch = Tabdel_B_CAPTAL_CHAR(sina);
                            flag = 0;
                        }
                        else
                        {
                            jon -= 1;
                            if (jon <= 0)
                            {
                                system("cls");
                                Just_for_FUN_B();
                                cout << "\n\t\t << GAME OVER >>\n";
                                cout << "Total points: " << Game_Score_f;
                                cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                                exit(0);
                            }
                            if (jon != 0)
                            {
                                cout << "\n \tO__O" << "\nyou made a mistake.\n" << "Don`t worry you have <<" << jon << ">> chances.\n\n";

                                for (int i = 0; i < size; i++)
                                {
                                    cout << print_Answer[i];
                                }
                                cout << "\n\n";

                                // input;
                                sina = front_of_the_game("Asia", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                ch = Tabdel_B_CAPTAL_CHAR(sina);
                                flag = 0;
                            }

                        }

                    }
                    TMP_Game_score_f = Game_Score_f;
                    Game_Score_f = size;
                    Game_Score_f = Game_Score_f + TMP_Game_score_f - size;
                }
                Asia[random_number] = "0";
                i = i + 1;
                Word = Word + 1;


            }
            if (jon > 0)
            {
                system("cls");
                Just_for_FUN_B();
                system("cls");
                cout << "\n\t<< Congratulations >>\n\t   << YOU WIN >>\n\n";
                cout << "Total points: " << Game_Score_f;
                cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                exit(0);
            }

            return 0;
        }



        else
        {
            // Europe

            int Number_of_contries;
            int i = 0;
            int  Word = 0;

            cout << "\nThe number of your lives depends on the number you input.\n";
            cout << "Number_of_contries: ";
            cin >> Number_of_contries;

            while (Number_of_contries > 20 || Number_of_contries < 3)
            {
                cout << ":(  ";
                ERROR_tabel("number must be between [3,20]");
                cout << "Number_of_contries: ";
                cin >> Number_of_contries;

            }

            int jon = ((Number_of_contries) / (3));

            int Game_Score_f = 0;
            int TMP_Game_score_f = 0, TMP_COUNT = 0;

            while (jon > 0 && i < Number_of_contries)
            {

                int random_number = rand() % 33;
                string random = Europe[random_number];



                if (random != "0")
                {
                    int size = random.length();
                    print_Answer_GLOBALL.clear();
                    //part 0
                    vector<char>print_Answer;
                    for (int i = 0; i < size; i++)
                    {
                        print_Answer.push_back('-');
                        print_Answer_GLOBALL.push_back('-');
                    }
                    int Game_Score = 0;

                    //PART DON`T Repeat
                    vector<char>Repeat_veCtor;
                    int Repeat_int = 0;
                    int Repeat_Flag_int = 0;
                    for (int i = 0; i < size; i++)
                    {
                        Repeat_veCtor.push_back('~');
                    }


                    cout << "\t" << random << "\n";  /*                 بعدا پاک کن این فقط من باید ببینم */
                    vector<char>a;
                    a = make_CAPTAL(random);

                    int NUMBER_OF_RAND = 1;
                    char ch, sina;
                    sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                    ch = Tabdel_B_CAPTAL_CHAR(sina);
                    int flag = 0;
                    while (jon > 0)
                    {
                        for (int i = 0; i < size; i++)
                        {
                            if (ch == a[i])
                            {
                                // point
                                Game_Score += 1;
                                flag += 1;
                                print_Answer[i] = ch;
                                print_Answer_GLOBALL[i] = ch;
                                Game_Score_f += 1;
                                Repeat_veCtor[i] = ch;
                            }
                        }

                        if (flag > 0)
                        {
                            for (int i = 0; i < size; i++)
                            {
                                cout << print_Answer[i];
                            }

                            cout << "\n";

                            if (Game_Score == size)
                            {
                                cout << "\n<< Next word >>";
                                break;
                                Game_Score = 0;
                            }
                            sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                            ch = Tabdel_B_CAPTAL_CHAR(sina);
                            flag = 0;
                        }
                        else
                        {
                            jon -= 1;
                            if (jon <= 0)
                            {
                                system("cls");
                                Just_for_FUN_B();
                                cout << "\n\t\t << GAME OVER >>\n";
                                cout << "Total points: " << Game_Score_f;
                                cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                                exit(0);
                            }
                            if (jon != 0)
                            {
                                cout << "\n \tO__O" << "\nyou made a mistake.\n" << "Don`t worry you have <<" << jon << ">> chances.\n\n";

                                for (int i = 0; i < size; i++)
                                {
                                    cout << print_Answer[i];
                                }
                                cout << "\n\n";

                                // input;
                                sina = front_of_the_game("Europe", Game_Score_f, jon, Repeat_veCtor, size, Word);
                                ch = Tabdel_B_CAPTAL_CHAR(sina);
                                flag = 0;
                            }

                        }

                    }
                    TMP_Game_score_f = Game_Score_f;
                    Game_Score_f = size;
                    Game_Score_f = Game_Score_f + TMP_Game_score_f - size;
                }
                Europe[random_number] = "0";
                i = i + 1;
                Word = Word + 1;


            }
            if (jon > 0)
            {
                system("cls");
                system("cls");
                Just_for_FUN_B();
                system("color 2");
                cout << "\n\t<< Congratulations >>\n\t   << YOU WIN >>\n\n";
                cout << "Total points: " << Game_Score_f;
                cout << "\n" << "\t" << "\t" << "Word completed: " << Word<<"\n";
                exit(0);
            }

            return 0;
        }

    }

    else
    {
        // 0 __ 00
        return 1378;
    }

    return 0;
}


/*============================================================
==============================================================*/

int befor_MENU_oF_START(int a)
{
    int flag_find_sinaTXT = 0;

    cout << "\n";
    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(40) << char(191) << "\n";
    /*1*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179) << "1.Assumption ==> Asia/Europe"; cout << setfill(' ') << setw(12) << char(179) << "\n";

    /*E*/	cout << "\t" << "\t" << char(195) << setfill(char(196)) << setw(40) << char(180) << "\n";
    if (a == 1)
    {
        /*3*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*4*/	cout << "\t" << "\t" << char(179) << "2.Edet list               "; cout << setfill(' ') << setw(14) << char(179) << "\n";
        /*3*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*E*/	cout << "\t" << "\t" << char(195) << setfill(char(196)) << setw(40) << char(180) << "\n";
        /*5*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*6*/	cout << "\t" << "\t" << char(179) << "\t\t3.Your list"; cout << setfill(' ') << setw(14) << char(179) << "\n";
        /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*6*/	cout << "\t" << "\t" << char(179) << "I`m suggest input number ==> 3"; cout << setfill(' ') << setw(10) << char(179) << "\n";
        /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*6*/	cout << "\t" << "\t" << char(179) << " because you can`t solve my list (1)   "; cout << char(179) << "\n";
        /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(40) << char(217) << "\n";
        flag_find_sinaTXT = 1;
    }

    else
    {
        /*6*/	cout << "\t" << "\t" << char(179) << "    you didn`t enter any name list."; cout << setfill(' ') << setw(5) << char(179) << "\n";
        /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*6*/	cout << "\t" << "\t" << char(179) << "                BUT           "; cout << setfill(' ') << setw(10) << char(179) << "\n";
        /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(40) << char(179) << "\n";
        /*6*/	cout << "\t" << "\t" << char(179) << "       you can paly whit my list . <1> "; cout << char(179) << "\n";
        /*E*/	cout << "\t" << "\t" << char(195) << setfill(char(196)) << setw(40) << char(180) << "\n";
    }


    string input1_str;
    int input1; /* na Ba MOghavem sase ):*/
    cout << "\t\tEnter number that you chose: ";
    cin >> input1_str;

    if (flag_find_sinaTXT==0)
    {
        while ( (input1_str != "1") && (input1_str != "0") && (input1_str !="00"))
        {
            ERROR_tabel("??!!");
            cout << "trying agin: ";
            cin >> input1_str;
        }

    }

    while (true)
    { /*MOGHAVEMAT*/
        if (only_number_0_00_1234_input_string(input1_str))
        {
            cout << "\nfinsh.\n"; //????????????????///
            return  1378;
        }

        if (input1_str == "0")
        {
            menu();
            return  1378;
        }

        if (input1_str == "00")
        {
            front_00_p_and_JO(0, 0); // الان نه جون داری نه امتیاز
            return  1378;
        }


        //Tabdel str B int :)
        input1 = TABDEL_MABNA_str_B_int(input1_str);

        if (input1 <= 3)
        {
            break;
        }
        ERROR_tabel("O__O");
        cout << "\n";
        cout << "\t\tEnter number that you chose: ";
        cin >> input1_str;


    }


    loding(0.01);
    return input1;


}

/*============================================================
==============================================================*/

vector<char> make_CAPTAL(string a)
{
    int size;
    size = a.length();
    vector<char>b;
    for (int i = 0; i < size; i++)
    {
        b.push_back(char(toupper(int(a[i]))));
    }
    return b;


}

/*============================================================
==============================================================*/

char Tabdel_B_CAPTAL_CHAR(char a)
{

    char ABCD;
    ABCD = char(toupper(int(a)));
    return ABCD;

}

/*=============================================================
=============================================================*/

int TABDEL_MABNA_str_B_int(string A)
{
    int x = atoi(A.c_str());
    return x;
}

/*=============================================================
=============================================================*/

string TABDEL_int_B_str(int F)
{
    string siNA;
   // siNA = to_string(F);  اجرا نمی شو ؟
    cout << "input number:)";
    cin >> siNA;
    return siNA;
}

/*=============================================================/
=============================================================*/


/*
if correct input ===> return FALSE     :)


    if (only_number_0_00_12345_input_string(str))
    {
        return 1;   <<<<<<<<<<<  for main() fucn :)    >>>>>>>>>>
    }

*/

bool only_number_0_00_1234_input_string(string& d)
{
    int sIzE = 0;

    while (true)
    {
        while (d == "exit")
        {
            string NOO_yeSS;
            cout << "\nAnswer (yes) or (no).\n";
            cout << "Are you sure? ";
            cin >> NOO_yeSS;
            if (NOO_yeSS=="yes")
            {
                exit(0);
            }
            else
            {
                cout << "\nOK\n";
                cout << "try again: ";
                cin >> d;
            }
        }
        sIzE = d.size();
        if (sIzE > 1)
        {
            if (d == "00")
            {
                break;
            }

            else
            {
                string yes_or_no;
                cout << char(218) << setfill(char(196)) << setw(12) << char(191);
                cout << "\n" << char(179) << "   ERROR   " << char(179);
                cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);
                cout << " \n I can`t understand your input" << "\t" << "<< " << d << " >> .\n";
                cout << "Answer (yes) or (no).\n";
                cout << "Would You like to try again? ";
                cin >> yes_or_no;
                if (yes_or_no == "yes")
                {
                    cout << "try again: ";
                    cin >> d;
                }
                else
                {
                    cout << "OK\n\tGood bye.";
                    return true;
                }
            }
        }
        else
        {
            if ((int(d[0]) > 47) && (int(d[0]) < 53))
            {
                if (d == "0")
                {
                    menu();
                }
                break;
            }
            else
            {
                string yes_or_no;
                cout << char(218) << setfill(char(196)) << setw(12) << char(191);
                cout << "\n" << char(179) << "   ERROR   " << char(179);
                cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);
                cout << " \n I can`t understand your input" << "\t" << "<< " << d << " >> .\n";
                cout << "Answer (yes) or (no).\n";
                cout << "Would You like to try again? ";
                cin >> yes_or_no;
                if (yes_or_no == "yes")
                {
                    cout << "try again:";
                    cin >> d;
                }
                else
                {
                    cout << "OK\n\tGood bye.";
                    return true;
                }

            }
        }
    }
    return false;

}

/*===========================================================
=============================================================*/

void ERROR_tabel(string cause)
{
    cout << "\n";
    cout << char(218) << setfill(char(196)) << setw(12) << char(191);
    cout << "\n" << char(179) << "   ERROR   " << char(179); cout << "\t" << "<< " << cause << " >>";
    cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);
    cout << "\n";
}


/*=========================================================================================
===========================================================================================*/

char front_of_the_game(string ASIA_OR_EUROPA_OR, int JO, int TADAD, vector<char>REPEAT_veCtor, int REPEAT_veCtor_SIZE, int WORD_COMPLETED)
{

    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(10) << char(191) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179); cout << left << setfill(' ') << setw(9) << ASIA_OR_EUROPA_OR; cout << char(179) << "\n";
    /*E*/	cout << "\t" << "\t" << char(192); cout << right << setfill(char(196)) << setw(10) << char(217) << "\n";
    cout << "point: " << JO;
    cout << "\t" << "\t" << "\t" << "\t"; cout << "life: ";
    //          کاری شاه به نام LIFE
    for (int i = 0; i < ((TADAD * 2) - 1); i++)
    {
        if (i % 2 == 0)
        {
            cout << char(254);
        }
        else
        {
            cout << " ";
        }

    }

    cout << "\n" << "\t" << "\t" << "Word completed: " << WORD_COMPLETED;

    cout << "\n";
    cout << "\n";

    cout << "pleas enter only characters.\n" << "Enter: ";
    string SINA_YAD;
    cin >> SINA_YAD;
    while (true)
    {
        int sina_size;
        sina_size = SINA_YAD.length();
        if (sina_size > 1)
        {
            if (SINA_YAD == "help")
            {
                break; // TAKMEL SHVAD
            }

            if (SINA_YAD == "00")
            {
                front_00_p_and_JO(TADAD, JO);
                cout << "\n";
                cout << "\t" << "Enter One character:";
                cin >> SINA_YAD;
            }

            else
            {

                cout << char(218) << setfill(char(196)) << setw(12) << char(191);
                cout << "\n" << char(179) << "   ERROR   " << char(179);  cout << "\t << " << "Size" << " >> ";
                cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);

                cout << "\n";
                cout << "\t" << "Enter One character:";
                cin >> SINA_YAD;
            }
        }
        if (SINA_YAD == "0")
        {
           // menu();
            menu_2_in_game();
            if (FLAG_TO_countinue==0)
            {
                break;
            }
            else
            {
              //  cin.ignore(100, ' ');
                system("cls");

                cout << "\n";
                for (int i = 0; i < print_Answer_GLOBALL.size(); i++)
                {
                    cout << print_Answer_GLOBALL[i];
                }
                cout << "\n";

                cout << "welcom back to game.\n";
                cout << "\t" << "Enter One character :";
                cin >> SINA_YAD;
            }
        }

        else
        {
            break;
        }

    }
    char sina_ch;
    char sina_ch_CAPTAL;

    sina_ch = SINA_YAD[0];

    //NO REPEAT :)

    while (true)
    {
        sina_ch_CAPTAL = Tabdel_B_CAPTAL_CHAR(sina_ch);
        int REPEAT_veCtor_flag_int = 0;

        for (int i = 0; i < REPEAT_veCtor_SIZE; i++)
        {
            if (sina_ch_CAPTAL == REPEAT_veCtor[i])
            {

                REPEAT_veCtor_flag_int += 1;

            }
        }

        if (REPEAT_veCtor_flag_int > 0)
        {

            cout << char(218) << setfill(char(196)) << setw(12) << char(191);
            cout << "\n" << char(179) << "   ERROR   " << char(179);  cout << "\t << " << sina_ch << " ==>> Repetitious" << " >> " << "\t" << "Enter a new character.";
            cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);

            cout << "\n";


            cout << "pleas enter only characters.\n" << "Enter: ";
            string SINA_YAD;
            cin >> SINA_YAD;
            while (true)
            {
                int sina_size;
                sina_size = SINA_YAD.length();
                if (sina_size > 1)
                {
                    if (SINA_YAD == "help")
                    {
                        break; // TAKMEL SHVAD
                    }

                    if (SINA_YAD == "00")
                    {
                        front_00_p_and_JO(TADAD, JO);
                        cout << "\n";
                        cout << "\t" << "Enter One character:";
                        cin >> SINA_YAD;
                    }

                    else
                    {

                        cout << char(218) << setfill(char(196)) << setw(12) << char(191);
                        cout << "\n" << char(179) << "   ERROR   " << char(179);  cout << "\t << " << "Size" << " >> ";
                        cout << "\n" << char(192) << setfill(char(196)) << setw(12) << char(217);

                        cout << "\n";
                        cout << "\t" << "Enter One character:";
                        cin >> SINA_YAD;
                    }
                }

                if (SINA_YAD == "0")
                {
                    menu();
                    break;
                }

                else
                {
                    break;
                }

            }

            sina_ch = SINA_YAD[0];
            REPEAT_veCtor_flag_int = 0;
        }
        else
        {
            break;
        }

    }
    system("cls");
    return sina_ch;
}

/*=========================================================================================
===========================================================================================*/

void front_00_p_and_JO(int life, int SHOW_PoINt)
{
    system("cls");
    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(14) << char(191) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179); cout << left << setfill(' ') << setw(9) << "Never give up"; cout << char(179) << "\n";
    /*E*/	cout << "\t" << "\t" << char(192); cout << right << setfill(char(196)) << setw(14) << char(217) << "\n";
    cout << "point: " << SHOW_PoINt;
    cout << "\t" << "\t" << "\t" << "\t"; cout << "life: ";
    //          کاری شاه به نام LIFE
    for (int i = 0; i < ((life * 2) - 1); i++)
    {
        if (i % 2 == 0)
        {
            cout << char(254);
        }
        else
        {
            cout << " ";
        }

    }
    cout << "\n";

    //======================================================== #قرنطینه :(
        /* تنها جایی که مقاوم نکردم وقت نیست :)*/
    cout << "\n";
    cout << setfill('=') << setw(33) << "==";
    cout << "\n";
    cout << "\n";


    cout << "\t<< Just for fun >>\n";
    cout << "\n";
    cout << setfill('=') << setw(33) << "==";
    cout << "\n";
    cout << "Select a random number.\nX= ";
    long int random_number, add_number, TMP, FI, M;
    cin >> random_number;

    cout << "How much do you like to add? (X + ?)\n";
    cout << "X +  ";
    cin >> add_number;
    TMP = (add_number * add_number);
    cout << TMP << " = { ( " << random_number << "  +  " << add_number << " )^2 } - {  " << random_number * random_number << " + " << 2 * random_number << " }";

    if (TMP <= life)
    {
        FI = (life - TMP);
        cout << "\nlife :" << TMP << " + " << FI << " = ";
        cin >> M;
        cout << setfill('=') << setw(40) << "=";
        cout << "\n";
    }
    else
    {
        FI = (TMP - life);
        cout << "\nlife :" << TMP << " - " << FI << " = ";
        cin >> M;
        cout << setfill('=') << setw(40) << "=";
        cout << "\n";
    }
    //NEW
    cout << "\n";
    for (int i = 0; i < print_Answer_GLOBALL.size(); i++)
    {
        cout << print_Answer_GLOBALL[i];
    }
    cout << "\n";
}

/*=========================================================================================
===========================================================================================*/

vector<string>Tabdel_list_TXT_B_VECTor()
{
    string str, x;
    vector<string>txt_list_vector;
    ifstream f13("sina_yad.txt");

    while (!(f13.eof()))
    {
        f13 >> str;
        txt_list_vector.push_back(str);

    }
    f13.close();


    return txt_list_vector;
}

/*=========================================================================================
===========================================================================================*/

void start_game_whit_your_list(vector<string>& Sina)
{
    system("cls");
    // Sina = input_list_VECTor();
     // a.pop_back();
      // menue()
            /*این بخش آسیا است*/
    int MAx_numberr_can_ues = 0;
    int Number_of_contries = 0;
    int i = 0;
    int  Word = 0;


    MAx_numberr_can_ues = Sina.size();

    while (true)
    {

        cout << "\nThe number of your lives depends on the number you input.\n";
        cout << "Number_of_contries: ";
        cin >> Number_of_contries;

        if (Number_of_contries <= MAx_numberr_can_ues)
        {
            break;
        }
        else
        {
            ERROR_tabel("Size");
        }
    }


    while (Number_of_contries > 20 || Number_of_contries < 3)
    {
        cout << ":(  ";
        ERROR_tabel("number must be between [3,20]");
        cout << "Number_of_contries: ";
        cin >> Number_of_contries;

    }

    int jon = ((Number_of_contries) / (3));

    int Game_Score_f = 0;
    int TMP_Game_score_f = 0, TMP_COUNT = 0;

    while (jon > 0 && i < Number_of_contries)
    {

        int random_number = rand() % MAx_numberr_can_ues;/*Sina.size()*/
        string random = "sina";
        random = Sina[random_number];

        if (random != "0")
        {
            print_Answer_GLOBALL.clear();
            play_NAME_GOLOBAL_FOR_YOUR_LIST.push_back(random);
            int size = 0;
            size = random.length();

            //part 0
            vector<char>print_Answer;
            for (int i = 0; i < size; i++)
            {
                print_Answer.push_back('-');
                print_Answer_GLOBALL.push_back('-');

            }
            int Game_Score = 0;

            //PART DON`T Repeat
            vector<char>Repeat_veCtor;
            int Repeat_int = 0;
            int Repeat_Flag_int = 0;
            for (int i = 0; i < size; i++)
            {
                Repeat_veCtor.push_back('~');
            }

            cout << "\t" << random << "\n";  /*                 بعدا پاک کن این فقط من باید ببینم */
            vector<char>a;
            a = make_CAPTAL(random);

            int NUMBER_OF_RAND = 1;
            char ch, SINAA;
            SINAA = front_of_the_game("your list", Game_Score_f, jon, Repeat_veCtor, size, Word);
            ch = Tabdel_B_CAPTAL_CHAR(SINAA);
            int flag = 0;
            while (jon > 0)
            {
                for (int i = 0; i < size; i++)
                {
                    if (ch == a[i])
                    {
                        // point
                        Game_Score += 1;
                        flag += 1;
                        print_Answer[i] = ch;
                        print_Answer_GLOBALL[i] = ch;
                        Game_Score_f += 1;
                        Repeat_veCtor[i] = ch;
                    }
                }

                if (flag > 0)
                {
                    for (int i = 0; i < size; i++)
                    {
                        cout << print_Answer[i];
                    }

                    cout << "\n";

                    if (Game_Score == size)
                    {
                        cout << "\n<< Next word >>";
                        break;
                        Game_Score = 0;
                    }
                    SINAA = front_of_the_game("your lis", Game_Score_f, jon, Repeat_veCtor, size, Word);
                    ch = Tabdel_B_CAPTAL_CHAR(SINAA);
                    flag = 0;
                }
                else
                {
                    MIS.push_back(ch);
                    jon -= 1;
                    if (jon <= 0)
                    {
                        system("cls");
                        Just_for_FUN_B();
                        system("color 4");
                        cout << "\n\t\t << GAME OVER >>\n";
                        cout << "Total points: " << Game_Score_f;
                        cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
                        exit(0);
                    }
                    if (jon != 0)
                    {
                        cout << "\n \tO__O" << "\nyou made a mistake.\n" << "Don`t worry you have <<" << jon << ">> chances.\n\n";

                        for (int i = 0; i < size; i++)
                        {
                            cout << print_Answer[i];
                        }
                        cout << "\n\n";

                        // input;
                        SINAA = front_of_the_game("your lis", Game_Score_f, jon, Repeat_veCtor, size, Word);
                        ch = Tabdel_B_CAPTAL_CHAR(SINAA);
                        flag = 0;
                    }

                }

            }
            TMP_Game_score_f = Game_Score_f;
            Game_Score_f = size;
            Game_Score_f = Game_Score_f + TMP_Game_score_f - size;

            TMP_LIFE_first_time_play_00 = jon;
            TMP_POint_frist_time_play_00 = Game_Score_f;
        }

        else
        {
            //  cout << "\n\t" << i << "\n";
            i -= 1;
            //  cout << "\n\t" << i << "\n";
            Word = Word - 1;
        }

        Sina[random_number] = "0";
        i = i + 1;
        Word = Word + 1;


        /*==============<<   فردا صبح یا ظهر  >>================<< MOHAM >>=====<< بیشتر روش فکر کن که کل زحمت هات با ی اشتبا خراب نشه >>================================*/

        Tabdel_Vector_Local_B_VECTor_GLOBAL(Sina, list_whit_0_and_else_GLOBAL_for_CHECK_NAME);


        /*==================================================================================*/



    }
    if (jon > 0)
    {
        system("cls");
        Just_for_FUN_B();
        system("color 2");
        cout << "\n\t<< Congratulations >>\n\t   << YOU WIN >>\n\n";
        cout << "Total points: " << Game_Score_f;
        cout << "\n" << "\t" << "\t" << "Word completed: " << Word;
        exit(0);
    }


}

/*=========================================================================================
===========================================================================================*/

void write_A_LIST()
{
    int sd = -1;

    string s;
    Sleep(12);
    system("cls");

    ofstream file_1_write_2("sina_yad.txt", ios::app);
    if (!(file_1_write_2))
    {
        ERROR_tabel("file !");
        // abort();
        return;
    }

    ifstream F_number_in("sina_yad.txt", ios::app);
    while ((!(F_number_in.eof())))
    {

        sd += 1;
        F_number_in >> s;

    }

    F_number_in.close();
    int n = 0;
    n = 20 - sd;
    cout << "your list has << " << sd << "  >>" << "elments.\t (previous game)" << "\n" << "Your list must be less than << 20 >> ." << "\n" << "So Enter at most << " << n << " >> entries.\n";
    cout << "\n\n\t\t << To end your list and back to menu ==  Write (finsh)  OR ( 0 ).  >> \n\n";



    int i = 1; // BARA V SHOMARESH

    while (true)
    {

        if (i > n)
        {

            string Y_O_n = "no";

            cout << "\t\t<< yor list is full ! >>";
            cout << "\nAnsew << yes >> or << no >>\t\t no == back to menu.";
            cout << "\nDO you want to delet any thing and finsh the  game ?";
            cin >> Y_O_n;
            if (Y_O_n == "yes")
            {
                file_1_write_2.close();
                cout << "\n";
                cout << setfill('=') << setw(32) << "==";
                cout << "\n";
                cout << "OK :)";
                dELETe_sina_yad_txt_and___Global_vector();
                return;
            }
            break;
        }

        cout << "Enter " << i << "st :";
        cin >> s;

        if (s == "finsh" || s == "0")
        {
            break;

        }
        file_1_write_2 << s << "\n";
        i += 1;

    }
    file_1_write_2.close();


}


/*=========================================================================================
===========================================================================================*/

void dELETe_sina_yad_txt_and___Global_vector()
{
    system("cls");
    cout << "\n\t (yes/no)\t no == back to menu.\n" << "DO you want to delete any thing and finsh the  game ?";
    string NO___YES = "no";
    cin >> NO___YES;
    // cout << setfill(char(205)) << setw(34) <<"  ";
    cout << "\n";
    if (NO___YES == "yes")
    {
        if (remove("sina_yad.txt") != 0)
            perror("Error deleting file << sina_yad.txt >>");
        else
            puts("File << sina_yad.txt >> successfully deleted.");


        play_NAME_GOLOBAL_FOR_YOUR_LIST.clear();
        list_whit_0_and_else_GLOBAL_for_CHECK_NAME.clear();
        exit(0);

    }
    else
    {
        menu();
    }


}


/*=========================================================================================
===========================================================================================*/

void pirnt_2_BOX_for_my_tabel()
{

    //first lin
    cout << "\t" << char(218); cout << right << setfill(char(196)) << setw(13) << char(191);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(218); cout << right << setfill(char(196)) << setw(15) << char(191); cout << "\n";

    //2st lin
    cout << "\t" << char(179); cout << "Played Names" << char(179);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(179); cout << "Remained Names" << char(179); cout << "\n";

    //3st LINE
    cout << "\t" << char(192); cout << right << setfill(char(196)) << setw(13) << char(217);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(192); cout << right << setfill(char(196)) << setw(15) << char(217); cout << "\n";
}

/*=========================================================================================
===========================================================================================*/

void pirnt_2_BOX_for_my_tabel_P_SMALLER_THAN_R()
{

    //P<R

    //first lin
    cout << "      " << char(218); cout << right << setfill(char(196)) << setw(15) << char(191);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(218); cout << right << setfill(char(196)) << setw(13) << char(191); cout << "\n";

    //2st lin
    cout << "      " << char(179); cout << "Remained Names" << char(179);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(179); cout << "Played Names" << char(179); cout << "\n";

    //3st LINE
    cout << "      " << char(192); cout << right << setfill(char(196)) << setw(15) << char(217);
    cout << right << setfill(' ') << setw(35) << char(221); cout << "\t";
    cout << char(192); cout << right << setfill(char(196)) << setw(13) << char(217); cout << "\n";
}

/*=========================================================================================
===========================================================================================*/

void  Check_Name_List(vector<string>list_whit_0_and_else, vector<string>play_NAME)
{

    if ((play_NAME_GOLOBAL_FOR_YOUR_LIST.size() == 0) && (list_whit_0_and_else_GLOBAL_for_CHECK_NAME.size() == 0))
    {




        vector<string>VQ;

        string s=" ";
        int R_int_3=0;
        ifstream R1("sina_yad.txt");


        if (!R1) 
        {
            cout << "\n";
            cout << ":(\n";
            cout << "i didn`t find << sina_yad.txt >>.\t Maby you last time input(4) << Delete Name List >>  \ntray agin and first time MAKE LIST (2==Enter Name List) then want see your list :)";
            cout << "\n";
            cout << setfill(char(196)) << setw(33) << "  ";
            cout << "\nAnswer (yes) or (no)\n";
            cout << "\n";
            return;
        }
      
        
        R1 >> s;



        while(!R1.eof())
        { 
            VQ.push_back(s);
            R_int_3 = R_int_3 + 1;
        
            R1 >> s;
        }
        cout << "\nyou didn`t play so ...\n";
        R1.close();
        pirnt_2_BOX_for_my_tabel_P_SMALLER_THAN_R();
        for (int i = 0; i < VQ.size(); i++)
        {
            cout << VQ[i] << "\n";
        }
       


        cout << "\n";
        cout << setfill(char(196)) << setw(33) << "  ";
        cout << "\n";
        cout << "\nAnswer (yes) or (no)\n";
        return;
    }





    vector<string>Remained_Names_vector_for_print;
    vector<string>print_whit_2_tabel_for_sina_YAD;
    string jds;
    for (int i = 0; i<list_whit_0_and_else.size(); i++)
    {
        if (list_whit_0_and_else[i] != "0")
        {
            jds = list_whit_0_and_else[i];
            Remained_Names_vector_for_print.push_back(jds);
        }
    }

    int PL = 0, R = 0, j = 0, G = 0, h = 0, flag = -1;

    play_NAME.push_back("SInA_YADEMELLAT  @!2 2"); // فقط برای نشانه و این که محال است کاربر همچین چیزی وار کنه
    Remained_Names_vector_for_print.push_back("SInA_YADEMELLAT  @!2 2");

    PL = play_NAME.size();
    R = Remained_Names_vector_for_print.size();

    h = PL - 1;
    G = R - 1;

    //PL>=R
    if (PL >= R)
    {
        pirnt_2_BOX_for_my_tabel();

        for (int i = 0; i < PL - 1; i++)
        {
            cout << left << setfill(' ') << setw(56) << play_NAME[i]; cout << char(221); //56===>THE UNITED KINGDOM OF GREAT BRITaIN AND NORTHERN IRELAND  <<56 CHARACTER>>    طولانی ترین کشور
            if (j < R)
            {
                if (Remained_Names_vector_for_print[j] == "SInA_YADEMELLAT  @!2 2") { flag = (flag * (-1)); }
                if (j != G) { cout << Remained_Names_vector_for_print[j] << "\n"; }
                j += 1;
            }
            if (flag == 1)
            {
                cout << "\n";
            }


        }
    }

    //R>P 
    else
    {
        //R>P
        pirnt_2_BOX_for_my_tabel_P_SMALLER_THAN_R();

        for (int i = 0; i < R - 1; i++)
        {
            cout << left << setfill(' ') << setw(56) << Remained_Names_vector_for_print[i]; cout << char(221); //56===>THE UNITED KINGDOM OF GREAT BRITaIN AND NORTHERN IRELAND  <<56 CHARACTER>>    طولانی ترین کشور
            if (j < PL)
            {
                if (play_NAME[j] == "SInA_YADEMELLAT  @!2 2") { flag = (flag * (-1)); }
                if (j != h) { cout << play_NAME[j] << "\n"; }
                j += 1;
            }
            if (flag == 1)
            {
                cout << "\n";
            }


        }


    }

    cout << "\nONE elsement is runing AND it`s deprnd on  your activity << so it`s on both list >>.\n";
    cout << "\nAnswer (yes) or (no)\n";


}

/*=========================================================================================
===========================================================================================*/

void Tabdel_Vector_Local_B_VECTor_GLOBAL(vector<string>MAHALE, vector<string>& JAHANE)
{
    JAHANE.clear();
    int size_local_vector = 0;
    string STR_local_vector = "sina_yademellat";

    size_local_vector = MAHALE.size();

    for (int i = 0; i < size_local_vector; i++)
    {
        STR_local_vector = MAHALE[i];
        JAHANE.push_back(STR_local_vector);
    }
}

/*=========================================================================================
===========================================================================================*/

void Just_for_FUN_B()
{
    system("cls");
    //  start of body

    cout << "\t  " << "\t  " << "          " << setfill(char(179)) << setw(5) << "  " << "\n";
    cout << "\t  " << "\t  " << "       " << setfill(char(179)) << setw(10) << "  " << "\n";
    cout << "\t  " << "\t  " << "    " << setfill(char(179)) << setw(15) << " " << "\n";
    cout << "\t  " << "\t  " << char(179) << setfill(char(179)) << setw(22) << " " << "\n";




    /*H*/	cout << "\t" << "\t" << char(195) << setfill(char(193)) << setw(25) << char(180) << "\n";
    /*1*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*3*/	cout << "\t" << "\t" << char(179);/*E__H*/	cout << "  " << char(218) << setfill(char(196)) << setw(4) << char(191) <</*spce*/ "\t";/*H*/	cout << "  " << char(218) << setfill(char(196)) << setw(4) << char(191) << "\t"; cout << " " << char(179) << "\n";

    /*3.0*/	cout << "\t" << "\t" << char(179);/*E__H*/	cout << "  " << char(179) << setfill(' ') << setw(4) << char(179) <</*spce*/ "\t";/*H*/	cout << "  " << char(179) << setfill(' ') << setw(4) << char(179) << "\t"; cout << " " << char(179) << "\n";

    /*4*/	cout << "\t" << "\t" << char(179);/*E__H*/	cout << "  " << char(192) << setfill(char(196)) << setw(4) << char(217) <</*spce*/ "\t";/*H*/	cout << "  " << char(192) << setfill(char(196)) << setw(4) << char(217) << "\t"; cout << " " << char(179) << "\n";

    /*5*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";
    /*6*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*7*/	cout << "\t" << "\t" << char(179);/*H_M*/ cout << "\t" << char(218) << setfill(char(178)) << setw(10) << char(191);/*|*/cout << setfill(' ') << setw(7) << char(179) << "\n";        //
    /*7*/	cout << "\t" << "\t" << char(179);/*H_M*/ cout << "\t" << char(192) << setfill(char(178)) << setw(10) << char(217);/*|*/cout << setfill(' ') << setw(7) << char(179) << "\n";        //

    /*8*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";
    /*9*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";
    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*body*/


    /*End and start of bode*/	  cout << "   " << char(218) << setfill(char(196)) << setw(13) << char(193)/*HED*/ << setfill(char(196)) << setw(25) << char(193) <</*R HAND*/ setfill(char(196)) << setw(13) << char(191) << "\n";
    /*1*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*2*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*3*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*4*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*5*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*5*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*5*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";
    /*5*/						  cout << "   " << char(179); cout << setfill(' ') << setw(51) << char(179) << "\n";

    // END OF BODY


    system("color 4");
    cout << "loding\t";
    for (int i = 0; i < 46; i++)
    {
        // system("color 7");
        cout << char(220);
        Sleep(40);

        //system("cls");
    }
    cout << char(217);
    Sleep(60);
    system("color 7");
    system("cls");

}


/*=========================================================================================
===========================================================================================*/

void menu_2_in_game()
{
    system("cls");
    cout << "\t\tEnter << 0 >>  ~~~~~~~~> Back to  the first menue.\n";
    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(25) << char(191) << "\n";
    /*2*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*4*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(7) << "Now you are in the game ";cout<<char(179) << "\n";
    /*4*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(7) << " can`t run another game "; cout << char(179) << "\n";

    /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(25) << char(217) << "\n";

    /*H*/	cout << "\t" << "\t" << char(218) << setfill(char(196)) << setw(25) << char(191) << "\n";
    /*4*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(7) << "1.countinue (or) the end"; cout << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*7*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "2.Edit Name List "; cout << setfill(' ') << setw(8) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*8*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "3.Check Name List"; cout << setfill(' ') << setw(8) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";

    /*8*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(8) << "4.Delete Name List"; cout << setfill(' ') << setw(7) << char(179) << "\n";

    /*10*/	cout << "\t" << "\t" << char(179); cout << setfill(' ') << setw(25) << char(179) << "\n";
    /*E*/	cout << "\t" << "\t" << char(192) << setfill(char(196)) << setw(25) << char(217) << "\n";



    //input

    string a;

    /*E*/	cout << "\t" << "\t" << "Enter number that you chose: ";

    //just number :)
    cin >> a;
    if (only_number_0_00_1234_input_string(a))
    {
        cout << "finsh."; //???????????
        return;
    }
    if (a == "0")
    {
        menu();
        return;

    }

    if (a == "00")
    {
        front_00_p_and_JO(TMP_LIFE_first_time_play_00, TMP_POint_frist_time_play_00);
        return;

    }

    int a_int = atoi(a.c_str());      // tabdel str b int
      /*
      0==> men.. 1==>start  !!! 2==>Enter  !!! 3==>C... !!! 4==>DLET
      */


      //1 ==> start

    if (a_int == 1)
    {
        cout << "\ncountinue ==> C   (or)   the end ===> end\n";
        string A;
        cout << "ENTER: ";
        cin >> A;
        if(A=="end"){ exit(0); }
        else
        {
            FLAG_TO_countinue += 1;
        }
        return;
    }

    //2==>Enter

    if (a_int == 2)
    {
        //  cout<<"2==>Enter"; // pak sh vad

        string SINA_YADEMMELLAT78="NO";

        while (SINA_YADEMMELLAT78 != "yes")
        {
            system("cls");
            cout << "\nPlease enter only << 0 >> to complate the list to finish.\t  the meaning of << finsh >> is back to first menue.\n";
            cout << "\nAnswer (yes) or (no).\n";
            cout << "Did you understand? ";
            cin >> SINA_YADEMMELLAT78;
        }
        write_A_LIST();

        menu_2_in_game();

        return;

    }

    //3==>C...
    if (a_int == 3)
    {



        //Tabdel_Vector_Local_B_VECTor_GLOBAL(, list_whit_0_and_else_GLOBAL_for_CHECK_NAME);

        Check_Name_List(list_whit_0_and_else_GLOBAL_for_CHECK_NAME, play_NAME_GOLOBAL_FOR_YOUR_LIST);

        //cout << "3==>C..."; // pak sh vad

        string Y_0_n;
        cout << "\n << To continue game == input << countinue or  no >>\n";
        cout << "Do you want  back to menue? ";
        cin >> Y_0_n;
        if (Y_0_n == "yes")
        {
            menu();
            FLAG_TO_countinue = 0;
            return;
        }
        if (Y_0_n == "countinue")
        {

            FLAG_TO_countinue += 1;
            menu_2_in_game();
            return;
        }

        return;
    }


    //4==>DLET
    if (a_int == 4)
    {
        dELETe_sina_yad_txt_and___Global_vector();

        return;
    }



}


/*==================================================
=========================FINSH======================*/
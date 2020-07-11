#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>

using namespace std;
//all functions used
void stats();
void time_delay();
void Pikachu_info(int x);
void jibran_info(int x);
void mashal_info(int x);
void pikachu_moveset();
void pikachu_turn(int x);
void jibran_moveset();
void jibran_turn(int x);
void mashal_moveset();
void mashal_turn(int x);
void mahad_moveset();
void mahad_turn(int x);
void mahad_info(int x);
void iman_moveset();
void iman_info(int x);
void iman_turn(int x);

int accuracy=0;
int skip=0;
int poison1=0;
int poison2=0;
 //player1 info
    double player1_hp;
    double player1_speed;
    double player1_fakespeed;
    string player1_name;
    string pokemon_name1;
    string pokemon_type1;
    string pokemon_weakness1;
    string pokemon_resistance1;

    //player2 info
    string player2_name;
    string pokemon_name2;
    string pokemon_type2;
    string pokemon_resistance2;
    string pokemon_weakness2;
    string player1_move;
    string player2_move;
    double player2_hp;
    double player2_speed;
    double player2_fakespeed;




int main()
{


    //game

    int flag=0;
    int flag_confirm=0;
    int flag2=0;
    int flag2_confirm=0;
    int player;


    string confirm;

    cout<<"Welcome to the better version of Pokemon"<<endl;
    cout<<"Player 1, enter your name: ";
    cin>>player1_name;
    cout<<"Player 2, enter your name: ";
    cin>>player2_name;
    while(flag_confirm==0)
{
    while(flag==0)
    {
        cout<<player1_name<<"! choose your Pokemon: (Pikachu/Jibran/Mashal/Mahad/Iman) "<<endl;
        cin>>pokemon_name1;
        if(pokemon_name1=="Pikachu"||pokemon_name1=="pikachu")
    {
        Pikachu_info(1);  //calls function to display information for pikachu
        flag=1;
    }
        else if(pokemon_name1=="Jibran"||pokemon_name1=="jibran")
    {
        jibran_info(1); //calls function to display information for jibran
        flag=1;
    }
    else if(pokemon_name1=="Mahad"||pokemon_name1=="mahad")
    {
        mahad_info(1); //calls function to display information for jibran
        flag=1;
    }
    else if(pokemon_name1=="Mashal"||pokemon_name1=="mashal")
    {
        mashal_info(1); //calls function to display information for mashal
        flag=1;
    }
    else if(pokemon_name1=="Iman"||pokemon_name1=="iman")
    {
        iman_info(1); //calls function to display information for mashal
        flag=1;
    }
        else
    {
        cout<<"invalid selection"<<endl;
    }
    }
    cout<<"confirm selection? (yes or no): ";
    cin>>confirm;
    if(confirm=="yes")
    {
        system("cls");
        break;
    }
    flag=0;
    system("cls");

}
    while(flag2_confirm==0)
{
    while(flag2==0)
    {
        cout<<player2_name<<"! choose your Pokemon: (Pikachu/Jibran/Mashal/Iman/Mahad) ";
        cin>>pokemon_name2;
        if(pokemon_name2=="Jibran"||pokemon_name2=="jibran")
    {
        jibran_info(2);
        flag2=1;
    }
        else if(pokemon_name2=="Pikachu"||pokemon_name2=="pikachu")
    {
        Pikachu_info(2);
        flag2=1;
    }
    else if(pokemon_name2=="Iman"||pokemon_name2=="iman")
    {
        iman_info(2); //calls function to display information for mashal
        flag2=1;
    }
    else if(pokemon_name2=="Mahad"||pokemon_name2=="mahad")
    {
        mahad_info(2);
        flag2=1;
    }
    else if(pokemon_name2=="Mashal"||pokemon_name2=="mashal")
    {
        mashal_info(2); //calls function to display information for mashal
        flag2=1;
    }
        else
        {
            cout<<"invalid selection"<<endl;
        }
    }
    cout<<"confirm selection? (yes or no): ";
    cin>>confirm;
    if(confirm=="yes")
    {
        system("cls");
        break;
    }
    flag2=0;
    system("cls");
}

    while(player1_hp>0&&player2_hp>0)
    {
         if(poison1==1)
            {
                cout<<pokemon_name2<<" is hurt by poison!"<<endl;
                player2_hp=player2_hp-20;
                time_delay();
                system("cls");
                stats();
                if(player2_hp<=0)
                break;
            }
             if(poison2==1)
            {
                cout<<pokemon_name1<<" is hurt by poison!"<<endl;
                player1_hp=player1_hp-20;
                time_delay();
                system("cls");
                stats();
                if(player1_hp<=0)
                break;
            }
        skip=0;
        system("cls");
        stats();                //shows updated stats after every turn
        if(player1_speed>player2_speed||player1_speed==player2_speed)
        {
            player=1;
            //cout<<player1_name<<" goes first!"<<endl;
            if(pokemon_name1=="Pikachu"||pokemon_name1=="pikachu")
            {
                pikachu_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                continue;
            }

            else if (pokemon_name1=="Jibran"||pokemon_name1=="jibran")
             {
                jibran_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                continue;
             }
             else if (pokemon_name1=="Iman"||pokemon_name1=="iman")
             {
                iman_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                continue;
             }
            else if (pokemon_name1=="Mashal"||pokemon_name1=="mashal")
             {
                mashal_turn(player);
                if(player2_hp<=0)
                break;
             }
             else if (pokemon_name1=="Mahad"||pokemon_name1=="mahad")
             {
                mahad_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                continue;
             }
             cout<< "\n \n";
             player=2;
             if(pokemon_name2=="Pikachu"||pokemon_name2=="pikachu")
            {
                pikachu_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                {
                    player2_speed=player1_speed+1;
                    continue;
                }
            }
            else if (pokemon_name2=="Jibran"||pokemon_name2=="jibran")
             {
                jibran_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                {
                    player2_speed=player1_speed+1;
                    continue;
                }
             }
             else if (pokemon_name2=="Iman"||pokemon_name2=="iman")
             {
                iman_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                {
                    player2_speed=player1_speed+1;
                    continue;
                }
             }
             else if (pokemon_name2=="Mahad"||pokemon_name2=="mahad")
             {
                mahad_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                {
                    player2_speed=player1_speed+1;
                    continue;
                }
             }
        else if (pokemon_name2=="Mashal"||pokemon_name2=="mashal")
             {
                mashal_turn(player);
                if(player1_hp<=0)
                break;
             }
        }
        if(player2_speed>player1_speed)
        {
            player=2;
            if(pokemon_name2=="Pikachu"||pokemon_name2=="pikachu")
            {
                pikachu_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                continue;
            }
            else if (pokemon_name2=="Jibran"||pokemon_name2=="jibran")
             {
                jibran_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                continue;
             }
             else if (pokemon_name2=="Iman"||pokemon_name2=="iman")
             {
                iman_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                continue;
             }
             else if (pokemon_name2=="Mahad"||pokemon_name2=="mahad")
             {
                mahad_turn(player);
                if(player1_hp<=0)
                break;
                if(skip==1)
                continue;
             }
            else if (pokemon_name2=="Mashal"||pokemon_name2=="mashal")
             {
                mashal_turn(player);
                if(player1_hp<=0)
                break;
             }
             cout<< "\n \n";
             player=1;
             if(pokemon_name1=="Pikachu"||pokemon_name1=="pikachu")
            {
                pikachu_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                {
                    player1_speed=player2_speed+1;
                    continue;
                }
            }
            else if (pokemon_name1=="Jibran"||pokemon_name1=="jibran")
             {
                jibran_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                {
                    player1_speed=player2_speed+1;
                    continue;
                }
             }
             else if (pokemon_name1=="Iman"||pokemon_name1=="iman")
             {
                iman_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                {
                    player1_speed=player2_speed+1;
                    continue;
                }
             }
             else if (pokemon_name1=="Mahad"||pokemon_name1=="mahad")
             {
                mahad_turn(player);
                if(player2_hp<=0)
                break;
                if(skip==1)
                {
                    player1_speed=player2_speed+1;
                    continue;
                }
             }
           else if (pokemon_name1=="Mashal"||pokemon_name1=="mashal")
             {
                mashal_turn(player);
                if(player2_hp<=0)
                    break;
             }
        } //ending if loop for if player2speed>player1speed
    }//ending while loop for if player1hp>player2hp
    if(player1_hp<=0)
    {
        cout<<endl<<endl<<player2_name<<" WINS!!!";
    }
    else
    {
        cout<<endl<<endl<<player1_name<<" WINS!!!";
    }
    return 0;
    }




void Pikachu_info(int x)
{
    if (x==1)
    {
        player1_hp=1000;
        player1_speed=50;
        player1_fakespeed=50;
        pokemon_type1="electric";
        pokemon_weakness1="dragon";
        pokemon_resistance1="water";

    }
    else
    {
        player2_hp=1000;
        player2_speed=50;
        player2_fakespeed=50;
        pokemon_type2="electric";
        pokemon_weakness2="dragon";
        pokemon_resistance2="water";

    }

    cout<<"Type: Electric"<<endl<<"Weakness: Dragon"<<endl<<"Resistance: Water"<<endl<<"HP: 1000"<<endl<<"Speed: 50"<<endl<<"Moveset:"<<endl<<"1.Tackle: 30 (Accuracy 100%)"<<endl<<"2.Thunderbolt: 50 (Accuracy 60%) (Paralysis: 30% chance that opponent skips next turn)"<<endl<<"3.Volt-tackle: 120 (Accuracy 40%) (Paralysis: 30% chance that opponent skips next turn)"<<endl<<"4.Iron-tail: 200 (Accuracy 30%)"<<endl;;
    return;
}
void jibran_info(int x)
{
    if (x==1)
    {
        player1_hp=500;
        player1_speed=30;
        player1_fakespeed=30;
        pokemon_type1="normal";
        pokemon_resistance1="fairy";
        pokemon_weakness1="water";

        //cout<<player1_hp<<endl;
    }
    else
    {
        player2_hp=500;
        player2_speed=30;
        player2_fakespeed=30;
        pokemon_type2="normal";
        pokemon_resistance2="fairy";
        pokemon_weakness2="water";

        //cout<<player2_hp<<endl;
    }
    cout<<"Type: Normal"<<endl<<"Weakness: Water"<<endl<<"Resistance: None"<<endl<< "HP: 500"<<endl<<"Speed: 30"<<endl<<"Moveset:"<<endl<<"Tackle: 30 (100% accuracy)"<<endl<<"kneebash: 100 (60% accuracy) (30% chance jibran dies)"<<endl<<"Bark: 20 (Accuracy 80%) (40% paralysis chance)"<<endl<<"Kntness: (Accuracy 50%) (Does random damage)"<<endl;;
    return;
}
void jibran_moveset()
{
  cout<<"Moveset:"<<endl<<"Tackle: 30 (100% accuracy)"<<endl<<"Kneebash: 100 (60% accuracy) (30% chance jibran dies)"<<endl<<"Bark: 20 (Accuracy 80%) (40% paralysis chance)"<<endl<<"Kntness: (Accuracy 50%) (Does random damage)"<<endl;
    return;
}
void pikachu_moveset()
{
    cout<<"Moveset:"<<endl<<"1.Tackle: 30 (Accuracy 100%)"<<endl<<"2.Thunderbolt: 50 (Accuracy 60%) (Paralysis: 30% chance that opponent skips next turn)"<<endl<<"3.Volt-tackle: 120 (Accuracy 40%) (Paralysis: 30% chance that opponent skips next turn)"<<endl<<"4.Iron-tail: 200 (Accuracy 30%)"<<endl;
    return;
}
void stats()
{
    cout.width(20); cout << left << "Player name: ";
cout.width(20); cout << left << player1_name;
cout.width(20); cout << left << player2_name<<endl;
cout.width(20); cout << left << "Pokemon: ";
cout.width(20); cout << left << pokemon_name1;
cout.width(20); cout << left << pokemon_name2<<endl;
cout.width(20); cout << left << "Type: ";
cout.width(20); cout << left << pokemon_type1;
cout.width(20); cout << left << pokemon_type2<<endl;
cout.width(20); cout << left << "Resistance: ";
cout.width(20); cout << left << pokemon_resistance1;
cout.width(20); cout << left << pokemon_resistance2<<endl;
cout.width(20); cout << left << "Weakness: ";
cout.width(20); cout << left << pokemon_weakness1;
cout.width(20); cout << left << pokemon_weakness2<<endl;
cout.width(20); cout << left << "HP: ";
cout.width(20); cout << left << player1_hp;
cout.width(20); cout << left << player2_hp<<endl;
cout.width(20); cout << left << "Speed: ";
cout.width(20); cout << left << player1_fakespeed;
cout.width(20); cout << left << player2_fakespeed<<endl;

    return;
}
void mahad_info(int x)
{
    if (x==1)
    {
        player1_hp=1200;
        player1_speed=45;
        player1_fakespeed=45;
        pokemon_type1="dragon";
        pokemon_resistance1="electric";
        pokemon_weakness1="fairy";

        //cout<<player1_hp<<endl;
    }
    else
    {
        player2_hp=1200;
        player2_speed=45;
        player2_fakespeed=45;
        pokemon_type2="dragon";
        pokemon_resistance2="electric";
        pokemon_weakness2="fairy";

        //cout<<player2_hp<<endl;
    }
    cout<<"Type: Dragon"<<endl<<"Weakness: Fairy"<<endl<<"Resistance: Dragon"<<endl<< "HP: 1200"<<endl<<"Speed: 45"<<endl<<"Moveset:"<<endl<<"1.Tackle: 30 (100% accuracy)"<<endl<<"2.Head-bang: 100 (Accuracy 70%) (Paralysis: 40% chance opponent skips turn) (-50hp if it misses)"<<endl<<"3.Dolphin: 120 (50% Accuracy) (30% chance to regain 50HP)"<<endl<<"4.Hidden-power (100% accuracy) (Does random damage)"<<endl;
    return;
}
void mashal_info(int x)
{
    if (x==1)
    {
        player1_hp=700;
        player1_speed=40;
        player1_fakespeed=40;
        pokemon_type1="fairy";
        pokemon_resistance1="dragon";
        pokemon_weakness1="fairy";

        //cout<<player1_hp<<endl;
    }
    else
    {
        player2_hp=700;
        player2_speed=40;
        player2_fakespeed=40;
        pokemon_type2="fairy";
        pokemon_resistance2="dragon";
        pokemon_weakness2="fairy";

        //cout<<player2_hp<<endl;
    }
    cout<<"Type: Fairy"<<endl<<"Weakness: Fairy"<<endl<<"Resistance: Dragon"<<endl<< "HP: 700"<<endl<<"Speed: 40"<<endl<<"Moveset:"<<endl<<"Tackle: 30 (100% accuracy)"<<endl<<"Potatocross: 100 (60% accuracy) (30% chance opponent dies)"<<endl<<"3.Sickness: (50% Accuracy) (Poison: 20 damage every turn)"<<endl<<"4.Rest (30% Accuracy) (+300HP)"<<endl;;
    return;
}
void mashal_moveset()
{
    cout<<"Moveset:"<<endl<<"1.Tackle: 30 (Accuracy 100%)"<<endl<<"2.Potatocross: 100 (Accuracy 60%) (30% chance opponent dies)"<<endl<<"3.Sickness: (50% Accuracy) (Poison: 20 damage every turn)"<<endl<<"4.Rest (30% Accuracy) (+300HP)"<<endl;
    return;
}
void mahad_moveset()
{
    cout<<"1.Tackle: 30 (100% accuracy)"<<endl<<"2.Head-bang: 100 (Accuracy 70%) (Paralysis: 40% chance opponent skips turn) (-50hp if it misses)"<<endl<<"3.Dolphin: 120 (50% Accuracy) (30% chance to regain 50HP)"<<endl<<"4.Hidden power (100% accuracy) (Does random damage)"<<endl;
     return;
}
void time_delay()
{
    for(double i=0;i<1000000000;i++)
                    {
                        int x=0;
                    }
                    return;
}
void mashal_turn(int x)
{
    int loop=0;
    while(loop==0)
    {
        system("cls");
        stats();
        cout<< "\n \n";
    if(x==1)
    {
                mashal_moveset();
                cout<<player1_name<<"! Choose your move!"<<endl;
                cin>>player1_move;
                if(player1_move=="tackle"||player1_move=="Tackle")
            {
                loop=1;
                cout<<pokemon_name1<<" used Tackle!"<<endl;
                time_delay();
                if(pokemon_type2=="fairy"||pokemon_type2=="dragon")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-30-15;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="normal")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                 player2_hp=player2_hp-30;
                 system("cls");
                 stats();
                }

            }
            else if (player1_move=="Potatocross"||player1_move=="potatocross")
            {
                loop=1;
                cout<<pokemon_name1<<" used Potatocross!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                    if(pokemon_type2=="fairy"||pokemon_type2=="dragon")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-100-50;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="normal")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-100;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name1<<" fkd u up"<<endl<<"prepare to die...";
                    player2_hp=0;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Sickness"||player1_move=="sickness")
            {
                loop=1;
                cout<<pokemon_name1<<" used Sickness!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                    poison1=1;
                    cout<<pokemon_name1<<" sneezed on you!!!"<<endl;
                    cout<<pokemon_name2<<" is now poisoned!"<<endl;
                    time_delay();
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Rest"||player1_move=="rest")
            {
                loop=1;
                cout<<pokemon_name1<<" used Rest!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=3)
                {
                    cout<<pokemon_name1<<" is now fresh AF!"<<endl;
                    cout<<"Regaining health..."<<endl;
                    time_delay();
                    player1_hp=player1_hp+300;
                    if(player1_hp>700)
                    {
                        player1_hp=700;
                    }
                    system("cls");
                    stats();
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }


           }
           else
           {
                mashal_moveset();
                cout<<player2_name<<"! Choose your move!"<<endl;
                cin>>player2_move;
                if(player2_move=="tackle"||player2_move=="Tackle")
            {
               loop=1;
               cout<<pokemon_name2<<" used tackle!"<<endl;
               time_delay();
               if(pokemon_type1=="fairy"||pokemon_type2=="dragon")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-30-15;
                    system("cls");
                    stats();
                }
                else if(pokemon_type2=="normal")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-30;
                system("cls");
                stats();
                }
            }
            else if (player2_move=="Potatocross"||player2_move=="potatocross")
            {
                loop=1;
                cout<<pokemon_name2<<" used Potatocross!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                   if(pokemon_type1=="fairy"||pokemon_type2=="dragon")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-100-50;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="normal")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-100;
                system("cls");
                stats();
                }
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name2<<" fkd u up"<<endl<<"prepare to die...";
                    player1_hp=0;
                    time_delay();
                    system("cls");
                    stats();

                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Sickness"||player2_move=="sickness")
            {
                loop=1;
                cout<<pokemon_name2<<" used Sickness!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                    cout<<pokemon_name2<<" sneezed on you!!!"<<endl;
                    cout<<pokemon_name1<<" is now poisoned!"<<endl;
                    time_delay();
                    poison2=1;
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Rest"||player2_move=="rest")
            {
                loop=1;
                cout<<pokemon_name2<<" used Rest!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=3)
                {
                    cout<<pokemon_name2<<" is now fresh AF!"<<endl;
                    cout<<"Regaining health..."<<endl;
                    time_delay();
                    player2_hp=player2_hp+300;
                    if(player2_hp>700)
                    {
                        player2_hp=700;
                    }
                    system("cls");
                    stats();
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else
            {
                cout<<"Invalid selection!";
                time_delay();
                continue;
            }


           }
    }
}
void jibran_turn(int x)
{
    int loop=0;
    while(loop==0)
    {
        system("cls");
        stats();
        cout<< "\n \n";
    if(x==1)
    {
                jibran_moveset();
                cout<<player1_name<<"! Choose your move!"<<endl;
                cin>>player1_move;
                if(player1_move=="tackle"||player1_move=="Tackle")
            {
                loop=1;
                cout<<pokemon_name1<<" used Tackle!"<<endl;
                time_delay();
                if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();


                }
                else
                {
                 player2_hp=player2_hp-30;
                 system("cls");
                 stats();
                }

            }
            else if (player1_move=="Kneebash"||player1_move=="kneebash")
            {
                loop=1;
                cout<<pokemon_name1<<" used kneebash!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                 if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-100;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name1<<" fkd up"<<endl<<"Initiating self-destruct...";
                    player1_hp=0;
                    time_delay();
                    system("cls");
                    stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Bark"||player1_move=="bark")
            {
                loop=1;
                cout<<pokemon_name1<<" used Bark!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=8)
                {

                 if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-20+10;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-20;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=4)
                {
                    cout<<pokemon_name2<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Kntness"||player1_move=="kntness")
            {
                loop=1;
                cout<<pokemon_name1<<" used kntness!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                 int damage;
                 damage=(int) (((double)rand()/(RAND_MAX+1))*149+1);
                 cout<<damage<<"!!!"<<endl;
                 time_delay();
                 if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-damage+(damage/2);
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-damage;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }

            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }

           }
           else
           {
               jibran_moveset();
                cout<<player2_name<<"! Choose your move!"<<endl;
                cin>>player2_move;
                if(player2_move=="tackle"||player2_move=="Tackle")
            {
               loop=1;
               cout<<pokemon_name2<<" used tackle!"<<endl;
               time_delay();
                if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-30;
                system("cls");
                stats();
                }
            }
            else if (player2_move=="Kneebash"||player2_move=="Kneebash")
            {
                loop=1;
                cout<<pokemon_name2<<" used kneebash!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                 if(pokemon_type2=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-100;
                system("cls");
                stats();
                }
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name2<<" fkd up"<<endl<<"initiating self-destruct";
                    player1_hp=0;
                    time_delay();
                    system("cls");
                    stats();

                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Bark"||player2_move=="bark")
            {
                loop=1;
                cout<<pokemon_name2<<" used bark!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=8)
                {

                if(pokemon_type1=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-20+10;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-20;
                system("cls");
                stats();
                }
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=4)
                {
                    cout<<pokemon_name1<<" has been paralyzed "<<endl<<"Skipping their next turn...";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();

                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Kntness"||player2_move=="kntness")
            {
                loop=1;
                cout<<pokemon_name2<<" used kntness!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                 int damage;
                 damage=(int) (((double)rand()/(RAND_MAX+1))*149+1);
                 cout<<damage<<"!!!"<<endl;
                 time_delay();
                 if(pokemon_type1=="water")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-damage+(damage/2);
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-damage;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }

            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }
            }

    }
}

           void pikachu_turn(int x)
           {
               int loop=0;
               while(loop==0)
               {
                   system("cls");
                   stats();
                   cout<< "\n \n";
               if(x==1)
    {
                pikachu_moveset();
                cout<<player1_name<<"! Choose your move!"<<endl;
                cin>>player1_move;
                if(player1_move=="tackle"||player1_move=="Tackle")
            {
                loop=1;
                cout<<pokemon_name1<<" used Tackle!"<<endl;
                time_delay();
                if(pokemon_type2=="water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-30-15;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();


                }
                else
                {
                 player2_hp=player2_hp-30;
                 system("cls");
                 stats();
                }

            }
            else if (player1_move=="Thunderbolt"||player1_move=="thunderbolt")
            {
                loop=1;
                cout<<pokemon_name1<<" used Thunderbolt!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                    if(pokemon_type2=="Water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-50-25;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-50+25;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-50;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name2<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Volt-tackle"||player1_move=="volt-tackle")
            {
                loop=1;
                cout<<pokemon_name1<<" used Volt-tackle!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=4)
                {
                    if(pokemon_type2=="Water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-120-60;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-120+60;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-120;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name2<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Iron-tail"||player1_move=="iron-tail")
            {
                loop=1;
                cout<<pokemon_name1<<" used Iron-tail!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=3)
                {
                    if(pokemon_type2=="Water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-200-100;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-200+100;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-200;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }

           }
           else
           {
               pikachu_moveset();
                cout<<player2_name<<"! Choose your move!"<<endl;
                cin>>player2_move;
                if(player2_move=="tackle"||player2_move=="Tackle")
            {
               loop=1;
               cout<<pokemon_name2<<" used tackle!"<<endl;
               time_delay();
               if(pokemon_type1=="water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-30-15;
                    system("cls");
                    stats();
                }
                else if(pokemon_type1=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-30;
                system("cls");
                stats();
                }
            }
            else if (player2_move=="Thunderbolt"||player2_move=="thunderbolt")
            {
                loop=1;
                cout<<pokemon_name2<<" used thunderbolt!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                   if(pokemon_type1=="water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-50-25;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-50+25;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-50;
                system("cls");
                stats();
                }
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name1<<"Has been paralyzed "<<endl<<"Skipping their next turn...";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();

                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Volt-tackle"||player2_move=="volt-tackle")
            {
                loop=1;
                cout<<pokemon_name2<<" used Volt-tackle!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=3)
                {
                    if(pokemon_type1=="Water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-120-60;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-120+60;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-120;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name1<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Iron-tail"||player2_move=="iron-tail")
            {
                loop=1;
                cout<<pokemon_name2<<" used Iron-tail!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=3)
                {
                    if(pokemon_type1=="Water")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-200-100;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="dragon")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-200+100;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-200;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }

           }
               }
           }
           void mahad_turn(int x)
           {
               int loop=0;
               while(loop==0)
               {
                   system("cls");
                   stats();
                   cout<< "\n \n";
               if(x==1)
    {
                mahad_moveset();
                cout<<player1_name<<"! Choose your move!"<<endl;
                cin>>player1_move;
                if(player1_move=="tackle"||player1_move=="Tackle")
            {
                loop=1;
                cout<<pokemon_name1<<" used Tackle!"<<endl;
                time_delay();
                if(pokemon_type2=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-30-15;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();


                }
                else
                {
                 player2_hp=player2_hp-30;
                 system("cls");
                 stats();
                }

            }
            else if (player1_move=="Head-bang"||player1_move=="head-bang")
            {
                loop=1;
                cout<<pokemon_name1<<" used Head-bang!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=7)
                {
                    if(pokemon_type2=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-100-50;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-100;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=4)
                {
                    cout<<pokemon_name2<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!"<<endl;
                    cout<<pokemon_name1<<" hurt himself!"<<endl;
                    player1_hp=player1_hp-50;
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Dolphin"||player1_move=="dolphin")
            {
                loop=1;
                cout<<pokemon_name1<<" used Dolphin!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                    if(pokemon_type2=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-120-60;
                    system("cls");
                    stats();


                }
                else if(pokemon_type2=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-120+60;
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-120;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name1<<"'s Dolphin powers have been activated!"<<endl<<"Regenerating some health...";
                    player1_hp=player1_hp+50;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player1_move=="Hidden-power"||player1_move=="hidden-power")
            {
                loop=1;
                cout<<pokemon_name1<<" used Hidden-power!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=10)
                {
                 int damage;
                 damage=(int) (((double)rand()/(RAND_MAX+1))*249+1);
                 cout<<damage<<"!!!"<<endl;
                 time_delay();
                 if(pokemon_type2=="electric")
                 {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-damage-(damage/2);
                    system("cls");
                    stats();
                 }
                 else if(pokemon_type2=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-damage+(damage/2);
                    system("cls");
                    stats();
                }
                else
                {
                player2_hp=player2_hp-damage;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }

            }
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }

           }
           else
           {
            mahad_moveset();
                cout<<player2_name<<"! Choose your move!"<<endl;
                cin>>player2_move;
                if(player2_move=="tackle"||player2_move=="Tackle")
            {
                loop=1;
                cout<<pokemon_name2<<" used Tackle!"<<endl;
                time_delay();
                if(pokemon_type1=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-30-15;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-30+15;
                    system("cls");
                    stats();


                }
                else
                {
                 player1_hp=player1_hp-30;
                 system("cls");
                 stats();
                }

            }
            else if (player2_move=="Head-bang"||player2_move=="head-bang")
            {
                loop=1;
                cout<<pokemon_name2<<" used Head-bang!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=7)
                {
                    if(pokemon_type1=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-100-50;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-100+50;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-100;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=4)
                {
                    cout<<pokemon_name1<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!"<<endl;
                    cout<<pokemon_name2<<" hurt himself!"<<endl;
                    player2_hp=player2_hp-50;
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Dolphin"||player2_move=="dolphin")
            {
                loop=1;
                cout<<pokemon_name2<<" used Dolphin!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                    if(pokemon_type1=="electric")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-120-60;
                    system("cls");
                    stats();


                }
                else if(pokemon_type1=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-120+60;
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-120;
                system("cls");
                stats();
                }


                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=3)
                {
                    cout<<pokemon_name2<<"'s Dolphin powers have been activated!"<<endl<<"Regenerating some health...";
                    player2_hp=player2_hp+50;
                    time_delay();
                    system("cls");
                    stats();


                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }
            }
            else if (player2_move=="Hidden-power"||player2_move=="hidden-power")
            {
                loop=1;
                cout<<pokemon_name2<<" used Hidden-power!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=10)
                {
                 int damage;
                 damage=(int) (((double)rand()/(RAND_MAX+1))*249+1);
                 cout<<damage<<"!!!"<<endl;
                 time_delay();
                 if(pokemon_type1=="electric")
                 {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-damage-(damage/2);
                    system("cls");
                    stats();
                 }
                 if(pokemon_type1=="fairy")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-damage+(damage/2);
                    system("cls");
                    stats();
                }
                else
                {
                player1_hp=player1_hp-damage;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"attack missed!";
                    time_delay();
                    system("cls");
                    stats();
                }

           }
           }
               }
           }
    void iman_turn(int x)
{
     int loop=0;
  while (loop==0)
  {
        system("cls");
        stats();
        cout<< "\n \n";
        if (x==1)
        {
                iman_moveset();
                cout<<player1_name<<"! Choose your move!"<<endl;
                cin>>player1_move;
                if (player1_move=="Poke"||player1_move=="poke")
                {
                    loop=1;
                cout<<pokemon_name1<<" used Poke!"<<endl;
                time_delay();
                if(pokemon_type2=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-30-15;
                    system("cls");
                    stats();
                }
                else if (pokemon_type2=="electric")
                {
                    cout<<"It's not very effective!";
                    time_delay();
                    player2_hp=player2_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                 player2_hp=player2_hp-30;
                 system("cls");
                 stats();
                }
                }
                else if (player1_move=="Salt"||player1_move=="salt")
            {
                loop=1;
                cout<<pokemon_name1<<" used Salt!"<<endl;
                time_delay();
                 if(pokemon_type2=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-50-25;
                    system("cls");
                    stats();
                }
                else if (pokemon_type2=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-50+25;
                    system("cls");
                    stats();

                }
                else
                {
                player2_hp=player2_hp-50;
                system("cls");
                stats();
                }

                //check for poison attack

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=2)
                {
                    poison1=1;
                    cout<<pokemon_name2<<" has been poisoned."<<endl;
                    time_delay();
                }

                //check for paralysis

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=2)
                {
                    cout<<pokemon_name2<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();
                }
            } //ends the salt move
           else if (player1_move=="Hoe"||player1_move=="hoe")
            {
                loop=1;
                cout<<pokemon_name1<<" used hoe-ish activities!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                 if(pokemon_type2=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-50-25;
                    system("cls");
                    stats();
                }
                else if (pokemon_type2=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-50+25;
                    system("cls");
                    stats();

                }
                else
                {
                player2_hp=player2_hp-50;
                system("cls");
                stats();
                }

                //check for +100HP

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=5)
                {
                    player1_hp=player1_hp+100;
                    cout<<pokemon_name1<<" has gained HP!"<<endl;
                    time_delay();
                    system("cls");
                    stats();
                }
                else
                {
                    player1_hp=player1_hp-50;
                    cout<<pokemon_name1<<" has lost 50HP!"<<endl;
                    time_delay();
                    system("cls");
                    stats();
                }

                }
                else
                {
                    cout<<"Attack missed!"<<endl;
                    time_delay();
                    system("cls");
                    stats();
                }
            } //ends the hoe move
            else if (player1_move=="Clumsy"||player1_move=="clumsy")
            {
                loop=1;
                 cout<<pokemon_name1<<" used clumsy!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                 if(pokemon_type2=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player2_hp=player2_hp-150-75;
                    system("cls");
                    stats();
                }
                else if (pokemon_type2=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player2_hp=player2_hp-150+75;
                    system("cls");
                    stats();

                }
                else
                {
                player2_hp=player2_hp-150;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"Attack missed!"<<endl;
                    player1_hp=player1_hp-50;
                    time_delay();
                    system("cls");
                    stats();
                }
            }//ends clumsy loop
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }
        }//ends the if x==1 loop
        else
        {
                iman_moveset();
                cout<<player2_name<<"! Choose your move!"<<endl;
                cin>>player2_move;
                if (player2_move=="Poke"||player2_move=="poke")
                {
                    loop=1;
                cout<<pokemon_name2<<" used Poke!"<<endl;
                time_delay();
                if(pokemon_type1=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-30-15;
                    system("cls");
                    stats();
                }
                else if (pokemon_type1=="electric")
                {
                    cout<<"It's not very effective!";
                    time_delay();
                    player1_hp=player1_hp-30+15;
                    system("cls");
                    stats();
                }
                else
                {
                 player1_hp=player1_hp-30;
                 system("cls");
                 stats();
                }
                }
                else if (player2_move=="Salt"||player2_move=="salt")
            {
                loop=1;
                cout<<pokemon_name2<<" used Salt!"<<endl;
                time_delay();
                 if(pokemon_type1=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-50-25;
                    system("cls");
                    stats();
                }
                else if (pokemon_type1=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-50+25;
                    system("cls");
                    stats();

                }
                else
                {
                player1_hp=player1_hp-50;
                system("cls");
                stats();
                }

                //check for poison attack

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=2)
                {
                    poison2=1;
                    cout<<pokemon_name1<<" has been poisoned."<<endl;
                    time_delay();
                }

                //check for paralysis

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=2)
                {
                    cout<<pokemon_name1<<" has been paralyzed"<<endl<<"Skipping their next turn";
                    skip=1;
                    time_delay();
                    system("cls");
                    stats();
                }
            } //ends the salt move
           else if (player2_move=="Hoe"||player2_move=="hoe")
            {
                loop=1;
                cout<<pokemon_name2<<" used hoe-ish activities!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=5)
                {
                 if(pokemon_type1=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-50-25;
                    system("cls");
                    stats();
                }
                else if (pokemon_type2=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-50+25;
                    system("cls");
                    stats();

                }
                else
                {
                player1_hp=player1_hp-50;
                system("cls");
                stats();
                }

                //check for +100HP

                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if(accuracy<=5)
                {
                    player2_hp=player2_hp+100;
                    cout<<pokemon_name2<<" has gained HP!"<<endl;
                    time_delay();
                    system("cls");
                    stats();
                }
                else
                {
                    player2_hp=player2_hp-50;
                    cout<<pokemon_name2<<" has lost 50HP!"<<endl;
                    time_delay();
                    system("cls");
                    stats();
                }

                }
                else
                {
                    cout<<"Attack missed!"<<endl;
                    system("cls");
                    stats();
                }
            } //ends the hoe move
            else if (player2_move=="Clumsy"||player2_move=="clumsy")
            {
                loop=1;
                 cout<<pokemon_name2<<" used clumsy!"<<endl;
                time_delay();
                accuracy=(int) (((double)rand() / (RAND_MAX+1)) * 9 + 1);
                if (accuracy<=6)
                {
                 if(pokemon_type1=="fire")
                {
                    cout<<"It's super effective!";
                    time_delay();
                    player1_hp=player1_hp-150-75;
                    system("cls");
                    stats();
                }
                else if (pokemon_type1=="electric")
                {
                    cout<<"Not very effective!";
                    time_delay();
                    player1_hp=player1_hp-150+75;
                    system("cls");
                    stats();

                }
                else
                {
                player1_hp=player1_hp-150;
                system("cls");
                stats();
                }
                }
                else
                {
                    cout<<"Attack missed!"<<endl;
                    player2_hp=player2_hp-50;
                    system("cls");
                    stats();
                }
            }//ends clumsy loop
            else
            {
                cout<<"Invalid selection!"<<endl;
                time_delay();
                continue;
            }
        }
  }//ends while loop
    return;
}
void iman_info(int x)
{
    if (x==1)
    {
        player1_hp=700;
        player1_speed=40;
        player1_fakespeed=40;
        pokemon_type1="water";
        pokemon_resistance1="fire";
        pokemon_weakness1="electric";

    }
    else
    {
        player2_hp=700;
        player2_speed=40;
        player2_fakespeed=40;
        pokemon_type2="water";
        pokemon_resistance2="fire";
        pokemon_weakness2="electric";

    }
    cout<<"Type: Water"<<endl<<"Weakness: Electric"<<endl<<"Resistance: Fire"<<endl<< "HP: 700"<<endl<<"Speed: 40"<<endl<<"Moveset:"<<endl<<"Poke: 30 (100% accuracy)"<<endl<<"Salt: 50 (100% accuracy) (Paralysis: 20% chance opponent skips turn)(Poison: 20% chance opponent loses 20HP each turn)"<<endl<<"Hoe-ing around (hoe)= 50 (50% accuracy)(50% Iman gains 100HP, 50% chance Iman loses 50HP)"<<endl<<"Clumsy= 150 (60% accuracy, -50HP if miss)"<<endl;
    return;
}
void iman_moveset()
{
  cout<<"Moveset:"<<endl<<"Poke: 30 (100% accuracy)"<<endl<<"Salt: 50 (100% accuracy) (Paralysis: 20% chance opponent skips turn)(Poison: 20% chance opponent loses 20HP each turn)"<<endl<<"Hoe-ing around (hoe)= 50 (50% accuracy)(50% Iman gains 100HP, 50% chance Iman loses 50HP)"<<endl<<"Clumsy= 150 (60% accuracy, -50HP if miss)"<<endl;
    return;
}




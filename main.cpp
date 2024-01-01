#include <iostream>
using namespace std;

char cubes[] = {'0','1','2','3','4','5','6','7','8','9'};
int number = 0;
int _Round = 0;
bool playing =true;

void empty_line(){
    for (int loop = 0 ; loop <= 2; loop++){
        for (int i = 0; i<=2; i++){
            cout << "  ";
            }
            if (loop != 2){
                cout << '|';}
        }
    cout << endl;
}

void not_empty_line(char A , char B , char C){
    cout <<  "  " << A << "   " << '|'<<  "  " << B << "   " <<'|'<<  "  " << C << "   " <<endl;
}

void line (){
    for (int i = 0;i <=20; i++){
        cout << '-';
    }
    cout << endl;
}

void draw (){

    empty_line();
    not_empty_line(cubes[1] , cubes[2] , cubes[3]);
    empty_line();
    line();

    empty_line();
    not_empty_line(cubes[4] , cubes[5] , cubes[6]);
    empty_line();
    line();

    empty_line();
    not_empty_line(cubes[7] , cubes[8] , cubes[9]);
    empty_line();

}

void check(){
if (cubes[1] == cubes[2] && cubes[1] == cubes[3]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [1];
    playing = false;
}

else if (cubes[1] == cubes[5] && cubes[1] == cubes[9]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [1];
    playing = false;
}  

else if (cubes[1] == cubes[4] && cubes[1] == cubes[7]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [1];
    playing = false;
}   

else if (cubes[2] == cubes[5] && cubes[2] == cubes[8]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [2];
    playing = false;
}   

else if (cubes[3] == cubes[5] && cubes[3] == cubes[7]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [3];
    playing = false;
} 

else if (cubes[3] == cubes[6] && cubes[3] == cubes[9]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [3];
    playing = false;
}  

else if (cubes[4] == cubes[5] && cubes[4] == cubes[6]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [4];
    playing = false;
}

else if (cubes[7] == cubes[8] && cubes[7] == cubes[9]){
    cout << "\n\n";
    cout << "Winner Round "<<++_Round<< endl;
    draw();
    cout << "The winner is " << cubes [7];
    playing = false;
}   
}

void x_round (){
    cout << "\n\n";
    cout << "Round "<<_Round<< endl;
    draw();
    do{do {
    cout << "X Turn :- ";cin >> number;}
    while (!(number >=1 && number <=9));}
    while (!(cubes[number] != 'x'&& cubes[number]!= 'O'));
    cubes[number] = 'x';
    check();
    _Round++;
}

void o_round (){
    cout << "\n\n";
    cout << "Round "<<_Round<< endl;
    draw();
    do{do {
    cout << "O Turn :- ";cin >> number;}
    while (!(number >=1 && number <=9));}
    while (!(cubes[number] != 'x'&& cubes[number]!= 'O'));
    cubes[number] = 'O';
    check();
    _Round++;
}

int main(){
    while (playing){
        x_round();
        if (playing == false){
            break;
            
        }
        if (_Round == 9){
            cout << "\n\nDraw Round" << endl;
            draw();
            cout << "Have a Nice day !";
            break;
        }
        o_round();
        if (playing == false){
            break;
            
        }
        if (_Round == 9){
            cout << "\n\nDraw Round" << endl;
            draw();
            cout << "Draw Have a Nice day !";
            break;
        }
    }

    return 1123;
}

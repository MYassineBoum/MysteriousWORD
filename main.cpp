#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "--------------WELCOME TO FINDMYS!--------------" << endl;
    cout << "------------------------------------MY.BOUMEHDI" << endl;
    int tries=15,posFound,boo=0;
    cout << endl <<"--------------Number of tries: " << tries << "--------------" << endl << endl;

    char input,myst_found[]="GITHUB" /*The word we need our user to find.*/,myst[]="******";

    for(int i=0;i<15;i++){
        cout<<"Enter a letter: ";
        cin>>input;
        if(input=='G' || input=='I' || input=='T' || input=='H' || input=='U' || input=='B'){
            for(int j=0;j<strlen(myst_found);j++){
                if(input==myst_found[j]){
                    posFound=j;
                    break;
                }
            }
            myst[posFound]=input;
            cout<<endl<<"________["<<myst<<"]________"<<endl;
            cout<<endl<<"_______________!!!!KEEP GOING!!!!_______________"<<endl;
            tries=tries-1;
            if(i<14)
                cout<<endl<<"--------------Only "<<tries<<" left!--------------"<<endl<<endl;
            else
                cout<<endl<<"------------NO MORE "<<tries<<" left!!------------"<<endl<<endl;
        }
        else{
            tries=tries-1;
            cout<<endl<<"_______________!!!!WRONG ANSWER!!!!_______________"<<endl;
            if(i<14)
                cout<<endl<<"--------------Only "<<tries<<" left!--------------"<<endl<<endl;
            else
                cout<<endl<<"----------SORRY, YOU HAVE TO TRY AGAIN!!----------"<<endl<<endl;
        }
        if(strcmp(myst_found,myst)==0){
            cout<<endl<<"--------------VERY GOOD JOB!--------------"<<endl;
            break;
        }
    }

}

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    system("cls");

    int a[20], b[20], banyakA, banyakB;

    cout<<"Irisan & Gabungan 2 Himpunan"<<endl;
    cout<<"============================"<<endl<<endl;
    
    cout<<"Masukkan banyaknya anggota himpunan A : ";
    cin>>banyakA;
    for(int i=0; i<banyakA; i++){
        cout<<"Masukkan anggota "<<i+1<<" : ";
        cin>>a[i];
    }

    cout<<"Masukkan banyaknya anggota himpunan B : ";
    cin>>banyakB;
    for(int j=0; j<banyakB; j++){
        cout<<"Masukkan anggota "<<j+1<<" : ";
        cin>>b[j];
    }

    cout<<endl;
    cout<<"Himpunan A = {";
    for(int i=0; i<banyakA; i++){
        if(i==banyakA-1){
            cout<<a[i];
        }else{
            cout<<a[i]<<", ";
        }
    }
    cout<<"}";

    cout<<endl;
    cout<<"Himpunan B = {";
    for(int i=0; i<banyakB; i++){
        if(i==banyakB-1){
            cout<<b[i];
        }else{
            cout<<b[i]<<", ";
        }
    }
    cout<<"}";

    cout<<endl<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"A irisan B = {";
    for(int i=0; i<banyakA; i++){
        for(int j=0; j<banyakB; j++){
            if(a[i]==b[j]){
                if(i==banyakA-1){
                    cout<<a[i];
                }else{
                    cout<<a[i]<<", ";
                }
                
            }
        }
    }
    cout<<"}";

    cout<<endl<<endl;
    cout<<"A gabungan B = {";
    for(int i=0; i<banyakA; i++){
        cout<<a[i]<<", ";
    }
    for(int i=0; i<banyakB; i++){
        if(i==banyakB-1){
            cout<<b[i];
        }else{
            cout<<b[i]<<", ";
        }
    }
    cout<<"}";

    cout<<endl<<endl;
    cout<<"Tekan sembarang untuk ke luar ...";
    getch();
    return 0;
}
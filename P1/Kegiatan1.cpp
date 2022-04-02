#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    system("cls");

    int a[20], b[20], banyakA, banyakB, temp, hasil[20], q=0;

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
    cout<<"A irisan B = { ";
    for(int i=0; i<banyakA; i++){
        for(int j=0; j<banyakB; j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
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
    cout<<"A selisih B = { ";
    for(int i=0; i<banyakA; i++){
        temp=0;
        for(int j=0; j<banyakB; j++){
            if(a[i]==b[j]){
                temp=1;
            }
        }
        if(temp==0){           
            cout<<a[i]<<" ";
        }
    }

    cout<<"}";

    cout<<endl<<endl;
    cout<<"B selisih A = { ";
    for(int i=0; i<banyakB; i++){
        temp=0;
        for(int j=0; j<banyakA; j++){
            if(b[i]==a[j]){
                temp=1;
            }
        }
        if(temp==0){
            cout<<b[i]<<" ";           
        }
    }

    cout<<"}";

    cout<<endl<<endl;
    cout<<"Tekan sembarang untuk ke luar ...";
    getch();
    return 0;
}
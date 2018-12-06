#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	int plh;
	int top = 0, i;
	int sisa;
	char no[20][20],
	nama[20][20],
	pss[20][20];
		sasa :
		cout<<"==================="<<endl;
		cout<<"Memu Option :"<<endl;
		cout<<"==================="<<endl;
		cout<<"1. PUSH STACK "<<endl;
		cout<<"2. POP STACK "<<endl;
		cout<<"3. TAMPIL STACK "<<endl;
		cout<<"4. Keluar"<<endl;
		cout<<"====================="<<endl;
		cout<<"Masukan Pilihan :";
		cin>>plh;
			switch(plh){
			case 1 :
				if (top == 3)
				{
					cout<<"Maaf Tumpukan Penuh "<<endl;
				}
				else 
				{
				
					cout<<"Masukan No Punggung :";
					cin>>no[top+1];
					cout<<"Masukan Nama   : ";
					cin>>nama[top+1];
					cout<<"Masukan Posisi : ";
					cin>>pss[top+1];
                                        top++;
					cout<<"Tumpukan Berhasil Dimasukan"<<endl;
					
				}
				break;
				case 2:
					if (top<1)
					{
						cout<<"Tumpukan Sudah Kosong !"<<endl;
					}
					else 
					{
						cout<<"Tumpukan yang dikeluarkan :"<<top<<endl;
						cout<<"No Punggung	: "<<no[top]<<endl;
						cout<<"Nama : "<<nama[top]<<endl;
						cout<<"Posisi	:"<<pss[top]<<endl;
						top--;
						cout<<"Tumpukan Sudah Dikeluarkan !"<<endl;
					}

					break;
					case 3 :
						cout<<"No	| Nama Pemain | Posisi	"<<endl;
						if (top==0)
						cout<<" Tumpukan Kosong !"<<endl;
						else 
						for (i =1; i<= top; i++)
						{
							cout<<setiosflags (ios::left)<<setw(8)<<no[i];
							cout<<setiosflags (ios::left)<<setw(17)<<nama[i];
							cout<<setiosflags (ios::left)<<setw(10)<<pss[i]<<endl;
						}
					case 4 :
						cout<<"Keluar";
						break;
					}
			goto sasa;
				}

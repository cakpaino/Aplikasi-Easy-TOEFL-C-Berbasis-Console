#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
//--------------------------------------------------------------------------------------------------------------
//------------------------------------------------POSITION------------------------------------------------------

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
//-------------------------------------------------------------------------------------------------------------
//------------------------------------------------MENU AWAL----------------------------------------------------
void menu()                         
{
	system("cls");
	system("color 4E");
	//deklarasi variabel bertipe integer
	int *p,jumlahnilai = 0,x,countdown;
	//deklarasi variabel bertipe char
	char pilih[1],m;
	//deklarasi variabel bertipe double
	double a,b,c;
	//deklarasi array bertipe float
	float nomer[]={0,1,2,3,4,5};
	gotoxy(52,1);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||";
	gotoxy(52,2);cout<<"====================================================";
    gotoxy(52,3);cout<<"===              E.A.S.Y  T.O.E.F.L              ==="; 
	gotoxy(52,4);cout<<"===             DIFFERENT THAN OTHER             ===";
	gotoxy(52,5);cout<<"====================================================";
	gotoxy(52,6);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||  ";
	gotoxy(65,9);cout<<"##########################\n";
	gotoxy(65,10);cout<<"#       1. MATERI        #\n";
    gotoxy(65,11);cout<<"##########################";
	gotoxy(65,14);cout<<"##########################";
	gotoxy(65,15);cout<<"#       2. LATIHAN       #";
	gotoxy(65,16);cout<<"##########################";
	gotoxy(65,19);cout<<"##########################";
	gotoxy(65,20);cout<<"#       3. EXIT          #";            
    gotoxy(65,21);cout<<"##########################";
	gotoxy(65,23);cout<<"Pilih menu : "; cin>>pilih[1];
	switch(pilih[1])
	{
		case '1': //menu 1
			system("cls");
			//Tampilkan menu 1
			gotoxy(52,1);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||";
			gotoxy(52,2);cout<<"====================================================";
			gotoxy(52,3);cout<<"===                  M.A.T.E.R.I                 ==="; 
			gotoxy(52,4);cout<<"====================================================";
			gotoxy(52,5);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||  ";
			gotoxy(65,9);cout<<"##########################\n";
			gotoxy(65,10);cout<<"#    1. NOUN PHRASE      #\n";
			gotoxy(65,11);cout<<"##########################";
			gotoxy(65,14);cout<<"##########################";
			gotoxy(65,15);cout<<"#    2. VERB PHARASE     #";
			gotoxy(65,16);cout<<"##########################";
			gotoxy(65,19);cout<<"##########################";
			gotoxy(65,20);cout<<"#    3. QUESTION TAG     #";            
			gotoxy(65,21);cout<<"##########################";
	        gotoxy(65,24);cout<<"##########################";
			gotoxy(65,25);cout<<"#    4. COMPARISON DEGREE#";            
			gotoxy(65,26);cout<<"##########################";
			gotoxy(65,28);cout<<" Pilih menu : "; cin>>x;
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Materi 1-------------------------------------------------
			if(x==1)//kondisi 1
			{
				system("cls");
				//Tampilkan Ouput
				gotoxy(33,2);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,3);cout<<" $$                                          NOUN PHRASE                                            $$";
				gotoxy(33,4);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,6);cout<<" ##################################################################################################### ";
				gotoxy(33,7);cout<<" # 1. Count and Non Count Nouns                                                                      #";
				gotoxy(33,8);cout<<" # Count nouns merupakan suatu bentuk kata benda yang mana dapat dihitung jumlahnya.                 #";
				gotoxy(33,9);cout<<" #                                                                                                   #";
				gotoxy(33,10);cout<<" # Example :  1.	Book ---> one book, two books, three books,.....                              #";
				gotoxy(33,11);cout<<" #            2.	Student ---> one student, two students,....                                   #";
				gotoxy(33,12);cout<<" #                                                                                                   #";
				gotoxy(33,13);cout<<" # Non count nouns merupakan suatu bentuk kata benda yang tidak dapat dihitung. Misalnya ada kata    #"; 
				gotoxy(33,14);cout<<" # milk. Untuk menyatakan berapa jumlah dari milk tersebut, kita tidak bisa langsung menyebutkan one #";
				gotoxy(33,15);cout<<" # milk atau two milks. Karena milk itu sendiri merupakan kata benda yang tidak bisa diukur          #";
				gotoxy(33,16);cout<<" # maupun dihitung. Untuk menyatakan ukuran dari kata milk tersebut, kita harus menambahkan kata     #";
				gotoxy(33,17);cout<<" # glass of pada milk tersebut. Sehingga menjadi                                                     #";
				gotoxy(33,18);cout<<" #                                                                                                   #";
				gotoxy(33,19);cout<<" # glass of milk ----> one glass of milk, two glasses of milk,...                                    #";
				gotoxy(33,20);cout<<" #                                                                                                   #";
				gotoxy(33,21);cout<<" # Berikut ini merupakan kumpulan kata yang mengikuti count nouns dan non count nouns                #";
				gotoxy(33,22);cout<<" #                                                                                                   #";
				gotoxy(33,23);cout<<" #         ------------------------------------------------------------------------------            #";
				gotoxy(33,24);cout<<" #        |             Count nouns            |          Non Count nouns                |           #";
				gotoxy(33,25);cout<<" #         ------------------------------------------------------------------------------            #";
				gotoxy(33,26);cout<<" #        |         a(n), the, some, any       |           The, some, any                |           #";
				gotoxy(33,27);cout<<" #        |       this, that, these, those     |            This,that                    |           #";
				gotoxy(33,28);cout<<" #        |        none, one, two, three       |              None                       |           #";
				gotoxy(33,29);cout<<" #        |                Many                | Much (usually in negatives or questions)|           #";
				gotoxy(33,30);cout<<" #        |              A lot of              |             A lot of                    |           #";
				gotoxy(33,31);cout<<" #        |      A large/a great number of     |         A large amount of               |           #";
				gotoxy(33,32);cout<<" #        |              (a) few               |            (a) little                   |           #";
				gotoxy(33,33);cout<<" #        |       	Fewer...than            |           Less.....than                 |           #";
				gotoxy(33,34);cout<<" #        |           More....than             |          More.......than                |           #";
				gotoxy(33,35);cout<<" #         ------------------------------------------------------------------------------            #";
				gotoxy(33,36);cout<<" #                                                                                                   #";
				gotoxy(33,37);cout<<" # 2. A, An,And                                                                                      #";
				gotoxy(33,38);cout<<" # The digunakan pada hal yang spesifik (telah jelas ataupun telah diterangkan sebelumnya)           #";
				gotoxy(33,39);cout<<" # meliputi: person (orang), thing (benda), maupun idea (pemikiran).                                 #";
				gotoxy(33,40);cout<<" # Kata ini digunakan sebelum countable noun (kata benda dapat dihitung)                             #";
				gotoxy(33,41);cout<<" # maupun uncountable noun (kata benda yang tidak dapat dihitung).                                   #";
				gotoxy(33,42);cout<<" #                                                                                                   #";
				gotoxy(33,43);cout<<" # Example : 1. The boy in the corner is my friend. (the speaker and the listener know which boy)    #";
				gotoxy(33,44);cout<<" #           2. The earth is round (there is only one earth)                                         #";
				gotoxy(33,45);cout<<" #                                                                                                   #";
				gotoxy(33,46);cout<<" #                                                                                                   #";
				gotoxy(33,47);cout<<" # A atau an                                                                                         #"; 
				gotoxy(33,48);cout<<" # Digunakan pada indefinite articles. Kata sandang ini digunakan pada hal yang tidak spesifik atau  #";
				gotoxy(33,49);cout<<" # belum pernah diterangkan sebelumnya, meliputi: person (orang), thing(benda),atau idea (pemikiran).#";
				gotoxy(33,50);cout<<" # Kata ini hanya digunakan sebelum singular countable noun (kata benda dapat dihitung tunggal).     #";
				gotoxy(33,51);cout<<" #                                                                                                   #";
				gotoxy(33,52);cout<<" # Example : 1. A baseball is round  (general-means all baseballs)                                   #";
				gotoxy(33,53);cout<<" #           2. I saw a boy in the street (we don't know which boy)                                  #";
				gotoxy(33,54);cout<<" #####################################################################################################";
				gotoxy(33,56);cout<<"  Press Any key To Back to Main Menu !!! ";				
				getch();
				menu();
			}
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Materi 2-------------------------------------------------
			else if(x==2)//kondisi 2
			{
				system("cls");
				//Tampilkan Ouput
				gotoxy(33,2);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,3);cout<<" $$                                          VERB PHRASE                                            $$";
				gotoxy(33,4);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,6);cout<<" #####################################################################################################";
				gotoxy(33,7);cout<<" #1. Simple Present Tense                                                                             #";
				gotoxy(33,8);cout<<" # Merupakan bentuk kalimat yang menyatakan aktivitas atau kegiatan sehari-hari. Kata kerja yang      #"; 
				gotoxy(33,9);cout<<" # digunakan dalam bentuk ini menggunakan kata kerja bentuk pertama (Verb 1).  Apabila subject berupa #";
				gotoxy(33,10);cout<<" # kata ganti orang ketiga ( he,she, it), maka pada bagian belakang verb akan ditambahkan '-s' atau   #";
				gotoxy(33,11);cout<<" # '-es'. Pada umumnya bentuk simple present tense diikuti oleh frequency adverb yaitu always,        #";
				gotoxy(33,12);cout<<" # usually, often, sometimes, seldom, rarely,never.                                                   #";
				gotoxy(33,13);cout<<" #                                                                                                    #";
				gotoxy(33,14);cout<<" #    ---------------------------------------------------------------------------------------------   #";
				gotoxy(33,15);cout<<" #   |            Subject          |        Frequency Object      |      Simple Present Verb       |  #";
				gotoxy(33,16);cout<<" #    ---------------------------------------------------------------------------------------------   #";
				gotoxy(33,17);cout<<" #   |              He             |            Always            |   Bob always comes to class    |  #";
				gotoxy(33,18);cout<<" #   |              She            |            Usually           |   Mary usually comes to class  |  #";
				gotoxy(33,19);cout<<" #   |              We             |            Often             |   We often watch TV at night   |  #";
				gotoxy(33,20);cout<<" #   |              I              |            Sometimes         |   I sometimes go to restaurant |  #";
				gotoxy(33,21);cout<<" #   |              They           |            Seldom            |   They seldom go to the movies |  #";
				gotoxy(33,22);cout<<" #   |              You            |            Rarely            |   rarely makes a mistake       |  #";
				gotoxy(33,23);cout<<" #   |              It             |            Never             |   It never walk alone          |  #";
				gotoxy(33,24);cout<<" #    ---------------------------------------------------------------------------------------------   #";
				gotoxy(33,25);cout<<" #                                                                                                    #";
				gotoxy(33,26);cout<<" # 2. Simple Present Contionous Tense                                                                 #";
				gotoxy(33,27);cout<<" # Merupakan bentuk kalimat yang menyatakan aktivitas yang berlangsung pada saat ini.                 #";
				gotoxy(33,28);cout<<" # Kata kerja yang digunakan dalam bentuk ini merupakan kata kerja bentuk pertama (Verb 1) yang       #";
				gotoxy(33,29);cout<<" # ditambah imbuhan -ing. Penulisan bentuk present contionous tense dapat dirumuskan sebagai berikut. #";
				gotoxy(33,30);cout<<" #                                                                                                    #";
				gotoxy(33,31);cout<<" #                                 S + tobe + V1 - ing + O                                            #";
				gotoxy(33,32);cout<<" #                                                                                                    #";
				gotoxy(33,33);cout<<" #                      ----------------------------------------------                                #";
				gotoxy(33,34);cout<<" #                     |          Tobe         |        Subject       |                               #";
				gotoxy(33,35);cout<<" #                      ----------------------------------------------                                #";
				gotoxy(33,36);cout<<" #                     |                       |         He           |                               #";
				gotoxy(33,37);cout<<" #                     |          is           |         she          |                               #";
				gotoxy(33,38);cout<<" # -t, -n, atau -ne untuk regular verb atau bentuk yang tidak konsisten pada irregular verb.          #";
				gotoxy(33,39);cout<<" #                                                                                                    #";
				gotoxy(33,40);cout<<" # 4. Past Perfect Tense                                                                              #";
				gotoxy(33,41);cout<<" # Past perfect tense dibentuk dengan auxiliary verb 'had', dan past participle (verb-3).             #";
				gotoxy(33,42);cout<<" # Had digunakan baik untuk singular maupun plural subject. Sedangkan past participle dapat berupa    #";
				gotoxy(33,43);cout<<" # irregular atau regular verb.                                                                       #";
				gotoxy(33,44);cout<<" #                                                                                                    #";
				gotoxy(33,45);cout<<" # Positif (+) = S + had + past participle(V-3)                                                       #";
				gotoxy(33,46);cout<<" # Example : My brother had slept.                                                                    #";
				gotoxy(33,47);cout<<" #                                                                                                    #";
				gotoxy(33,48);cout<<" # Negatif (-) = S + Had + Not + Past participle (V-3)                                                #";
				gotoxy(33,49);cout<<" # Example : My brother hadn't slept                                                                  #";
				gotoxy(33,50);cout<<" #                                                                                                    #";
				gotoxy(33,51);cout<<" # Interogratif = Had + S + Past participle (V-3)                                                     #";
				gotoxy(33,52);cout<<" # Example : Had my brother slept ?                                                                   #";
				gotoxy(33,53);cout<<" #                                                                                                    #";
				gotoxy(33,54);cout<<" ######################################################################################################";
				gotoxy(33,56);cout<<"  Press Any key To Back to Main Menu !!! ";
				getch();
				menu();
			}
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Materi 3-------------------------------------------------
			else if(x==3)//kondisi 3
			{
				system("cls");
				//Tampilkan Ouput
				gotoxy(33,2);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,3);cout<<" $$                                          QUESTION TAG                                           $$";
				gotoxy(33,4);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,6);cout<<" #####################################################################################################";
				gotoxy(33,7);cout<<" # Merupakan kalimat pertanyaan yang letaknya di akhir atau diujung kalimat. Fungsi dari question tag#"; 
				gotoxy(33,8);cout<<" # adalah untuk meminta persetujuan. Pada umumnya struktur dari question tag terdiri dari kalimat    #";
				gotoxy(33,9);cout<<" # dan pertanyaan. Dalam penulisan question tag, ada beberapa aturan yang harus diperhatikan :       #";
				gotoxy(33,10);cout<<" #                                                                                                   #";
				gotoxy(33,11);cout<<" # 1. Jika kalimatnya positif maka question nya negatif.                                             #";
				gotoxy(33,12);cout<<" # Example :  You understand the lesson, don't you ?                                                 #";
				gotoxy(33,13);cout<<" #                                                                                                   #";
				gotoxy(33,14);cout<<" # 2. Jika kalimatnya negatif maka questionnya positif.                                              #"; 
				gotoxy(33,15);cout<<" # Example :  She doesn't love me, does she ?                                                        #";
				gotoxy(33,16);cout<<" #                                                                                                   #";			
				gotoxy(33,17);cout<<" # 3. Jika kalimatnya bersifat invit atau mengajak, maka questionnya menggunakan shall.              #"; 
				gotoxy(33,18);cout<<" # Example :  Let's go shopping, shall we ?                                                          #";
				gotoxy(33,19);cout<<" #                                                                                                   #";			
				gotoxy(33,20);cout<<" # 4.	Jika kalimatnya berupa imperative, maka questionnya berupa will.                              #"; 
				gotoxy(33,21);cout<<" # Example :  Close the door ! will you ?                                                            #";
				gotoxy(33,22);cout<<" #####################################################################################################";
				gotoxy(33,24);cout<<"  Press Any key To Back to Main Menu !!!";
				getch();
				menu();
			}
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Materi 4-------------------------------------------------
			else if(x==4)//kondisi 4
			{
				system("cls");
				//Tampilkan Ouput
				gotoxy(33,2);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,3);cout<<" $$                                         COMPARISON DEGREE                                       $$";
				gotoxy(33,4);cout<<" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
				gotoxy(33,6);cout<<" #####################################################################################################";
				gotoxy(33,7);cout<<" # 1.	Positif Degree                                                                                #";
				gotoxy(33,8);cout<<" # Merupakan kalimat perbandingan yang menyatakan kesetaraan. Kalimat positif degree                 #";
				gotoxy(33,9);cout<<" # dapat dinyatakan dengan rumus :                                                                   #";
				gotoxy(33,10);cout<<" #                                                                                                   #";
				gotoxy(33,11);cout<<" #                               S + as adjective/adverb as + O                                      #";
				gotoxy(33,12);cout<<" #                                                                                                   #";
				gotoxy(33,13);cout<<" # Example : 1. Rani is as tall as with Rina (adjective).                                            #";
				gotoxy(33,14);cout<<" #           2. John sings as well as his sister (adverb).                                           #";
				gotoxy(33,15);cout<<" #                                                                                                   #";
				gotoxy(33,16);cout<<" # 2.	Comparative degree                                                                            #";
				gotoxy(33,17);cout<<" # Merupakan kalimat perbandingan yang menyatakan perbandingan 2 hal. Jika terdapat satu             #";
				gotoxy(33,18);cout<<" # suku kata adjective/adverb maka akhirannya ditambahkan -er + than                                 #";
				gotoxy(33,19);cout<<" #                                                                                                   #";
				gotoxy(33,20);cout<<" #                       S + V + adjective/adverb -er + than + O                                     #";
				gotoxy(33,21);cout<<" #                                                                                                   #";
				gotoxy(33,22);cout<<" # Example : 1.	John's car runs better than Mary's car.                                       #";
				gotoxy(33,23);cout<<" #           2.	February has fever days than March.                                           #";
				gotoxy(33,24);cout<<" #                                                                                                   #";
				gotoxy(33,25);cout<<" # Jika terdapat dua atau lebih suku kata adjective atau adverb maka awalan dari suku kata tersebut  #";
				gotoxy(33,26);cout<<" # diberi kata more atau less.                                                                       #";
				gotoxy(33,27);cout<<" #                                                                                                   #";
				gotoxy(33,28);cout<<" #                       S + V + more/less +  adjective/adverb + than + O                            #";
				gotoxy(33,29);cout<<" #                                                                                                   #";
				gotoxy(33,30);cout<<" # Example : 1.	Dyah is more beautiful than Rina.                                             #";
				gotoxy(33,31);cout<<" #           2.	This year's exhibit is less impressive than last year's                       #";
				gotoxy(33,32);cout<<" #####################################################################################################";
				gotoxy(33,34);cout<<"  Press Any key To Back to Main Menu !!! ";
				getch();
				menu();
			}
			break;
		case '2': //menu 2
			system("cls");
			system("color 4E");
			//Tampilkan menu 2
			gotoxy(52,1);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||";
			gotoxy(52,2);cout<<"====================================================";
			gotoxy(52,3);cout<<"===                L.A.T.I.H.A.N                 ==="; 
			gotoxy(52,4);cout<<"====================================================";
			gotoxy(52,5);cout<<"  ||||||||||||||||||||||||||||||||||||||||||||||||  ";
			gotoxy(65,9);cout<<"##########################";
			gotoxy(65,10);cout<<"#        LATIHAN 1       #";
			gotoxy(65,11);cout<<"##########################";
			gotoxy(65,14);cout<<"##########################";
			gotoxy(65,15);cout<<"#        LATIHAN 2       #";
			gotoxy(65,16);cout<<"##########################";
			gotoxy(65,18);cout<<" Pilih menu : "; cin>>x;
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Latihan 1------------------------------------------------
			if(x==1)//kondisi 1
			{
				system("cls");
				gotoxy(10,2);cout<<" "<<nomer[1]<<". Although he wrote her for several times, he has never met his daughter,.....?";
				gotoxy(12,4);cout<<"  A.	Did he          B.	Is he            C.	Does he                D.	Has he ";
				//input jawaban
				gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
				if(m == 'D' || m == 'd')
				{
					//rumus jumlah nilai jika benar
					jumlahnilai = jumlahnilai + 20;
				}
				else if(m == 'a' || m == 'A' || m == 'b' || m == 'B' || m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika salah
					jumlahnilai = jumlahnilai - 10;
					//Tampilan jika jawaban salah
					gotoxy(13,8);cout<<"Jawaban Anda Salah";
					getch();
				}
				system("cls");
				gotoxy(10,2);cout<<" "<<nomer[2]<<". Mariah Carey, accompanied by other judges,..... delibreting to decide the winner of American Idol now";
				gotoxy(14,4);cout<<"  A.	Are              B.	Is               C.	Were                    D.	Was ";
				//input jawaban
				gotoxy(14,6);cout<<" Jawaban Anda : "; cin>>m;
				if(m == 'B' || m == 'b')
				{
					//rumus jumlah nilai jika benar
					jumlahnilai = jumlahnilai + 20;
				}
				else if(m == 'a' || m == 'A' || m == 'd' || m == 'D' || m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika salah
					jumlahnilai = jumlahnilai - 10;
					//Tampilan jika jawaban salah
					gotoxy(15,8);cout<<"Jawaban Anda Salah";
					getch();
				}
				system("cls");
				gotoxy(10,2);cout<<" "<<nomer[3]<<".	Even though the next generation phone is thin, theprogram is....the last one.";
				gotoxy(14,4);cout<<"  A.	As twice complicated as                       C.	Twice as complicated as \n";
				gotoxy(14,5);cout<<"  B.	Twice more complicated than                   D.	More complicated than twice\n";
				//input jawaban
				gotoxy(14,7);cout<<" Jawaban Anda : "; cin>>m;
				if(m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika benar
					jumlahnilai = jumlahnilai + 20;
				}
				else if(m == 'a' || m == 'A' || m == 'b' || m == 'B' || m == 'd' || m == 'D')
				{
					//rumus jumlah nilai jika salah
					jumlahnilai = jumlahnilai - 10;
					//Tampilan jika jawaban salah
					gotoxy(15,9);cout<<"Jawaban Anda Salah";
					getch();
				}
				system("cls");
				gotoxy(10,2);cout<<" "<<nomer[4]<<". Nias.... covering an area of 5,121,2 km2, is the largest of the islands off sumatra";
				gotoxy(12,4);cout<<"  A.	Is that an island      B.	An island      C.	Is an island        D.	That an island ";
				//input jawaban
				gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
				if(m == 'b' || m == 'B')
				{
					//rumus jumlah nilai jika benar
					jumlahnilai = jumlahnilai + 20;
				}
				else if(m == 'a' || m == 'A' || m == 'd' || m == 'D' || m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika salah
					jumlahnilai = jumlahnilai - 10;
					//Tampilan Jika Jawaban Salah
					gotoxy(13,8);cout<<"Jawaban Anda Salah";
					getch();
				}
				system("cls");
				gotoxy(10,2);cout<<" "<<nomer[5]<<". Alex.... many backshoes before he received his special mechanic license";
				gotoxy(12,4);cout<<"  A.	Has repaired     B.	Repaired         C.	Repairing        D.	Had repaired";
				//input jawaban
				gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
				if(m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika benar
					jumlahnilai = jumlahnilai + 20;
				}
				else if(m == 'a' || m == 'A' || m == 'd' || m == 'D' || m == 'c' || m == 'C')
				{
					//rumus jumlah nilai jika salah
					jumlahnilai = jumlahnilai - 10;
					//Tampilan Jika Jawaban Salah
					gotoxy(13,8);cout<<"Jawaban Anda Salah";
					getch();
				}
				//p menunjuk alamat dari jumlahnilai
				p=&jumlahnilai;
				//output nilai
				gotoxy(12,11);cout<<" Total nilai : "<<*p;
				//Kembali Ke Menu Utama
				gotoxy(55,14);cout<<"  Press Any key To Back to Main Menu !!! ";
				getch();
				//Pemanggilan Fungsi menu
				menu();
			}
			//---------------------------------------------------------------------------------------------------------------
			//---------------------------------------------Sub Menu Latihan 2------------------------------------------------
			else if(x==2)//Kondisi 2
			{
			system("cls");
			gotoxy(10,2);cout<<" "<<nomer[1]<<". The smart phone which she bought is....one in the promo";
			gotoxy(12,4);cout<<" A.	The cheaper than       B.	The cheapest          C.	Cheaper         D.	Cheapest";
			//input jawaban
			gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
			if(m == 'b' || m == 'B')
			{
				//rumus jumlah nilai jika benar
				jumlahnilai = jumlahnilai + 20;
			}
			else if(m == 'a' || m == 'A' || m == 'd' || m == 'D' || m == 'c' || m == 'C')
			{
				//rumus jumlah nilai jika salah
				jumlahnilai = jumlahnilai - 10;
				//Tampilan keluaran jika jawaban salah
				gotoxy(13,8);cout<<"Jawaban Anda Salah";
				getch();
			}
			system("cls");
			gotoxy(10,2);cout<<" "<<nomer[2]<<". In the Mahalangur mountain range in the Nepal and Tibet....which is peak is 8,848 metre above sea level.";
			gotoxy(14,4);cout<<"        A.	Mount everest list                            C.	Mouunt Everest lying ";                            
			gotoxy(14,5);cout<<"        B.	Lies amount Everest                           D.	Lying mount Everest ";
			//input jawaban
			gotoxy(14,7);cout<<" Jawaban Anda : "; cin>>m;
			if(m == 'b' || m == 'B')
			{
				//rumus jumlah nilai jika benar
				jumlahnilai = jumlahnilai + 20;
			}
			else if(m == 'a' || m == 'A' || m == 'd' || m == 'D' || m == 'c' || m == 'C')
			{
				//rumus jumlah nilai jika salah
				jumlahnilai = jumlahnilai - 10;
				//Tampilan keluaran jika jawaban salah
				gotoxy(15,9);cout<<"Jawaban Anda Salah";
				getch();
			}
			system("cls");
			gotoxy(10,2);cout<<" "<<nomer[3]<<". Keep the confidential papers in the locker,.... ";
			gotoxy(12,4);cout<<"  A.	Do not you ?       B.	Do you ?       C.	Will you ?        D.	Won't you ? ";
			//input jawaban
			gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
			if(m == 'd' || m == 'D')
			{
				//rumus jumlah nilai jika benar
				jumlahnilai = jumlahnilai + 20;
			}
			else if(m == 'a' || m == 'A' || m == 'b' || m == 'B' || m == 'c' || m == 'C')
			{
				//rumus jumlah nilai jika salah
				jumlahnilai = jumlahnilai - 10;
				//Tampilan keluaran jika jawaban salah
				gotoxy(13,8);cout<<"Jawaban Anda Salah";
				getch();
			}
			system("cls");
			gotoxy(10,2);cout<<" "<<nomer[4]<<". These are just a few of the many norms that every member of the society..... expected to follow";
			gotoxy(12,4);cout<<"    A.	Is         B.	Was            C.	Are                 D.	Were";
			//input jawaban
			gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
			if(m == 'a' || m == 'A')
			{
				//rumus jumlah nilai jika benar
				jumlahnilai = jumlahnilai + 20;
			}
			else if(m == 'd' || m == 'D' || m == 'b' || m == 'B' || m == 'c' || m == 'C')
			{
				//rumus jumlah nilai jika salah
				jumlahnilai = jumlahnilai - 10;
				//Tampilan keluaran jika jawaban salah
				gotoxy(13,8);cout<<"Jawaban Anda Salah";
				getch();
			}
			system("cls");
			gotoxy(10,2);cout<<" "<<nomer[5]<<". Faiz almost never eat at home,....? ";
			gotoxy(12,4);cout<<"  A.	Did he       B.	Would he     C.	Had she      D.	Didn't she";
			//input jawaban
			gotoxy(12,6);cout<<" Jawaban Anda : "; cin>>m;
			if(m == 'a' || m == 'A')
			{
				//rumus jumlah nilai jika benar
				jumlahnilai = jumlahnilai + 20;
			}
			else if(m == 'd' || m == 'D' || m == 'b' || m == 'B' || m == 'c' || m == 'C')
			{
				//rumus jumlah nilai jika salah
				jumlahnilai = jumlahnilai - 10;
				//Tampilan keluaran jika jawaban salah
				gotoxy(13,8);cout<<"Jawaban Anda Salah";
				getch();
			}
			p=&jumlahnilai;
			gotoxy(13,10);cout<<" Total nilai : "<<*p;
			gotoxy(55,14);cout<<"  Press Any key To Back to Main Menu !!! ";
			getch();
			menu();
			}
	        break;
		case '3': //menu3
			system("cls");
			//Tampilan Keluaran Exit
			gotoxy(70,20);cout<<"Aplication Will Terminated In    ";
			//Perulangan angka hitung mundur
			for(countdown=5;countdown>=0;countdown--)
   			{
				for(a=0;a<=10000;a++)
      			{
					for(b=0;b<=1000;b++)
					{
						for(c=0;c<=10;c++)
						{
						}
					}
      			}
				//Tampilan keluaran angka hitug mundur
				gotoxy(100,20);cout<<countdown;
      		}
		 exit(0);
         break;
			default: //exception
				system("cls");
				gotoxy(25,7);cout<<"Pilihan Menu Tidak Tersedia!!";
				gotoxy(26,8);cout<<"Press Any Key to continue!!";
				getch();
				menu();
	}
}
//----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------TULISAN BERJALAN-------------------------------------------------

void berjalan()
{
      //deklarasi string x
      char x[]="Selamat Datang di Program Easy TOEFL";
      //deklarasi variabel bertipe integer
      int a,b,i,n;
      //menghitung panjang string x
      n=strlen(x);
     
      //perulangan sebanyak panjang string
      for(i=0; i<n; i++){
                  /*perulangan untuk menimbulkan jeda waktu
                  antar penampilan karakter*/
                  for(a=0; a<99999;a++){
                        for(b=0; b<500; b++){
                        }
                  }
                  //mencetak string x per karakter
                  printf("%c",x[i]);
      }
}

//----------------------------------------------------------------------------------------------------------------
//------------------------------------------------LOADING---------------------------------------------------------
void loading()
{
	int a=100,i;
	system("cls");
	system("color 4E");
	//perulangan penambahan simbol pada loading
	for(i=1;i<=100;i++)
	{
		for(int x=1; x<a*100;x++)
		{
			for(int y=1; y<a*20;y++)
			{
			}
		}
		//Tampilkan Output
		gotoxy(30+i,22);cout<<"*";
		gotoxy(30+i,21);cout<<"|";
		gotoxy(30+i,20);cout<<"|";
		gotoxy(30+i,19);cout<<"*";
		gotoxy(75,15);cout<<"Please Wait........"<<i<<"%";
	}
	menu();//pemanggilan fungsi menu
}
//----------------------------------------------------------------------------------------------------------------
//------------------------------------------------LOGIN---------------------------------------------------------
	int login()
	{
		system("cls");
		system("color 4E");
		char username[5],password[5];
		gotoxy(60,18);berjalan();
		system("cls");
		gotoxy(60,18);printf(" Silahkan Login Terlebih Dahulu "); Sleep (500);
		gotoxy(60,20);printf("##################################");
		gotoxy(60,21);printf("#              LOGIN             #");
		gotoxy(60,22);printf("##################################");
		gotoxy(60,23);printf("#    Username :                  #");
		gotoxy(60,24);printf("#    Password :                  #");
		gotoxy(60,25);printf("##################################");
		getch();
		gotoxy(76,23);cin>>username;
		gotoxy(76,24);cin>>password;
		if((strcmp(username,"user")== 0) && (strcmp(password,"user")== 0))
		{
			loading();
		}
		else
		{
			system("cls");
			gotoxy(65,19);cout<<"Username / Password anda salah!!";
			gotoxy(65,20);cout<<"  Press Any key To Continue!!";
			getch();
			login();
		}
	}
	main()//fungsi main
	{
		system("pause");
		system("cls");
		system("color 4E");
		cout<<"\n\n\n";
		printf("                                                ########################################################\n");	Sleep (500);
		printf("                                              ############################################################\n");	Sleep (500);
		printf("                                            ##########    #############    #################    ############\n");	Sleep (500);
		printf("                                          ############    #############    #################    ##############\n");	Sleep (500);
		printf("                                        ##############    #############    #################    ################\n");	Sleep (500);
		printf("                                      ################    #############    #################    ##################\n");	Sleep (500);
		printf("                                    ##################                     #################    ####################\n");	Sleep (500);
		printf("                                      ################    #############    #################    ##################\n");	Sleep (500);
		printf("                                        ##############    #############    #################    ################\n");	Sleep (500);
		printf("                                          ############    #############    #################    ##############\n");	Sleep (500);
		printf("                                            ##########    #############    #################    ############\n");	Sleep (500);
		printf("                                              ############################################################\n");	Sleep (500);
		printf("                                              ############################################################\n");	Sleep (500);
		printf("                                              #           SELAMAT DATANG DI PROGRAM EASY TOEFL           #\n");	Sleep (500);
        printf("                                              #                  DIFFERENT THAN OTHER                    #\n");	Sleep (500);
		printf("                                              ############################################################\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              #      Disusun untuk Memenuhi Tugas Akhir Matakuliah       #\n");	Sleep (500);
		printf("                                              #          Praktikum Dasar Pemrograman Komputer            #\n");	Sleep (500);
		printf("                                              #     Yang Dibimbing oleh Wahyu Sakti Gunawan Irianto      #\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              #                 NAMA: AHMAD RAMADHANI                    #\n");	Sleep (500);
		printf("                                              #                 NIM : 170533628573                       #\n");	Sleep (500);
		printf("                                              #                 KELAS : PTI - A                          #\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              #                                                          #\n");	Sleep (500);
		printf("                                              ############################################################\n");	Sleep (500);
		gotoxy(60,35);cout<<"  Press Any key To Continue!!";
		getch();

		login();//pemanggilan fungsi login
	}   



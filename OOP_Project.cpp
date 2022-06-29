#include<iostream>
#include <stdlib.h>
using namespace std;
class car
{
	public:
	string name,city;
	int phone_no;
	
	void input()
	{
		
		cout<<"\n\t\t\t\t    ============================================="<< endl;
		cout<<"\t\t\t\t    ============================================="<< endl;
		cout<<"\t\t\t\t         ||   WELCOME TO SMART CAR SHOWROOM   ||"<< endl;
		cout<<"\t\t\t\t    ============================================="<< endl;
		cout<<"\t\t\t\t    =============================================\n\n"<< endl;
		cout<<"\nIn Order To Get Access And Get Start With The Program,"<<endl;
		cout<<"\nProvide Personal Details:"<<endl;
		cout<<"\nEnter your Name: ";
		cin>>name;
		cout<<"\nEnter your Mobile Number: ";
		cin>>phone_no;
		tryagain:
		cout<<"\nEnter your City: ";
		cin>>city;
		system("cls");
		if (city=="lahore"||city=="Lahore")
		{
			cout<<"\t\t\t\t\t\t\tWelcome "<<name;
	
		}
		else if (city=="islamabad"||city=="Islamabad")
		{
			cout<<"\t\t\t\t\t\t\tWelcome "<<name;
		}
		else if (city=="karachi"||city=="Karachi")
		{
			cout<<"\t\t\t\t\t\t\tWelcome "<<name;
		}
		else
		{
			cout<<"\nOur Services Are Currently Not Available In "<<city<<".";
			cout<<"\nComing Soon In Your City :) "<<"\nChoose B/W islamabad, karachi & lahore: "<<endl;
			goto tryagain;
		}
	}
};
class menu
{
	public:
		//car c;
		void mainmenu()
		{
			//c.input();
			cout<<"\n\n\t\t\t\t\t\t\t     Menu"<<endl<<endl;
			cout<<"\n\n[1] Book a Car "<<"\t\t[2] Order Status \n";;
			cout<<"\n[3] Car Financing "<<"\t[4] About Us \n";;
			cout<<"\n[5] Exit \n";
		}
		
		
};
class order_status
{
	public:
	double track;
	int choice;
	void status()
	{
		cout<<"\n\n[1] Car Booking Information "<<"\t\t[2] Track your Order \n";;
		cout<<"\nEnter your Choice: ";
		cin>>choice;
		switch(choice)
		{
		case 1:
		;
		break;
		case 2:
		label7:
		cout<<"Enter your Tracking Number: ";
		cin>>track;
		if(track==123456)
			{
				cout<<"\nBooking Processed: Done [V] ";
				cout<<"\nCar Shipped: Done [V] ";
				cout<<"\nEstimated Delivery Time: 15-20 Working Days ";
				cout<<"";
			}
		else
			{
				cout<<"Error! Tracking Number Does not Exist: ";
				goto label7;
			}
		break;
		}
	}
};

class car_finance
{
	public:
		int choice,option;
		
	void finance()
	{
		system("cls");
		
		cout<<"\nWelcome To Smart Car Finance";
		cout<<"\n\n[1] One Year Financing "<<"\t\t[2] Three Year Financing \n";;
		cout<<"\n[3] Five Year Financing "<<"\t[4] Go Back to Main Menu";
		car:
		cout<<"\n\nEnter Your Choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"\nDetails: ";
			cout<<"\nTotal Downpayment on Any Car: 500000 Pkr";
			cout<<"\nMonthly Installment: 50000 Pkr";
			break;
			case 2:
			cout<<"\nDetails: ";
			cout<<"\nTotal Downpayment on Any Car: 300000 Pkr";
			cout<<"\nMonthly Installment: 35000 Pkr";
			break;
			case 3:
			cout<<"\nDetails: ";
			cout<<"\nTotal Downpayment on Any Car: 180000 Pkr";
			cout<<"\nMonthly Installment: 25000 Pkr";
			break;
			case 4:
			system("cls");
			break;
			default:
			cout<<"\nError! Enter Between 1-3: ";
			goto car;
		}
		
	}
};
class about_us
{
	public:
	void about()
	{
		cout<<"\n\t\t\t\t\t\tAbout us";
		cout<<"\n\nOur Smart Car Showroom is targeting the automobile industry. In today’s "<< 
		"world, everything is turning out to be smart and digital and as we all know in "<< 
		"Pakistan and many other Asian countries, we are far behind Europe in "<< 
		"technology, so through this smart program, dealing between buyer and "<< 
		"company will become easy, fast and secure. The manual system is slow and "<< 
		"not secure, so that’s the best solution for every car showroom to use this "<< 
		"program and get rid of many problems. And why will they use it? It is because "<< 
		"they will not have to hire employees to deal with the buyers and security,"<<
		"which matters the most, and also it will increase their selling rate as the buyer "<< 
		"can place an order from anywhere any time. This program will help both the "<< 
		"buyer and car showroom in various ways.";
		cout<<"\n\n Meet Our Team: ";
		cout<<"\n\n[CEO]: Mujtaba Abbas "<<"\t\t[CFO]: Huzaifa Adnan \n";;
		cout<<"\n [GM]: Sameer Ahmad "<<"\t\t [AM]: Mahnoor Sadiq \n";;
		cout<<"\n [QC]: Huzaifa Shoaib \n";
		cout<<"\n Contact us at : smartcarshow123@gmail.com!";
	}
};
class suzuki
{
	
	public:
	double track;
	string car,car1,car2,variant1,variant2;
	string variant3,variant4,variant5,variant6;
	string color,alloyrims,screen;
	int price,price1,price2;
	void suz()
	{
		
	int option,choice;
	
	car="Swift";
	car1="Cultus";
	car2="Wagon R";
	variant1="DX";
	variant2="DLX";
	variant3="VXL";
	variant4="AGS";
	variant5="VXR";
	variant6="VXL";
	price=1800000;
	price1=1730000;
	price2=1540000;
	track=123456;
	cout<<"\nSelect your Desired Car: ";
	cout<<"\n\n[1] Suzuki Swift "<<"\t\t[2] Suzuki Cultus \n";;
	cout<<"\n[3] Suzuki Wagon R ";
	cout<<"\n\nEnter your choice : ";
	cin>>option;
	system("cls");
	switch(option)
			{
				case 1:
				cout<<"\nSelected Car: "<<car<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Swift DX "<<"\t\t[2] Swift DLX \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant1<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label3:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label4:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label3;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant2<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label6:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label5:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label5;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label6;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
			break;		
			case 2:
			cout<<"\nSelected Car: "<<car1<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Cultus VXL "<<"\t\t[2] Cultus AGS \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant3<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price1<<" Pkr";
						label8:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label9:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price1<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price1+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\n\nCar Booking Info: ";
									cout<<"\n\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price1+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\n\nCar Booking Info: ";
									cout<<"\n\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price1+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\n\nCar Booking Info: ";
									cout<<"\n\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label8;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant4<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label10:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label11:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label11;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label10;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
			break;
			case 3:
			cout<<"\nSelected Car: "<<car2<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Wagon R VXR "<<"\t\t[2] Wagon R VXL \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant5<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price2<<" Pkr";
						label12:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label13:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label12;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant6<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price2+50000<<" Pkr";
						label14:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label15:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price2+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label15;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label14;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}							
			}
	}
		
};
class toyota
{
	public:
	double track;
	string car,car1,car2,variant1,variant2,variant3,variant4,variant5,variant6;
	string color,alloyrims,screen;
	void toyo()
	{
		
	int option,choice,price;
	
	car="Corolla";
	car1="Prius";
	car2="Land Cruiser";
	variant1="GLI";
	variant2="XLI";
	variant3="1.8 S";
	variant4="1.8 G";
	variant5="VX";
	variant6="GX-R";
	//price=2500000;
	track=123456;
	cout<<"\nSelect your Desired Car: ";
	cout<<"\n\n[1] Toyota Corolla "<<"\t\t[2] Toyota Prius \n";;
	cout<<"\n[3] Toyota Land Cruiser ";
	cout<<"\n\nEnter your choice : ";
	cin>>option;
	system("cls");
	switch(option)
			{
				case 1:
				cout<<"\nSelected Car: "<<car<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Corolla GLI "<<"\t\t[2] Corolla XLI \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				price=3500000;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant1<<" Variant!";
						cout << "\n\nSpecifications: \nKerb Weight: 1300 KG" << "\t\tMileage: 12-16 KM/LITER" << "\t\tNo of Doors: 4";
						cout << "\nOverall Height: 1480 mm" << "\t\tOverall Length: 4530 mm" << "\t\tOverall Width: 1705 mm" << "\nSeating Capacity: 5 persons" << "\nWheel Base: 2600mm";
						cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid";
						cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label3:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label4:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label3;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant2<<" Variant!";
						cout << "\n\nSpecifications: \nKerb Weight: 1300 KG" << "\t\tMileage: 12-16 KM/LITER" << "\t\tNo of Doors: 4";
						cout << "\nOverall Height: 1480 mm" << "\t\tOverall Length: 4530 mm" << "\t\tOverall Width: 1705 mm" << "\nSeating Capacity: 5 persons" << "\nWheel Base: 2600mm";
						cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid";
						cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label6:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label5:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label5;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label6;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
			break;		
			case 2:
			cout<<"\nSelected Car: "<<car1<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Prius 1.8 S "<<"\t\t[2] Prius 1.8 G \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				price=9200000;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant3<<" Variant!";
						cout << "\n\nSpecifications: \nKerb Weight: 1335 KG" << "\t\tMileage: 27.50 KM/LITER" << "\t\tNo of Doors: 4";
						cout << "\nOverall Height: 1490 mm" << "\t\tOverall Length: 4540 mm" << "\t\tOverall Width: 1760 mm" << "\nSeating Capacity: 5 persons" << "\nWheel Base: 2700mm";
						cout << "\nGround Clearance (Unladen): 135 mm";
						cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid" << "\nPower Steering" << "\nPower Windows" << "\nAutomatic Climate Control";
						cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio" << "\nKeyless Entry";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label8:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label9:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label8;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant4<<" Variant!";
						cout << "\n\nSpecifications: \nKerb Weight: 1300 KG" << "\t\tMileage: 27.50 KM/LITER" << "\t\tNo of Doors: 4";
						cout << "\nOverall Height: 1490 mm" << "\t\tOverall Length: 4540 mm" << "\t\tOverall Width: 1760 mm" << "\nSeating Capacity: 5 persons" << "\nWheel Base: 2700mm";
						cout << "\nGround Clearance (Unladen): 135 mm";
						cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid" << "\nPower Steering" << "\nPower Windows" << "\nAutomatic Climate Control";
						cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio" << "\nKeyless Entry"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label10:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label11:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label11;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label10;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
				case 3:
				cout<<"\nSelected Car: "<<car1<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Land Cruiser VX "<<"\t\t[2] Land Cruiser GX-R \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				price=55000000;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant5<<" Variant!";
						cout << "\n\nSpecifications: \nKerb Weight: 2720 KG" << "\t\tMileage: 9-11 KM/LITER" << "\t\tNo of Doors: 5";
						cout << "\nOverall Height: 1865 mm" << "\t\tOverall Length: 4950 mm" << "\t\tOverall Width: 1970 mm" << "\nSeating Capacity: 8 persons" << "\nWheel Base: 2850mm";
						cout << "\nGround Clearance (Unladen): 225 mm";
						cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid" << "\nPower Steering" << "\nPower Windows" << "\nAutomatic Climate Control";
						cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio" << "\nKeyless Entry";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label01:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label02:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant5;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								cout<<"\nYou Selected "<<variant6<<" Variant!";
								cout << "\n\nSpecifications: \nKerb Weight: 2720 KG" << "\t\tMileage: 9-11 KM/LITER" << "\t\tNo of Doors: 5";
								cout << "\nOverall Height: 1865 mm" << "\t\tOverall Length: 4950 mm" << "\t\tOverall Width: 1970 mm" << "\nSeating Capacity: 8 persons" << "\nWheel Base: 2850mm";
								cout << "\nGround Clearance (Unladen): 225 mm";
								cout << "\n\nFeatures: \nAir Conditioner" << "\t\tDefogger" << "\t\tRemote Boot/Fuel-Lid" << "\nPower Steering" << "\nPower Windows" << "\nAutomatic Climate Control";
								cout << "\nTachometer" << "\t\tCup Holders" << "\t\tAM/FM Radio" << "\nKeyless Entry"<<"\t\t ABS Brakes";
								cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label03:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label04:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car2;
									cout<<"\nVariant: "<<variant6;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label04;
								}
								
								break;
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label03;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
			}
	}
}
};
class honda
{
	public:
		
	int option;
		public:
	double track;
	string car1,car2,variant1,variant2,variant3,variant4;
	string color,alloyrims,screen;
	
	void hod()  //FUNCTION FOR CLASS HONDA
	{
		
	int option,choice;
	long price;
	
	car1="Accord Hybrid"; //CAR OPTIONS
	car2="City Prosmetic";
	variant1="Honda Accord 1.5L VTEC Turbo";  //VARIANTS OPTION
	variant2="Honda Accord 1.3L VTEC Turbo";
	variant3="Honda City 1.3i VTEC Prosmetic";
	variant4="Honda City Aspire 1.5i VTEC";
	price=1199000;
	track=123456;
	cout<<"\nSelect your Desired Car: "; //CAR SELECTION
	cout<<"\n\n[1] Accord Hybrid "<<"\t\t[2] City Prosmetic \n";;
	cout<<"\nEnter your choice : ";
	cin>>option;
	system("cls");
	switch(option)
			{
				case 1:
				cout<<"\nSelected Car: "<<car1<<endl;  //FOR CAR 1 
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Honda Accord 1.5L VTEC Turbo "<<"\t\t[2] Honda Accord 1.3L VTEC Turbo \n"; //CAR 1 VARIANT SELECTION
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant1<<" Variant!";  //DISPLAY FRO VARIANT 1 
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1620 KG"<< "\t\tMileage: 14-12 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1555 mm"<<"\t\tOverall Length: 3725 mm"<<"\t\tOverall Width: 1190 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tPassenger Airbag"<<"\t\tFog Lights"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nMulti Functional Steering"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						labelA1:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";  //CUSTOMISATION FOR VARIANT 1 
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								labelA2:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto labelA2;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto labelA1;
								break;
							}
							
							break;
						case 2:
						cout<<"\nYou Selected "<<variant2<<" Variant!";      //DISPLAY FOR VARIANT 2 
						cout<<"\n\nSpecifications: \n\nKerb Weight: 4559 KG"<< "\t\tMileage: 15-19 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1995 mm"<<"\t\tOverall Length: 3345 mm"<<"\t\tOverall Width: 2450 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\t Air Bag "<<"\t\tCD Player "<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						labelA3:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";   //CUSTOMISATION FOR VARIANT 2 
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								labelA4:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto labelA4;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto labelA3;
								break;
							}
							break;	
						}
			break;		
			case 2:
			cout<<"\nSelected Car: "<<car1<<endl;     // FOR CAR 2 
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Honda City 1.3i VTEC Prosmetic "<<"\t\t[2] Honda City Aspire 1.5i VTEC \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant3<<" Variant!";  //DISPLAY FOR VARIANT 3 
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1078 KG"<< "\t\tMileage: 15-18 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1785 mm"<<"\t\tOverall Length: 5755 mm"<<"\t\tOverall Width: 3690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Bag"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nAir Conditioner"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						labelA5:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";  //CUSTOMISATION FOR VARIANT 3 
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								labelA6:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto labelA6;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto labelA5;
								break;
							}
							
						
							break;
						case 2:
						cout<<"\nYou Selected "<<variant4<<" Variant!";    // DISPLAY FOR VARIANT 4 
						cout<<"\n\nSpecifications: \n\nKerb Weight: 2766 KG"<< "\t\tMileage: 11-15 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1345 mm"<<"\t\tOverall Length: 2755 mm"<<"\t\tOverall Width: 3690 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						labelA7:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";  //CUSTOMISATION FOR VARIANT 4 
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								labelA8:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto labelA8;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto labelA7;
								break;
							}
							break;	
						}				
			}
	}
};
class kia
{
	public:
	double track;
	string car,car1,variant1,variant2,variant3,variant4;
	string color,alloyrims,screen;
	void ki()
	{
	int option,choice,price;
	car="Kia Sportage";
	car1="Kia Grand Carnival";
	variant1="LX";
	variant2="S";
	variant3="EX";
	variant4="SX";
	price=4399000;
	track=12345;
	cout<<"\nSelect your Desired Car: ";
	cout<<"\n\n[1] Kia Sportage "<<"\t\t[2] Kia Grand Carnival \n";;
	cout<<"\nEnter your choice : ";
	cin>>option;
	system("cls");
	switch(option)
			{
				case 1:
				cout<<"\nSelected Car: "<<car<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Sportage LX "<<"\t\t[2] Sportage S \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant1<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1,696 KG"<< "\t\tMileage: 22-26 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1636 mm"<<"\t\tOverall Length: 4,485 mm"<<"\t\tOverall Width: 1,855 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label3:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{	 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label4:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label3;
								break;
							}
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\nYou Selected "<<variant2<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 1,696 KG"<< "\t\tMileage: 22-26 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1636 mm"<<"\t\tOverall Length: 4,485 mm"<<"\t\tOverall Width: 1,855 mm"<<"\nSeating Capacity: 5 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label6:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{	 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label5:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car;
									cout<<"\nVariant: "<<variant2;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label5;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label6;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}
			break;
			case 2:
			cout<<"\nSelected Car: "<<car1<<endl;
				cout<<"\nSelect the Variant: ";
				cout<<"\n\n[1] Grand Carnival EX "<<"\t\t[2] Grand Carnival SX \n";;
				cout<<"\nEnter your Choice: ";
				cin>>option;
				system("cls");
				switch(option)
					{
						case 1:
						cout<<"\nYou Selected "<<variant3<<" Variant!";
						cout<<"\n\nSpecifications: \n\nKerb Weight: 2107 KG"<< "\t\tMileage: 14.11 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1,755 mm"<<"\t\tOverall Length: 5115 mm"<<"\t\tOverall Width: 1985 mm"<<"\nSeating Capacity: 8 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
						cout<<"\n\nPrice: "<<price<<" Pkr";
						label8:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label9:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant3;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label4;
								}
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label8;
								break;
							}
							
							/*cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant1;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;
						case 2:
						cout<<"\n\nSpecifications: \n\nKerb Weight: 2107 KG"<< "\t\tMileage: 14.11 KM/LITER"<< "\t\tNo of Doors: 4";
						cout<<"\nOverall Height: 1,755 mm"<<"\t\tOverall Length: 5115 mm"<<"\t\tOverall Width: 1985 mm"<<"\nSeating Capacity: 8 persons";
						cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
						cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
						cout<<"\n\nPrice: "<<price+50000<<" Pkr";
						label10:
						cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
						cin>>choice;
						system("cls");
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								label11:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant4;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto label11;
								}
								
								break;
								case 2:
								
								default:
								cout<<"\nError! Enter 1 or 2: ";
								goto label10;
								break;
							}
							/*system("cls");
							cout<<"\nCar Booking Info: ";
							cout<<"\nCar: "<<car;
							cout<<"\nVariant: "<<variant2;
							cout<<"\nColor: "<<color;
							cout<<"\nAlloyrims Type: "<<alloyrims;
							cout<<"\nScreen Type: "<<screen;*/
							break;	
						}				
			}
	}
};
class hyundai
{
public:
	int option,choice,track,price;
	string color,alloyrims,screen,car1,car2,variant1,variant2,variant3,variant4;
	
	void hyun()
	{
	track=12345;
	price=8000000;
	car1="Elantra";
	car2="Tucson";
	variant1="2.0 SX MT";
	variant2="1.5 SX MT";
	variant3="GL";
	variant4="GLS";
	cout<<"\nSelect your Desired Car: ";
	cout<<"\n\n[1] Hyundai Elantra "<<"\t\t[2] Hyundai Tucson \n";
	cout<<"\nEnter your choice : ";
	cin>>option;
	system("cls");
	switch(option)
			{
				//car selection
				case 1: 
					cout<<"\nSelected Car: "<<car1<<endl;
					cout<<"\nSelect the Variant: ";
					cout<<"\n\n[1] 2.0 SX MT ";
					cout<<"\t\t[2] 1.5 SX MT"<<endl;
					cout<<"\nEnter your choice : "; cin>>option;
					
					//First car variants 
					switch(option)
					{
						case 1: //variant selection
							cout<<"\nYou Selected "<<variant1<<" Variant!";
							cout<<"\n\nSpecifications: \n\nKerb Weight: 1025 KG"<< "\t\tMileage: 15-20 KM/LITER"<< "\t\tNo of Doors: 4";
							cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 4 persons";
							cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
							cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
							cout<<"\n\nPrice: 80,000,00 Pkr";
							l3:
							cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
							cin>>choice;
							system("cls");
							
							//order proceeding
							switch(choice)
							{
								 
								case 1:
								cout<<"\nCustomize your Car: ";
								cout<<"\n\nEnter the Desired color: ";
								cin>>color;
								l4:
								cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
								cin>>alloyrims;
								cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
								cin>>screen;
								if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
								{
									system("cls");
									cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
									cout<<"\nYour Booking has been Confirmed! ";
									cout<<"\nYour Tracking Number: "<<track;
									cout<<"\nCar Booking Info: ";
									cout<<"\nCar: "<<car1;
									cout<<"\nVariant: "<<variant1;
									cout<<"\nColor: "<<color;
									cout<<"\nAlloyrims Type: "<<alloyrims;
									cout<<"\nScreen Type: "<<screen;
								}
								else
								{
									cout<<"\nError! Enter Valid Name As Mentioned: ";
									goto l4;
								}
								break;
								case 2:
									default:
									cout<<"\nError! Enter 1 or 2: ";
									goto l3;
									break;
							}
							break;
							// FIRST CAR FOR VARIANT 2
							case 2:
								cout<<"\nYou Selected "<<variant2<<" Variant!";
								cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
								cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
								cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
								cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
								cout<<"\n\nPrice: "<<price+50000<<" Pkr";
								l6:
								cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
								cin>>choice;
								system("cls");
									switch(choice)
									{
										 
										case 1:
										cout<<"\nCustomize your Car: ";
										cout<<"\n\nEnter the Desired color: ";
										cin>>color;
										l5:
										cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
										cin>>alloyrims;
										cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
										cin>>screen;
										if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
										{
											system("cls");
											cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
											cout<<"\nYour Booking has been Confirmed! ";
											cout<<"\nYour Tracking Number: "<<track;
											cout<<"\nCar Booking Info: ";
											cout<<"\nCar: "<<car1;
											cout<<"\nVariant: "<<variant2;
											cout<<"\nColor: "<<color;
											cout<<"\nAlloyrims Type: "<<alloyrims;
											cout<<"\nScreen Type: "<<screen;
										}
										else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
										{
											system("cls");
											cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
											cout<<"\nYour Booking has been Confirmed! ";
											cout<<"\nYour Tracking Number: "<<track;
											cout<<"\nCar Booking Info: ";
											cout<<"\nCar: "<<car1;
											cout<<"\nVariant: "<<variant2;
											cout<<"\nColor: "<<color;
											cout<<"\nAlloyrims Type: "<<alloyrims;
											cout<<"\nScreen Type: "<<screen;
										}
										else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
										{
											system("cls");
											cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
											cout<<"\nYour Booking has been Confirmed! ";
											cout<<"\nYour Tracking Number: "<<track;
											cout<<"\nCar Booking Info: ";
											cout<<"\nCar: "<<car1;
											cout<<"\nVariant: "<<variant2;
											cout<<"\nColor: "<<color;
											cout<<"\nAlloyrims Type: "<<alloyrims;
											cout<<"\nScreen Type: "<<screen;
										}
										else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
										{
											system("cls");
											cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
											cout<<"\nYour Booking has been Confirmed! ";
											cout<<"\nYour Tracking Number: "<<track;
											cout<<"\nCar Booking Info: ";
											cout<<"\nCar: "<<car1;
											cout<<"\nVariant: "<<variant2;
											cout<<"\nColor: "<<color;
											cout<<"\nAlloyrims Type: "<<alloyrims;
											cout<<"\nScreen Type: "<<screen;
										}
										else
										{
											cout<<"\nError! Enter Valid Name As Mentioned: ";
											goto l5;
										}
										
										break;
										case 2:
										
										default:
										cout<<"\nError! Enter 1 or 2: ";
										goto l6;
										break;
							        }
							        
					}
					break;
					//SECOND CAR selection
					case 2:
						cout<<"\nSelected Car: "<<car2<<endl;
						cout<<"\nSelect the Variant: ";
						cout<<"\n\n[1] Tucson GL "<<"\t\t[2] Tucson GLS \n";;
						cout<<"\nEnter your Choice: ";
						cin>>option;
						system("cls");
						switch(option)
						{
							// second car variant selection
							case 1: 
								cout<<"\nYou Selected "<<variant3<<" Variant!";
								cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
								cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
								cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
								cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio";
								cout<<"\n\nPrice: "<<price<<" Pkr";
								l8:
								cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
								cin>>choice;
								system("cls");
								 switch(choice)
								 {
								 
									case 1:
									cout<<"\nCustomize your Car: ";
									cout<<"\n\nEnter the Desired color: ";
									cin>>color;
									l9:
									cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
									cin>>alloyrims;
									cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
									cin>>screen;
									if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant3;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant3;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant3;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+25000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant3;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else
									{
										cout<<"\nError! Enter Valid Name As Mentioned: ";
										goto l4;
									}
									break;
									case 2:
									
									default:
									cout<<"\nError! Enter 1 or 2: ";
									goto l8;
									break;
							    }
								break;
								//second car second variant 
								case 2: 
								cout<<"\nYou Selected "<<variant4<<" Variant!";
								cout<<"\n\nSpecifications: \n\nKerb Weight: 1050 KG"<< "\t\tMileage: 10-15 KM/LITER"<< "\t\tNo of Doors: 4";
								cout<<"\nOverall Height: 1525 mm"<<"\t\tOverall Length: 3755 mm"<<"\t\tOverall Width: 1690 mm"<<"\nSeating Capacity: 5 persons";
								cout<<"\n\nFeatures: \n\nAir Conditioner"<<"\t\tCD Player"<<"\t\tDefogger"<<"\t\tRemote Boot/Fuel-Lid";
								cout<<"\nTachometer"<<"\t\tCup Holders"<<"\t\tAM/FM Radio"<<"\t\t ABS Brakes";
								cout<<"\n\nPrice: "<<price+50000<<" Pkr";
								l10:
								cout<<"\n\nDo You Want to Proceed Further ? If Yes Enter 1 Or For No Enter 2: ";
								cin>>choice;
								system("cls");
								switch(choice)
								{
								 
									case 1:
									cout<<"\nCustomize your Car: ";
									cout<<"\n\nEnter the Desired color: ";
									cin>>color;
									l11:
									cout<<"\nEnter the Alloyrims Type (Choose between Thin or Wide): ";
									cin>>alloyrims;
									cout<<"\nEnter the Screen (Multimedia) type (Choose between Simple or Android): ";
									cin>>screen;
									if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="simple"||screen=="Simple")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+50000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant4;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="android"||screen=="Android")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+50000+50000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant4;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="thin"||alloyrims=="Thin"&&screen=="android"||screen=="Android")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant4;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else if(alloyrims=="wide"||alloyrims=="Wide"&&screen=="Simple"||screen=="simple")
									{
										system("cls");
										cout<<"\nPrice After Your Customization: "<<price+25000+50000<<" Pkr";
										cout<<"\nYour Booking has been Confirmed! ";
										cout<<"\nYour Tracking Number: "<<track;
										cout<<"\nCar Booking Info: ";
										cout<<"\nCar: "<<car2;
										cout<<"\nVariant: "<<variant4;
										cout<<"\nColor: "<<color;
										cout<<"\nAlloyrims Type: "<<alloyrims;
										cout<<"\nScreen Type: "<<screen;
									}
									else
									{
										cout<<"\nError! Enter Valid Name As Mentioned: ";
										goto l11;
									}
									
									break;
									case 2:
									
									default:
									cout<<"\nError! Enter 1 or 2: ";
									goto l10;
									break;
								}
								break;	
						}
			}
	}
};
class book_car: public menu
{
	public:
		menu m;
		order_status s;
		car_finance cf;
		about_us au;
		suzuki su;
		toyota to;
		honda ho;
		kia ki;
		hyundai hy;
		int choice,option;
		void book()
		{
			label:
			m.mainmenu();
			cout<<"\nEnter your choice : ";
			cin>>choice;
			system("cls");
			switch(choice)	
			{
				case 1:
					label1:
					cout<<"\nSelect the Desired Brand: ";
					cout<<"\n\n[1] SUZUKI "<<"\t\t[2] TOYOTA \n";;
					cout<<"\n[3] HONDA "<<"\t\t[4] KIA \n";;
					cout<<"\n[5] HYUNDAI"<<"\t\t[6] Back to Main Menu \n";
					cout<<"\nEnter your choice : ";
					cin>>option;
					system("cls");
			switch(option)
				{
					case 1:
					su.suz();
					break;	
					case 2:
					to.toyo();
					break;	
					case 3:
					ho.hod();
					break;	
					case 4:
					ki.ki();
					break;	
					case 5:
					hy.hyun();
					break;
					case 6:
					goto label;
					default:
					goto label1;
					cout<<"\nChoose by entering number 1-6 ";
										
				}
				case 2:
				s.status();
				break; 
				case 3:
				cf.finance();
				break;
				case 4:
				au.about();
				break;
				default:
				goto label;
				cout<<"\nChoose by entering number 1-5 ";		
			}
		}
};
		
int main()
{
	system("color F8");
	car c;
	suzuki su;
	c.input();
	book_car bc;
	bc.book();
	cout<<"\nPerson Name: "<<c.name;
		cout<<"\nMobile No: "<<c.phone_no;
		cout<<"\nCity: "<<c.city;
		//cout<<"\nCar: "<<su.car;
		//cout<<"\nColor: "<<su.color;
		//cout<<"\nAlloyrims Type: "<<su.alloyrims;
		//cout<<"\nScreen Type: "<<su.screen;
			
}

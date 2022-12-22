#include<iostream>
#include<math.h>
using namespace std;
int arithmetic();
int trignometric();
int logrithm();
int otherOperation();
int addition();
int subtraction();
int multiplication();
int division();
int sinTeta();
int cosTeta();
int tanTeta();
int arcSine();
int arcCos();
int arcTan();
int squareRoot();
int average();
int percentage();
int power();
int cube();
int mainMenu();
int main()
{
	mainMenu();
	return 0;
}
int mainMenu()
{
	A:
	system("cls");
	int choise;
	cout<<"\n________________________________________________________________________\n\n";
	cout<<"\t\t############## MAIN MENU ##############\n";
	cout<<"________________________________________________________________________\n\n";
	cout<<"1. ARITHMETIC OPERATION\n";
	cout<<"2. TRIGRNOMETRIC OPERATION\n";
	cout<<"3. LOGRITHMIC OPERATION\n";
	cout<<"4. OTHER OPERATIONS\n";
	cout<<"5. EXIT\n\n";
	cout<<"Enter the choise: ";
	cin>>choise;
	switch(choise)
	{
		case 1:
			arithmetic();
			break;
		case 2:
			trignometric();
			break;
		case 3:
			logrithm();
			break;
		case 4:
			otherOperation();
			break;
		case 5:
			return 0;
		default:
			cout<<"\n******** Please enter the correct number **********\n";
			goto A;
	}
	return 0;
}
int arithmetic()
{
	B:
	system("cls");
	int choise;
	cout<<"\n_____________________________________________________________________\n\n";
	cout<<"\t\t############## ARITHMETIC OPERATION ##############\n";
	cout<<"______________________________________________________________________\n\n";
	cout<<"1. ADDITION\n";
	cout<<"2. SUBTRACTION\n";
	cout<<"3. MULTIPLICATION\n";
	cout<<"4. DIVISION\n";
	cout<<"5. RETURN TO MAIN MENU\n";
	cout<<"6. EXIT\n\n";
	cout<<"Enter the choise: ";
	cin>>choise;
	switch(choise)
	{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 5:
			mainMenu();
			break;
		case 6:
			return 0;
		default:
			cout<<"\n******** Please enter the correct number **********\n";
			goto B;
	}
	return 0;
	
}
int trignometric()
{
	int choise;
	C:
	system("cls");
	cout<<"\n_____________________________________________________________________\n\n";
	cout<<"\t\t############## TRIGNOMETRIC OPERATION ##############\n";
	cout<<"______________________________________________________________________\n\n";
	cout<<"1. SINE\n";
	cout<<"2. COSINE\n";
	cout<<"3. TANGENT\n";
	cout<<"4. ARCSINE\n";
	cout<<"5. ARCCOSINE\n";
	cout<<"6. ARCTANGENT\n";
	cout<<"7. RETURN TO MAIN MENU\n";
	cout<<"8. EXIT\n\n";
	cout<<"Enter the choise: ";
	cin>>choise;
	switch(choise)
	{
		case 1:
			sinTeta();
			break;
		case 2:
			cosTeta();
			break;
		case 3:
			tanTeta();
			break;
		case 4:
			arcSine();
			break;
		case 5:
			arcCos();
			break;
		case 6:
			arcTan();
			break;
		case 7:
			mainMenu();
			break;
		case 8:
			return 0;
		default:
			cout<<"\n******** Please enter the correct number **********\n";
			goto C;
	}
	return 0;
	
}
int otherOperation()
{
	int choise;
	D:
	system("cls");
	cout<<"\n_____________________________________________________________________\n\n";
	cout<<"\t\t############## OTHER OPERATION ##############\n";
	cout<<"______________________________________________________________________\n\n";
	cout<<"1. SQUARE ROOT\n";
	cout<<"2. AVERAGE\n";
	cout<<"3. POWER\n";
	cout<<"4. CUBE\n";
	cout<<"5. RETURN TO MAIN MENU\n";
	cout<<"6. EXIT\n\n";
	cout<<"Enter the choise: ";
	cin>>choise;
	switch(choise)
	{
		case 1:
			squareRoot();
			break;
		case 2:
			average();
			break;
		case 3:
			power();
			break;
		case 4:
			cube();
			break;
		case 5:
			mainMenu();
			break;
		case 6:
			return 0;
		default:
			cout<<"\n******** Please enter the correct number **********\n";
			goto D;
	}
	return 0;
	
}
int addition()
{
	char option;
	int num1, num2;
	cout<<"\n\nEnter first number: ";
	cin>>num1;
	cout<<"\nEnter the second number: ";
	cin>>num2;
	cout<<"\n\nThe sum of two numbers are: "<<num1+num2;
	E:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		arithmetic();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto E;
	}
	return 0;
}
int subtraction()
{
	char option;
	int num1, num2;
	cout<<"\n\nEnter first number: ";
	cin>>num1;
	cout<<"\nEnter the second number: ";
	cin>>num2;
	cout<<"\n\nThe subtraction of two numbers are: "<<num1-num2;
	F:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		arithmetic();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto F;
	}
	return 0;
}
int multiplication()
{
	char option;
	int num1, num2;
	cout<<"\n\nEnter first number: ";
	cin>>num1;
	cout<<"\nEnter the second number: ";
	cin>>num2;
	cout<<"\n\nThe product of two numbers are: "<<num1*num2;
	G:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		arithmetic();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto G;
	}
	return 0;
}
int division()
{
	char option;
	int num1, num2;
	cout<<"\n\nEnter first number: ";
	cin>>num1;
	cout<<"\nEnter the second number: ";
	cin>>num2;
	cout<<"\n\nThe division of two numbers are: "<<num1/num2;
	H:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		arithmetic();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto H;
	}
	return 0;
}
int sinTeta()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe sine value of the entered value is: "<<sin(num1);
	I:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto I;
	}
	return 0;
}
int cosTeta()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe cosine value of the entered value is: "<<cos(num1);
	J:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto J;
	}
	return 0;
}
int tanTeta()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe tangent value of the entered value is: "<<tan(num1);
	K:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto K;
	}
	return 0;
}
int arcSine()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe arcsine or inverse of sine of the entered value is: "<<asin(num1);
	L:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto L;
	}
	return 0;
}

int arcCos()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe arccosine or inverse of cosine of the entered value is: "<<acos(num1);
	M:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto M;
	}
	return 0;
}
int arcTan()
{
	char option;
	double num1;
	cout<<"\n\nEnter the value: ";
	cin>>num1;
	cout<<"\n\nThe arcsine or inverse of sine value of the entered value is: "<<atan(num1);
	N:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		trignometric();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto N;
	}
	return 0;
}

int squareRoot()
{
	char option;
	double num1;
	cout<<"\n\nEnter the number: ";
	cin>>num1;
	cout<<"\n\nThe square root of the entered number is: "<<sqrt(num1);
	O:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		otherOperation();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto O;
	}
	return 0;
}
int power()
{
	char option;
	double num1,num2;
	cout<<"\n\nEnter the number: ";
	cin>>num1;
	cout<<"\nEnter the power: ";
	cin>>num2;
	cout<<"\n\nThe result of the power is: "<<pow(num1, num2);
	P:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		otherOperation();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto P;
	}
	return 0;
}
int cube()
{
	char option;
	double num1;
	cout<<"\n\nEnter the number: ";
	cin>>num1;
	cout<<"\n\nThe cube of the entered number is: "<<num1*num1*num1;
	Q:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		otherOperation();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto Q;
	}
	return 0;
}
int average()
{
	char option;
	double num1,num2,sum = 0;
	cout<<"\n\nFor how many numbers you want to find the average (i.e 2,3,4,....): ";
	cin>>num1;
	for(int i = 1; i<=num1; i++)
	{
		cout<<"\nEnter number "<<i<<": ";
		cin>>num2;
		sum = sum + num2;
	}
	cout<<"\n\nThe average of "<<num1<<" numbers are: "<<sum/num1;
	R:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		otherOperation();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto R;
	}
	return 0;
}
int logrithm()
{
	char option;
	double num1;
	system("cls");
	cout<<"\n_____________________________________________________________________\n\n";
	cout<<"\t\t############## LOGRITHMIC OPERATION ##############\n";
	cout<<"______________________________________________________________________\n\n";
	cout<<"\n\nEnter the number: ";
	cin>>num1;
	cout<<"\n\nThe logrithm of the entered number is: "<<log(num1);
	S:
	cout<<"\nDo you want perform another operation (press Y if yes otherwise press N): ";
	cin>>option;
	if(option=='Y' || option=='y')
	{
		mainMenu();
	}
	else if(option=='N'||option=='n')
	{
		return 0;
	}
	else
	{
		cout<<"\n********** please enter the correct option **********\n";
		goto S;
	}
	return 0;
}



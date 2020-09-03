#include <iostream>

using namespace std;

int main()
{
    cout << "welcome sir" << endl;
    while ( true )
    {
        cout << "\nEnter your number operation\n" << endl;
        cout << "1- calculations \n2- ASCII code \n3- Numberical System Conversions \n4- Binary Arithmetic \n";
        string choose;
        cout << "\n";
        cin >> choose;
        if ( choose.size() == 1 && choose[0] == '1' )
        {
            char operation;
            double num1=0 , num2=0;
            cout << "Enter operator either  (+)  (-)  (*)  (/)  (!)  (^)  " << endl;
            cin >> operation;
            if ( operation == '+' )
            {
                cout << "Enter two numbers " << endl;
                cin >> num1 >> num2;
                cout << num1 << "+" << num2 << "=" << num1+num2;
            }
            else if ( operation == '-' )
            {
                cout << "Enter two numbers " << endl;
                cin >> num1 >> num2;
                cout << num1 << "-" << num2 << "=" << num1-num2;
            }
            else if ( operation == '*' )
            {
                cout << "Enter two numbers " << endl;
                cin >> num1 >> num2;
                cout << num1 << "*" << num2 << "=" << num1*num2;
            }
            else if ( operation == '/' )
            {
                cout << "Enter two numbers " << endl;
                cin >> num1 >> num2;
                cout << num1 << "/" << num2 << "=" << num1/num2;
            }
            else if ( operation == '!' )
            {
                long factorial = 1;
                cout << "Enter number " << endl;
                cin >> num1 ;
                for ( int i = 1 ; i <= num1 ; i++ )
                {
                    factorial *= i;
                }
                cout << "factorial of " <<num1 << "=" << factorial;
            }
            else if ( operation == '^' )
            {
                float power;
                float base , result = 1;
                cout << "Enter base and power respectively: " << endl;
                cout << "Base = " ;
                cin >> base ;
                cout << " Power = " ;
                cin >> power ;
                cout << base << "^" << power << " = ";
                while (power != 0)
                {
                    result *= base ;
                    --power;
                }
                cout << result;
            }
            else
            {
                cout << "Error! operator is not correct\n";
            }
        }
        else if ( choose.size() == 1 && choose[0] == '2' )
        {
            cout << "Enter a character :" << endl;
            string ascii;
            cin >> ascii;
            cout << "ASCII Value of " << ascii[0] << " in Dec is : " << (int)ascii[0]  << endl;
            long int decinum , quot;
            int binnum[100] , i=1 , j;
            decinum = (int)ascii[0];
            quot = decinum;
            while (quot != 0)
            {
                binnum[i++] = quot%2;
                quot = quot / 2;
            }
            cout << "ASCII Value of " << ascii[0] << " in Bin is : " ;
            for (j = i-1 ; j > 0 ; j--)
            {
                cout << binnum[j];
            }
            cout << endl;
            int number = 0,d=1,sum=0,rem=0;
                number = (int)ascii[0];
                while(number>0)
                {
                  rem=number%8;
                  sum=sum+(rem*d);
                  number=number/8;
                  d*=10;
                }
                cout << "ASCII Value of " << ascii[0] << " in OCT is : "<< sum << endl;
              int num,counter,x,a,hex[100];
	          char c[100];
	          num =  (int)ascii[0];
              cout << "ASCII Value of " << ascii[0] << " in Hec is : ";
	          for(counter=0;num!=0;counter++)
              {
			    a=num%16;
			    hex[counter]=a;
                num=num/16;
			  }
	         for(x=counter-1;x>=0;x--)
             {
	 	      	if(hex[x]==10)
				{
					cout<<"A";
                }
			else if(hex[x]==11)
				{
					cout<<"B";
                }
			else if(hex[x]==12)
				{
					cout<<"C";
                }
			else if(hex[x]==13)
				{
					cout<<"D";
                }
			else if(hex[x]==14)
				{
					cout<<"E";
                }
			else if(hex[x]==15)
				{
					cout<<"F";
                }
			else
				{
					cout<<hex[x];
                }
			}
			 cout << "\n";
            }
            else if ( choose.size()==1 && choose[0] == '3' )
            {
              int from,to;
              cout<<"1-Dec   2-Hex   3-Bin   4-Oct \n";
              cout<<"convert from :";
              cin>>from;
              cout<<"to";
              cin>>to;

              if ( from==1 && to==3 )
              {
                long int decinum, quot;
                int binnum[100], i=1, j;
                cout<<"Enter Decimal Number : ";
                cin>>decinum;
                quot=decinum;
                while(quot!=0)
                {
                    binnum[i++]=quot%2;
                    quot=quot/2;
                }
                  cout<<"\n Conversion of Decimal Number to Binary Number : \n";
                  for(j=i-1; j>0; j--)
                  {
                     cout<<binnum[j];
                  }
              }
            else if ( from==1 && to==2 )
            {
              int num,counter,x,a,hex[100];
	          char c[100];
	          cout<<"Please enter a decimal: ";
	          cin>>num;
	          cout<<"\nThe Decimal number "<<num<<" converts to the Hexadecimal number:  ";
	          for(counter=0;num!=0;counter++)
              {
			    a=num%16;
			    hex[counter]=a;
                num=num/16;
			  }
	     for(x=counter-1;x>=0;x--)
	     	{
	 		if(hex[x]==10)
				{
					cout<<"A";
                }
			else if(hex[x]==11)
				{
					cout<<"B";
                }
			else if(hex[x]==12)
				{
					cout<<"C";
                }
			else if(hex[x]==13)
				{
					cout<<"D";
                }
			else if(hex[x]==14)
				{
					cout<<"E";
                }
			else if(hex[x]==15)
				{
					cout<<"F";
                }
			else
				{
					cout<<hex[x];
                }
			}
            }

            else if ( from==1 && to==4 )
            {
                int num=0,i=1,sum=0,rem=0;
                cout<<"please enter number "<<endl;
                cin>>num;
                while(num>0)
                {
                  rem=num%8;
                  sum=sum+(rem*i);
                  num=num/8;
                  i*=10;
                }
                cout<<"your octal number is = "<<sum<<endl;
             }
             else if ( from==2 && to==1 )
             {
                char no[100];
                int cnt = 0, sum = 0;
                cout<<"enter your num then = to stop\n";
                for(int i = 0; i < 100; i++)
                {
                   cin >> no[i];
                   cnt++;
                  if (no[i] == '=')
                  {
                    break;
                   }
                }
              for(int j = cnt-2, p = 0 ; j>=0; j--, p++){
                if(no[j] <= 57)
                {
                   int pow = 1;
                   for(int x=0;x < p;x++)
                   {
                     pow *= 16;
                   }
                    sum += (no[j]-48)*pow;
                }
                else if (no[j]>=65)
                 {
                   int pow = 1;
                    for(int x=0;x < p;x++)
                    {
                      pow *= 16;
                    }
                  sum += (no[j]-55)*pow;
                 }
               }
              cout << sum;
             }
             else if ( from==2 && to==3)
             {
               long int i=0;
               char hexa[100];
               cout<<"\n Enter Hexadecimal Number : ";
               cin>>hexa;
               cout<<"\n Conversion of Hexadecimal Number to Binary Number : ";
               while(hexa[i])
               {
                    switch(hexa[i])
                    {
                        case '0' : cout<<"0000";
                                break;
                        case '1' : cout<<"0001";
                                break;
                        case '2' : cout<<"0010";
                                break;
                        case '3' : cout<<"0011";
                                break;
                        case '4' : cout<<"0100";
                                break;
                        case '5' : cout<<"0101";
                                break;
                        case '6' : cout<<"0110";
                                break;
                        case '7' : cout<<"0111";
                                break;
                        case '8' : cout<<"1000";
                                break;
                        case '9' : cout<<"1001";
                                break;
                        case 'A' : cout<<"1010";
                                break;
                        case 'B' : cout<<"1011";
                                break;
                        case 'C' : cout<<"1100";
                                break;
                        case 'D' : cout<<"1101";
                                break;
                        case 'E' : cout<<"1110";
                                break;
                        case 'F' : cout<<"1111";
                                break;
                        case 'a' : cout<<"1010";
                                break;
                        case 'b' : cout<<"1011";
                                break;
                        case 'c' : cout<<"1100";
                                break;
                        case 'd' : cout<<"1101";
                                break;
                        case 'e' : cout<<"1110";
                                break;
                        case 'f' : cout<<"1111";
                                break;
                        default : cout<<"\n Invalid Hexadecimal Digit... "<<hexa[i];
                  }
                i++;
               }
             }
             else if ( from==2 && to==4)
             {
               char number_char[50];
               int count_size = 0, to_dec = 0, final_result[50] = {0};
               for(int i = 0; i < 50; i++)
               {
                  cin >> number_char[i];
                  count_size++;
                  if(number_char[i] == '=')
                  {
                    count_size--;
                     break;
                  }
               }
             for(int i = count_size - 1, p = 0; i >= 0; i--, p++)
             {
               if(number_char[i] <= 57 && number_char[i] >= 48 )
               {
               int pow = 1;
               for(int j = 0; j < p; j++)
               {
                pow = pow * 16;
               }
                to_dec += (number_char[i]-48) * pow;

               }
               else if(number_char[i] <= 70 && number_char[i] >= 65 )
               {
                 int pow = 1;
                 for(int j = 0; j < p; j++)
                {
                   pow = pow * 16;
                }
                 to_dec += (number_char[i]-55) * pow;
                }
               }
               int count_size_2 = 0;
               for(int i = 0; to_dec > 0; i++)
               {
                 final_result[i] = to_dec%8;
                 to_dec /= 8;
                 count_size_2 ++;
               }
              for(int i = count_size_2 - 1; i >= 0; i--)
              {
                 cout << final_result[i];
              }
             }
             else if ( from==3 && to==1 )
             {
                int num=0,rem=0,i=1,sum=0;
                cout<<"please enter number "<<endl;
                cin>>num;
                while(num>0)
                {
                  rem=num%10;
                  sum=sum+(rem*i);
                  i=i*2;
                  num=num/10;
                }
                cout<<"your decimal number is "<<sum<<endl;
             }
             else if ( from==3 && to==2 )
             {
                  long bin, dec = 0, rem, num, base = 1;
                  long int  op;
                  char hexdadecimal[100];
                  int i=1, j, x;
                  cin >> num;
                  bin = num;
                  while (num > 0)
                  {
                    rem = num % 10;
                    dec = dec + rem * base;
                    base = base * 2;
                    num = num / 10;
                  }
                     op=dec;
                  while(op!=0)
                 {
                     x=op%16;
                     if(x<10)
                      {
                         x+=48;
                      }
                     else
                     {
                        x+=55;
                     }
                 hexdadecimal[i++]=x;
                  op/=16;
                 }
                  cout<<" The Hexadecimal= ";
                  for(j=i-1; j>0; j--)
                  {
                    cout<<hexdadecimal[j];
                  }
                        cout<<endl;
             }
             else if ( from==3 && to==4 )
             {
               int num=0,i=1,sum=0,rem=0,n=1,remm=0,summ=0;
               cout<<"please enter number "<<endl;
               cin>>num;
               while(num>0)
               {
                rem=num%10;
                sum=sum+(rem*i);
                num=num/10;
                i=i*2;
               }
               while(sum>0)
               {
                 remm=sum%8;
                 summ=summ+(remm*n);
                 sum=sum/8;
                 n=n*10;
               }
                cout<<"your octal number is "<<summ<<endl;
             }
             else if ( from==4 && to==1 )
             {
               int num=0,i=1,sum=0,rem=0,summ,remm,n=1;
               cout<<"please enter number "<<endl;
               cin>>num;
               while(num>0)
               {
                 rem=num%10;
                 sum=sum+(rem*i);
                 num=num/10;
                 i*=8;
               }
               cout<<"your octal number is = "<<sum<<endl;
             }
             else if ( from==4 && to==2 )
             {
               long oct;
               int dec,i,j,c;
               long int quot;
               char hexdadecimal[100];
               int i1=1, j1, op;
               cout<<"ENTER YOUR NUMBER \n";
               cin>>oct;
               dec=0,i=0;
               while (oct!=0)
               {
                 long long  num=1;
                 c=oct%10;
                 oct/=10;
                 for (j=1; j<=i; j++)
                 {
                   num*=8;
                 }
                   ++i;
                  dec=dec+c* num;
               }
                quot=dec;
                while(quot!=0)
                {
                op=quot%16;
                if(op<10)
                {
                  op+=48;
                }
                else
                {
                   op+=55;
                }
                hexdadecimal[i1++]=op;
                quot/=16;
             }
           cout<<"THE HEXADECIMAL = ";
           for(j1=i1-1; j1>0; j1--)
           {
             cout<<hexdadecimal[j1];
           }
             cout<<"\n";
        }
             else if ( from==4 && to==3 )
             {
               long int i=0;
               char octnum[1000];
               cout<<"\n Enter Octal Number : ";
               cin>>octnum;
               cout<<"\n Conversion of Octal Number to Binary Number : ";
               while(octnum[i])
               {
                  switch(octnum[i])
                  {
                        case '0' : cout<<"000";
                                break;
                        case '1' : cout<<"001";
                                break;
                        case '2' : cout<<"010";
                                break;
                        case '3' : cout<<"011";
                                break;
                        case '4' : cout<<"100";
                                break;
                        case '5' : cout<<"101";
                                break;
                        case '6' : cout<<"110";
                                break;
                        case '7' : cout<<"111";
                                break;
                        default : cout<<"\n Invalid Octal Digit "<<octnum[i];
                                break;
                      }
                    i++;
                 }
             }
            }
            else if ( choose.size()==1 && choose[0] == '4' )
            {
                int bin, dec = 0, rem, num, base = 1;
                int bin1, dec1 = 0, rem1, num1, base1 = 1;
                int n, i, j, bin2=0,dn;
                char op_binary;
                cout<<"ENTER TWO NUMBER \"BINARY\" \n";
                cin>>num;
                cin>>num1;
                cout<<"ENTER THE OPERATION \n";
                cin>>op_binary;
                switch(op_binary)
                 {
                    case '+':
                    {
                       bin = num;
                       while (num > 0)
                       {
                         rem = num % 10;
                         dec = dec + rem * base;
                         base = base * 2;
                         num = num / 10;
                       }
                       bin1 = num1;
                      while (num1 > 0)
                    {
                      rem1 = num1 % 10;
                      dec1 = dec1 + rem1 * base1;
                      base1 = base1 * 2;
                      num1 = num1 / 10;
                     }
                    n=dec+dec1;
                    dn=n;
                    i=1;
                    for(j=n;j>0;j=j/2)
                    {
                      bin2=bin2+(n%2)*i;
                      i=i*10;
                      n=n/2;
                    }
                    cout<<"\n ";
                    cout<<" THE RESULT = ";
                    cout<<bin2<<endl;
                  }
                   break;
               case '-':
               {
                 bin = num;
                 while (num > 0)
                 {
                   rem = num % 10;
                   dec = dec + rem * base;
                   base = base * 2;
                   num = num / 10;
                 }
                 bin1 = num1;
                 while (num1 > 0)
                 {
                   rem1 = num1 % 10;
                   dec1 = dec1 + rem1 * base1;
                   base1 = base1 * 2;
                   num1 = num1 / 10;
                  }
                   n=dec-dec1;
                   dn=n;
                   i=1;
                for(j=n;j>0;j=j/2)
                {
                  bin2=bin2+(n%2)*i;
                  i=i*10;
                  n=n/2;
                }
               cout<<"\n ";
               cout<<"THE RESULT = ";
               cout<<bin2<<endl;
             }
             break;
           case '*':
           {
             bin = num;
             while (num > 0)
             {
               rem = num % 10;
               dec = dec + rem * base;
               base = base * 2;
               num = num / 10;
             }
               bin1 = num1;
               while (num1 > 0)
               {
                 rem1 = num1 % 10;
                 dec1 = dec1 + rem1 * base1;
                 base1 = base1 * 2;
                 num1 = num1 / 10;
               }
                 n=dec+dec1;
                 dn=n;
                 i=1;
                 for(j=n;j>0;j=j/2)
                 {
                   bin2=bin2+(n%2)*i;
                   i=i*10;
                   n=n/2;
                 }
               cout<<"THE RESULT = ";
               cout<<bin2<<endl;
            }
             break;
            default:
            {
               cout << " Error ";
            }

         }
      }
            else
            {
               cout << "error";
            }

     }

    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int selectCurreancy1, selectcurrancy2;
    float currancy1Amt = 0.0, currancy2Amt = 0.0;
    do
    {
        cout << " *****WelCome to Currancy Converter Application**********" << endl;

        cout << "Enter the currancy  which you want to convert: " << endl;
        cout << "1.Doller 2.Ruppee 3.Euro 4.Franc 5.yen  6.exit" << endl;
        cin >> selectCurreancy1;
        cout << "Enter the amount which you want to convert: " << endl;
        cin >> currancy1Amt;
        switch (selectCurreancy1)
        {
        case 1: // Doller to be converted
        {
            cout << "Enter currancy 2 which you want to convert" << endl;
            cout << "1.Doller 2.Ruppee 3.Euro 4.Franc 5.Yen" << endl;
            cin >> selectcurrancy2;
            if (selectcurrancy2 == 1) // Doller to Doller
            {
                currancy2Amt = currancy1Amt * 1;
                cout <<currancy1Amt <<" Doller is "<< currancy2Amt<<" Doller"<<endl;
            }
            else if (selectcurrancy2 == 2) // Dolller to Rupee
            {
                currancy2Amt = currancy1Amt * 82.39;
                cout <<currancy1Amt <<" Doller is "<< currancy2Amt<<" Rupees"<<endl;
            }
            else if (selectcurrancy2 == 3) // Doller to Euro
            {
                currancy2Amt = currancy1Amt * 1.03;
                cout <<currancy1Amt <<" Doller is " << currancy2Amt<<" Euro"<<endl;
            }
            else if (selectcurrancy2 == 4) // Doller to Franc
            {
                currancy2Amt = currancy1Amt * 0.99;
                cout <<currancy1Amt <<" Doller is " << currancy2Amt<<" Franc"<<endl;
            }
            else if (selectcurrancy2 == 5) // Doller to Yen
            {
                currancy2Amt = currancy1Amt * 146; //
                cout <<currancy1Amt <<" Doller is "<< currancy2Amt<<" Yen"<<endl;
            }
            break;
        }

        case 2: // Ruppes to be converted
        {
            cout << "Enter currancy 2 which you want to convert" << endl;
            cout << "1.Doller 2.Ruppee 3.Euro 4.franc 5.Yen" << endl;
            cin >> selectcurrancy2;
            if (selectcurrancy2 == 1) // Ruppes to Doller
            {
                currancy2Amt = currancy1Amt * 0.012;
                cout <<currancy1Amt <<" Rupees is "<< currancy2Amt<<" Doller"<<endl;
            }
            else if (selectcurrancy2 == 2) // Rupees to Rupess
            {
                currancy2Amt = currancy1Amt * 1;
                 cout <<currancy1Amt <<" Rupees is " << currancy2Amt<<" Rupees\n";
            }
            else if (selectcurrancy2 == 3) // Rupees to Euro
            {
                currancy2Amt = currancy1Amt * 0.012;
                cout <<currancy1Amt <<" Rupees is " << currancy2Amt<<" Euro\n"<<endl;
            }
            else if (selectcurrancy2 == 4) // Ruppees to franc
            {
                currancy2Amt = currancy1Amt * 0.012;
                cout <<currancy1Amt <<" Rupees is " << currancy2Amt<<" Franc\n";
            }
            else if (selectcurrancy2 == 5) // Ruppees to Yen
            {
                currancy2Amt = currancy1Amt * 1.78;
                cout <<currancy1Amt <<" Rupees is " << currancy2Amt<<" Yen\n";
            }
            break;
        }
        case 3:
        {
            cout << "Enter currancy 2 which you want to convert" << endl;
            cout << "1.Doller 2.Ruppee 3.Euro 4.Yen 5.Frnc" << endl;
            cin >> selectcurrancy2;
            if (selectcurrancy2 == 1)
            {
                currancy2Amt = currancy1Amt * 0.97;
                cout <<currancy1Amt <<" Euro is " << currancy2Amt<<" Doller\n";
            }
            else if (selectcurrancy2 == 2)//Ruppee
            {
                currancy2Amt = currancy1Amt * 79.90;
                 cout <<currancy1Amt <<" Euro is " << currancy2Amt<<" Rupees\n";
            }
            else if (selectcurrancy2 == 3)//Euro
            {
                currancy2Amt = currancy1Amt * 1;
                 cout <<currancy1Amt <<" Euro is " << currancy2Amt<<" Euro\n";
            }
            else if (selectcurrancy2 == 4)//Yen
            {
                currancy2Amt = currancy1Amt * 0.96;
                 cout <<currancy1Amt <<" Euro is " << currancy2Amt<<" Yen\n";
            }
            else if (selectcurrancy2 == 5)//Franc
            {
                currancy2Amt = currancy1Amt * 142;
                 cout <<currancy1Amt <<" Euro is " << currancy2Amt<<" Franc\n";
            }
            break;
        }
        case 4: // franc to  be converted
        {
            cout << "Enter currancy 2 which you want to convert" << endl;
            cout << "1.Doller 2.Ruppee 3.Euro 4.fran 5.Yen" << endl;
            cin >> selectcurrancy2;
            if (selectcurrancy2 == 1) // franc to Doller
            {
                currancy2Amt = currancy1Amt * 1;
                 cout <<currancy1Amt <<" Franc is " << currancy2Amt<<" Doller\n";
            }
            else if (selectcurrancy2 == 2) // franc to Rupee
            {
                currancy2Amt = currancy1Amt * 82.43;
                cout <<currancy1Amt <<" Franc is " << currancy2Amt<<" Ruppes\n";
            }
            else if (selectcurrancy2 == 3) // franc to Euro
            {
                currancy2Amt = currancy1Amt * 1.03;
                cout <<currancy1Amt <<" Franc is " << currancy2Amt<<" Euro\n";
            }
            else if (selectcurrancy2 == 4) // franc to franc
            {
                currancy2Amt = currancy1Amt * 1;
                cout <<currancy1Amt <<" Franc is " << currancy2Amt<<" Franc\n";
            }
            else if (selectcurrancy2 == 5) // franc to yen
            {
                currancy2Amt = currancy1Amt * 146;
                cout <<currancy1Amt <<" Franc is " << currancy2Amt<<" Yen\n";
            }
            break;
        }
        case 5: // Yen to be converted
        {
            cout << "Enter currancy 2 which you want to convert" << endl;
            cout << "1.Doller 2.Ruppee 3.Euro 4.fran 5.Yen" << endl;
            cin >> selectcurrancy2;
            if (selectcurrancy2 == 1) // yen to Doller
            {
                currancy2Amt = currancy1Amt * 0.0068;
                cout <<currancy1Amt <<" Yen is " << currancy2Amt<<" Doller\n";
            }
            else if (selectcurrancy2 == 2) // yen to Rupee
            {
                currancy2Amt = currancy1Amt * 0.56;
                 cout <<currancy1Amt <<" Yen is " << currancy2Amt<<" Rupees\n";
            }
            else if (selectcurrancy2 == 3) // yen to Euro
            {
                currancy2Amt = currancy1Amt * 0.007;
                 cout <<currancy1Amt <<" Yen is " << currancy2Amt<<" Euro\n";
            }
            else if (selectcurrancy2 == 4) // yen to franc
            {
                currancy2Amt = currancy1Amt * 0.0068;
                 cout <<currancy1Amt <<" Yen is " << currancy2Amt<<" Franc\n";
            }
            else if (selectcurrancy2 == 5) // yen to yen
            {
                currancy2Amt = currancy1Amt * 1;
                 cout <<currancy1Amt <<" Yen is " << currancy2Amt<<" Yen\n";
            }
            break;
        }
        }
    } while (selectCurreancy1!= 6);

    return 0;
}

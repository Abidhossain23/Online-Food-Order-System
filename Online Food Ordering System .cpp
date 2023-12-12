#include<bits/stdc++.h>
using namespace std;

class AbstractUser {
public:
    virtual void setUsername(const string& x) = 0;
    virtual void setPassword(const string& y) = 0;
    virtual string getUsername() const = 0;
    virtual string getPassword() const = 0;
    virtual bool authenticateUser(const string& enteredUsername, const string& enteredPassword) const = 0;
    virtual ~AbstractUser() = default;
};

// For login
    class user: public AbstractUser {
private:
    string username, password;

   public:
    void setUsername(const string& x) override {
        username = x;
    }

    void setPassword(const string& y) override {
        password = y;
    }

   string getUsername() const override {
        return username;
    }

    string getPassword() const override {
        return password;
    }

    bool authenticateUser(const string& enteredUsername, const string& enteredPassword) const override {
        return (username == enteredUsername && password == enteredPassword);
    }
};

// For login


int main(){

    char location;
// Password
     user user;

    cout << "Username: ";
    user.setUsername("p");
    cout << user.getUsername() << endl;

    cout << "Password: ";
    user.setPassword("p");
    cout << user.getPassword() << endl;

    string username, password;

    cout << "\nEnter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;



    if (user.authenticateUser(username, password)) {

                    cout << "                   **************************************            "<<endl;
                    cout << "                    *                                        *             "<< endl;
                    cout << "                     *                                      *              "<< endl;
                    cout << "                      *                                    *               "<< endl;
                    cout << "                       * Welcome to Code squard restaurant*                "<<endl;
                    cout << "                      *                                    *               "<< endl;
                    cout << "                     *                                      *              "<< endl;
                    cout << "                    *                                        *             "<< endl;
                    cout << "                   **************************************            "<< "\n";


            int order, quantity, total=0,totalp;
            char c;
start:
    cout<<"\n   Here are the Menu-Items:\n"<<endl;
    cout<<"  1.Chicken Pizza = 1100 tk       "<<"    2.Beef Pizza = 1500 tk       "<<"   3.Peri Peri Pizza = 1000 tk "<<"   4.Zinger Burger = 450 tk"<<endl;
    cout<<" "<<endl;
    cout<<"  5.Chicken Burger = 150 tk       "<<"    6. Beef Burger = 550 tk      "<<"   7.Club Sandwich = 150 tk    "<<"   8.Chicken Sandwich = 200 tk"<<endl;
    cout<<" "<<endl;
    cout<<"  9.Special Beef Sandwich = 300 tk"<<"    10.Chicken Biriyani = 280 tk "<<"   11.Fish Biriyani = 280 tk   "<<"   12.Beef Biriyani = 320 tk"<<endl;
    cout<<" "<<endl;
    cout<<"  13.Mutton Biriyani = 400 tk     "<<"    14.White Souce Pasta = 340 tk"<<"   15.Red Souce Pasta = 340 tk "<<"   16.Fried Pasta = 200 tk"<<endl;



cout<<"\n(To buy)Enter the item code:"<<" ";
 cin>>order;

switch(order) {
case 1:
cout<<"\nChicken Pizza = 1100 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>> quantity;
total=total+(1100*quantity );
cout<<"\nChicken Pizza = 1100/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 2:
cout<<"\nBeef Pizza = 1500 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(1500*quantity );
cout<<"\nBeef Pizza= 1500/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 3:
cout<<"\nPeri Peri Pizza = 1000 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(1000*quantity );
cout<<"\nPeri Peri Pizza = 1000/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 4:
cout<<"\nZinger Burger = 450 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(450*quantity );
cout<<"\nZinger Burger = 450/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 5:
cout<<"\nChicken Burger = 150 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(500*quantity );
cout<<"\nChicken Burger = 150 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 6:
cout<<"Beef Burger = 550 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(550*quantity );
cout<<"\nBeef Burger = 550 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 7:
cout<<"\nClub Sandwich = 150 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(150*quantity );
cout<<"\nClub Sandwich = 150 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 8:
cout<<"\nChicken Sandwich = 200 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(200*quantity );
cout<<"\nChicken Sandwich = 200 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 9:
cout<<"\nSpecial Beef Sandwich = 300 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(300*quantity );
cout<<"\nSpecial Beef Sandwich = 300/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 10:
cout<<"\nChicken Biryani = 280 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(280*quantity );
cout<<"\nChicken Biriyani = 280 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 11:
cout<<"\nFish Biryani = 280 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(280*quantity );
cout<<"\nFish Biriyani = 280 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 12:
cout<<"\nBeef Biryani = 320 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(320*quantity );
cout<<"\nBeef Biriyani = 320 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 13:
cout<<"\nMutton Biryani = 400 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(400*quantity );
cout<<"\nMutton Biriyani = 400/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 14:
cout<<"\nWhite Souce Pasta =340 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(340*quantity );
cout<<"\nWhite Souce Pasta = 340/- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 15:
cout<<"\nRed Souce Pasta =340 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(340*quantity );
cout<<"\nRed Souce pasta = 340 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;

case 16:
cout<<"\nFried Pasta =200 tk"<<endl;
cout<<"\nEnter the quantity:";
cin>>quantity ;
total=total+(200*quantity );
cout<<"\nFried pasta = 200 /- Quantity "<<"  *  "<<quantity<<" ="<<" Total amount: "<<total<<" /-"<<endl;

break;
}


cout<<"\n To buy more press(y) or To stop buy press any key:"<<endl;
cin>>c;
if(c=='y'){
goto start;
}else{
    cout<<"\n***Service Charge inside Dhaka = 80/- or outside Dhaka = 150/-***"<<endl;

    cout << "\nIs your location in Dhaka? (Press (Y/N):" << endl;
    cin >> location;

    if (location == 'Y' || location == 'y') {
        totalp=(total+80);
        cout << "\nTotal item price is : "<<total<<endl;
        cout << "\nService Charge added: 80/-"<<endl;
        cout << "\nTotal price is:"<<totalp<<endl;
    } else if (location == 'n' || location == 'N') {
        totalp=(total+150);
        cout << "\nTotal item price is :" <<total<<endl;
         cout << "\nService Charge added: 150/-"<<endl;
         cout << "\nTotal amount is:"<<totalp<<endl;
    } else {
        cout << "\nInvalid input. Please enter (Y/N)" << endl;
    }
}

    cout<<"\nYou have to pay: "<<" ="<<totalp<<" /-\n"<<endl;
    }


 else {

    cout<<"\nInvalid password please try again correctly."<<endl;
    }
}

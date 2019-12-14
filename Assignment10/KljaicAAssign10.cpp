/*********************************************************************
    PROGRAM:    CSCI 270 - Assignment 10
    PROGRAMMER: Aleksandar Kljaic
    INSTRUCTOR: Donna Ogle
    DUE DATE:   Tuesday November 7, 2019

    Do Programming Challenge #7 - PersonData and CustomerData classes
    on p. 983 in the book. Name the new program: LastnameFAssign10 where
    Lastname is your last name and F is the first initial of your first
    name. Ex: OgleD

    Add another variable to the PersonData class. It is of your choosing.
    Also, add another class derived from the PersonData class called
    VendorData. It has one member variable called vendorName. Demonstrate
    the use of this class in your program. Write appropriate mutator and
    accessor functions for this new class.

    Create the main part of the program to get and display instances of
    these class. You will need to create your own data.

    Save in a file folder on your storage device.

    Add 3 comments at the top of the page with your name, the class,
    and the date. Put each comment on a separate line.

    In addition, I want at least 5 additional comments in the program.
    All comments must describe what the program is doing. Also, the
    variable and function names must be descriptive. Your output must
    also be descriptive.

    Please do your own work and create your own variable names.

    Test the program and make sure it runs. Upload the .cpp file.

*********************************************************************/
#include <iostream>
using namespace std;

class PersonData
{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;
    string ethnicity;

public:
    //set and get methods for PersonData class
    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }
    string getLastName()
    {
        return lastName;
    }
    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }
    string getFirstName()
    {
        return firstName;
    }
    void setAddress(string address)
    {
        this->address = address;
    }
    string getAddress()
    {
        return address;
    }
    void setCity(string city)
    {
        this->city = city;
    }
    string getCity()
    {
        return city;
    }
    void setState(string state)
    {
        this->state = state;
    }
    string getState()
    {
        return state;
    }
    void setZip(string zip)
    {
        this->zip = zip;
    }
    string getZip()
    {
        return zip;
    }
    void setPhone(string phone)
    {
        this->phone = phone;
    }
    string getPhone()
    {
        return phone;
    }
    void setEthnicity(string ethnicity)
    {
        this->ethnicity = ethnicity;
    }
    string getEthnicity()
    {
        return ethnicity;
    }

};

class CustomerData : public PersonData
{
private:
    int customerNumber;
    bool mailingList;

public:
    //set and get methods
    void setCustomerNumber(int customerNumber)
    {
        this->customerNumber = customerNumber;
    }
    int getCustomerNumber()
    {
        return customerNumber;
    }
    void setMailingList(bool mailingList)
    {
        this->mailingList = mailingList;
    }
    int getMailingList()
    {
        return mailingList;
    }

};
// class derived from the PersonData class called VendorData
class VendorData : public PersonData
{
private:
    string vendorName; // member variable called vendorName

public:
    //set and get methods for vendorName
    void setVendorName(string vendorName)
    {
        this->vendorName = vendorName;
    }
    string getVendorName()
    {
        return vendorName;
    }
};
int main() {

    CustomerData customer;
    VendorData vendor;

    // Customer Information
    customer.setCustomerNumber(178616);
    customer.setMailingList(true);
    customer.setLastName("Kljaic");
    customer.setFirstName("Aleksandar");
    customer.setAddress("2616 Knight Avenue");
    customer.setCity("Rockford");
    customer.setState("IL");
    customer.setZip("61101");
    customer.setPhone("815-847-0148");
    customer.setEthnicity("Serbian"); // Additional variable for customer

    // Vendor Information
    vendor.setVendorName("Luis"); // Additional variable for vendor

    cout << "CUSTOMER INFORMATION" << endl; // Customer output
    cout << " Customer Number : " << customer.getCustomerNumber() << endl;
    cout << " Customer Name : " << customer.getFirstName() << " "
         << customer.getLastName() << endl;
    cout << " Address : " << customer.getAddress() << ", " << customer.getCity()
         << ", " << customer.getState()<<" " << customer.getZip() << endl;
    cout << " Phone : " << customer.getPhone() << endl;
    cout << " Ethnicity : " << customer.getEthnicity() << endl << endl;
    cout << "VENDOR INFORMATION" << endl; // Vendor output
    cout << " Vendor Name: " << vendor.getVendorName() << endl;

    system("PAUSE");
    return 0;
}

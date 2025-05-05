#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>

using namespace std;
void Menu(); // forward decleration of Global Function

template <class t1 = int, class t2 = double, class t3 = string>
class items
{
private:
    t3 category;
    t3 brand;
    t3 product_name;
    t1 product_id;
    t1 quantity;
    t2 price;
    static int i;

protected:
public:
    items() {}
    items(t3 product_name, t1 quantity, t2 price, t3 category)
    {
        this->category = category;
        this->product_name = product_name;
        this->price = price;
        this->quantity = quantity;
        this->product_id = i;
        i++;
    }
    void set_price(t2 price)
    {
        this->price = price;
    }
    void set_quantity(t1 quantity)
    {
        this->quantity = quantity;
    }
    t3 get_category()
    {
        return category;
    }
    t3 get_product_name()
    {
        return product_name;
    }
    t1 get_product_quantity()
    {
        return quantity;
    }
    t1 get_product_id()
    {
        return product_id;
    }
    t2 get_product_price()
    {
        return price;
    }
};
template <class t1, class t2, class t3>
int items<t1, t2, t3>::i = 1;

template <class t1 = int, class t2 = double, class t3 = string>
class electronics_items : public items<t1, t2, t3>
{
private:
    t1 no_of_months_warranty;

protected:
public:
    electronics_items() {}
    electronics_items(t1 no_of_months_warranty, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Electronics")
    {
        this->no_of_months_warranty = no_of_months_warranty;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class snacks_items : public items<t1, t2, t3>
{

private:
    t3 expire_date;

protected:
public:
    snacks_items() {}
    snacks_items(t3 expire_date, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Snacks")
    {
        this->expire_date = expire_date;
    }
    t3 get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    t1 get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class stationary_items : public items<t1, t2, t3>
{
private:
    t3 quality;

protected:
public:
    stationary_items() {}
    stationary_items(t3 quality, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Stationary")
    {
        this->quality = quality;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};

class super_market;

class stock_management
{

private:
    vector<electronics_items<int, double, string>> electronic_products;
    vector<string> electronic_item = {"laptop", "mobile", "keyoard"};
    vector<double> electronic_price = {100000, 50000, 2000};
    vector<int> electronic_quantity = {10, 20, 50};
    int num_of_electronic_items;
    vector<int> no_of_months_warranty = {12, 13, 6};

    vector<snacks_items<int, double, string>> snacks_products;
    vector<string> snacks_item = {"abc_biscuit", "abc_chocolate", "abc_colddrink"};
    vector<double> snacks_price = {100, 200, 150};
    vector<int> snacks_quantity = {80, 90, 100};
    int num_of_snack_items;
    vector<string> expire_dates = {"15-march-2024", "15-april-2024", "15-may-2024"};

    vector<stationary_items<int, double, string>> stationary_products;
    vector<string> stationary_item = {
        "pencil", "pen", "eraser"};
    vector<double> stationary_price = {50, 100, 50};
    vector<int> stationary_quantity = {100, 120, 150};
    int num_of_stationary_items;
    vector<string> stationary_quality = {"good", "medium", "good"};

protected:
public:
    stock_management()
    {
        num_of_electronic_items = 3;
        num_of_snack_items = 3;
        num_of_stationary_items = 3;
        add_items();
    }
    void add_items()
    {
        for (int i = 0; i < 3; i++)
        {
            electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));

            snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));

            stationary_products.push_back(stationary_items<int, double, string>(
                stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
        }
        cout << "Default Products Added Successfully" << endl;
    }

    void manage_stock()
    {
        cout << "Managing stock of Electronic items: " << endl;
        int n;
        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
        cout << endl;
        cout << "Managing stock for snack items:" << endl;

        for (int i = 0; i < num_of_snack_items; i++)
        {
            if (snacks_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << snacks_products[i].get_product_id() << " Product name: " << snacks_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                snacks_products[i].set_quantity(n);
            }
        }
        cout << "Managing stock of Stationary items: " << endl;

        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
    }
    void change_price(string product_name, double new_price, string category)
    {
        if (category == "Electronics")
            for (int i = 0; i < num_of_electronic_items; i++)
            {
                if (electronic_products[i].get_product_name() == product_name)
                {
                    electronic_products[i].set_price(new_price);
                    cout << "Price changed successfully for " << product_name << endl;
                    return;
                }
            }

        else if (category == "Snacks")
            for (int i = 0; i < num_of_snack_items; i++)
            {
                if (snacks_products[i].get_product_name() == product_name)
                {
                    snacks_products[i].set_price(new_price);
                    cout << "Price changed successfully for " << product_name << endl;
                    return;
                }
            }

        else if (category == "Stationary")
            for (int i = 0; i < num_of_stationary_items; i++)
            {
                if (stationary_products[i].get_product_name() == product_name)
                {
                    stationary_products[i].set_price(new_price);
                    cout << "Price changed successfully for " << product_name << endl;
                    return;
                }
            }
        cout << "Product not found in " << category << " category" << endl;
    }

    void add_items(string name[], int quantity[], double price[], int warranty[], string category, int num_items)
    {
        cout << "add_items called for " << category << " with " << num_items << " items" << endl;
        if (category == "Electronics")
        {
            int store = num_of_electronic_items;
            
            cout << "Current electronic items: " << num_of_electronic_items << endl;
            for (int i = 0; i < num_items; i++)
            {
                cout << "Adding item " << i+1 << ": " << name[i] << endl;
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                int store4 = warranty[i];
                electronic_item.push_back(store1);
                electronic_quantity.push_back(store2);
                electronic_price.push_back(store3);
                no_of_months_warranty.push_back(store4);
                num_of_electronic_items++;
            }

            cout << "Adding " << num_of_electronic_items - store << " electronic products to vector" << endl;
            for (int i = store; i < num_of_electronic_items; i++)
            {
                electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));
            }
            cout << "------------Product Added Successfully------" << endl;
            cout << "New total: " << num_of_electronic_items << " electronic items" << endl;
        }
    }

    void add_items(string name[], int quantity[], double price[], string attribute[], string category, int num_items)
    {
        cout << "add_items called for " << category << " with " << num_items << " items" << endl;
        if (category == "Snacks")
        {
            int store = num_of_snack_items;
            cout << "Current snack items: " << num_of_snack_items << endl;
            
            for (int i = 0; i < num_items; i++)
            {
                cout << "Adding item " << i+1 << ": " << name[i] << endl;
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                snacks_item.push_back(store1);
                snacks_quantity.push_back(store2);
                snacks_price.push_back(store3);
                expire_dates.push_back(store4);
                num_of_snack_items++;
            }

            cout << "Adding " << num_of_snack_items - store << " snack products to vector" << endl;
            for (int i = store; i < num_of_snack_items; i++)
            {
                snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));
            }
            cout << "------------Product Added Successfully------" << endl;
            cout << "New total: " << num_of_snack_items << " snack items" << endl;
        }
        else if (category == "Stationary")
        {
            int store = num_of_stationary_items;
            cout << "Current stationary items: " << num_of_stationary_items << endl;
            
            for (int i = 0; i < num_items; i++)
            {
                cout << "Adding item " << i+1 << ": " << name[i] << endl;
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                stationary_item.push_back(store1);
                stationary_quantity.push_back(store2);
                stationary_price.push_back(store3);
                stationary_quality.push_back(store4);
                num_of_stationary_items++;
            }

            cout << "Adding " << num_of_stationary_items - store << " stationary products to vector" << endl;
            for (int i = store; i < num_of_stationary_items; i++)
            {
                stationary_products.push_back(stationary_items<int, double, string>(
                    stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
            }
            cout << "------------Product Added Successfully------" << endl;
            cout << "New total: " << num_of_stationary_items << " stationary items" << endl;
        }
    }

    friend class super_market;
    friend class delivery_on_app;
    friend class delivery_on_call;
    friend class Manual;
};

class super_market
{

public:
    void display_menu(stock_management &a)
    {
        cout << "Electronics items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "snacks items: " << endl;
        for (int i = 0; i < a.num_of_snack_items; i++)
        {
            cout << "Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "Stationary items: " << endl;
        for (int i = 0; i < a.num_of_stationary_items; i++)
        {
            cout << "Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << endl;
        }
        cout << endl;
    }
    void display_product_details(stock_management &a)
    {
        cout << "Electronics Items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product id: " << a.electronic_products[i].get_product_id() << " Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << " Product Quantity: " << a.electronic_products[i].get_product_quantity() << endl;

            cout << "Snacks Items: " << endl;
            for (int i = 0; i < a.num_of_snack_items; i++)
            {
                cout << "Product id: " << a.snacks_products[i].get_product_id() << " Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << " Product Quantity: " << a.snacks_products[i].get_product_quantity() << endl;
            }
            cout << "Stationary Items: " << endl;
            for (int i = 0; i < a.num_of_stationary_items; i++)
            {
                cout << "Product id: " << a.stationary_products[i].get_product_id() << " Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << " Product Quantity: " << a.stationary_products[i].get_product_quantity() << endl;
            }
        }
    }
};

class Employee
{
protected:
    int EmployeeID;
    string EmployeeName;
    double EmployeeSalary;
    string DateOfJoining;
    string Position;
    int YearOfJoining;

public:
    Employee() {}
    Employee(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : EmployeeID(id), EmployeeName(name), EmployeeSalary(salary), DateOfJoining(dateofjoining), Position(position), YearOfJoining(yearofjoining) {}

    virtual int get_EmployeeID() const = 0;
    virtual string get_EmployeeName() const = 0;
    virtual double get_EmployeeSalary() const = 0;
    virtual string get_DateOfJoining() const = 0;
    virtual string get_Position() const = 0;
    virtual int get_YearOfjoining() const = 0;

    virtual void set_EmployeeID(int id) = 0;
    virtual void set_EmployeeName(const string &name) = 0;
    virtual void set_EmployeeSalary(double salary) = 0;
    virtual void set_DateOfJoining(const string &dateofjoining) = 0;
    virtual void set_Position(const string &position) = 0;
    virtual void set_YearOfjoining(int yearofjoining) = 0;

    virtual void DisplayEmployeeDetails() = 0;
};

class Expenses
{
private:
    static double electricityBill;
    static double gasBill;
    static double securityExpenses;

public:
    Expenses() {}

    double getElectricityBill() const
    {
        return electricityBill;
    }

    double getGasBill() const
    {
        return gasBill;
    }

    double getSecurityExpenses() const
    {
        return securityExpenses;
    }
    static void updateExpenses();
    static void displayExpenses();
};
double Expenses::electricityBill = 0.0;
double Expenses::gasBill = 0.0;
double Expenses::securityExpenses = 0.0;
void Expenses::updateExpenses()
{
    while (true)
    {
        try
        {
            cout << "Enter Electricity bill amount: ";
            cin >> electricityBill;
            if (electricityBill < 0)
                throw "Electricity bill cannot be negative.";

            cout << "Enter Gas bill amount: ";
            cin >> gasBill;
            if (gasBill < 0)
                throw "Gas bill cannot be negative.";

            cout << "Enter security Expenses: ";
            cin >> securityExpenses;
            if (securityExpenses < 0)
                throw "Security expenses cannot be negative.";

            cout << "----Expenses updated successfully----" << endl;
            break; // Break out of the loop if expenses are updated successfully
        }
        catch (const char *errorMessage)
        {
            cout << "Error: " << errorMessage << endl;
            cin.clear();
            updateExpenses();
        }
    }
}
void Expenses::displayExpenses()
{
    cout << "--------Displaying Expenses--------" << endl;
    cout << "Electricity Bill= " << electricityBill << endl;
    cout << "Gas Bill= " << gasBill << endl;
    cout << "Security Expenses= " << securityExpenses << endl;
}

class Manager : public Employee
{
private:
    string Username;
    string Password;
    int choice;
    string productname;
    double price;
    string category;
    vector<string> electronic_names;
    vector<int> electronic_quantities;
    vector<double> electronic_prices;
    vector<int> electronic_warranties;
    vector<string> snacks_names;
    vector<int> snacks_quantities;
    vector<double> snacks_prices;
    vector<string> snacks_expire_dates;
    vector<string> stationary_names;
    vector<int> stationary_quantities;
    vector<double> stationary_prices;
    vector<string> stationary_qualities;
    int num_snacks;
    int num_stationary;
    int num_electronics;
    int n;
    stock_management managment;

public:
    Manager() {}
    Manager(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : Employee(id, name, salary, dateofjoining, position, yearofjoining), Username("manager"), Password("1234") {}

    bool verification(const string &username, const string &password)
    {
        if (username == Username && password == Password)
        {
            return true;
        }
        return false;
    }

    int get_EmployeeID() const { return EmployeeID; }
    string get_EmployeeName() const { return EmployeeName; }
    double get_EmployeeSalary() const { return EmployeeSalary; }
    string get_DateOfJoining() const { return DateOfJoining; }
    string get_Position() const { return Position; }
    int get_YearOfjoining() const { return YearOfJoining; }

    void set_EmployeeID(int id) { EmployeeID = id; };
    void set_EmployeeName(const string &name) { EmployeeName = name; }
    void set_EmployeeSalary(double salary) { EmployeeSalary = salary; }
    void set_DateOfJoining(const string &dateofjoining) { DateOfJoining = dateofjoining; }
    void set_Position(const string &position) { Position = position; }
    void set_YearOfjoining(int yearofjoining) { YearOfJoining = yearofjoining; }

    void DisplayEmployeeDetails()
    {
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|             MANAGER DETAILS                |" << endl;
        cout << "\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
        cout << "\t\t\t\t  | Employee ID:             | " << setw(24) << EmployeeID << " |" << endl;
        cout << "\t\t\t\t  | Employee Name:           | " << setw(24) << EmployeeName << " |" << endl;
        cout << "\t\t\t\t  | Employee Salary:         | $" << setw(23) << fixed << setprecision(2) << EmployeeSalary << " |" << endl;
        cout << "\t\t\t\t  | Date of Joining:         | " << setw(24) << DateOfJoining << " |" << endl;
        cout << "\t\t\t\t  | Position:                | " << setw(24) << Position << " |" << endl;
        cout << "\t\t\t\t  | Year of Joining:         | " << setw(24) << YearOfJoining << " |" << endl;
        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
    }

    void manager()
    {
        system("cls");
        do
        {
            cout << "1) To Manage Stock" << endl;
            cout << "2) To Update BILL" << endl;
            cout << "0) BACK TO MENU" << endl;
            cout << "Enter a choice" << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                int subchoice;
                cout << "1) Add product" << endl;
                cout << "2) Check Stock" << endl;
                cout << "3) Change Price" << endl;
                cout << "0) BACK TO MENU" << endl;
                cin >> subchoice;

                switch (subchoice)
                {
                case 1:
                    cout << "which category you want to insert 1)Electronics 2)snacks 3)stationary" << endl;
                    cin >> n;
                    switch (n)
                    {
                    case 1:
                        try {
                            cout << "Enter the number of electronic items you want to add: ";
                            cin >> num_electronics;
                            if (num_electronics <= 0) {
                                cout << "Invalid number of items" << endl;
                                break;
                            }

                            electronic_names.clear();
                            electronic_quantities.clear();
                            electronic_prices.clear();
                            electronic_warranties.clear();

                            for (int i = 0; i < num_electronics; ++i)
                            {
                                string name;
                                int quantity;
                                double price;
                                int warranty;

                                cout << "Enter the name of electronic item " << i + 1 << ": ";
                                cin >> name;
                                electronic_names.push_back(name);

                                cout << "Enter the quantity of " << name << ": ";
                                cin >> quantity;
                                if (quantity <= 0) {
                                    cout << "Invalid quantity" << endl;
                                    i--;
                                    continue;
                                }
                                electronic_quantities.push_back(quantity);

                                cout << "Enter the price of " << name << ": ";
                                cin >> price;
                                if (price <= 0) {
                                    cout << "Invalid price" << endl;
                                    i--;
                                    continue;
                                }
                                electronic_prices.push_back(price);

                                cout << "Enter the warranty (In months) of " << name << ": ";
                                cin >> warranty;
                                if (warranty <= 0) {
                                    cout << "Invalid warranty period" << endl;
                                    i--;
                                    continue;
                                }
                                electronic_warranties.push_back(warranty);
                            }

                            {
                                string* names = new string[num_electronics];
                                int* quantities = new int[num_electronics];
                                double* prices = new double[num_electronics];
                                int* warranties = new int[num_electronics];

                                for (int i = 0; i < num_electronics; i++) {
                                    names[i] = electronic_names[i];
                                    quantities[i] = electronic_quantities[i];
                                    prices[i] = electronic_prices[i];
                                    warranties[i] = electronic_warranties[i];
                                }

                                cout << "Adding " << num_electronics << " electronic items..." << endl;
                                managment.add_items(names, quantities, prices, warranties, "Electronics", num_electronics);
                                delete[] names;
                                delete[] quantities;
                                delete[] prices;
                                delete[] warranties;
                            }
                        }
                        catch (const exception& e) {
                            cout << "Error adding electronic items: " << e.what() << endl;
                        }
                        break;

                    case 2:
                        try {
                            cout << "Adding Snacks Items:" << endl;
                            cout << "Enter the number of snacks items you want to add: ";
                            cin >> num_snacks;
                            if (num_snacks <= 0) {
                                cout << "Invalid number of items" << endl;
                                break;
                            }

                            snacks_names.clear();
                            snacks_quantities.clear();
                            snacks_prices.clear();
                            snacks_expire_dates.clear();

                            for (int i = 0; i < num_snacks; ++i)
                            {
                                string name;
                                int quantity;
                                double price;
                                string expire_date;

                                cout << "Enter the name of snacks item " << i + 1 << ": ";
                                cin >> name;
                                snacks_names.push_back(name);

                                cout << "Enter the quantity of " << name << ": ";
                                cin >> quantity;
                                if (quantity <= 0) {
                                    cout << "Invalid quantity" << endl;
                                    i--;
                                    continue;
                                }
                                snacks_quantities.push_back(quantity);

                                cout << "Enter the price of " << name << ": ";
                                cin >> price;
                                if (price <= 0) {
                                    cout << "Invalid price" << endl;
                                    i--;
                                    continue;
                                }
                                snacks_prices.push_back(price);

                                cout << "Enter the expiration date (DD-MM-YYYY) of " << name << ": ";
                                cin >> expire_date;
                                snacks_expire_dates.push_back(expire_date);
                            }

                            {
                                string* names = new string[num_snacks];
                                int* quantities = new int[num_snacks];
                                double* prices = new double[num_snacks];
                                string* dates = new string[num_snacks];

                                for (int i = 0; i < num_snacks; i++) {
                                    names[i] = snacks_names[i];
                                    quantities[i] = snacks_quantities[i];
                                    prices[i] = snacks_prices[i];
                                    dates[i] = snacks_expire_dates[i];
                                }

                                cout << "Adding " << num_snacks << " snack items..." << endl;
                                managment.add_items(names, quantities, prices, dates, "Snacks", num_snacks);
                                delete[] names;
                                delete[] quantities;
                                delete[] prices;
                                delete[] dates;
                            }
                        }
                        catch (const exception& e) {
                            cout << "Error adding snack items: " << e.what() << endl;
                        }
                        break;

                    case 3:
                        try {
                            cout << "Adding Stationary Items:" << endl;
                            cout << "Enter the number of stationary items you want to add: ";
                            cin >> num_stationary;
                            if (num_stationary <= 0) {
                                cout << "Invalid number of items" << endl;
                                break;
                            }

                            stationary_names.clear();
                            stationary_quantities.clear();
                            stationary_prices.clear();
                            stationary_qualities.clear();

                            for (int i = 0; i < num_stationary; ++i)
                            {
                                string name;
                                int quantity;
                                double price;
                                string quality;

                                cout << "Enter the name of stationary item " << i + 1 << ": ";
                                cin >> name;
                                stationary_names.push_back(name);

                                cout << "Enter the quantity of " << name << ": ";
                                cin >> quantity;
                                if (quantity <= 0) {
                                    cout << "Invalid quantity" << endl;
                                    i--;
                                    continue;
                                }
                                stationary_quantities.push_back(quantity);

                                cout << "Enter the price of " << name << ": ";
                                cin >> price;
                                if (price <= 0) {
                                    cout << "Invalid price" << endl;
                                    i--;
                                    continue;
                                }
                                stationary_prices.push_back(price);

                                cout << "Enter the quality of " << name << ": ";
                                cin >> quality;
                                stationary_qualities.push_back(quality);
                            }

                            {
                                string* names = new string[num_stationary];
                                int* quantities = new int[num_stationary];
                                double* prices = new double[num_stationary];
                                string* qualities = new string[num_stationary];

                                for (int i = 0; i < num_stationary; i++) {
                                    names[i] = stationary_names[i];
                                    quantities[i] = stationary_quantities[i];
                                    prices[i] = stationary_prices[i];
                                    qualities[i] = stationary_qualities[i];
                                }

                                cout << "Adding " << num_stationary << " stationary items..." << endl;
                                managment.add_items(names, quantities, prices, qualities, "Stationary", num_stationary);
                                delete[] names;
                                delete[] quantities;
                                delete[] prices;
                                delete[] qualities;
                            }
                        }
                        catch (const exception& e) {
                            cout << "Error adding stationary items: " << e.what() << endl;
                        }
                        break;

                    default:
                        cout << "Invalid category choice" << endl;
                        break;
                    }
                    break;

                case 2:
                    managment.manage_stock();
                    break;

                case 3:
                    cout << "Enter product name: ";
                    cin >> productname;
                    cout << "Enter price: ";
                    cin >> price;
                    if (price <= 0) {
                        cout << "Invalid price" << endl;
                        break;
                    }
                    cout << "Enter category (Electronics/Snacks/Stationary): ";
                    cin >> category;
                    managment.change_price(productname, price, category);
                    break;

                case 0:
                    break;
                default:
                    cout << "Invalid choice" << endl;
                    break;
                }
                break;

            case 2:
                Expenses::updateExpenses();
                break;

            case 0:
                Menu();
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
            }
        } while (true);
    }
};

class SalesMan : public Employee
{
private:
    // Helper function to check if a file exists
    bool fileExists(const string& filename) {
        ifstream file(filename);
        return file.good();
    }
    
    // Helper function to format currency
    string formatCurrency(double amount) {
        stringstream ss;
        ss << fixed << setprecision(2) << amount;
        return ss.str();
    }
    
    // Helper function to create headers in employee file if it doesn't exist
    void createEmployeeFileWithHeaders() {
        ofstream file("employeedetails.txt");
        if (file.is_open()) {
            file << "ID\tName\tPosition\tSalary\tJoining_Date\tJoining_Year" << endl;
            file.close();
        }
    }

public:
    SalesMan() {}
    SalesMan(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : Employee(id, name, salary, dateofjoining, position, yearofjoining) {}

    int get_EmployeeID() const { return EmployeeID; }
    string get_EmployeeName() const { return EmployeeName; }
    double get_EmployeeSalary() const { return EmployeeSalary; }
    string get_DateOfJoining() const { return DateOfJoining; }
    string get_Position() const { return Position; }
    int get_YearOfjoining() const { return YearOfJoining; }

    void set_EmployeeID(int id) { EmployeeID = id; };
    void set_EmployeeName(const string &name) { EmployeeName = name; }
    void set_EmployeeSalary(double salary) { EmployeeSalary = salary; }
    void set_DateOfJoining(const string &dateofjoining) { DateOfJoining = dateofjoining; }
    void set_Position(const string &position) { Position = position; }
    void set_YearOfjoining(int yearofjoining) { YearOfJoining = yearofjoining; }

    // Check if employee with given ID exists
    bool isEmployeeExists(int id) {
        ifstream inFile("employeedetails.txt");
        if (!inFile.is_open()) {
            return false;
        }

        string line;
        // Skip header
        getline(inFile, line);
        
        while (getline(inFile, line)) {
            if (!line.empty()) {
                stringstream ss(line);
                int employeeId;
                ss >> employeeId;
                
                if (employeeId == id) {
                    inFile.close();
                    return true;
                }
            }
        }
        
        inFile.close();
        return false;
    }

    void addSalesman()
    {
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|             ADD NEW EMPLOYEE              |" << endl;
        cout << "\t\t\t\t===============================================" << endl;

        // Create file with headers if it doesn't exist
        if (!fileExists("employeedetails.txt")) {
            createEmployeeFileWithHeaders();
        }

        int id;
        string name, position, date;
        double salary = 0.0;
        int year;

        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
        cout << "\t\t\t\t  | Enter Employee ID:       | ";
        cin >> id;
        
        // Input validation
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  | Error:                  | Invalid ID format         |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
            return;
        }

        // Check if ID already exists
        if (isEmployeeExists(id)) {
            cout << "\t\t\t\t  | Error:                  | ID " << id << " already exists     |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
            return;
        }

        cin.ignore(); // Clear the input buffer
        cout << "\t\t\t\t  | Enter Employee Name:     | ";
        getline(cin, name);

        cout << "\t\t\t\t  | Enter Position:          | ";
        getline(cin, position);

        cout << "\t\t\t\t  | Enter Salary:            | $";
        cin >> salary;
        
        // Input validation
        if (cin.fail() || salary <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  | Error:                  | Invalid salary amount      |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
            return;
        }

        cin.ignore(); // Clear the input buffer
        cout << "\t\t\t\t  | Enter Date of Joining:   | ";
        getline(cin, date);

        cout << "\t\t\t\t  | Enter Year of Joining:   | ";
        cin >> year;
        
        // Input validation
        if (cin.fail() || year <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  | Error:                  | Invalid year format        |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
            return;
        }
        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;

        try {
            ofstream outfile;
            outfile.open("employeedetails.txt", ios_base::app);

            if (!outfile.is_open()) {
                cout << "\t\t\t\t  | Error:                  | Could not open file        |" << endl;
                cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
                sleep(2);
                return;
            }

            outfile << id << "\t" << name << "\t" << position << "\t" << salary << "\t" << date << "\t" << year << endl;
            outfile.close();

            cout << "\t\t\t\t  | Status:                 | Employee added successfully |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
        }
        catch (const exception& e) {
            cout << "\t\t\t\t  | Error:                  | " << setw(24) << e.what() << " |" << endl;
            cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
            sleep(2);
        }
    }

    // Search for employee by ID, name, position, or year
    void searchEmployee() {
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|             SEARCH EMPLOYEE                |" << endl;
        cout << "\t\t\t\t===============================================" << endl;

        if (!fileExists("employeedetails.txt")) {
            cout << "\t\t\t\t  No employee records found." << endl;
            cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
            cin.ignore();
            cin.get();
            return;
        }

        int searchOption;
        cout << "\t\t\t\t  Search by:" << endl;
        cout << "\t\t\t\t  1. Employee ID" << endl;
        cout << "\t\t\t\t  2. Employee Name" << endl;
        cout << "\t\t\t\t  3. Position" << endl;
        cout << "\t\t\t\t  4. Year of Joining" << endl;
        cout << "\t\t\t\t  Enter your choice: ";
        cin >> searchOption;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  Invalid option. Please enter a number." << endl;
            sleep(2);
            return;
        }

        string searchValue;
        cin.ignore();
        cout << "\t\t\t\t  Enter search value: ";
        getline(cin, searchValue);

        ifstream inFile("employeedetails.txt");
        if (!inFile.is_open()) {
            cout << "\t\t\t\t  Error: Could not open employee file." << endl;
            sleep(2);
            return;
        }

        // Skip header line
        string header;
        getline(inFile, header);

        vector<string> matchingEmployees;
        string line;
        
        while (getline(inFile, line)) {
            if (!line.empty()) {
                stringstream ss(line);
                string id, name, position, salary, date, year;
                
                getline(ss, id, '\t');
                getline(ss, name, '\t');
                getline(ss, position, '\t');
                getline(ss, salary, '\t');
                getline(ss, date, '\t');
                getline(ss, year, '\t');
                
                bool match = false;
                switch (searchOption) {
                    case 1: // ID
                        match = (id == searchValue);
                        break;
                    case 2: // Name (case-insensitive)
                        transform(name.begin(), name.end(), name.begin(), ::tolower);
                        transform(searchValue.begin(), searchValue.end(), searchValue.begin(), ::tolower);
                        match = (name.find(searchValue) != string::npos);
                        break;
                    case 3: // Position (case-insensitive)
                        transform(position.begin(), position.end(), position.begin(), ::tolower);
                        transform(searchValue.begin(), searchValue.end(), searchValue.begin(), ::tolower);
                        match = (position.find(searchValue) != string::npos);
                        break;
                    case 4: // Year
                        match = (year == searchValue);
                        break;
                    default:
                        break;
                }
                
                if (match) {
                    matchingEmployees.push_back(line);
                }
            }
        }
        
        inFile.close();
        
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|             SEARCH RESULTS                 |" << endl;
        cout << "\t\t\t\t===============================================" << endl;
        
        if (matchingEmployees.empty()) {
            cout << "\t\t\t\t  No matching employees found." << endl;
        } else {
            cout << "\t\t\t\t  Found " << matchingEmployees.size() << " matching employee(s):" << endl;
            cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
            cout << "\t\t\t\t  ID\tName\tPosition\tSalary\tJoining Date\tJoining Year" << endl;
            cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
            
            for (const string& emp : matchingEmployees) {
                cout << "\t\t\t\t  " << emp << endl;
            }
        }
        
        cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
        cin.get();
    }

    // Edit employee details
    void editEmployee() {
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|              EDIT EMPLOYEE                |" << endl;
        cout << "\t\t\t\t===============================================" << endl;

        if (!fileExists("employeedetails.txt")) {
            cout << "\t\t\t\t  No employee records found." << endl;
            cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
            cin.ignore();
            cin.get();
            return;
        }

        int id;
        cout << "\t\t\t\t  Enter Employee ID to edit: ";
        cin >> id;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  Invalid ID. Please enter a number." << endl;
            sleep(2);
            return;
        }

        ifstream inFile("employeedetails.txt");
        if (!inFile.is_open()) {
            cout << "\t\t\t\t  Error: Could not open employee file." << endl;
            sleep(2);
            return;
        }

        // Get header
        string header;
        getline(inFile, header);

        vector<string> employees;
        employees.push_back(header);
        
        string line;
        bool found = false;
        string employeeToEdit;
        
        while (getline(inFile, line)) {
            if (!line.empty()) {
                stringstream ss(line);
                int employeeId;
                ss >> employeeId;
                
                if (employeeId == id) {
                    found = true;
                    employeeToEdit = line;
                } else {
                    employees.push_back(line);
                }
            }
        }
        
        inFile.close();
        
        if (!found) {
            cout << "\t\t\t\t  Employee with ID " << id << " not found." << endl;
            sleep(2);
            return;
        }

        // Parse the employee data
        stringstream ss(employeeToEdit);
        string empId, name, position, salaryStr, date, yearStr;
        
        getline(ss, empId, '\t');
        getline(ss, name, '\t');
        getline(ss, position, '\t');
        getline(ss, salaryStr, '\t');
        getline(ss, date, '\t');
        getline(ss, yearStr, '\t');
        
        double salary = stod(salaryStr);
        int year = stoi(yearStr);

        cout << "\n\t\t\t\t  Current Employee Details:" << endl;
        cout << "\t\t\t\t  ID: " << empId << endl;
        cout << "\t\t\t\t  Name: " << name << endl;
        cout << "\t\t\t\t  Position: " << position << endl;
        cout << "\t\t\t\t  Salary: " << salary << endl;
        cout << "\t\t\t\t  Joining Date: " << date << endl;
        cout << "\t\t\t\t  Joining Year: " << year << endl;
        
        cout << "\n\t\t\t\t  Enter new details (leave blank to keep current value):" << endl;
        
        string newName, newPosition, newDate;
        double newSalary;
        int newYear;
        
        cin.ignore();
        cout << "\t\t\t\t  New Name: ";
        getline(cin, newName);
        if (newName.empty()) newName = name;

        cout << "\t\t\t\t  New Position: ";
        getline(cin, newPosition);
        if (newPosition.empty()) newPosition = position;

        cout << "\t\t\t\t  New Salary (current: " << salary << "): ";
        string salaryInput;
        getline(cin, salaryInput);
        if (salaryInput.empty()) {
            newSalary = salary;
        } else {
            try {
                newSalary = stod(salaryInput);
                if (newSalary <= 0) throw runtime_error("Invalid salary");
            } catch (...) {
                cout << "\t\t\t\t  Invalid salary input. Keeping current value." << endl;
                newSalary = salary;
            }
        }

        cout << "\t\t\t\t  New Joining Date (current: " << date << "): ";
        getline(cin, newDate);
        if (newDate.empty()) newDate = date;

        cout << "\t\t\t\t  New Joining Year (current: " << year << "): ";
        string yearInput;
        getline(cin, yearInput);
        if (yearInput.empty()) {
            newYear = year;
        } else {
            try {
                newYear = stoi(yearInput);
                if (newYear <= 0) throw runtime_error("Invalid year");
            } catch (...) {
                cout << "\t\t\t\t  Invalid year input. Keeping current value." << endl;
                newYear = year;
            }
        }

        // Create updated employee entry
        string updatedEmployee = empId + "\t" + newName + "\t" + newPosition + "\t" + 
                                to_string(newSalary) + "\t" + newDate + "\t" + to_string(newYear);
        
        employees.push_back(updatedEmployee);
        
        // Write all employees back to the file
        ofstream outFile("employeedetails.txt");
        if (!outFile.is_open()) {
            cout << "\t\t\t\t  Error: Could not open employee file for writing." << endl;
            sleep(2);
            return;
        }
        
        for (const string& emp : employees) {
            outFile << emp << endl;
        }
        
        outFile.close();
        
        cout << "\t\t\t\t  Employee details updated successfully!" << endl;
        sleep(2);
    }

    // Delete employee by ID
    void deleteEmployee() {
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|             DELETE EMPLOYEE               |" << endl;
        cout << "\t\t\t\t===============================================" << endl;

        if (!fileExists("employeedetails.txt")) {
            cout << "\t\t\t\t  No employee records found." << endl;
            cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
            cin.ignore();
            cin.get();
            return;
        }

        int id;
        cout << "\t\t\t\t  Enter Employee ID to delete: ";
        cin >> id;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\t\t\t\t  Invalid ID. Please enter a number." << endl;
            sleep(2);
            return;
        }

        ifstream inFile("employeedetails.txt");
        if (!inFile.is_open()) {
            cout << "\t\t\t\t  Error: Could not open employee file." << endl;
            sleep(2);
            return;
        }

        // Get header
        string header;
        getline(inFile, header);

        vector<string> employees;
        employees.push_back(header);
        
        string line;
        bool found = false;
        string employeeToDelete;
        
        while (getline(inFile, line)) {
            if (!line.empty()) {
                stringstream ss(line);
                int employeeId;
                ss >> employeeId;
                
                if (employeeId == id) {
                    found = true;
                    employeeToDelete = line;
                } else {
                    employees.push_back(line);
                }
            }
        }
        
        inFile.close();
        
        if (!found) {
            cout << "\t\t\t\t  Employee with ID " << id << " not found." << endl;
            sleep(2);
            return;
        }

        // Parse the employee data for confirmation
        stringstream ss(employeeToDelete);
        string empId, name, position, salaryStr, date, yearStr;
        
        getline(ss, empId, '\t');
        getline(ss, name, '\t');
        getline(ss, position, '\t');
        getline(ss, salaryStr, '\t');
        getline(ss, date, '\t');
        getline(ss, yearStr, '\t');

        cout << "\n\t\t\t\t  Employee to delete:" << endl;
        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
        cout << "\t\t\t\t  | Employee ID:             | " << setw(24) << empId << " |" << endl;
        cout << "\t\t\t\t  | Employee Name:           | " << setw(24) << name << " |" << endl;
        cout << "\t\t\t\t  | Employee Position:       | " << setw(24) << position << " |" << endl;
        cout << "\t\t\t\t  +--------------------------+--------------------------+" << endl;
        
        char confirm;
        cout << "\n\t\t\t\t  Are you sure you want to delete this employee? (Y/N): ";
        cin >> confirm;
        
        if (toupper(confirm) != 'Y') {
            cout << "\t\t\t\t  Deletion cancelled." << endl;
            sleep(2);
            return;
        }
        
        // Write all employees back to the file (excluding the deleted one)
        ofstream outFile("employeedetails.txt");
        if (!outFile.is_open()) {
            cout << "\t\t\t\t  Error: Could not open employee file for writing." << endl;
            sleep(2);
            return;
        }
        
        for (const string& emp : employees) {
            outFile << emp << endl;
        }
        
        outFile.close();
        
        cout << "\t\t\t\t  Employee deleted successfully!" << endl;
        sleep(2);
    }

    // Display all employees with sorting options
    void viewAllEmployees() {
        system("cls");
        cout << "\n\n\t\t\t\t===============================================" << endl;
        cout << "\t\t\t\t|           EMPLOYEE DETAILS                |" << endl;
        cout << "\t\t\t\t===============================================" << endl;

        try {
            string employeedetails = "employeedetails.txt";
            ifstream inFile(employeedetails);

            if (!inFile.is_open()) {
                cout << "\t\t\t\t  Error: Could not open file " << employeedetails << endl;
                cout << "\t\t\t\t  Creating a new employee file..." << endl;
                
                // Create a new file with headers
                createEmployeeFileWithHeaders();
                
                cout << "\t\t\t\t  New employee file created. No employee records yet." << endl;
                sleep(3);
                return;
            }

            // Read all employee data
            vector<vector<string>> employees;
            string line;
            
            // Skip header
            getline(inFile, line);
            
            while (getline(inFile, line)) {
                if (!line.empty()) {
                    stringstream ss(line);
                    string id, name, position, salary, date, year;
                    
                    getline(ss, id, '\t');
                    getline(ss, name, '\t');
                    getline(ss, position, '\t');
                    getline(ss, salary, '\t');
                    getline(ss, date, '\t');
                    getline(ss, year, '\t');
                    
                    vector<string> employee = {id, name, position, salary, date, year};
                    employees.push_back(employee);
                }
            }
            
            inFile.close();
            
            if (employees.empty()) {
                cout << "\t\t\t\t  No employee records found." << endl;
                cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
                cin.ignore();
                cin.get();
                return;
            }
            
            // Sorting options
            cout << "\t\t\t\t  Sort by:" << endl;
            cout << "\t\t\t\t  1. ID" << endl;
            cout << "\t\t\t\t  2. Name" << endl;
            cout << "\t\t\t\t  3. Position" << endl;
            cout << "\t\t\t\t  4. Salary" << endl;
            cout << "\t\t\t\t  5. Year of Joining" << endl;
            cout << "\t\t\t\t  Enter your choice (default is 1): ";
            
            int sortChoice;
            cin >> sortChoice;
            
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                sortChoice = 1;
            }
            
            // Sort employees
            switch (sortChoice) {
                case 2: // Sort by Name
                    sort(employees.begin(), employees.end(), 
                        [](const vector<string>& a, const vector<string>& b) {
                            return a[1] < b[1];
                        });
                    break;
                case 3: // Sort by Position
                    sort(employees.begin(), employees.end(), 
                        [](const vector<string>& a, const vector<string>& b) {
                            return a[2] < b[2];
                        });
                    break;
                case 4: // Sort by Salary
                    sort(employees.begin(), employees.end(), 
                        [](const vector<string>& a, const vector<string>& b) {
                            return stod(a[3]) < stod(b[3]);
                        });
                    break;
                case 5: // Sort by Year
                    sort(employees.begin(), employees.end(), 
                        [](const vector<string>& a, const vector<string>& b) {
                            return stoi(a[5]) < stoi(b[5]);
                        });
                    break;
                default: // Sort by ID
                    sort(employees.begin(), employees.end(), 
                        [](const vector<string>& a, const vector<string>& b) {
                            return stoi(a[0]) < stoi(b[0]);
                        });
                    break;
            }
            
            // Clear screen and show header again
            system("cls");
            cout << "\n\n\t\t\t\t===============================================" << endl;
            cout << "\t\t\t\t|           EMPLOYEE DETAILS                |" << endl;
            cout << "\t\t\t\t===============================================" << endl;
            
            // Display employees in a table
            cout << "\n\t\t\t\t  Total Employees: " << employees.size() << endl;
            cout << "\n\t\t\t\t  +---------+--------------------+--------------------+---------------+--------------------+------------+" << endl;
            cout << "\t\t\t\t  |   ID    |     Employee Name   |      Position      |     Salary    |    Joining Date    |    Year    |" << endl;
            cout << "\t\t\t\t  +---------+--------------------+--------------------+---------------+--------------------+------------+" << endl;
            
            for (const auto& emp : employees) {
                cout << "\t\t\t\t  | " << setw(7) << emp[0] << " | " 
                    << setw(18) << emp[1] << " | " 
                    << setw(18) << emp[2] << " | $" 
                    << setw(12) << formatCurrency(stod(emp[3])) << " | " 
                    << setw(18) << emp[4] << " | " 
                    << setw(10) << emp[5] << " |" << endl;
            }
            
            cout << "\t\t\t\t  +---------+--------------------+--------------------+---------------+--------------------+------------+" << endl;
            
            // Calculate and display statistics
            double totalSalary = 0;
            int currentYear = 2024; // Use current year as reference
            int totalExperience = 0;
            
            for (const auto& emp : employees) {
                totalSalary += stod(emp[3]);
                totalExperience += (currentYear - stoi(emp[5]));
            }
            
            double avgSalary = totalSalary / employees.size();
            double avgExperience = static_cast<double>(totalExperience) / employees.size();
            
            cout << "\n\t\t\t\t  Statistics:" << endl;
            cout << "\t\t\t\t  -------------------------------------------------------------" << endl;
            cout << "\t\t\t\t  Total Employees: " << employees.size() << endl;
            cout << "\t\t\t\t  Total Salary Expense: $" << formatCurrency(totalSalary) << endl;
            cout << "\t\t\t\t  Average Salary: $" << formatCurrency(avgSalary) << endl;
            cout << "\t\t\t\t  Average Experience: " << fixed << setprecision(1) << avgExperience << " years" << endl;
            
            cout << "\n\t\t\t\t  Press Enter to continue..." << endl;
            cin.ignore();
            cin.get();
        }
        catch (const exception& e) {
            cout << "\t\t\t\t  Error displaying employees: " << e.what() << endl;
            sleep(3);
        }
    }

    // Main employee management interface
    void DisplayEmployeeDetails()
    {
        system("cls");
        while (true) {
            system("cls");
            cout << "\n\n\t\t\t\t===============================================" << endl;
            cout << "\t\t\t\t|           EMPLOYEE MANAGEMENT             |" << endl;
            cout << "\t\t\t\t===============================================" << endl;
            cout << "\t\t\t\t|                                           |" << endl;
            cout << "\t\t\t\t|        1. View All Employees              |" << endl;
            cout << "\t\t\t\t|        2. Search Employee                 |" << endl;
            cout << "\t\t\t\t|        3. Add New Employee                |" << endl;
            cout << "\t\t\t\t|        4. Edit Employee                   |" << endl;
            cout << "\t\t\t\t|        5. Delete Employee                 |" << endl;
            cout << "\t\t\t\t|        0. Return to Previous Menu         |" << endl;
            cout << "\t\t\t\t|                                           |" << endl;
            cout << "\t\t\t\t===============================================" << endl;
            cout << "\t\t\t\t  Please Enter Your Choice (0-5): ";
            
            int choice;
            cin >> choice;
            
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            
            switch (choice) {
                case 1:
                    viewAllEmployees();
                    break;
                case 2:
                    searchEmployee();
                    break;
                case 3:
                    addSalesman();
                    break;
                case 4:
                    editEmployee();
                    break;
                case 5:
                    deleteEmployee();
                    break;
                case 0:
                    return;
                default:
                    cout << "\t\t\t\t  Invalid choice. Please try again." << endl;
                    sleep(1);
                    break;
            }
        }
    }
};

class delivery_on_app;
class delivery_on_call;
class Manual;

class Owner
{
private:
    string Username;
    string Password;
    int choice;
    Expenses e1;
    SalesMan salesman;

    string get_ownername() const { return Username; }
    string get_password() const { return Password; }

    static long double TotalSalesProfit;
    static long long int TotalSales;

public:
    Owner() : Username("xyz"), Password("123") {}

    bool verification(const string &username, const string &password)
    {
        if (username == Username && password == Password)
        {
            return true;
        }
        return false;
    }

    static void CalculateProfit(long double amount);
    static void CalculateSales(long long int sales);

    void owner()
    {
        system("cls");
        do
        {
            cout << "1) To see profit" << endl;
            cout << "2) To see total sales" << endl;
            cout << "3) To see bills" << endl;
            cout << "4) To add Employee" << endl;
            cout << "5) To display Employee details" << endl;
            cout << "0) BACK TO MENU" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                sleep(2);
                system("cls");
                cout << "----Total profit-------" << endl;
                cout << TotalSalesProfit << endl;
                break;
            case 2:
                sleep(2);
                system("cls");
                cout << "--------Total Sales--------" << endl;
                cout << TotalSales << endl;
                break;
            case 3:
                sleep(2);
                system("cls");
                Expenses::displayExpenses();

                break;
            case 4:
                sleep(2);
                system("cls");
                salesman.addSalesman();

                break;
            case 5:
                sleep(2);
                system("cls");
                salesman.DisplayEmployeeDetails();

                break;
            case 0:
                Menu();
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;

                break;
            }
        } while (true);
    }
};

long double Owner::TotalSalesProfit = 0.0;
long long int Owner::TotalSales = 0;

void Owner::CalculateProfit(long double amount)
{
    TotalSalesProfit += amount * 0.025; // assume profit rate is 2.5%
}

void Owner::CalculateSales(long long int sales)
{
    TotalSales += sales;
}

template <class T = string, class T1 = double, class T2 = int>
class User
{
    vector<T> add_to_cart_name;
    vector<T2> add_to_cart_id;
    vector<T2> add_to_cart_quantity;
    vector<T1> per_cost;
    T1 total_cost;
    T2 redeem_code;
    T2 num_of_items;
    T2 new_lucky_draw_no;

    long double SalesAmount;
    long long int Sales;

public:
    User() : total_cost(0.0), num_of_items(0), SalesAmount(0.0), Sales(0) {}
    void add_to_cart(int a, double f, string &f1, int c)
    {
        add_to_cart_name.push_back(f1);
        add_to_cart_id.push_back(a);
        add_to_cart_quantity.push_back(c);
        per_cost.push_back(f);
        total_cost = total_cost + (f * c);

        Owner::CalculateSales(c);

        num_of_items++;
    }
    void lucky_draw()
    {
        srand(time(0));
        int m = rand() % 10000 + 1;
        cout << "Coming to the super market after three to four days" << endl;
        cout << "Reaching the shopping mall in 4 seconds" << endl;
        sleep(4);
        system("cls");
        cout << "The winner of this lucky draw is:" << m << endl;
        if (new_lucky_draw_no == m)
        {
            cout << "I won the prize in this lucky draw" << endl;
        }
        else
        {
            cout << "Unfortunately I did not win the lucky draw." << endl;
        }
    }
    void discount(int f)
    {
        int d;
        srand(time(0));
        if (f == 0 || f == 2 || f == 1)
        {
            cout << "Do you want to avail discount?(1 for Yes and 0 for No)" << endl;
            cin >> d;
            while (d > 1)
            {
                cout << "write 1 or 0 for answer" << endl;
                cout << "Do you want to avail discount?(1 for Yes and 0 for No)" << endl;
                cin >> d;
            }
            if (d == 1)
            {
                cout << "Showing the discount:" << endl;
                sleep(3);
                system("cls");
                redeem_code = rand() % 10000 + 1;
                cout << "Your coupon number is:" << redeem_code << endl;
                if (redeem_code >= 8000 || total_cost > 50000)
                {
                    cout << "Your redeem number is greater than 8000 or total cost is greater than 50000.\nYou will get a 10% off on your total cost" << endl;
                    cout << "Cost to be deducted from the Total:" << total_cost * 0.1 << endl;
                    cout << "Total cost after 10% Discount:" << total_cost - (total_cost * 0.1) << endl;
                    cout << "Do you want to apply for the lucky ? press 1 " << endl;
                    cin >> d;
                    if (d == 1)
                    {
                        new_lucky_draw_no = rand() % 10000 + 1;
                        cout << "Your lucky draw number is:" << new_lucky_draw_no << endl;
                        cout << "Come after three to four days for the lucky draw winner." << endl;
                        lucky_draw();
                    }
                    else
                    {
                        cout << "No Lucky Draw" << endl;
                    }
                }
                else
                {
                    cout << "Sorry.You will not get a discount." << endl;
                }
            }
            else if (d == 0)
            {
                cout << "No discount" << endl;
            }
        }
    }
    void bill(int f)
    {
        if (f == 0 || f == 2)
        {
            if (f == 2)
            {
                cout << "Thanks for buying from the super market. I hope you come again next time." << endl;
            }
            cout << "Total Bill" << endl;
            cout << "NO" << "  " << "Product Id " << setw(25) << "Product Name" << setw(25) << "Product Quantity" << setw(25) << "Product Cost" << endl;
            for (int i = 0; i < num_of_items; i++)
            {
                cout << i + 1 << setw(5) << add_to_cart_id[i] << setw(30) << add_to_cart_name[i] << setw(25) << add_to_cart_quantity[i] << setw(25) << per_cost[i] << endl;
            }
            cout << "Total Cost:" << total_cost << endl;
            Owner::CalculateProfit(total_cost);
            ofstream billfile;
            billfile.open("CustomerBills.txt", ios_base::out);
            if (!billfile.is_open())
            {
                cout << "File is not open" << endl;
                cout<<"Exiting the program."<<endl;
                exit(0);
            }
            billfile << "NO" << "  " << "Product Id " << setw(25) << "Product Name" << setw(25) << "Product Quantity" << setw(25) << "Product Cost" << endl;
            for (int i = 0; i < num_of_items; i++)
            {
                billfile << i + 1 << setw(5) << add_to_cart_id[i] << setw(30) << add_to_cart_name[i] << setw(25) << add_to_cart_quantity[i] << setw(25) << per_cost[i] << endl;
            }
            billfile << "Total Cost:" << total_cost << endl;
            billfile.close();
            discount(f);
            if (f == 0)
            {
                cout << "Thanks for order.Your order will arrive within four days." << endl;
            }
        }
        else if (f == 1)
        {
            cout << "Operator:Your Total Bill is:" << total_cost << endl;
            cout << "Operator:Thanks for order.Your order will arrive within four days at the given address." << endl;
            cout << "Operator:Just hold a bit." << endl;
            discount(f);
            cout << "Thanks for order.Your order will arrive within four days." << endl;
        }
    }
    void select_option();
};

template <class T = string>
class Account
{
    T password;
    T username;

protected:
    T first_name, last_name, address, p, p1;
    unsigned int age;

public:
    void making_an_account()
    {
        cout << "Create an Account:" << endl;
        cout << "Enter Your First Name:";
        cin >> first_name;
        cout << "Enter Your Last Name:";
        cin >> last_name;
        cout << "Enter your Address:";
        cin >> address;
        cout << "Enter your age:";
        cin >> age;
        while (age < 18)
        {
            cout << "You have written the wrong age or you are not eligible" << endl;
            cout << "Your age is:" << endl;
            cin >> age;
        }
        int a, b, c;
        b = (rand() % 100) + 1;
        c = rand() % 100 + 1;
        srand(time(0));
        cout << "Next step in 4 seconds!" << endl;
        sleep(4);
        system("cls");
        cout << "Choose Your username:" << endl;
        cout << "1." << first_name << b << " or " << " 2." << last_name << c << endl;
        cin >> a;
        if (a == 1)
        {
            username = first_name.append(to_string(b));
            cout << "Your username is:" << username << endl;
        }
        else if (a == 2)
        {
            username = last_name.append(to_string(c));
            cout << "Your username is:" << username << endl;
        }
        cout << "Write a password:";
        cin >> p;
        cout << "Write a confirm password:";
        cin >> p1;
        do
        {
            if (p != p1)
            {
                cout << "Again! Write a confirm password:";
                cin >> p1;
            }

        } while (p != p1);
        password = p;
        cout << "Congratulations on making an account." << endl;
        check(3);
    }
    int check(int max)
    {
        string u, p;
        cout << "Sign_In in 5 seconds!" << endl;
        sleep(5);
        system("cls");
        cout << "ABC Super Market Delivery App" << endl;
        cout << "Enter Your Username:";
        cin >> u;
        cout << "Enter Your Password:";
        cin >> p;
        if (p == password && u == username)
        {
            cout << "Welcome to the ABC SuperMarket Delivery App" << endl;
            return 0;
        }
        else
        {
            if (max > 1)
            {
                cout << "Wrong UserName or Password" << endl;
                cout << "Try Again ! " << max - 1 << " Max Left" << endl;
                return check(max - 1);
            }
            else
            {
                cout << "Sorry!You have reached the max limit." << endl;
                cout << "Exiting in 5 seconds..." << endl;
                exit(5);
                return 1;
            }
        }
    }
};

class delivery_on_app
{
public:
    void buy()
    {
        int a, b, c;
        double f;
        string f1;
        User<string, double, int> u1;
        stock_management s2;
        Account<string> a1;
        a1.making_an_account();
        do
        {
            cout << "Opening the menu in 3 seconds now" << endl;
            sleep(3);
            system("cls");
            cout << "Which of the following department you want to choose?" << endl;
            cout << "1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill" << endl;
            cin >> a;
            if (a == 1)
            {
                cout << "Going to the next step in 3 seconds now" << endl;
                sleep(3);
                system("cls");
                cout << "Which product to choose?" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << "Product id: " << s2.electronic_products[i].get_product_id() << " Product Name: " << s2.electronic_products[i].get_product_name() << " Product price: " << s2.electronic_products[i].get_product_price() << " Product Quantity: " << s2.electronic_products[i].get_product_quantity() << endl;
                }
                cin >> b;
                while (b > s2.num_of_electronic_items && b >= 0)
                {
                    cout << "You choose the the wrong product no." << endl;
                    cin >> b;
                }
                cout << "Product id: " << s2.electronic_products[b - 1].get_product_id() << " Product Name: " << s2.electronic_products[b - 1].get_product_name() << " Product price: " << s2.electronic_products[b - 1].get_product_price() << " Product Quantity: " << s2.electronic_products[b - 1].get_product_quantity() << endl;
                cout << "How much quantity?" << endl;
                cin >> c;
                while (c > s2.electronic_products[b - 1].get_product_quantity() && c >= 0)
                {
                    cout << "You choose the the wrong quantity number." << endl;
                    cout << "Type again!" << endl;
                    cin >> c;
                }
                a = s2.electronic_products[b - 1].get_product_id();
                f = s2.electronic_products[b - 1].get_product_price();
                f1 = s2.electronic_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.electronic_products[b - 1].get_product_quantity() - c;
                s2.electronic_products[b - 1].set_quantity(c);
            }
            else if (a == 2)
            {
                cout << "Going to the next step in 3 seconds now" << endl;
                sleep(3);
                system("cls");
                cout << "Which product to choose?" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << "Product id: " << s2.snacks_products[i].get_product_id() << " Product Name: " << s2.snacks_products[i].get_product_name() << " Product price: " << s2.snacks_products[i].get_product_price() << " Product Quantity: " << s2.snacks_products[i].get_product_quantity() << endl;
                }
                cin >> b;
                while (b > s2.num_of_snack_items && b >= 0)
                {
                    cout << "You choose the the wrong product no." << endl;
                    cin >> b;
                }
                cout << "Product id: " << s2.snacks_products[b - 1].get_product_id() << " Product Name: " << s2.snacks_products[b - 1].get_product_name() << " Product price: " << s2.snacks_products[b - 1].get_product_price() << " Product Quantity: " << s2.snacks_products[b - 1].get_product_quantity() << endl;
                cout << "How much quantity ?" << endl;
                cin >> c;
                while (c > s2.snacks_products[b - 1].get_product_quantity() && b >= 0)
                {
                    cout << "You choose the the wrong quantity." << endl;
                    cout << "Type again!" << endl;
                    cin >> c;
                }
                a = s2.snacks_products[b - 1].get_product_id();
                f = s2.snacks_products[b - 1].get_product_price();
                f1 = s2.snacks_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.snacks_products[b - 1].get_product_quantity() - c;
                s2.snacks_products[b - 1].set_quantity(c);
            }
            else if (a == 3)
            {
                cout << "Going to the next step in 3 seconds now" << endl;
                sleep(3);
                system("cls");
                cout << "Which product to choose?" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << "Product id: " << s2.stationary_products[i].get_product_id() << " Product Name: " << s2.stationary_products[i].get_product_name() << " Product price: " << s2.stationary_products[i].get_product_price() << " Product Quantity: " << s2.stationary_products[i].get_product_quantity() << endl;
                }
                cin >> b;
                while (b > s2.num_of_stationary_items && b >= 0)
                {
                    cout << "You choose the the wrong product no." << endl;
                    cin >> b;
                }
                cout << "Product id: " << s2.stationary_products[b - 1].get_product_id() << " Product Name: " << s2.stationary_products[b - 1].get_product_name() << " Product price: " << s2.stationary_products[b - 1].get_product_price() << " Product Quantity: " << s2.stationary_products[b - 1].get_product_quantity() << endl;
                cout << "How much quantity ?" << endl;
                cin >> c;
                while (c > s2.stationary_products[b - 1].get_product_quantity() && b >= 0)
                {
                    cout << "You choose the the wrong quantity." << endl;
                    cout << "Type again!" << endl;
                    cin >> c;
                }
                a = s2.stationary_products[b - 1].get_product_id();
                f = s2.stationary_products[b - 1].get_product_price();
                f1 = s2.stationary_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.stationary_products[b - 1].get_product_quantity() - c;
                s2.stationary_products[b - 1].set_quantity(c);
            }
            else if (a == 0)
            {
                cout << "Showing the bill  in 2 seconds now" << endl;
                sleep(2);
                system("cls");
                u1.bill(0);
            }
        } while (a != 0);
    }
};
class delivery_on_call
{
public:
    int a, b, c;
    double f;
    string f1;
    User<string, double, int> u1;
    stock_management s2;
    void buy()
    {
        srand(time(0));
        int a;
        int c = rand() % 20 + 1;
        cout << "Calling the ABC Supermarket!!" << endl;
        cout << "Dialing in about 10 seconds" << endl;
        sleep(rand() % 10 + 1);
        system("cls");
        cout << "Write the extension number like: for delivery call:" << c << endl;
        cout << "Extension Number:";
        cin >> a;
        while (a > c && a >= 0)
        {
            cout << "Wrong Extension Number:" << endl;
            cout << "Type again!" << endl;
            cin >> a;
        }
        cout << "Dialing in again about 10 seconds" << endl;
        sleep(rand() % 10 + 1);
        system("cls");
        if (a == c)
        {
            cout << "Operator: Assalamualaikum. Thanks for calling ABC Supermarket! How may I help you?" << endl;
            cout << "Customer:I want to order some items." << endl;
            do
            {
                sleep(2);
                system("cls");
                cout << "Operator:Ok.Which of the following department you want to choose?" << endl;
                cout << "1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill" << endl;
                cin >> a;
                if (a == 1)
                {
                    sleep(2);
                    system("cls");
                    cout << "Customer: I want to choose electronic items department." << endl;
                    cout << "Operator: Which product you want to choose? We have products like:" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        cout << i + 1 << " " << s2.electronic_products[i].get_product_name() << endl;
                    }
                    cin >> b;
                    while (b > s2.num_of_electronic_items && b >= 0)
                    {
                        cout << "Operator:You choose the the wrong product no.Please Say again!" << endl;
                        cin >> b;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer:I want product " << s2.electronic_products[b - 1].get_product_name() << endl;
                    cout << "Operator:The product price is:" << s2.electronic_products[b - 1].get_product_price() << endl;
                    cout << "Operator:How much quantity you want of this product?" << endl;
                    cin >> c;
                    while (c > s2.electronic_products[b - 1].get_product_quantity() && c >= 0)
                    {
                        cout << "Operator:We have don't have enough quantity of that item. Please say again!" << endl;
                        cin >> c;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer: I want " << c << " " << s2.electronic_products[b - 1].get_product_name() << endl;
                    a = s2.electronic_products[b - 1].get_product_id();
                    f = s2.electronic_products[b - 1].get_product_price();
                    f1 = s2.electronic_products[b - 1].get_product_name();
                    u1.add_to_cart(a, f, f1, c);
                    c = s2.electronic_products[b - 1].get_product_quantity() - c;
                    s2.electronic_products[b - 1].set_quantity(c);
                    sleep(2);
                    system("cls");
                    cout << "Operator:Ok.Anything Else you want?(1 for Yes or 2 for No)" << endl;
                    cin >> a;
                    if (a == 1)
                    {
                        cout << "Customer:Yes" << endl;
                    }
                    else if (a == 2)
                    {
                        cout << "Customer:No(Press 0 for exit and Bill)" << endl;
                    }
                }
                else if (a == 2)
                {
                    sleep(2);
                    system("cls");
                    cout << "Customer:I want to choose snacks items department." << endl;
                    cout << "Operator:Which product to choose? We have products like:" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        cout << i + 1 << " " << s2.snacks_products[i].get_product_name() << endl;
                    }
                    cin >> b;
                    while (b > s2.num_of_snack_items && b >= 0)
                    {
                        cout << "Operator:You choose the the wrong product no.Please Say again!" << endl;
                        cin >> b;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer:I want product " << s2.snacks_products[b - 1].get_product_name() << endl;
                    cout << "Operator:The product price is:" << s2.snacks_products[b - 1].get_product_price() << endl;
                    cout << "Operator:How much quantity of this product?" << endl;
                    cin >> c;
                    while (c > s2.snacks_products[b - 1].get_product_quantity() && b >= 0)
                    {
                        cout << "Operator:We have don't have enough quantity of that item. Please say again!" << endl;
                        cin >> c;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer: I want " << c << " " << s2.snacks_products[b - 1].get_product_name() << endl;
                    a = s2.snacks_products[b - 1].get_product_id();
                    f = s2.snacks_products[b - 1].get_product_price();
                    f1 = s2.snacks_products[b - 1].get_product_name();
                    u1.add_to_cart(a, f, f1, c);
                    c = s2.snacks_products[b - 1].get_product_quantity() - c;
                    s2.snacks_products[b - 1].set_quantity(c);
                    sleep(2);
                    system("cls");
                    cout << "Operator:OK.Anything Else you want?(1 for Yes or 2 for No)" << endl;
                    cin >> a;
                    if (a == 1)
                    {
                        cout << "Customer:Yes" << endl;
                    }
                    else if (a == 2)
                    {
                        cout << "Customer:No(Press 0 for exit and bill)" << endl;
                    }
                }
                else if (a == 3)
                {
                    sleep(2);
                    system("cls");
                    cout << "Customer:I want to choose stationary items department." << endl;
                    cout << "Operator:Which product to choose? We have products like:" << endl;
                    for (int i = 0; i < 3; i++)
                    {
                        cout << i + 1 << " " << s2.stationary_products[i].get_product_name() << endl;
                    }
                    cin >> b;
                    while (b > s2.num_of_stationary_items && b >= 0)
                    {
                        cout << "Operator:You choose the the wrong product no.Please Say again!" << endl;
                        cin >> b;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer:I want product " << s2.stationary_products[b - 1].get_product_name() << endl;
                    cout << "Operator:The product price is:" << s2.stationary_products[b - 1].get_product_price() << endl;
                    cout << "Operator:How much quantity you want of this product?" << endl;
                    cin >> c;
                    while (c > s2.stationary_products[b - 1].get_product_quantity() && b >= 0)
                    {
                        cout << "Operator:We have don't have enough quantity of that item. Please say again!" << endl;
                        cin >> c;
                    }
                    sleep(2);
                    system("cls");
                    cout << "Customer: I want " << c << " " << s2.stationary_products[b - 1].get_product_name() << endl;
                    a = s2.stationary_products[b - 1].get_product_id();
                    f = s2.stationary_products[b - 1].get_product_price();
                    f1 = s2.stationary_products[b - 1].get_product_name();
                    u1.add_to_cart(a, f, f1, c);
                    c = s2.stationary_products[b - 1].get_product_quantity() - c;
                    s2.stationary_products[b - 1].set_quantity(c);
                    sleep(2);
                    system("cls");
                    cout << "Operator:OK.Anything Else you want?(1 for Yes or 2 for No)" << endl;
                    cin >> a;
                    if (a == 1)
                    {
                        cout << "Customer:Yes" << endl;
                    }
                    else if (a == 2)
                    {
                        cout << "Customer:No(Press 0 for exit and Bill)" << endl;
                    }
                }
                else if (a == 0)
                {
                    cout << "Operator:OK. Thanks for calling ABC SuperMarket." << endl;
                    sleep(2);
                    system("cls");
                    u1.bill(1);
                }
            } while (a != 0);
        }
    }
};
class Manual
{
public:
    int a, b, c;
    double f;
    string f1;
    User<string, double, int> u1;
    stock_management s2;
    void buy()
    {
        cout << "Going to the ABC Supermarket!!" << endl;
        do
        {
            sleep(2);
            system("cls");
            cout << "Which department should I go first?" << endl;
            cout << "1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill" << endl;
            cin >> a;
            if (a == 1)
            {
                cout << "I think I will go to electronic items department which is in the first floor." << endl;
                cout << "Reaching in 5 seconds now" << endl;
                sleep(2);
                system("cls");
                cout << "Which product should I buy from this department?Items like:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << i + 1 << " " << s2.electronic_products[i].get_product_name() << endl;
                }
                cin >> b;
                while (b > s2.num_of_electronic_items && b >= 0)
                {
                    cout << "Need to think another item as it is not available." << endl;
                    cin >> b;
                }
                sleep(2);
                system("cls");
                cout << "I will buy product " << s2.electronic_products[b - 1].get_product_name() << endl;
                cout << "How much should I need(quantity)?" << endl;
                cin >> c;
                while (c > s2.electronic_products[b - 1].get_product_quantity() && c >= 0)
                {
                    cout << "Not Enough quantity " << endl;
                    cin >> c;
                }
                sleep(2);
                system("cls");
                cout << "I will buy " << c << " " << s2.electronic_products[b - 1].get_product_name() << " which is " << s2.electronic_products[b - 1].get_product_price() << " per one quantity" << endl;
                a = s2.electronic_products[b - 1].get_product_id();
                f = s2.electronic_products[b - 1].get_product_price();
                f1 = s2.electronic_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.electronic_products[b - 1].get_product_quantity() - c;
                s2.electronic_products[b - 1].set_quantity(c);
            }
            else if (a == 2)
            {
                cout << "I think I will go to snacks items department which is in the second floor." << endl;
                cout << "Reaching in 3 seconds now" << endl;
                sleep(3);
                system("cls");
                cout << "Which product should I buy from this department?Items like:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << i + 1 << " " << s2.snacks_products[i].get_product_name() << endl;
                }
                cin >> b;
                while (b > s2.num_of_snack_items && b >= 0)
                {
                    cout << "Need to think another item as it is not available." << endl;
                    cin >> b;
                }
                sleep(2);
                system("cls");
                cout << "I will buy " << s2.snacks_products[b - 1].get_product_name() << endl;
                cout << "How much should I need(quantity)?" << endl;
                cin >> c;
                while (c > s2.snacks_products[b - 1].get_product_quantity() && b >= 0)
                {
                    cout << "Not Enough Product" << endl;
                    cin >> c;
                }
                sleep(2);
                system("cls");
                cout << "I will buy " << c << " " << s2.snacks_products[b - 1].get_product_name() << " which is " << s2.snacks_products[b - 1].get_product_price() << " per one quantity" << endl;
                a = s2.snacks_products[b - 1].get_product_id();
                f = s2.snacks_products[b - 1].get_product_price();
                f1 = s2.snacks_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.snacks_products[b - 1].get_product_quantity() - c;
                s2.snacks_products[b - 1].set_quantity(c);
            }
            else if (a == 3)
            {
                cout << "I think I will go to stationary items department which is in the third floor." << endl;
                cout << "Reaching in 5 seconds now" << endl;
                sleep(2);
                system("cls");
                cout << "Which product should I buy from this department?Items like:" << endl;
                for (int i = 0; i < 3; i++)
                {
                    cout << i + 1 << " " << s2.stationary_products[i].get_product_name() << endl;
                }
                cin >> b;
                while (b > s2.num_of_stationary_items && b >= 0)
                {
                    cout << "Need to think another item as it is not available." << endl;
                    cin >> b;
                }
                sleep(2);
                system("cls");
                cout << "I will buy " << s2.stationary_products[b - 1].get_product_name() << endl;
                cout << "How much should I need(quantity)?" << endl;
                cin >> c;
                while (c > s2.stationary_products[b - 1].get_product_quantity() && b >= 0)
                {
                    cout << "Not enough Quantity" << endl;
                    cin >> c;
                }
                sleep(2);
                system("cls");
                cout << "I will buy " << c << " " << s2.stationary_products[b - 1].get_product_name() << " which is " << s2.stationary_products[b - 1].get_product_price() << " per one quantity" << endl;
                a = s2.stationary_products[b - 1].get_product_id();
                f = s2.stationary_products[b - 1].get_product_price();
                f1 = s2.stationary_products[b - 1].get_product_name();
                u1.add_to_cart(a, f, f1, c);
                c = s2.stationary_products[b - 1].get_product_quantity() - c;
                s2.stationary_products[b - 1].set_quantity(c);
            }
            else if (a == 0)
            {
                cout << "Showing the bill in 2 seconds now" << endl;
                sleep(2);
                system("cls");
                u1.bill(2);
            }
        } while (a != 0);
    }
};
template <class t, class t1, class t2>
void User<t, t1, t2>::select_option()
{
    {
        int x;
        do
        {
            cout << "Which of the following options you want to choose to buy products from the supermarket?" << endl;
            cout << "1.Delivery App\n2.Delivery Call\n3.Manual\n0.GO back to Menu" << endl;
            cin >> x;
            if (x != 1 && x != 2 && x != 3 && x < 0)
            {
                cout << "Wrong Option!Try Again" << endl;
            }
        } while (x > 3);
        cout << "Going to next steps in 2 seconds" << endl;
        sleep(2);
        system("cls");
        if (x == 1)
        {
            delivery_on_app a1;
            a1.buy();
        }
        else if (x == 2)
        {
            delivery_on_call c1;
            c1.buy();
        }
        else if (x == 3)
        {
            Manual m1;
            m1.buy();
        }
        else if (x == 0)
        {
            Menu();
        }
    }
}

void Menu()
{
    User<string, double, int> u1;
    Manager manager(101, "John", 50000.0, "01-01-2022", "Manager", 2022);
    Owner owner;

    try
    {
        while (true)
        {
            system("cls");
            cout <<                 "\t\t\t\tWelcome to Supermarket Management System!" << endl;
            cout <<                 "\t\t\t\t-----------------------------------------" << endl;
            cout <<                 "\t\t\t\tWhich of the following options you want to choose?" << endl;
            cout <<                 "\t\t\t\t1. Admin" << endl;
            cout <<                 "\t\t\t\t2. Customer" << endl;
            cout <<                 "\t\t\t\t3. Owner" << endl;
            cout <<                 "\t\t\t\t4. Exit" << endl;
            int u;
            cin >> u;
            if (0 < u && u < 4)
            {
                cout << "Going to the next step plz wait " << endl;
                sleep(2);
                system("cls");

                if (u == 1)
                {
                    string username;
                    string password;

                    try
                    {
                        // Create an instance of Manager
                        cout << "Enter Username" << endl;
                        cin >> username;
                        cout << "Enter Password" << endl;
                        cin >> password;
                        // Manager login verification
                        if (manager.verification(username, password))
                        {
                            cout << "Manager login successful!" << endl;
                            sleep(2);
                            system("cls");
                            while (true)
                            {
                                manager.manager(); // Manager performs tasks
                            }
                        }
                        else
                        {
                            throw 0;
                        }
                    }

                    catch (int i)
                    {
                        cout << "Invalid credentials for Manager." << endl;
                        cout << "You have last chance " << endl;

                        cout << "Enter Username" << endl;
                        cin >> username;
                        cout << "Enter Password" << endl;
                        cin >> password;
                        // Manager login verification
                        if (manager.verification(username, password))
                        {
                            cout << "Manager login successful!" << endl;
                            sleep(2);
                            system("cls");
                            while (true)
                            {
                                manager.manager(); // Manager performs tasks
                            }
                        }
                        else
                        {
                            cout << "Invalid credentials for Manager." << endl;
                            cout << "program is shutting OFF" << endl;
                        }
                    }
                }

                else if (u == 2)
                {

                    while (true)
                    {
                        u1.select_option();
                    }
                }

                else if (u == 3)
                {
                    // Create an instance of Owner

                    string username;
                    string password;

                    cout << "Enter Username" << endl;
                    cin >> username;
                    cout << "Enter Password" << endl;
                    cin >> password;

                    // Owner login verification
                    try
                    {
                        if (owner.verification(username, password))
                        {
                            cout << "Owner login successful!" << endl;
                            sleep(2);
                            system("cls");
                            while (true)
                            {

                                owner.owner();
                            }
                        }
                        else
                        {
                            cout << "Invalid credentials for Owner." << endl;
                            throw 0;
                        }
                    }
                    catch (int i)
                    {
                        cout << "Try Again you Has Last chance" << endl;
                        cout << "Enter Username" << endl;
                        cin >> username;
                        cout << "Enter Password" << endl;
                        cin >> password;

                        if (owner.verification(username, password))
                        {
                            cout << "Owner login successful!" << endl;
                            sleep(2);
                            system("cls");
                            while (true)
                            {
                                owner.owner(); // Owner performs tasks
                            }
                        }
                        else
                        {
                            cout << "Invalid credentials for Owner." << endl;
                            cout << "program is shutting Down" << endl;
                        }
                    }
                }
            }
            else
            {
                cout << "Breaking the program" << endl;
                exit(1);
            }
        }
    }
    catch (int i)
    {
        cout << "Invalid Value  " << endl;
        Menu();
    }
}

int main()
{
    Menu();
    return 0;
}


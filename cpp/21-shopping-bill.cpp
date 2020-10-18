#include <iostream>
#include <iomanip>
using namespace std;

#define SZ 25

class shop {
    private:
        int items_ordered_quantity;
        int item_code;
    public:
        void set_customer_data(int, int);
        int get_item_code();
        int get_items_ordered_quantity();
};

inline void shop::set_customer_data(int code, int quantity)
{
    items_ordered_quantity = quantity;
    item_code = code;
}

inline int shop::get_item_code()
{
    return item_code;
}

inline int shop::get_items_ordered_quantity()
{
    return items_ordered_quantity;
}

int main()
{
    char item_names[SZ][15] = {
        "Apples",
        "Bananas",
        "Milk",
        "Butter",
        "Eggs",
        "Salt",
        "Pepper",
        "Soap",
        "Shampoo",
        "Razors",
        "Shaving Cream",
        "Toothpaste",
        "Tooth Brush",
        "Carrots",
        "Cucumbers",
        "Tomatoes",
        "Onions",
        "Potatoes",
        "Sugar",
        "Flour",
        "Packaged Water",
        "Cooking Oils",
        "Ketchup",
        "Dal",
        "Vinegar"
    };

    char item_default_quantity[SZ][7] = {
        "1 kg",
        "1 kg",
        "1 L",
        "100 g",
        "10 pcs",
        "1 kg",
        "50 g",
        "125 g",
        "1 L",
        "1 pc",
        "30 g",
        "150 g",
        "1 pc",
        "1 kg",
        "1 kg",
        "1 kg",
        "1 kg",
        "1 kg",
        "1 kg",
        "1 kg",
        "1 L",
        "1 L",
        "1 kg",
        "1 kg",
        "1 L"
    };

    float item_prices[SZ] = {
        109.00,
        42.00,
        59.00,
        45.14,
        66.33,
        20.79,
        41.00,
        25.00,
        780.00,
        16.00,
        30.00,
        68.00,
        32.00,
        59.00,
        50.00,
        70.00,
        50.00,
        56.25,
        42.57,
        42.57,
        20.00,
        130.00,
        150.00,
        137.00,
        59.40
    };

    cout << endl << "Welcome to our shop" << endl;
    cout << "Below is the list of our available items and their prices" << endl;
    cout << endl << "Code | Items           | Quantity | Price" << endl;
    cout << "-----|-----------------|----------|------" << endl;

    for (int i = 0; i < SZ; i++) {
        if (i + 1 <= 9)
            cout << "0";
        cout << i + 1 << "   | ";
        cout << left << setw(15) << setfill(' ') << item_names[i] << " | ";
        cout << left << setw(8) << setfill(' ') << item_default_quantity[i] << " | ";
        cout << left << setw(6) << setfill(' ') << item_prices[i] << endl;
    }

    shop customer[SZ];
    int i = 0;
    char ch = 'y';
    do {
        cout << endl << "Enter the code of the item you want to order" << endl;
        int code;
        cin >> code;

        if (code >= 1 && code <= 25) {
            cout << endl << "Specify the quantity of " << item_names[code - 1];
            cout << " you want to buy" << endl;
            int quantity;
            cin >> quantity;

            customer[i].set_customer_data(code, quantity);

            cout << endl << "Do you want to enter any more items (y/n)" << endl;
            cin >> ch;
            if (ch == 'n')
                break;
        } else {
            cout << endl << "Invalid code entered" << endl;
            continue;
        }
        
        i++;
    } while (ch == 'y');

    cout << endl << "Your bill is as follows" << endl;
    cout << endl << "Items           | Total Price" << endl;
    cout << "----------------|-------------------------------" << endl;

    int sum = 0;
    for (int j = 0; j <= i; j++) {
        int code = customer[j].get_item_code();
        float price = item_prices[code - 1];
        int quantity = customer[j].get_items_ordered_quantity();
        float total = quantity * price;

        cout << left << setw(15) << setfill(' ') << item_names[code - 1] << " | ";
        cout << left << setw(4) << setfill(' ') << quantity << " X ";
        cout << left << setw(6) << setfill(' ') << item_default_quantity[code - 1] << " X ";
        cout << left << setw(5) << setfill(' ') << price << " = ";
        cout << total << endl;
        
        sum += total;
    }

    cout << "----------------|-------------------------------" << endl;
    cout << "                | " << "You need to pay Rs." << sum << endl;

    return 0;
}

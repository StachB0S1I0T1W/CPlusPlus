#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string shoppingListItem;
    vector<string> shoppingList;
    cout << "SHOPPING LIST" << endl;
    cout << "Here you can enter all your products!" << endl;
    while (shoppingListItem != "done") {
        cout << "Enter the name of the product or write 'done': ";
        getline(cin, shoppingListItem);
        if (shoppingListItem == "") {
            continue;
        }
        if (shoppingListItem == "done") {
            break;
        }
        shoppingList.push_back(shoppingListItem);
    }
    cout << "YOUR SHOPPING LIST:" << endl;
    for (const string& product: shoppingList) {
        cout << "- " << product << endl;
    }
    return 0;
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string movieName;
    int movieRating;
    vector<string> moviesNames;
    vector<int> moviesRatings;
    cout << "+-------------------------+" << endl;
    cout << "|     MOVIE RATER 2.0     |" << endl;
    cout << "+-------------------------+" << endl;
    cout << "Welcome to the official Movie Rater 2.0!" << endl;
    while (movieName != "=") {
        cout << "Provide the movie title (or '=' to end): ";
        getline(cin, movieName);
        if (movieName == "=") {
            break;
        }
        if (movieName == "") {
            continue;
        }
        moviesNames.push_back(movieName);
        cout << "Now enter the rating for the movie (0-10): ";
        cin >> movieRating;
        cin.ignore();
        while (movieRating < 0 || movieRating > 10) {
            cout << "The rating not in allowed ratings range! Please try again." << endl;
            cout << "Enter the rating for the movie (0-10): "; 
            cin >> movieRating;
            cin.ignore();
        }
        moviesRatings.push_back(movieRating);
    } 
    cout << "\nHere is your summary of the movies: \n" << endl;
    cout << "-------------- SUMMARY ---------------" << endl;
    for (int i = 0; i < moviesNames.size(); i++) {
        cout << "You rated " << moviesNames[i] << " a " << moviesRatings[i] << "/10" << endl;
    }
    return 0;
}

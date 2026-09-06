#include <iostream>
#include <string>
using namespace std;

int main() {

    int season, soil, previousCrop, rainfall;

    cout << "=============================================\n";
    cout << "       SMART CROP ROTATION SYSTEM\n";
    cout << "=============================================\n";

    // Select season
    cout << "\nSelect Season:\n";
    cout << "1. Kharif (June - October)\n";
    cout << "2. Rabi (October - March)\n";
    cout << "3. Zaid (March - June)\n";
    cout << "Enter your choice: ";
    cin >> season;

    // Select soil type
    cout << "\nSelect Soil Type:\n";
    cout << "1. Black Soil\n";
    cout << "2. Red Soil\n";
    cout << "3. Alluvial Soil\n";
    cout << "4. Sandy Soil\n";
    cout << "Enter your choice: ";
    cin >> soil;

    // Previous crop
    cout << "\nSelect Previous Crop:\n";
    cout << "1. Rice\n";
    cout << "2. Wheat\n";
    cout << "3. Maize\n";
    cout << "4. Cotton\n";
    cout << "5. Groundnut\n";
    cout << "6. Pulses\n";
    cout << "Enter your choice: ";
    cin >> previousCrop;

    // Rainfall
    cout << "\nEnter expected rainfall (in mm): ";
    cin >> rainfall;

    cout << "\n=============================================\n";
    cout << "             CROP RECOMMENDATION\n";
    cout << "=============================================\n";

    // Basic crop rotation logic

    // After Rice
    if (previousCrop == 1) {

        if (rainfall > 700) {
            cout << "Recommended Crop : Pulses\n";
            cout << "Reason : Pulses are suitable after rice and help improve soil fertility.\n";
        }
        else {
            cout << "Recommended Crop : Groundnut\n";
            cout << "Reason : Groundnut can be used as a rotation crop after rice.\n";
        }
    }

    // After Wheat
    else if (previousCrop == 2) {

        if (soil == 1) {
            cout << "Recommended Crop : Cotton\n";
            cout << "Reason : Cotton can grow well in black soil.\n";
        }
        else {
            cout << "Recommended Crop : Maize\n";
            cout << "Reason : Maize provides crop diversification after wheat.\n";
        }
    }

    // After Maize
    else if (previousCrop == 3) {

        cout << "Recommended Crop : Soybean\n";
        cout << "Reason : Soybean is a legume and can help improve soil nitrogen.\n";
    }

    // After Cotton
    else if (previousCrop == 4) {

        if (season == 2) {
            cout << "Recommended Crop : Wheat\n";
            cout << "Reason : Wheat is suitable for the Rabi season after cotton.\n";
        }
        else {
            cout << "Recommended Crop : Pulses\n";
            cout << "Reason : Pulses help improve soil fertility and provide crop rotation.\n";
        }
    }

    // After Groundnut
    else if (previousCrop == 5) {

        cout << "Recommended Crop : Wheat\n";
        cout << "Reason : Wheat provides good crop diversification after groundnut.\n";
    }

    // After Pulses
    else if (previousCrop == 6) {

        if (rainfall > 700) {
            cout << "Recommended Crop : Rice\n";
            cout << "Reason : Rice requires sufficient water and can follow pulses.\n";
        }
        else {
            cout << "Recommended Crop : Maize\n";
            cout << "Reason : Maize is a suitable alternative when rainfall is lower.\n";
        }
    }

    else {
        cout << "Invalid crop selection!\n";
    }

    cout << "\n=============================================\n";
    cout << "              PROJECT BENEFITS\n";
    cout << "=============================================\n";

    cout << "1. Maintains soil fertility\n";
    cout << "2. Reduces pest and disease problems\n";
    cout << "3. Improves crop diversity\n";
    cout << "4. Helps farmers select the next crop\n";
    cout << "5. Reduces continuous cultivation of one crop\n";

    cout << "\nThank you for using the Smart Crop Rotation System!\n";

    return 0;
}
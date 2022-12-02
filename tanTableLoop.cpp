// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Created on: November 30th, 2022
// This program will ask the user what language they
// wish to use the program in, out of the options of english
// and french, and then the program will ask them to choose one
// extra function; either converting an angle to a tan value, or
// converting a tan value to an angle.Then, the program
// will get either the user 's tan value or the user' s angle in radians,
// and calculate the angle or the tan value respectively.Then,
// the program will use a while... loop to calculate the tan value of
// every single angle from 0 - 360. Every variable is subjected to
// a try... catch statement to make sure that erroneous data is not
// permitted, in both languages.
// out of the loop.
#include <string>
#include <iostream>
#include <cmath>

// this function gets the user's language choice, their function choice,
// the angle or tan value depending on the choice, then calculates the
// inverse.This function will then use a while... loop to calculate
// the tan value for every angle from 0 - 360, in radians.Error checking
// is included for every variable.
int main() {
    // initializing counter, calculated loop, tan, function choice, language
    // choice, angle value, and calculated tan and angle value variables.
    int counter, userAngleInt, userFunctionChoiceInt;
    double calculatedTanLoop, userTanFloat, userCalculatedTan;
    double userCalculatedAngle;
    std::string userLangChoice, userFunctionChoice, userAngle, userTan;
    counter = 0;

    // getting the user's language choice
    std::cout << "Good day my friend! / Bonjour mon ami! What language ";
    std::cout << "would you like this program to run in? ";
    std::cout << "Type “en” for English ";
    std::cout << "and “fr” for French! / Dans quelle langue voulez-vous ";
    std::cout << "que ce programme fonctionne? ";
    std::cout << "Entrée “en” pour Anglais et “fr” pour Français! ";
    std::cin >> userLangChoice;

    // if statement to make sure the user input is valid
    if (userLangChoice == "en" || userLangChoice == "fr") {
        // if statement to determine which language the user chose
        if (userLangChoice == "en") {
            // a little introductory text slash note.
            std::cout << "Thank you for choosing your language ";
            std::cout << "- you’ve chosen English! ";
            std::cout << "First, please be advised that ";
            std::cout << "this program runs in radians, ";
            std::cout << "as that is what Python and C++ operate in.";

            // getting the user function choice
            std::cout << "Now, please select which function you would ";
            std::cout << "like the program to run! ";
            std::cout << "Enter “1” if you would like to input the angle ";
            std::cout << "and get the tan value, ";
            std::cout << "and enter “2” if you would like to input ";
            std::cout << "the tan value and get ";
            std::cout << "the corresponding angle! Please be advised: ";
            std::cout << "both options will generate the full ";
            std::cout << "tan table. This is simply an extra ";
            std::cout << "functionality option: ";
            std::cin >> userFunctionChoice;

            // try...catch to make sure the function choice is an int.
            try {
                userFunctionChoiceInt = std::stoi(userFunctionChoice);
                // if statement to make sure user function choice is either
                // 1 or 2.
                if (userFunctionChoiceInt == 1 || userFunctionChoiceInt == 2) {
                    // if statement to determine which function was chosen
                    if (userFunctionChoiceInt == 1) {
                        // function 1 requires the angle - introductory text
                        std::cout << "Thank you for choosing your function! ";
                        std::cout << "You’ve chosen '1'; ";
                        std::cout << "inputting an angle and getting ";
                        std::cout << "the corresponding tan value ";
                        std::cout << "as your extra functionality piece! ";

                        // getting the user's angle
                        std::cout << "Now, please input the angle ";
                        std::cout << "in radians you ";
                        std::cout << "would like to get the tan value of: ";
                        std::cin >> userAngle;

                        // try...catch to make sure the
                        // user input is a valid int.
                        try {
                            userAngleInt = std::stoi(userAngle);
                            // if statement to see if the
                            // user angle is between 0 - 360.
                            if (userAngleInt >= 0 && userAngleInt <= 360) {
                                // converting the user angle to tan value
                                userCalculatedTan = tan(userAngleInt);

                                // displays the results of the
                                // tan conversion back to the user.
                                std::cout << "With the angle " << userAngleInt;
                                std::cout << " your tan value is ";
                                std::cout << userCalculatedTan;
                                std::cout << ", in radians.\n";
                            } else {
                                // informing the user they need to
                                // enter an angle within the range.
                                std::cout << "Please enter a valid integer ";
                                std::cout << "from 0 - 360! \n";
                            }
                        } catch (std::invalid_argument) {
                            // informing the user of their incorrect input.
                            std::cout << "Please enter a valid integer! \n";
                        }
                    } else {
                        // function 2 requires the tan value
                        // introductory text.
                        std::cout << "Thank you for choosing your function! ";
                        std::cout << "You’ve chosen '2'; ";
                        std::cout << "inputting a tan value and ";
                        std::cout << "getting the corresponding angle ";
                        std::cout << "as your extra functionality piece!";

                        // getting the user's tan value
                        std::cout << "Now, please input the tan value ";
                        std::cout << "in radians ";
                        std::cout << "you would like to get the angle of: ";
                        std::cin >> userTan;

                        // try...catch to make sure the user input
                        // is a valid float/double value.
                        try {
                            userTanFloat = std::stod(userTan);

                            // calculates the user angle using the tan value.
                            userCalculatedAngle = atan(userTanFloat);

                            // display the results back to the user.
                            std::cout << "With the tan value " << userTanFloat;
                            std::cout << "your angle is ";
                            std::cout << userCalculatedAngle;
                            std::cout << "in radians.";
                        } catch (std::invalid_argument) {
                            // telling the user their input is invalid.
                            std::cout << "Please enter a valid number ";
                            std::cout << "(decimals accepted!) \n";
                        }
                    }
                } else {
                    // telling the user their input was not valid.
                    std::cout << "Please enter either 1 or 2! \n";
                }
            } catch (std::invalid_argument) {
                // telling the user their input was not valid.
                std::cout << "Please enter a valid integer! \n";
            }
        } else {
            // a little introductory explanatory text in french
            std::cout << "Merci d’avoir choisi votre langue ";
            std::cout << "- vous avez choisi le Français! ";
            std::cout << "Tout d’abord, il faut que vous savez ";
            std::cout << "que ce programme fonctionne ";
            std::cout << "en radians, car c’est dans laquelle ";
            std::cout << "que Python et C++ fonctionnent.";

            // getting the user function choice in french
            std::cout << "Maintenant, veuillez sélectionnez ";
            std::cout << "la fonction que vous voulez ";
            std::cout << "que le programme se fait! ";
            std::cout << "Entrez '1' si vous voulez entrer l’angle ";
            std::cout << "et obtenir la valeur tangente, et entrez ";
            std::cout << "'2' si vous voulez entrer ";
            std::cout << "la valeur tangente et obtenir ";
            std::cout << "l’angle correspondant! ";
            std::cout << "Veuillez noter que les deux options ";
            std::cout << "généreront la table de tangente complète. ";
            std::cout << "Il s’agit simplement d’une option ";
            std::cout << "de fonctionnalité supplémentaire: ";
            std::cin >> userFunctionChoice;

            // try...catch to make sure the function choice is an int.
            try {
                userFunctionChoiceInt = std::stoi(userFunctionChoice);
                // if statement to make sure user function choice is either
                // 1 or 2.
                if (userFunctionChoiceInt == 1 || userFunctionChoiceInt == 2) {
                    // if statement to determine which function was chosen
                    if (userFunctionChoiceInt == 1) {
                        // function 1 requires the angle - introductory text
                        std::cout << "Merci d’avoir choisi votre fonction! ";
                        std::cout << "Vous avez choisi '1'; ";
                        std::cout << "entrez un angle et obtenez la valeur ";
                        std::cout << "tangente correspondante ";
                        std::cout << "comme élément de fonctionnalité ";
                        std::cout << "supplémentaire! ";

                        // getting the user's angle
                        std::cout << "Maintenant, s'il vous plait, entrer ";
                        std::cout << "l’angle en radians de laquelle ";
                        std::cout << "vous voulez obtenir ";
                        std::cout << "la valeur de tangente: ";
                        std::cin >> userAngle;

                        // try...catch to make sure
                        // the user input is a valid int.
                        try {
                            userAngleInt = std::stoi(userAngle);
                            // if statement to see if
                            // the user angle is between 0 - 360.
                            if (userAngleInt >= 0 && userAngleInt <= 360) {
                                // converting the user angle to tan value
                                userCalculatedTan = tan(userAngleInt);

                                // displays the results of the tan
                                // conversion back to the user.
                                std::cout << "Avec l'angle " << userAngleInt;
                                std::cout << "votre valeur tangente est ";
                                std::cout << userCalculatedTan;
                                std::cout << ", en radians.";
                            } else {
                                // informing the user they need to
                                // enter an angle within the range.
                                std::cout << "S’il vous plaît, ";
                                std::cout << "entrez un nombre entre ";
                                std::cout << "0 et 360 !";
                            }
                        } catch (std::invalid_argument) {
                            // informing the user of their incorrect input.
                            std::cout << "S’il vous plaît, ";
                            std::cout << "entrez un nombre valide!";
                        }
                    } else {
                        // function 2 requires the tan value
                        // introductory text.
                        std::cout << "Merci d’avoir choisi votre fonction! ";
                        std::cout << "Vous avez choisi '2'; ";
                        std::cout << "entrer une valeur tangente et ";
                        std::cout << "obtenir l’angle correspondant ";
                        std::cout << "comme pièce de fonctionnalité ";
                        std::cout << "supplémentaire!";

                        // getting the user's tan value
                        std::cout << "Maintenant, veuillez entrer la ";
                        std::cout << "valeur tangente en radians ";
                        std::cout << "de laquelle vous voulez ";
                        std::cout << "obtenir l’angle : ";
                        std::cin >> userTan;

                        // try...catch to make sure the user input
                        // is a valid float/double value.
                        try {
                            userTanFloat = std::stod(userTan);

                            // calculates the user angle using the tan value.
                            userCalculatedAngle = atan(userTanFloat);

                            // display the results back to the user.
                            std::cout << "Avec la valeur tangente de ";
                            std::cout << userTanFloat;
                            std::cout << " votre l'angle est ";
                            std::cout << userCalculatedAngle;
                            std::cout << "en radians. \n";
                        } catch (std::invalid_argument) {
                            // telling the user their input is invalid.
                            std::cout << "S’il vous plaît, entrez un nombre ";
                            std::cout << "valide (décimales acceptées)! \n";
                        }
                    }
                } else {
                    // telling the user their input was not valid.
                    std::cout << "S’il vous plaît, entrez 1 ou 2! \n";
                }
            } catch (std::invalid_argument) {
                // telling the user their input was not valid.
                std::cout << "S’il vous plaît, entrez un nombre ";
                std::cout << "entier valide (1 ou 2)! \n";
            }
        }
    } else {
        std::cout << "Please enter a valid language choice! (en or fr) / ";
        std::cout << "S’il vous plaît, entrez un choix ";
        std::cout << "de langue valide !(en ou fr) \n";
    }

    // checking the language again, but this time for the
    // tan table loop.
    if (userLangChoice == "en") {
        // while...loop that will calculate the tan value for each angle
        // from 0 - 360.
        while (counter < 361) {
            // calculates the tan value of the counter, which represents
            // the angle in this case.
            calculatedTanLoop = tan(counter);

            // displays the angle and the tan value
            // for each iteration of the loop.
            std::cout << counter << " (angle) = ";
            std::cout << calculatedTanLoop << " (tan) \n";

            // increments the counter by 1.
            counter = counter + 1;
            // uses a break statement to prevent an infinite loop.
            if (counter == 361) {
                break;
            } else {
                continue;
            }
        }
    } else {
        // while...loop that will calculate the tan value for each angle
        // from 0 - 360, but in french this time.
        while (counter < 361) {
            // calculates the tan value of the counter, which represents
            // the angle in this case.
            calculatedTanLoop = tan(counter);

            // displays the angle and the tan value
            // for each iteration of the loop.
            std::cout << counter << " (l'angle) = ";
            std::cout << calculatedTanLoop << " (valeur tangente) \n";

            // increments the counter by 1.
            counter = counter + 1;
            // uses a break statement to prevent an infinite loop.
            if (counter == 361) {
                    break;
            } else {
                continue;
            }
        }
    }
}

#include <stdio.h>

void printElement(const char* name, const char* symbol, int atomicNum,
                  const char* config, const char* discoverer, const char* charge) {
    printf("\n╔════════════════════════════════════╗\n");
    printf("  Element Details\n");
    printf("╠════════════════════════════════════╣\n");
    printf("  Name              : %s\n", name);
    printf("  Symbol            : %s\n", symbol);
    printf("  Atomic Number     : %d\n", atomicNum);
    printf("  Electronic Config : %s\n", config);
    printf("  Discovered by     : %s\n", discoverer);
    printf("  Common Charge/Ox. : %s\n", charge);
    printf("╚════════════════════════════════════╝\n\n");
}

int main() {
    int choice, atomicNumber, confirmExit;
    
    printf("=======================================\n");
    printf("   Welcome to the Modern Periodic Table\n");
    printf("=======================================\n\n");

    while (1) {
        printf("1  →  Know about an element (by atomic number)\n");
        printf("2  →  Exit the program\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter atomic number (1–20 supported): ");
            scanf("%d", &atomicNumber);

            if (atomicNumber < 1 || atomicNumber > 20) {
                printf("\nSorry! Only elements 1–20 are available in this version.\n");
                printf("Please try again.\n\n");
                continue;
            }

            switch (atomicNumber) {
                case 1:
                    printElement("Hydrogen", "H", 1, "1s¹", "Henry Cavendish", "+1");
                    break;
                case 2:
                    printElement("Helium", "He", 2, "1s²", "Pierre Janssen & Norman Lockyer", "0 (inert)");
                    break;
                case 3:
                    printElement("Lithium", "Li", 3, "1s² 2s¹", "Johan August Arfwedson", "+1");
                    break;
                case 4:
                    printElement("Beryllium", "Be", 4, "1s² 2s²", "Louis-Nicolas Vauquelin", "+2");
                    break;
                case 5:
                    printElement("Boron", "B", 5, "1s² 2s² 2p¹", "Humphry Davy & others", "+3");
                    break;
                case 6:
                    printElement("Carbon", "C", 6, "1s² 2s² 2p²", "Known since antiquity", "+4, -4, others");
                    break;
                case 7:
                    printElement("Nitrogen", "N", 7, "1s² 2s² 2p³", "Daniel Rutherford", "-3, +3, +5");
                    break;
                case 8:
                    printElement("Oxygen", "O", 8, "1s² 2s² 2p⁴", "Joseph Priestley & Carl Wilhelm Scheele", "-2");
                    break;
                case 9:
                    printElement("Fluorine", "F", 9, "1s² 2s² 2p⁵", "Henri Moissan", "-1");
                    break;
                case 10:
                    printElement("Neon", "Ne", 10, "1s² 2s² 2p⁶", "William Ramsay & Morris Travers", "0 (inert)");
                    break;
                case 11:
                    printElement("Sodium", "Na", 11, "[Ne] 3s¹", "Humphry Davy", "+1");
                    break;
                case 12:
                    printElement("Magnesium", "Mg", 12, "[Ne] 3s²", "Joseph Black", "+2");
                    break;
                case 13:
                    printElement("Aluminium", "Al", 13, "[Ne] 3s² 3p¹", "Hans Christian Ørsted", "+3");
                    break;
                case 14:
                    printElement("Silicon", "Si", 14, "[Ne] 3s² 3p²", "Jöns Jacob Berzelius", "+4, -4");
                    break;
                case 15:
                    printElement("Phosphorus", "P", 15, "[Ne] 3s² 3p³", "Hennig Brand", "-3, +3, +5");
                    break;
                case 16:
                    printElement("Sulfur", "S", 16, "[Ne] 3s² 3p⁴", "Known since antiquity", "-2, +4, +6");
                    break;
                case 17:
                    printElement("Chlorine", "Cl", 17, "[Ne] 3s² 3p⁵", "Carl Wilhelm Scheele", "-1, +1, +5, +7");
                    break;
                case 18:
                    printElement("Argon", "Ar", 18, "[Ne] 3s² 3p⁶", "Lord Rayleigh & William Ramsay", "0 (inert)");
                    break;
                case 19:
                    printElement("Potassium", "K", 19, "[Ar] 4s¹", "Humphry Davy", "+1");
                    break;
                case 20:
                    printElement("Calcium", "Ca", 20, "[Ar] 4s²", "Humphry Davy", "+2");
                    break;
                default:
                    printf("Error: Unexpected atomic number.\n");
            }
        }
        else if (choice == 2) {
            printf("\nAre you sure you want to exit? (1 = Yes, 0 = No): ");
            scanf("%d", &confirmExit);
            if (confirmExit == 1) {
                printf("\nThank you for using the Periodic Table. Goodbye!\n");
                break;
            } else {
                printf("Returning to main menu...\n\n");
            }
        }
        else {
            printf("\nInvalid choice! Please enter 1 or 2.\n\n");
        }
    }

    return 0;
}
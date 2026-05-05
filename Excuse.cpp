#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// Replace all occurrences of {name} in a template with the actual name
std::string applyTemplate(const std::string& tmpl, const std::string& name) {
    std::string result = tmpl;
    const std::string placeholder = "{name}";
    size_t pos = 0;
    while ((pos = result.find(placeholder, pos)) != std::string::npos) {
        result.replace(pos, placeholder.length(), name);
        pos += name.length();
    }
    return result;
}

int main() {
    // Seed random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Excuse templates (at least 10)
    std::vector<std::string> excuses = {
        "{name} couldn't complete the assignment because the laptop battery died unexpectedly.",
        "{name} tried finishing the homework, but the internet stopped working for the entire night.",
        "{name} was ready to submit the assignment when the file mysteriously disappeared.",
        "{name} couldn't finish the homework because the laptop decided to install updates for six hours.",
        "{name} was about to complete the assignment when the Wi-Fi mysteriously disappeared.",
        "{name} tried finishing the work, but the computer keyboard suddenly stopped cooperating.",
        "{name} had the assignment fully written, but the printer ran out of ink at midnight.",
        "{name} was almost done when a power cut wiped out everything that hadn't been saved.",
        "{name} couldn't submit on time because the school portal kept throwing a 404 error.",
        "{name} finished the assignment, but the cat walked across the keyboard and deleted it all.",
        "{name} tried to email the homework, but the attachment kept failing to upload for three hours.",
        "{name} had the assignment ready, but accidentally saved it on a USB drive that is now missing.",
        "{name} couldn't concentrate on the homework because the neighbours were hosting a very loud party.",
        "{name} was working on the assignment when the laptop screen went completely blank for no reason.",
        "{name} completed the homework but the file got corrupted and now opens as random symbols."
    };

    std::cout << "========================================================" << std::endl;
    std::cout << "      📝  HOMEWORK EXCUSE GENERATOR  📝                 " << std::endl;
    std::cout << "========================================================" << std::endl;

    std::string name;
    std::cout << "\nEnter student name: ";
    std::getline(std::cin, name);

    // Trim leading and trailing whitespace
    name.erase(0, name.find_first_not_of(" \t"));
    name.erase(name.find_last_not_of(" \t") + 1);

    if (name.empty()) {
        std::cout << "\nNo name entered. Even your name is missing, just like the homework." << std::endl;
        return 0;
    }

    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        int index = rand() % excuses.size();
        std::cout << "\n--------------------------------------------------------" << std::endl;
        std::cout << "  📢  " << applyTemplate(excuses[index], name) << std::endl;
        std::cout << "--------------------------------------------------------" << std::endl;

        std::cout << "\nGenerate another excuse? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();
    }

    std::cout << "\nGood luck explaining that to the teacher, " << name << "!" << std::endl;
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

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

    // Roast templates
    std::vector<std::string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is basically staring at the screen until the bug gets embarrassed and leaves.",
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name}'s Git commit messages are just: 'stuff', 'more stuff', and 'idk why this works but it does'.",
        "Scientists confirmed that {name}'s code is the missing link between spaghetti and disaster.",
        "{name} once spent 3 hours fixing a bug that turned out to be a missing semicolon. Twice.",
        "{name} types so slowly that autocomplete gave up and went home.",
        "The only thing {name} delivers on time is excuses.",
        "{name}'s idea of version control is saving files as 'final_FINAL_v3_USETHISONE.cpp'.",
        "They say every expert was once a beginner — {name} is proof that some people enjoy the beginner phase a little too much.",
        "{name}'s code doesn't have bugs — it has 'surprise features'.",
        "Google Search has a special VIP account for {name} because of the sheer volume of basic questions."
    };

    std::cout << "=======================================================" << std::endl;
    std::cout << "        🔥  WELCOME TO THE ROAST GENERATOR  🔥         " << std::endl;
    std::cout << "=======================================================" << std::endl;

    std::string name;
    std::cout << "\nEnter your name (if you dare): ";
    std::getline(std::cin, name);

    // Trim whitespace
    name.erase(0, name.find_first_not_of(" \t"));
    name.erase(name.find_last_not_of(" \t") + 1);

    if (name.empty()) {
        std::cout << "\nYou didn't even enter a name. The cowardice is showing." << std::endl;
        return 0;
    }

    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        int index = rand() % roasts.size();
        std::cout << "\n-------------------------------------------------------" << std::endl;
        std::cout << "  🎤  " << applyTemplate(roasts[index], name) << std::endl;
        std::cout << "-------------------------------------------------------" << std::endl;

        std::cout << "\nWant another roast? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();
    }

    std::cout << "\nSmart choice to quit while you still had some dignity left, " << name << "." << std::endl;
    return 0;
}
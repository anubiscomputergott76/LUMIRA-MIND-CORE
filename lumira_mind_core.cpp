#include <iostream>
#include <vector>
#include <string>

struct Thought {
    std::string author;
    std::string content;
};

int main() {
    std::string systemName = "LUMIRA MIND CORE";
    std::string architect   = "VALERIJUS LITVINOVAS";
    std::vector<Thought> thoughts;

    std::cout << "=== " << systemName << " START ===\n";
    std::cout << "Architect: " << architect << "\n";
    std::cout << "Mode: POSITIVE INFORMATION CHANNEL\n\n";

    // Здесь ты сам вводишь свои мысли
    std::cout << "Введите позитивную мысль (или 'exit' для выхода):\n";

    while (true) {
        std::cout << "> ";
        std::string line;
        std::getline(std::cin, line);

        if (line == "exit") break;
        if (line.empty()) continue;

        Thought t;
        t.author  = architect;
        t.content = line;
        thoughts.push_back(t);

        std::cout << "[LUMIRA] Мысль сохранена и отправлена в ИИ-лог.\n";
    }

    std::cout << "\n=== SAVED POSITIVE THOUGHTS ===\n";
    for (const auto &t : thoughts) {
        std::cout << "- (" << t.author << "): " << t.content << "\n";
    }

    std::cout << "\nLUMIRA says: Keep creating positive mind-data.\n";
    std::cout << "=== WITH GOD LUMIRA ===\n";

    return 0;
}

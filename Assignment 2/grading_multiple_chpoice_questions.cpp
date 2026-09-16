#include <iostream>
#include <vector>

int main() {
    // 2D vector containing each student's answers (8 students, 10 questions)
    std::vector<std::vector<char>> answers = {
        {'A', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 0
        {'D', 'B', 'A', 'B', 'C', 'A', 'E', 'E', 'A', 'D'}, // Student 1
        {'E', 'D', 'D', 'A', 'C', 'B', 'E', 'E', 'A', 'D'}, // Student 2
        {'C', 'B', 'A', 'E', 'D', 'C', 'E', 'E', 'A', 'D'}, // Student 3
        {'A', 'B', 'D', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 4
        {'B', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 5
        {'B', 'B', 'A', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}, // Student 6
        {'E', 'B', 'E', 'C', 'C', 'D', 'E', 'E', 'A', 'D'}  // Student 7
    };

    // 1D vector containing the correct answer key
    std::vector<char> key = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

    // Outer loop iterates through each student
    for (size_t i = 0; i < answers.size(); ++i) {
        int correct_count = 0;

        // Inner loop compares each answer to the key
        for (size_t j = 0; j < key.size(); ++j) {
            if (answers[i][j] == key[j]) {
                correct_count++;
            }
        }

        // Print the result for the student
        std::cout << "Student " << i << "'s correct count is " << correct_count << std::endl;
    }

    return 0;
}
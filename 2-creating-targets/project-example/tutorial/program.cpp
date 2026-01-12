#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h> //strcmp
#include <string>

#include <maths.hpp>
#include <scientific-maths.hpp>

int nextInstruction(const char *Word);

int main(int argc, char* argv[]) {
  int programReturn;
  const char* inputCommand = argv[1];
  double number1 = atof(argv[2]);
  double number2 = atof(argv[3]);

  // Check commandline arguments, must 4 arguments or throw an error
  if (argc < 3 || 4 < argc) {
    fprintf(stderr, "Usage: ./math <Input Command> <argument 1>\n");
      fprintf(stderr, "Usage: ./math <Input Command> <argument 1> <argument 2>\n");
      fprintf(stderr, "List of <Input Command>: add, subtract, multiply, divide, root, remainder stop>\n");
      exit(EXIT_SUCCESS);
  }

  while(true) {
    programReturn = nextInstruction(inputCommand);

    // error checking -- program will continue if invalid argument
    if (programReturn == 0) {
        fprintf(stderr, "Warning: Invalid instruction: %s\n", inputCommand);

        continue;
    }

    if (strcmp(inputCommand, "stop") == 0) {
        fprintf(stderr, "instruction: stop\n");

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "add") == 0) {
        double answer = maths::add(number1, number2);

        fprintf(stderr, "instruction: add\n");
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "subtract") == 0) {
        double answer = maths::subtract(number1, number2);

        fprintf(stderr, "instruction: subtract\n");
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "multiply") == 0) {
        double answer = maths::multiply(number1, number2);

        fprintf(stderr, "instruction: multiply\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "divide") == 0) {
        double answer = maths::divide(number1, number2);

        fprintf(stderr, "instruction: divide\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "root") == 0) {
        double answer = scientificMaths::root(number1);

        fprintf(stderr, "instruction: root\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }
    
    if (strcmp(inputCommand, "root") == 0) {
        double answer = scientificMaths::remainder(number1, number2);

        fprintf(stderr, "instruction: remainder\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }
  }

  return EXIT_SUCCESS;
}

// fscanf -- reads formatted data from a file
int nextInstruction(const char *Word) {
    // logic to what word it reads
    if (strcmp(Word, "stop") == 0) return 1;
    if (strcmp(Word, "add")==0) return 1;
    if (strcmp(Word, "subtract")==0) return 1;
    if (strcmp(Word, "multiply")==0) return 1;
    if (strcmp(Word, "divide")==0) return 1;
    if (strcmp(Word, "root")==0) return 1;
    if (strcmp(Word, "remainder")==0) return 1;

    return 0;
}
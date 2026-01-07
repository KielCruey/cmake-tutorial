#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h> //strcmp
#include <string>

#include <maths.hpp>

int nextInstruction(const char *Word);

int main(int argc, char* argv[]) {
  int programReturn;
  const char* inputCommand = argv[1];
  double number1 = atof(argv[2]);
  double number2 = atof(argv[3]);

  // Check commandline arguments, must 4 arguments or throw an error
  if (argc < 4 || 4 < argc) {
      fprintf(stderr, "Usage: ./math <Input Command> <argument 1> <argument 2>\n");
      fprintf(stderr, "List of <Input Command>: add, subtract, multiply, divide, stop>\n");
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
        double answer = math::add(number1, number2);

        fprintf(stderr, "instruction: add\n");
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "subtract") == 0) {
        double answer = math::subtract(number1, number2);

        fprintf(stderr, "instruction: subtract\n");
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "multiply") == 0) {
        double answer = math::multiply(number1, number2);

        fprintf(stderr, "instruction: multiply\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }

    if (strcmp(inputCommand, "divide") == 0) {
        double answer = math::divide(number1, number2);

        fprintf(stderr, "instruction: divide\n");		
        fprintf(stderr, "answer: %.2f\n", answer);

        return EXIT_SUCCESS;
    }
  }

  return EXIT_SUCCESS;
}

// fscanf -- reads formatted data from a file
int nextInstruction(const char *Word) {
    // logic to what word it reads
    // comparing a string that outputs a "0" is the same string
    if (strcmp(Word, "stop") == 0) return 1;
    if (strcmp(Word, "add")==0) return 1;
    if (strcmp(Word, "subtract")==0) return 1;
    if (strcmp(Word, "multiply")==0) return 1;
    if (strcmp(Word, "divide")==0) return 1;

    return 0;
}
"# NotesManager" 

Requirements:

This Program is responsible for converting a text file into a text file that is readable in note form. This works by using
symbols at the start of the program to dictate how that line should be processed into a final text file formed correctly.

If a line is longer than 80 characters it will process it by taking the characters to the next line at the same level of
indentation as it's original line.

A # indicates that a bullet point should be used.
Two #'s indicates that the bullet point should be indented
Three #'s indicates a bullet point and two indents . . .

A ! indicates that a number should be used.
A !# indicates that a number should be used with an indent
A !## indicates a number with two indents . . .

These numbers automatically are adjusted by the program. If a lower level of indents is reached, then the number resets.

The program takes an input text file and outputs a different text file. The different text file adds a user entered topic,
which is provided when the user enters the text file name. Files go into a subdirectory titled "Clean" under the project
folder, with a name depending on the topic name.

If that file already exists, the user is prompted to decide to rename or overwrite. The user will enter in the results.

Design:

main():
menu function to direct users. Exits upon close of program or user typing "quit" or "exit"

processText(inputFile, outputFile):
takes in the input file and writes to the output File.

checkIfFilesExists(fileName, outputFlag):
returns 0 if exists, 1 if does not exist.




Decimal to Binary Converter Program

:
This program converts any positive decimal number to its representation. It both the integer and fractional parts of the decimal number. Users can specify the number of digits (precision) they want after the point for fractional values.

Key Features:
- any decimal number to.
- Uses stack (linked list) for the integer part conversion.
- Uses a queue (linked list) recursion for the part conversion.
- Allows to specify precision for the fractional part.

Files:
- “main.cpp”: Contains the main program for user input and output.
- “pre_decimalStack.h” and “pre_decimal.cpp”: Define implement the “BinaryStack” class to manage the integer part conversion.
- “post_decimalQueue.h” and “post_decimalQueue.cpp”: Define and implement “BinaryQueue” class for the fractional part conversion.
- “README”: This file an overview and explanation of the program.

Program StructureThe program is divided into the following components- BinaryStack: Uses a linked list to implement a stack that holds binary digits of the integer part.
- BinaryQueue: Uses a linked list to implement a queue for binary digits of the fractional part and includes a recursive function for handling the fractional conversion.

Program Logic:
Integer Part Conversion: Uses recursive function to convert the integer part of the number to binary, storing each binary digit in a stack.
Fractional Part Conversion: Multiplies the fractional part by 2, retrieves the integer part of result as a binary digit, enqueues it. This is done recursively until the specified precision is reached.

Error HandlingEnsures only positive numbers are.
Limits precision to a user-specified (1-10).

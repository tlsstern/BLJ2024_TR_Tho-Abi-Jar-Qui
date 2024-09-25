# Realize
During the realization phase of our project, we focused on developing a calculator that not only performs basic mathematical operations but also offers more features. The work was carried out as a team, with each member contributing their skills to expand the program's functionality. Our main goals were to create a stable foundation, integrate advanced features, and ensure a user-friendly interface.

## Setting up
* GitHub
  We started with setting up a shared repository on GitHub. Thomas created the repository and invited all team members, including our instructors. This setup enabled us to collaborate seamlessly, track our progress, and ensure that our code was securely stored.

* CLion
  We chose CLion as our primary platform, allowing us to write, debug, and test our code efficiently. Its good debugging tools and user-friendly interface made it an ideal choice for our project, ensuring that we could identify and resolve issues swiftly as they came across.

## Coding
### The base of the game
Our project began with the development of a basic calculator, serving as the foundation upon which we would build additional features. The initial code created a loop that continuously prompted the user to perform calculations, asking if they wished to continue after each operation. This structure provided a solid base, allowing us to incrementally add more complex functionalities to the program.

![screenshot 2024-09-22](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Main_Calculator%20Project_Realize.png)

### Multifunctional 
This code demonstrates our interactive, console based calculator, which offers users a menu of twelve different operations. Upon execution, the program displays a list of mathematical and non mathematical functions, enabling users to select an option by entering the corresponding number. Additionally, the program provides features for geometric calculations and chained calculations, where multiple operations can be performed sequentially. For non mathematical functionality, the program includes a simple implementation of the Rock-Paper-Scissors game. The selected operation is then executed by calling the corresponding function, each of which is implemented in separate modules included in the program through header files. The program ensures that only valid inputs (numbers between 1 and 12) are accepted, prompting the user to re-enter their choice if an invalid input is detected.

![Screenshot 2024-09-22 140911](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Multifunctional_Calculator%20Project_Realize.png)

### Obligatory features
We had to code obligatory features one of them is the multiplication which we also had to implement the function multiplaction that continuously multiplies user inputted integers until the user decides to stop by entering 'S' or 's'. The function starts with an initial product of 1 and prompts the user to input numbers. If the input is not a valid integer, the program checks if the user entered 'S' or 's' to stop, otherwise, it asks for a valid integer again. Once the user stops the input, the function prints the final product of all entered numbers and returns 0, indicating successful execution.

![Screenshot 2024-09-22 141911](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Multiplication_Calculator%20Project_Realize.png)

### Optional features Geometry
We had also to choose at least one optional feature which in the following code is the geometry it allow users to calculate the area or volume of various geometric shapes through an interactive console interface. The main function, geometry, prompts the user to choose between calculating an area or a volume. Depending on the user’s choice, the program either calls the Area function or the Volume function. If the user selects to calculate an area, the Area function further asks them to choose from a list of shapes, including a circle, square, rectangle, triangle, or trapezoid. Each of these shapes has a corresponding function that calculates its area based on the dimensions provided by the user, such as radius for a circle or side lengths for a square or rectangle. Similarly, if the user opts to calculate a volume, the Volume function prompts them to select a shape. The program includes an input check to ensure that the user enters the correct type of data.

![Screenshot 2024-09-22 143444](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Geometrie1_Calculator%20Project_Realize.png)

![Screenshot 2024-09-22 143830](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Geometrie2_Calculator%20Project_Realize.png)

![Screenshot 2024-09-22 144034](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Geometrie3_Calculator%20Project_Realize.png)

## Issues encountered
We had two main issues. One of them, as shown in line 49 of the code, was a syntax error that prevented the code from compiling correctly. This line attempted to declare a function within a case statement, which is not allowed in C programming. The case statement is used to execute a specific block of code when a particular condition is met, and it does not support function declarations. The intended purpose of this line was likely to call the trapezoid() function when the value of the choice variable is 5. However, the syntax used was incorrect. It was corrected by simply removing the void keyword and the extra semicolon, so it would look like line 47. The issue came because the function was overwritten and therefore redeclared instead of called up.

![Screenshot 2024-09-20 102648](https://github.com/tlsstern/BLJ2024_TR_Tho-Abi-Jar-Qui/blob/main/Taschenrechner/Documentation/Images/Issue1_Realize.png)

We faced our second issue with using GitHub, mainly because our development environments were different. One team member set up the repository and invited the rest of us to join. However, we had trouble uploading our code to the shared repository. To avoid losing our work, we had to save our code in separate repositories temporarily. The CMake file often wasn’t recognized, so we had to reset the repository several times. To fix these issues, the team member who created the repository had to reconfigure it. After that, we were able to merge our individual code into the shared repository successfully. 

Regarding this particular problem, we consulted our instructor because we were concerned that if we couldn’t solve it, we wouldn’t be able to share our code later. It took us two hours to analyze and resolve the issue, and afterward, we were able to continue working on our code.

## Saving our work
To keep everyone updated on each other's progress, we pushed and committed our code to GitHub. This way, not only we and our instructors could see our progress, but our code was also stored in a safe place. Additionally, this allowed us to collaborate effectively and track changes over time.

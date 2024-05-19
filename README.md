# Leetcode_problems
 
## Table of content
### 1. [About environment](#about-environment)
### 2. [About the program](#about-the-program)
### 3. [How to run](#how-to-run)
### 4. [Problem ID Table](#problem-id)

## 1. About enviroment <a id="about-environment"></a>
I'm using these version below to implement this program

    g++ (MinGW.org GCC-6.3.0-1) 6.3.0  
    Copyright (C) 2016 Free Software Foundation, Inc.

and

    Python 3.12.3

## 2. About the program <a id="about-the-program"></a>

### Program's tructure:
    Leetcode_problems
        |- Problem folders
        |- main.cpp
        |- main.h
        |- Makefile
        |- README.md
        |- testing.py

Where:

- **Problem folders:** contain all file needed for this problem and named by this problem's name in leetcode. It include the folowing files:

    - `<problem name>.cpp` for solve the problem
    - `Problem_description.md` for decribe the problem. It is pasted from leetcode and re-format in markdown file.
    - `test.py` for testing the program.
    - `unittest.json` contain all information of the problem and input-output expectation of test cases.
- **main.cpp**: decide which problem will be showed
- **main.h**: include all libery needed and class `Solution`
- **Makefile**: for compiling the C++ program
- **testing.py**: for running test propram specific.


## 3. How to run <a id="how-to-run"></a>

Be sure your terminal is in right folder.

    [Your workspace folder]
        |-Leetcode_problems
            |-You are here

Then run the command line below to compile program

    python <problem_id>

Which problem_id is ID of the problem you want to view result. To know what id of problem, please go to Problem ID section or click [here](#problem-id)

## 4. Problem ID Table <a id="problem-id"></a>
The table below contain Problem information. You can find out their ID, Problem name, Difficult level, Runtime and Memory. About Runtime and Memory columns, These show you the runtime and memory of my scripts need to solve the problem.
|   ID      |   Problem name            |   Difficult Level |       Runtime                 |      Memory                       |
|   :--:    |   :-------------          |:---------------:  |       :--:                    |       :--:                        |
|   1       |Longest common prefix      |Easy               |0 ms (Beats 100% of users)     |10.94 MB (Beats 59.49% of users)   |
|   2       |Palindrom number           |Easy               |16 ms (Beats 5.02% of users)   |8.36 MB (Beats 32.66% of users)    |
|   3       |Roman to interger          |Easy               |3 ms (Beats 92.49% of users)   |9.19 MB (Beats 99.96% of users)    |
|   4       |Two sum                    |Easy               |433 ms (Beats 5.02% of users)  |12.66 MB (Beats 73.63% of users)   |
|   5       |Valid Parentheses          |Easy               |3 ms (Beats 41.9% of users)    |7.50 MB (Beats 85.89% of users)    |
|   6     | Merge two sorted lists      |Esay |5ms(Beats 48.88% of users)|18.5 MB (Beats 13.86% of users)|
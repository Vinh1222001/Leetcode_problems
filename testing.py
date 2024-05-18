import Merge_two_sorted_lists.test as MergeTwoListsTest
import Two_sum.test as TwoSumTest

import unittest
import subprocess

problem_id=0

problem_dic={
    4:TwoSumTest.testCase,
    6:MergeTwoListsTest.testCase
}

class TestMainProgram(unittest.TestCase):

    def setUp(self):
        print("Compiling main.exe...")
        process = subprocess.run(["mingw32-make", "main"], shell=True, check = True)
        
    def test_output(self):
        problem_dic[problem_id]()
        # MergeTwoListsTest.testCase()

if __name__ == '__main__':

    problem_id = int(input())
    unittest.main()
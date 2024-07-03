import Merge_two_sorted_lists.test as MergeTwoListsTest
import Two_sum.test as TwoSumTest
import Longest_common_prefix.test as LongestCommonPrefixTest
import Palindrome_number.test as PalindromeNumberTest
import Roman_to_Interger.test as RomanToIntergerTest
import Valid_Parentheses.test as ValidParenthesesTest
import Add_Two_Number.test  as AddTwoNumberTest

import unittest
import subprocess
import tkinter as tk
from   tkinter.scrolledtext import ScrolledText
from   tkinter import font
from ctypes import windll, byref, sizeof, c_int

name = "Leetcode problem"
icon = "./icon/leetcode_icon.png"
default_win_size = '1920x1080'

problem_dic={
    1:LongestCommonPrefixTest.testCase,
    2:PalindromeNumberTest.testCase,
    3:RomanToIntergerTest.testCase,
    4:TwoSumTest.testCase,
    5:ValidParenthesesTest.testCase,
    6:MergeTwoListsTest.testCase,
    7:AddTwoNumberTest.testCase
}

class TestMainProgram(unittest.TestCase):

    def setUp(self):
        print("Compiling main.exe...")
        process = subprocess.run(["mingw32-make", "main"], shell=True, check = True)
        
    def test_output(self,problem_id):
        problem_dic[problem_id]()
        # MergeTwoListsTest.testCase()

class Leetcode:
    def __init__(self, name:str, icon:str, default_win_size:list, default_bg_color:str='#292929') -> None:
        
        self.test_program = TestMainProgram()
        self.root = tk.Tk()
        self.name = name
        self.icon = icon
        self.default_win_size = default_win_size
        self.default_bg_color = default_bg_color
        self.info_fr = tk.Frame(master=self.root, width=int(default_win_size[0]/2),height=default_win_size[1])
        self.terminal_fr = tk.Frame(master=self.root, width=int(default_win_size[0]/2),height=default_win_size[1])
        self.setup_window()

    def window_run(self):

        self.layout()
        
        self.root.mainloop()
    
    def layout(self):
        
        description_file = open("README.md",'r')

        textbox = ScrolledText(master=self.info_fr,wrap=tk.WORD, width = int(425/(18/2)))
        textbox.configure(font=("Roboto", 13, font.NORMAL))
        textbox.insert("1.0",description_file.read())

        prob_id_input = tk.Entry(master=self.info_fr)
        run_btn = tk.Button(master=self.info_fr,text="Run", command=lambda:self.test_program.test_output(int(prob_id_input.get())))
        
        self.info_fr.grid(column=0,row=0, padx= 5, pady=5)
        self.terminal_fr.grid(column=1,row=0)
        textbox.pack(fill=tk.BOTH)
        # prob_id_input.grid(column=0,row=1)
        # run_btn.grid(column=0,row=2)

    def setup_window(self):
        photo = tk.PhotoImage(file = self.icon)
        self.root.wm_iconphoto(False, photo)
        self.root.title(self.name)
        self.root.geometry(f"{self.default_win_size[0]}x{self.default_win_size[1]}") #Set default size window
        
        # Set up background color 
        self.root.configure(bg=self.default_bg_color)
        HWND = windll.user32.GetParent(self.root.winfo_id())
        
        DWMWA_CAPTION_COLOR = 35 # This attribute is for windows 11
        
        COLOR_1 = self.convert_css_to_hex(self.default_bg_color) # color should be in hex order: 0x00bbggrr

        windll.dwmapi.DwmSetWindowAttribute(HWND, DWMWA_CAPTION_COLOR, byref(c_int(COLOR_1)), sizeof(c_int))

    def convert_css_to_hex(self, css_color):
        # Remove the '#' prefix
        hex_color = css_color.lstrip('#')
        
        # Convert the hex string to an integer and reorder to 0x00bbggrr format
        r = int(hex_color[0:2], 16)
        g = int(hex_color[2:4], 16)
        b = int(hex_color[4:6], 16)
        reordered_hex = (b << 16) | (g << 8) | r
        
        return 0x00000000 | reordered_hex # Ensure it's in the correct format

if __name__ == '__main__':

    problem_id = int(input("Enter problem ID: "))
    my_test = TestMainProgram()
    my_test.setUp()
    my_test.test_output(problem_id=problem_id)

    #Set up main window
    # app = Leetcode(name,icon,[850,750])

    # app.window_run()
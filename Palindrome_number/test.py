import subprocess
import json

RED_STR = "\x1b[31;20m"
GREEN_STR = "\x1b[32;20m"
RESET_COLOR_STR= "\x1b[0m"

json_file = open("./Palindrome_number/unittest.json")

data = json.load(json_file)
test_cases = data['problem']["unittest"]["test_cases"]
# Closing file
json_file.close()

problem_id = data["problem"]["id"]
test_case_len =data["problem"]["unittest"]["test_case_len"]

def testCase():
    
    print(f"\nYou entered problem id = {GREEN_STR} {problem_id} {RESET_COLOR_STR}\nYou are viewing {GREEN_STR}{data["problem"]["name"]}{RESET_COLOR_STR} problem\nDifficult Level: {GREEN_STR}EASY{RESET_COLOR_STR}")
    print(f"There are {GREEN_STR}{test_case_len}{RESET_COLOR_STR} test case in this unittest\n")
    for index, test_case in enumerate(test_cases):
    
        x = test_case["input"]["x"]
        input_data =x

        output_expect=test_case["output"]
        # print(input_data)
        # Chạy chương trình C++ với input từ test case
        result = subprocess.run(['main', data["problem"]["id"]] , input=input_data, capture_output=True, text=True)
        # Kiểm tra output thực tế với output mong muốn

        print(f"\nTestcase {index+1}: ", end='')
        if result.stdout != output_expect:
            print(RED_STR+"FAIL\n"+RESET_COLOR_STR)
        else:
            print(GREEN_STR+"OK\n"+RESET_COLOR_STR)
        
        print(f"\tInput: strs = [{x}]\n")
        print(f"\tOutput expectation: [{output_expect}]\n")
        print(f"\tYour output: [{result.stdout}]\n")

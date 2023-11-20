import subprocess
import os

# 打开记事本
subprocess.Popen(['notepad.exe'])

# 写入文本内容
text_content = "Hello, World!"
text_file_path = "hello.txt"

with open(text_file_path, 'w') as file:
    file.write(text_content)

# 等待记事本关闭
subprocess.Popen(['notepad.exe', text_file_path]).wait()

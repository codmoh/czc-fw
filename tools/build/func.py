#!/usr/bin/env python3
import os
import time

def print_colored(text, color):
    colors = {
        "red": "\033[31m",
        "green": "\033[32m",
        "yellow": "\033[33m",
        "blue": "\033[34m",
        "magenta": "\033[35m",
        "cyan": "\033[36m",
        "reset": "\033[0m",
        "orange": "\033[38;5;208m"
    }
    print(colors[color] + text + colors["reset"])

def print_logo():
    print("")
    print_colored(" ██████╗███████╗ ██████╗", "orange")
    print_colored("██╔════╝╚══███╔╝██╔════╝", "orange")
    print_colored("██║       ███╔╝ ██║     ", "orange")
    print_colored("██║      ███╔╝  ██║     ", "orange")
    print_colored("╚██████╗███████╗╚██████╗", "orange")
    print_colored(" ╚═════╝╚══════╝ ╚═════╝", "orange")
    print_colored("", "reset")
    time.sleep(1)
    


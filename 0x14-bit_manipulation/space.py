import os

def remove_leading_spaces(file_path):
    with open(file_path, 'r') as f:
        lines = f.readlines()

    with open(file_path, 'w') as f:
        for line in lines:
            f.write(line.lstrip('\t '))
            # Use 'lstrip' to remove leading spaces and tabs from the beginning of each line

def process_directory(directory):
    for root, _, files in os.walk(directory):
        for filename in files:
            if filename.endswith('.c'):
                file_path = os.path.join(root, filename)
                remove_leading_spaces(file_path)
                print(f"Leading spaces removed from: {file_path}")

if __name__ == '__main__':
    target_directory = '/alx-low_level_programming/0x14-bit_manipulation/0-main.c'  # Replace this with your desired directory
    process_directory(target_directory)

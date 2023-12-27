import os

def convert_to_utf8_recursive(directory):
    for dirpath, dirnames, filenames in os.walk(directory):
        for filename in filenames:
            if filename.endswith('.c'):
                filepath = os.path.join(dirpath, filename)
                with open(filepath, 'r', encoding='shift_jis', errors='ignore') as file:
                    content = file.read()
                with open(filepath, 'w', encoding='utf-8') as file:
                    file.write(content)
                print(f'Converted {filepath} to UTF-8.')


# ここでディレクトリパスを指定します。例: 'C:/path/to/your/directory'
directory_path = 'C:/Users/a22ei01/source/Source_e2001'
convert_to_utf8_recursive(directory_path)

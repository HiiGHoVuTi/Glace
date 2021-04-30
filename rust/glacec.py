import fnmatch
import os 
import subprocess
import sys
from pathlib import Path

def find(pattern, path):
    find.result = []
    for root, dirs, files in os.walk(path):
        for name in files:
            if fnmatch.fnmatch(name, pattern):
                find.result.append(os.path.join(root, name))
    return find.result

def get_project_root() -> Path:
    return Path(__file__).parent.parent


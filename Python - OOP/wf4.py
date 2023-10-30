import sys

from operator import itemgetter

punctuation = """'!"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~'"""
freq = {}

stop_words = {}

for line in open("stop_words.txt"):
    stop_words[line.strip()] = True

import sys
freq = {}

for line in sys.stdin:
    for word in line.split():
            freq[word] = 1 + freq.get(word,0)

print(freq)
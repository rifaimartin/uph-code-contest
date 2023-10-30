import sys
freq = {}
for line in sys.stdin:
    for word in line.split():
        if word in freq :
            freq[word] = 1 + freq[word]
        else:
            freq[word] = 1
print(freq)
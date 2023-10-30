def calculate_frequency(text):
    freq = {}
    punctuation = """'!"#$%&\'()*+,-./:;<=>?@[\\]^_`{|}~'"""
    stop_words = {}

    for line in text.splitlines():
        for word in line.split():
            word = word.strip(punctuation).lower()
            if not word in stop_words:
                freq[word] = freq.get(word, 0) + 1  

    return freq

def main():
    text = """rifai umur 15"""

    freq = calculate_frequency(text)
    
    sorted_freq = sorted(freq.items(), key=lambda x: x[1], reverse=True)

    for word, count in sorted_freq:
        print(f"{word}: {count}")

if __name__ == "__main__":
    main()
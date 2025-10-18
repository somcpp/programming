def sort_sentence(sentence):
    words = sentence.split()
    words.sort()
    return " ".join(words)
def remove_punctuations(text):
    punctuations = '!@#$%^&*()_+'
    result = ""

    for char in text:
        if char not in punctuations:
            result += char
    return result
import string
def remove_punctuation(text):
    return ''.join(ch for ch in text if ch not in string.punctuation)
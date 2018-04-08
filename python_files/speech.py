from gtts import gTTS
import os

def speak(text):
    language = 'en-us'
    speech = gTTS(text=text, lang=language, slow=False)
    speech.save("speech.mp3")
    os.system("mpg321 speech.mp3")
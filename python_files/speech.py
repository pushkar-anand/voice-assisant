import os
from gtts import gTTS


def speak(text):
    language = 'en-us'
    speech = gTTS(text=text, lang=language, slow=False)
    speech.save("speech.mp3")
    os.system("mpg321 -q speech.mp3")

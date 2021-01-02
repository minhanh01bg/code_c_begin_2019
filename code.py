import os
import playsound
import pyttsx3
import speech_recognition as sr
import time
import sys
import ctypes
import wikipedia
import datetime
import json
import re
import smtplib
import requests
import urllib
import urllib.request as urllib2
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from webdriver_manager.chrome import ChromeDriverManager
from time import strftime
from gtts import gTTS
import webbrowser as wb
from youtube_search import YoutubeSearch
import pycromanager
wikipedia.set_lang('vi')
language = 'vi'

def speak(text):
    print("Bot: {}".format(text))
    tts = gTTS(text=text, lang=language, slow=False)
    tts.save("sound.mp3")
    playsound.playsound("sound.mp3", True)
    os.remove("sound.mp3")

def welcom():
    hour=datetime.datetime.now().hour
    if hour >= 6 and hour < 12:
        speak("chào buổi sáng đại ca minh anh")
    elif hour >= 12 and hour < 18:
        speak("chào buổi chiều đại ca minh anh")
    elif hour >=18 and hour <24:
        speak("chào buổi tối đại ca minh anh")

# def command():
#     c=sr.Recognizer()
#     with sr.Microphone() as source:
#         c.pause_threshold=2
#         audio = c.listen(source)
#     try:
#         query = c.recognize_google(audio,language='vi')
#         print("minh anh"+query)
#     except sr.UnknownValueError:
#         print("Bot: xin lỗi! tôi không hiểu")
#         query= str(input('minh anh: '))
#     return query

if __name__=="__main__":
    welcom()
    while True:
        speak("đại ca cần gì thế")
        # query=command().lower()
        query=input()
        if "google" in query:
            search = input()
            # search=command().lower()
            url=f"https://google.com/search?q={search}"
            wb.get().open(url)
            # speak(f'bạn cần {search} trên google')
        elif "youtube" in query:
            search=input()
            url = f"https://youtube.com/search?q={search}"
            wb.get().open(url)        
        elif "facebook" in query:
            url = f"https://www.facebook.com/"
            wb.get().open(url)
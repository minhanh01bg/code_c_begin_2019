import pyttsx3
import datetime
import speech_recognition as sr
import webbrowser as wb
import os
import pyaudio
friday = pyttsx3.init()
voices = friday.getProperty('voices')
friday.setProperty('voice', voices[1].id) 

def speak(audio):
    print('F.R.I.D.A.Y: ' + audio)
    friday.say(audio)
    friday.runAndWait()
   
    
def time():
    Time=datetime.datetime.now().strftime("%I:%M:%p") 
    speak("It is")
    speak(Time)

def welcome():
        #Chao hoi
        hour=datetime.datetime.now().hour
        if hour >= 6 and hour<12:
            speak("Good Morning Sir!")
        elif hour>=12 and hour<18:
            speak("Good Afternoon Sir!")
        elif hour>=18 and hour<24:
            speak("Good Evening sir")
        speak("How can I help you,boss") 


def command():
    c=sr.Recognizer()
    with sr.Microphone() as source:
        c.pause_threshold=2
        audio=c.listen(source)
    try:
        query = c.recognize_google(audio,language='en-US')
        print("Tony Lèo: "+query)
    except sr.UnknownValueError:
        print('Sorry sir! I didn\'t get that! Try typing the command!')
        query = str(input('Your order is: '))
    return query

if __name__  =="__main__":
    welcome()
    while True:
        query=command().lower()
        #All the command will store in lower case for easy recognition
        if "google" in query:
            speak("minh anh")
            search=command().lower()
            url = f"https://google.com/search?q={search}"
            wb.get().open(url)
            speak(f'Here is your {search} on google')
        
        elif "youtube" in query:
            speak("minh anh")
            search=command().lower()
            url = f"https://youtube.com/search?q={search}"
            
            wb.get().open(url)
            # ur = f"https://www.youtube.com/watch?v=5BG3qrxOlZw&ab_channel=So%C3%A1iNhiOfficial"
            # wb.get().open(ur)
            speak(f'Here is your {search} on youtube')
        
        elif "quit" in query:
            speak("Friday is off. Goodbye boss")
            quit()
        elif "open video" in query:
            meme =r"C:\Users\Admin\Desktop\test\meme.mp4"
            os.startfile(meme)
        elif 'time' in query:
            time()
            


# import pyttsx3
# import pywin32_bootstrap
# import pywin32_system32
# import pywin32_testutil
# import pywintypes
# import py_compile
# friday = pyttsx3.init()
# voice = friday.getProperty('voices')
# friday.setProperty('voice',voice[1].id)
# def speak(audio):
#     friday.say(audio)
#     friday.runAndWait()
# speak("hello minh anh")
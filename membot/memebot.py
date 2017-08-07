# The purpose is to create a memebot that runs on a raspberry pi, to
# send meme's every morning to everybody.
from messageFactory import MessageFactory
from DBLayer import *
from twilio.rest import Client

import datetime


def main():
    print("Booting main ...")
    # send_memes()

    print(datetime.datetime.today().date())

def send_memes():
    memer = MessageFactory()
    memer.create_message_data()
    memer.send_to_all()

main()

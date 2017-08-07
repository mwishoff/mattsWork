# This will be the class that will ping the Twilio server once a day to see if there are any new messages and
# process them through the system to the DB if needed.
from twilio.rest import Client
import os, sys
import datetime
import re
from DBLayer import *
from subprocess import call

class IncomingMessage:

    def __init__(self):
        #reboot, restarts the pi.
        #send memes, will send a meme out to everyone.
        #send meme to, send another meme to a specific person.
        self.pos_cmds = ["reboot", "send memes"]
        self.twilio_number = "+14158516057"
        self.account_sid = "ACa8d2173a73517ab31fde22f868474141"
        self.auth_token = "fcf1d65f1bf6033a544c4e9983f5d18b"
        self.client = Client(self.account_sid, self.auth_token)

    def check_incoming_messages(self):
        print("Checking incoming messages")
        # client.messages.list(date_sent_after=YYYY-MM-DD)
        # not sure if datetime is going to be correct, but we'll see.
        for msg in self.client.messages.list(to="+14158516057", date_sent_after=datetime):
            identity = self.find_msg_identity(msg.body)
            if "Number" == identity and msg.from_ == "+16505808259":
                self.add_number_to_db(msg.body)
            elif "Cmd" == identity and msg.from_ == "+16505808259":
                self.execute_command(msg.body)
            elif "Url" == identity:
                self.add_url_to_db(msg.body)

    def add_number_to_db(self, number):
        call_create_new_number(number)

    def execute_command(self, command):
        print("Executing command: ", command)
        if command == "reboot":
            print("Reboot Pi")

    def add_url_to_db(self, url):
        call_create_new_url(url)

    def find_msg_identity(self, msg):
        print("Finding msg identity")

        if self.check_if_url(msg):
            identity = "Url"
        elif self.check_if_cmd(msg):
            identity = "Cmd"
        elif self.check_if_number(msg):
            identity = "Number"
        else:
            print("Unidentified")
            identity = "Unidentified"

        return identity

    def check_if_url(self, body):
        # do some crazy regex.

    def check_if_cmd(self, body):
        for cmd in self.pos_cmds:
            if cmd in body:
                return True

        return False

    def check_if_number(self, body):
        print("")
        # google: regex only match 10 digit phone numbers python





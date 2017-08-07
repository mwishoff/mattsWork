from messageClass import TwilioMessage
import datetime


class MessageFactory:

    def __init__(self):
        self.numbers = ["+16505808259", "+16502451399"]
        self.messages_to_send = []
        self.image_url = ""
        self.body = ""

    def send_to_all(self):
        print("Sending to all numbers ...")
        for msg in self.messages_to_send:
            #msg.create_and_send_message()
            msg.to_string()
        print("Messages sent.")

    def select_image_url(self):
        print("Selecting image url to send ...")
        self.image_url = "https://s-media-cache-ak0.pinimg.com/736x/00/04/aa/0004aa3a0d84a52786039507a0bfdb83--moto-bike-moto-gp.jpg"

    def select_body(self):
        print("Selecting body ...")
        day = datetime.datetime.today().weekday()
        if day == 0:
            self.body = "Have a great Monday!"
        elif day == 1:
            self.body = "Have a great Tuesday!"
        elif day == 2:
            self.body = "Have a great Wednesday!"
        elif day == 3:
            self.body = "Have a great Thursday!"
        elif day == 4:
            self.body = "Have a great Friday!"
        elif day == 5:
            self.body = "Have a great Saturday!"
        elif day == 6:
            self.body = "Have a great Sunday!"
        else:
            self.body = "Have a great day!"
            print("Error in select_body. Failed to identify the day of the week.")

    def create_message_data(self):

        self.select_body()
        self.select_image_url()

        for number in self.numbers:
            self.messages_to_send.append(TwilioMessage(number, self.body, self.image_url))




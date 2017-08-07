# this class allows me to, not hard code the receiver messages.
# all this class will do is be able to toString the twilio message for debugging purposes,
# and create the message so I can send it with twilio.
from twilio.rest import Client


class TwilioMessage:

    # Twilio number I'm sending the MMS message from

    def __init__(self, to_, body_, media_url_):
        self.to = to_
        self.body = body_
        self.media_url = media_url_
        self.twilio_number = "+14158516057"
        self.account_sid = "ACa8d2173a73517ab31fde22f868474141"
        self.auth_token = "fcf1d65f1bf6033a544c4e9983f5d18b"
        self.client = Client(self.account_sid, self.auth_token)
        self.message = self.client

    def to_string(self):
        print("=====================")
        print("to: ", self.to)
        print("from: ", self.twilio_number)
        print("body: ", self.body)
        print("media_url: ", self.media_url)

    def create_and_send_message(self):
        self.message = self.client.messages.create(
            to = self.to,
            from_= self.twilio_number,
            body = self.body,
            media_url = self.media_url)

        print(self.message.sid)









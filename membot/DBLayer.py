# This should have all the CRUD functions for the DB
# These functions are not to be called directly in the application.
# Creates a contract between DB_API and the application.

from DB_API import *


def call_create_new_number(number):  # number CRUD
    create_new_number(number)


def call_update_number():
    update_number()


def call_get_number():
    get_number()


def call_delete_number():
    delete_number()


def call_create_new_url(url):  # URL CRUD
    create_new_url(url)


def call_update_url():
    update_url()


def call_get_url():
    get_url()


def call_delete_url():
    delete_url()



import phonenumbers
number = "+8801745679976"
from myphone import number

from phonenumbers import geocoder

pepnumber=phonenumbers.parse(number)
location=geocoder.description_for_number(pepnumber,'en')
print(location)

from phonenumbers import carrier
service_pro=phonenumbers.parse(number)
print(carrier.name_for_number(service_pro,'en'))

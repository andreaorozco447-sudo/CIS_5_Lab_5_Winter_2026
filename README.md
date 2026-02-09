# CIS_5_Lab_5_Winter_2026
Practicing Structures

Goal: Create a business card with structures for different companies. 

Recording: https://github.com/user-attachments/assets/03b92ccc-b589-45c6-acb2-84a25a70727b



Scenario: You are hired as a software developer to create business card for various differnt companies! However there is a customer that is wanting to compare different prices offered by the company. Make it so that the customer can check all the prices from the companies and see which one is perfect for this to purchase! 

**Create your own main.cpp**

Tasks:

1. Create a structure ``struct BusinessCard`` with the following members
   - company name
   - company address
   - phone number
   - company working hours
   - representative poc (point of contact)
   - price quoted

In main():
- Create 5 different companies from the ``BusinessCard`` struct
- Fill in the member varaibles manuall or via the constructor
- The price quotes should use the ``<cstdlib>`` to invoke ``rand`` + ``srand``
- Create a simple logic that compares the prices offered by the 5 companies
- The logic should be able to pick the correct company everytime the code is compiled via runtime so ensure that its not one company that wins all the time. 


Deliverable:
- main.cpp
- 1–2 min video explaining logic + demo run
- Upload to GitHub (fork this repo first)

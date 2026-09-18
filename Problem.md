# Problem 1 — Student Information

START

DECLARE name AS STRING
DECLARE rollNumber AS INTEGER
DECLARE age AS INTEGER
DECLARE height AS FLOAT
DECLARE gpa AS FLOAT
DECLARE section AS CHARACTER

INPUT name
INPUT rollNumber
INPUT age
INPUT height
INPUT gpa
INPUT section

DISPLAY name
DISPLAY rollNumber
DISPLAY age
DISPLAY height
DISPLAY gpa
DISPLAY section

END


# Problem 2 — Character Input and Output

START

DECLARE character AS CHARACTER

DISPLAY "Enter a character:"
READ character using getchar()

DISPLAY "Character entered:"
DISPLAY character using putchar()

END


# Problem 3 — Floating-Point Precision

START

DECLARE value AS FLOAT

INPUT value

DISPLAY value using default precision
DISPLAY value with 2 digits after decimal
DISPLAY value with 4 digits after decimal
DISPLAY value with 6 digits after decimal

END

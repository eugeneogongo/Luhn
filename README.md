
# Implementation of Luhn Algorithm

## Psuedo Code
### GET user's credit card number
### SET total to 0
### LOOP backwards from the last digit to the first one at a time
    # IF the position of the current digit is even THEN
        # DOUBLE the value of the current digit
        # IF the doubled value is more than 9 THEN
            # SUM the digits of the doubled value
        # ENDIF
       # SUM the calculated value and the total
    # ELSE
        # SUM the current digit and the total
    # ENDIF
### END loop
### IF total % 10 == 0 THEN
    # SHOW Number is valid
### ELSE
    # SHOW number is invalid
### ENDIF

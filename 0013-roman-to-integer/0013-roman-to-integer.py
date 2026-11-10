class Solution(object):
        def romanToInt(self, s):
            
            output = 0

            roman_values = {
                "I":             1,
                "V":             5,
                "X":             10,
                "L":             50,
                "C":             100,
                "D":             500,
                "M":             1000

            }
            
            symbols = [_ for _ in s]
            values = []

            for symbol in symbols:
                values.append(roman_values[symbol])

            for index, i in enumerate(values):

                try:

                    if values[index] < values[index+1]:
                        output -= i

                    elif values[index] > values[index+1]:
                        output += i

                    else:
                        output += i

                except IndexError:
                    output += i

            return output
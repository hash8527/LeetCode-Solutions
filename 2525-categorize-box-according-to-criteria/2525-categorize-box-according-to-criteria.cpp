class Solution {
public:
    string categorizeBox(double length, double width, double height, double mass) 
    {
        double volume = length * width * height;

        if ((length >= 10000 || width >= 10000 || height >= 10000) || (volume >= 1000000000))
        {
            if (mass >= 100)
            {
                return "Both";
            }
            else if (mass < 100)
            {
                return "Bulky";
            }
        }
        else if (!((length > 10000 || width > 10000 || height > 10000) || (volume >= 1000000000)))
        {
            if (mass >= 100)
            {
                return "Heavy";
            }
            else
            {
                return "Neither";
            }
        }
        return "Nill";
    }
};
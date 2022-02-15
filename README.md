# Get Lucky. Go Easy.

"Get Lucky. Go Easy" is a computational visual art display of lyrics from K-pop group, Weki Meki's song, "Fantastic."
From the song, the display adopts the lyircs "Get Lucky, Go Easy," and animates them according to an aesthetic logic abstracted from LED storefront signage.
The completed piece was featured in a larger installation of similar works on the 5th floor of Barnard University's Milstein building. 
The displayed message was intended to live somewhere between being perceived as a stress reducing encouragement and vapid commercial copywriting.

# How It Works

"Get Lucky. Go Easy" was developed using an eSP32 microcontroller with a built-in TTGO display and a 500mAh battery. 
The code for this display was written on top of the TFT_eSPI library example code, “RLE_Font_test.”
Once the code had been appropriately edited, it was saved under a new name and flashed to my eSP32 device.
To allow my display to be portable, I soldered a 500mAh battery to a eSP32 power input.
Finally, both eSP32 and its accompanying battery, were encased in a paper folded paper envelope.

Below are more specific instructions regarding the code featured in the repository.

# Code
## Colors
I created two arrays which each contained the macros for two colors each; one array held "primary colors" and the other array contained "secondary colors". These macros were predefined using the library's built in "color565" RGB channel function. I then used C++'s built in rand() function to psuedorandomly select an index from each array and saved its dereferenced value into two variables. These variables would then be used to determine the color of the text and its background for the duration of the program. The colors were stored in two different arrays to ensure that no text was the same color as its background. The colors were "randomly" chosen to ensure that each loop of the program at least appeared to be somewhat irregular.

## Text Animation
To implement the scrolling text, I had various "drawString" functions in a while loop where their "x-value" arguments would decrease by a randomly generated value between 1 and 5. The loop would end when the first line of text had achieved a horizontal position of -160px. After a delay of 500, I used the setTextcolor function to invert the color of the text with its background color.
I then facilitated multiple drawString methods - each with different x and y values determined by a rand() function. The rand() functions were limited to ranges between 0 and the height or width of my device's screen ( to ensure that they did not return a number larger than my screen, effectively making the text invisible). Thus, the text would appear at pseudo random positions on the screen, one after the other. I found that, when left alone, the pieces of text would overlap each other, which I thought lent itself well to the overall kitsch of the piece.
After about 18 pieces of text had appeared, a fillScreen function paired with 18 more drawString functions would clear the screen and fill it with newly randomly positioned text. For purposes of repetition, after a delay of 1000, I reused the above functions but with inverted colors.





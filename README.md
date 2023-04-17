# CornerGrocer

<b>Summarize the project and what problem it was solving.</b> <br>
  Corner Grocer wanted a program to read a list of their sales and count occurences of each one to help them reorganize thier shelves. They also wanted a back up of the counts in a frequency.dat file. Further,
  they wanted to be able to search and display counts, as well as display the counts of all items in a numerical and histogram form. <br> <br>
<b>What did you do particularly well?</b> <br>
  I think I documented it well, choose descriptive variable and function names. I believe overall someone would find this highly readable.
<br><br>
<b>Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?</b> <br>
  I'm not particularly happy with the valiation functions. I think I could make it more robust using a try/catch method and maybe putting them in the same function instead of splitting them out. 
  I would also like to update it so the user could specify the file to add and also update frequency.dat with the new values to have a rolling count of data.
<br><br>
<b>Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?</b> <br>
  The most challenging was validating the input. I referenced Dr. Fosters videos to help me figure it out for my specific use case.
<br><br>
<b>What skills from this project will be particularly transferable to other projects or course work?</b> <br>
  When I originally approached this I had no idea how I was going to break this out into a class. I developed an approach that I found really effective. Firstly, I tested the general idea in main without any custom functions, input validation, or classes. 
  I created a map, instantiated a file reader/writer, and opened the file. I then iterated through the file using auto and the map feature ".count" to check if the item was already in my map and then increment it's count by 1 if so. Then I tested writing it all to the file.
  Then I simply printed it all out in the console. After I had the basic idea down, I started the class and commented out all of main. I then worked and tested each function by itself in main until it was working the way I intended. Finally, I brought it all together for a concise main.
  Overall, I felt this method to be very effective and I will be using it everywhere now.
<br><br>
<b>How did you make this program maintainable, readable, and adaptable? </b><br>
  I documented it well, choose descriptive variable and function names. I also organized it in a way that felt logical to me. I also started something new with commenting where I give a 1 - 2 word description in all caps to highlight different areas of the code. Like //ACCESSORS// or //FUNCTIONS//. 
  I feel this had a great effect on dividing the code visually and making it much easier to identify sections that share ideas. 
<br><br>

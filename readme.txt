~ To run this program: 
    +) In window : run "mingw32-make clean" first and run "mingw32-make" after that run "morse.exe <input> <output> <command>"
    +) In linux and macOS : run "make clean" first and run "make" after that run "morse.exe <input> <output> <command>"
    
~ Morse code is a method often used together with an electrical telegraph to transfer text message remotely in late 19th
century until early 20th century. The Morse code encodes text characters as sequences of two different signal durations,
call dots and dashes, or dits and dahs, i.e. "." and "-". The dots represent short signal and the dashes represent the long
one.

~ This program has mission to open a file and figure out if it contains text data (English) or Morse code. It should then 
convert the file to another format and save the result in another file.

~ Just run this program as command-line, e.g: C:\morse <inputfile> <outpufile>
~ Additionally, you can use some optional commands:
    -h: the instruction for user
    -t: your inputfile must have been text file and outputfile is returned as the Morse one
    -m: your inputfile must have been Morse file and outputfile is returned as the text one
    -c: the statistics of the successful conversion

*Caution: 
    + Maximum of arguments in the same command is 4.
    + You have to write precisely the form in command, e.g: C:\morse <inputfile> <outpufile> -t -c
      The above command treats the input file as a text file and convert it to a Morse code file which is the output as 
      well as the program show you the figures of successful conversion.
<h1> Welcome to html parser </h1>
This is a <html> parser in C which takes a string containing html tags in it and parse it to a normal string.
I am a beginer , if anyone wants to give me any suggestions, please send pull request.

Example:

1)If string is like this :
>>char sample[]="\<span\>  This is a string   \</span\>";
or you also can input the string

The output will be like this :-
>>This is a string _______{Clean output with no whitespaces in it}


1)If string is like this (input):
>>char sample[length of string];
>>gets(sample);  ____{Input your sample}

(Input)>> \<h1\> Parse this \</span\>  

The output will be like this :-
>>Parse this _______{Clean output with no whitespaces in it}


/*
Strings - Special Characters
Because strings must be written within quotes, C will misunderstand this string, and generate an error:

char txt[] = "We are the so-called "Vikings" from the north.";
The solution to avoid this problem, is to use the backslash escape character.
*/ 

/*
The backslash (\) escape character turns special characters into string characters:

Escape character	Result	
\'	    '	        Single quote
\"	    "	        Double quote
\\	    \	        Backslash
The sequence \"  inserts a double quote in a string:


Example
char txt[] = "We are the so-called \"Vikings\" from the north.";



The sequence \'  inserts a single quote in a string:

Example
char txt[] = "It\'s alright.";
*/ 


/*
Other popular escape characters in C are:

Escape Character	Result	Try it
\n	New Line	
\t	Tab	
\0	Null	

*/ 

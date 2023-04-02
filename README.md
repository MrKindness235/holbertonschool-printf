~PREFACE:
Welcome dear reader. My name is Patricio Coitiño, the owner of the hands redacting this README. 
With the help of young fellow initiate in the coding landscape Sebastian Maidana we have put toghether
a piece of information to help contextualize the inner workings of this project.

~ACTUAL STATE:
Not working completely. Fortunately enough, most of it works as intended.

~INTENDED OUTCOME:
Under Holberton School Uruguay's tutelage, we were tasked to create a working clone of the C function "printf()".
Just a bit cut from the original functonalities and outputs (Does not print floats).

~REDACTER'S NOTES:
You, dear reader, will find that the contents of this projet (Functions and documentation included) are not nigh middle quality. 
This is, of course, to be expected from two young Holbies who are just stepping into the realm of coding, programming,
teamworking, etc. By no means we expected to keep this level of quiality and we hope, wish and enssure we will 
learn, work and improve over the shortcomings along the way.

~USAGE:
Thanks to the clever machinations of Sebastian and Me we got to create a function that prints using a format.
"But how do I use it?" I hear you think. Well, is as easy as this:

# 1- Call the "_printf()" function in your code:
_printf();

# 2- Fill the arguments with what you wish to print:
_printf(Hello World!);

# This prints:
Hello World!

# 4- But if we wish to actually use the main strenght of this function, formats, we should write:
_printf(%s World!, greeting);

# 5- _printf reads %s as "print given (s)tring" and finds that string in the arguments of your calling. If greeting has the value "Hello":
Hello World!

# And if greeting has the value "Welcome":
Welcome World!

Genral Notes 

Indents such as
	This means that the code that is below is dependent on the top code 

Keywords For JLang = {"f","return","Start","End","output","input","if, "else"}

{ 
These Represent The Scope of a Program.  
} 

Asssume that the interpreter is written in C Or C++

-> means multiple actions must be performed for one line 
Or Or or  means multiple ways to solve a problem 
OR means the || oprator 
	
JLang Code And Tittle 			      				    	  Parseing Code  	Interpreter Code			
															  
Add Funtion Code Syantx 		                              
															  
Start: 		                                                  [LineX]			[LineX]																		Main(){            scanf(line1)
Start_1:											 		  [LineX]			[LineX]																		int sum(a,b)	   while(i != end) 	
fAdd(a,b) 													  [LineX]			[LineX]																			c = a + b	   if (i == Start) 																																					{ 									
    f(x) = (a + b)  										  [LineX]			[LineX]																			return c 		  if (i+5 == a)				
    return x												  [LineX]			[LineX]																	 	}					      run(Something) 	
end_Start1:                 	 							  [LineX]			[LineX]																							  else 			
															  [LineX]			[LineX]																		printf("Words")			  return 1  					
output("Enter your a value")    							  [LineX]			[LineX]																		scanf(%d, a)									
    a = input 												  [LineX]			[LineX]																		  												 
															  [LineX]			[LineX]     																printf("Words")						
output("Enter your b value")    			   				  [LineX]			[LineX]																		scanf(%d, b)									
    b = input 		  						    			  [LineX]			[LineX]																														
															  [LineX]			[LineX]																		fAdd(a,b)							
fAdd(a,b) 									    			  [LineX]			[LineX]																		}											
End:                            							  [LineX]			[LineX]																							



					


Parseing Work In PsudoCode								   	  Explatination Of The Parseing Code 	

[]                                                            you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
[]                                                            you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much                                                             
[]                                                            you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
[]															  you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 			
[]                                                            you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
[]                                                            you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
[]				                                              you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
[]															  you ever wish for death instead of doing this shit, yeah me to. This fucking sucks sooooooooooooooooooooooooooooooooooooooooooo much 
										
										
										
Interpreter Work In PsudoCode								  Explatination of Interpreter Work				
															
[g(x)] 							         		              // This creates the funtion g(x) where everything will be wrapped inside of it 								
[f(x)] -> [g(f(x))] -> [f(a,b)]					              // This is where the inputs to the funtion created 
[g(f(x) = a + b)]								              // This is where the inputs to the funtion will be added  	
[g(f(x)]							 			              // Could remove? and replace the return with [g(f(x) = a + b)]		
[NULL]? Or [g(Clear(f(x))]? Or [Purge(f(x))]?                 // This is where the memory addresses will be free'd? Maybe Useless  
[Ignore]                                                      // when parsing the text Replace the whitespace with //  	
[print("words")]  								              // prints promted text	
[a = inputVariable] -> [Clear(inputVariable)]	              // assigns a value to a variabeclears the inputVariable, Considering theres only going to be one input at a time.
[Ignore] Or [if line(x) == Null \n line + 2]                  // when parsing the text Replace the whitespace with //	
[print("words")]                                		      // prints promted text  
[b = inputVariable] -> [Clear(inputVariable)]				  // assigns a value to a variabeclears the inputVariable, Considering theres only going to be one input at a time.  
[Ignore] Or [if line(x) == Null \n line + 2] 				  // when parsing the text Replace the whitespace with //	
[Start_1(a,b)]												  // calling the funtion fAdd   
[return 1]													  // closes out the program 
					

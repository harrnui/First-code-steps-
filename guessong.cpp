#include <iostream>

int main(){
  
  std::string answer1; //here I introduce, to the computer, that the user input will be a string.
  
  std::cout<<"\n";
  std::cout<<"====================================\n";
  std::cout<<"Guess from which movie this song is:\n";
  std::cout<<"====================================\n\n";
  std::cout<<"𝄞 Far over the misty mountains cold, 𝄞\n";
  std::cout<<"𝄞 To dungeons deep and caverns old, 𝄞\n";
  std::cout<<"𝄞 We must away, ere break of day, \n";               // Just the text that for the story, of the programme
  std::cout<<"𝄞 To claim our long-forgotten gold, 𝄞\n\n";
  std::cout<<"𝄞 The pines were roaring on the heights, 𝄞\n ";
  std::cout<<"𝄞 The winds was moaning in the night, 𝄞\n";
  std::cout<<"𝄞 The fire was red, it flaming spread, 𝄞\n";
  std::cout<<"𝄞 The trees like torches blazed with light, 𝄞\n\n";

  getline(std::cin, answer1); // getline() function asks for the user input, which is set to a string 

  if(answer1=="The Hobbit" or answer1=="Hobbit" or answer1=="hobbit" or answer1=="the hobbit"){ 
    // the first conditional is to give a response, if the user gets it in the first try.
    std::cout<<"WOOOOOO. Congratz , a true fan!";
    abort();
  }

  int i=0; // here i---> stands for a variable which will be put in a while loop as limit of how many loops it will do.

  while (i<2 and answer1!="The Hobbit"){ // while loop is used for looping the users input until it is the right answer or in this case 3 times,because the limit
    std::cout<<"That is not the answer. Try again :\n\n";
    i++;
    getline(std::cin, answer1);
    
    }
  if (answer1!="The Hobbit"){ //right after the loop is over with, it asks if the last input was not correct, if true it will get into the Conditional.
    std::cout<<" \n";
    std::cout<<"Okay , I will give you a hint.\n\n";
    std::cout<<"1)The Hobbit"<<"  "<<"2)Star Wars"<<"  "<<"3)Avatar\n\n\n"; // these are the hints, for wich this IF statment exists 

    getline(std::cin, answer1);
    
    if (answer1=="2" or answer1=="Star Wars" or answer1=="3" or answer1=="Avatar"){//this conditional is inside, the first conditional.Which makes it the 2nd
      while(answer1!="The Hobbit"){
      std::cout<<"Not this one. Try again!\n";
      getline(std::cin, answer1);    
      if (answer1=="1" or answer1=="hobbit" or answer1=="the hobbit"){//3rd 
        std::cout<< "CORRECT. That is the one!\n";
        abort();
      }   
    }


  }
  if (answer1=="The Hobbit" or answer1=="1" or answer1=="hobbit" or answer1=="the hobbit"){ // and the "outro" conditional, which is connected to the first while loop 
    std::cout<< "CORRECT. That is the one!\n";
  } 
  } // i did use these comments to revise
}
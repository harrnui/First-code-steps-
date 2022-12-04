#include <iostream>

int main(){
  std::string answer1;
  
  std::cout<<"\n";
  std::cout<<"====================================\n";
  std::cout<<"Guess from which movie this song is:\n";
  std::cout<<"====================================\n\n";
  std::cout<<"𝄞 Far over the misty mountains cold, 𝄞\n";
  std::cout<<"𝄞 To dungeons deep and caverns old, 𝄞\n";
  std::cout<<"𝄞 We must away, ere break of day, \n";
  std::cout<<"𝄞 To claim our long-forgotten gold, 𝄞\n\n";
  std::cout<<"𝄞 The pines were roaring on the heights, 𝄞\n ";
  std::cout<<"𝄞 The winds was moaning in the night, 𝄞\n";
  std::cout<<"𝄞 The fire was red, it flaming spread, 𝄞\n";
  std::cout<<"𝄞 The trees like torches blazed with light, 𝄞\n\n";

  getline(std::cin, answer1);

  if(answer1=="The Hobbit" or answer1=="Hobbit" or answer1=="hobbit" or answer1=="the hobbit"){
    std::cout<<"WOOOOOO. Congratz , a true fan!";
    abort();
  }

  int i=0;

  while (i<2 and answer1!="The Hobbit"){
    std::cout<<"That is not the answer. Try again :\n\n";
    i++;
    getline(std::cin, answer1);
    
    }
  if (answer1!="The Hobbit"){
    std::cout<<" \n";
    std::cout<<"Okay , I will give you a hint.\n\n";
    std::cout<<"1)The Hobbit"<<"  "<<"2)Star Wars"<<"  "<<"3)Avatar\n\n\n";

    getline(std::cin, answer1);
    
    if (answer1=="2" or answer1=="Star Wars" or answer1=="3" or answer1=="Avatar"){
      while(answer1!="The Hobbit"){
      std::cout<<"Not this one. Try again!\n";
      getline(std::cin, answer1);    
      if (answer1=="1" or answer1=="hobbit" or answer1=="the hobbit"){
        std::cout<< "CORRECT. That is the one!\n";
        abort();
      }   
    }


  }
  if (answer1=="The Hobbit" or answer1=="1" or answer1=="hobbit" or answer1=="the hobbit"){
    std::cout<< "CORRECT. That is the one!\n";
  } 
  }
}

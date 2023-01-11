readme for the binary trees repo

task 0 is trivial, its going to be put to good use later tho with some other functions

task 1 again was rather easy, i have to say my experience with the speedrun project has definetively been a plus as now im much more experienced with the "nuances" of linked lists and similar data structures

task 2 i generally dont copy paste my own work beacause i do see some value in writing things down yourself even if youve done it in the past, but in this occasion i cant really see over the fact that its just one different word over like 25 lines of code that i have to change, so i did

task 3 i tried first with conditions but it would yield me one malloc without freeing, i realized that i was checking for the existence of tree->left but i was calling the function recursively with tree->left so one would always miss my grasp, this way its much simpler and no if were nescessary

task 4 i didnt know what a leaf was but im glad i got it with the context, another trivial task, it could be done in two lines but for the sake of understandability if thats a word i did it in 4, how could it be done in 2? probably by packing the checking for existence of node and the existence of right and left in one sweep

task 5 is very similar to task 4 also in the way that i solved it and also in how i could have done it in less lines, so im not going to elaborate

task 6 reminded me of the delete one, i knew that i was going to put the print function on top beacause the root node must be parsed over first, i know that that is going to be the only difference really, as if i need to print it in between ill just put it in the middle of the recursions and if i need to do it last itll go at the bottom of the function

task 7 indeed it was the case where i only needed to change the position of the executing function. very nice and easy and i did not copy paste this time, as i said i dont like doing that

task 8 again all i did was switch the position of the function pointer one place below

task 9 thing aobut nine is that you have to check whetehr the last one is a leaf or not before recursing into it, id say thats the only hard part, you come up with this solution of height 1 and 2 i think out of nescessity pretty quickly. it reminds me of the excercise in recursive functions we did where we had to return the lenght of a string, so i drew inspiration from that one from the start

task 10 i got quite quickly of course considering its very very similar to the last one and it has a similar idea of returning 0 before the end beacuase the last one will be root

task 11 i tried taking from task 10 and the other ones and i did but now i realize i couldve done it without the variable declaration. too bad. still, i dont think that was i did is a terrorist move. its fine and its understandable

task 12 now i followed my own adivce from task 11 and i put everything in the return. feels good

task 13 again i put it all there, my first iteration was where i returned 1 if i found a node with a child insde the recursion but that just always returned 1 at the end so what i did was just add 1 per node and that solved it, apart from my original solution

task 14 all i did was remove the leaf protection from task 9 so it would count as a node and then return the height substracion. pretty good. i had to remove the leaf protection beacuse if not height of 128 would return 0

task 15 i was checking for the leaf wrong i felt like, so i went for a cleaner approach and the return was the key

task 16 is a swift combo of balance and fullness. one line function
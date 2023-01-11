readme for the binary trees repo

task 0 is trivial, its going to be put to good use later tho with some other functions

task 1 again was rather easy, i have to say my experience with the speedrun project has definetively been a plus as now im much more experienced with the "nuances" of linked lists and similar data structures

task 2 i generally dont copy paste my own work beacause i do see some value in writing things down yourself even if youve done it in the past, but in this occasion i cant really see over the fact that its just one different word over like 25 lines of code that i have to change, so i did

task 3 i tried first with conditions but it would yield me one malloc without freeing, i realized that i was checking for the existence of tree->left but i was calling the function recursively with tree->left so one would always miss my grasp, this way its much simpler and no if were nescessary
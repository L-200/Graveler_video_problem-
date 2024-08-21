# Graveler_video_problem

This program is a much faster version of the program created in this video: https://youtu.be/M8C8dHQE2Ro?si=bPLy4LUahfppmbry

It could be even faster if in each iteration of the while loop the program could stop if the roll wasn't a zero (eventually this improvement will be made)

Numbers explanation: 177 is the amount of times paralysis would have to activate in order to make the graveler win. 231 is the amount of turns that should happen. That's why we check if, in each 231 cycle, the 1/4 chance happend at least 177 times. 1.000.000.000 is the limit of the simulation (otherwise the computer could spend the rest of eternity running this thing)

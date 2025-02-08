# oopHorseRace
List of Functions and Classes
**Horse Class:**
Represents a single horse in the race.

* **Attributes:**

*horseID:* Unique identifier for each horse.
*position:* The current position of the horse on the track.
*trackLength:* The length of the race track.

* **Methods:**
**advance():** Moves the horse forward randomly by either 0 or 1 spaces.
**printLane():** Displays the track with dots (.) representing empty spaces and the horse's ID at its current position.
**isWinner():** Checks if the horse has reached the finish line.

* **Race Class:**

Manages multiple horses and controls the race process.

**Attributes:**

*trackLength:* Fixed length of the race track.
*numHorses:* The number of horses participating in the race.
*horses[5]:* Array storing Horse objects.

* **Methods:**

**Race():** Constructor that initializes the horses with unique IDs and the track length.
**run():** Executes the race loop, advancing horses, printing their positions, checking for a winner, and prompting the user to continue or quit.

* **main() Function:**

Initializes the random number generator using srand(time(NULL)). Creates a Race object and starts the race by calling run()..

* **Conclusion:**
This OOP version of the horse race program improves upon the original by making the code reusable, and easier to extend. The shift from a function-based approach to class-based design allows for better maintanance while keeping the core game logic unchanged.

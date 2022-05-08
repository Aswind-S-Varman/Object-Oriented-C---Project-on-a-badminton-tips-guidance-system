#include <iostream>
using namespace std;

class RecordPoint
{
protected:
    int User_points;
    int Opp_points;

public:
    RecordPoint(int up, int op)
    {
        User_points = up;
        Opp_points = op;
    }

    void getPoints()
    {
        char User_input;
        cout << "  Please Enter the points obtained: " << endl;
        cout << "===================================== " << endl;
        cout << endl;
        cout << "(A) --- User obtained a point." << endl;
        cout << "(B) --- Opponent obtained a point." << endl;
        cout << endl;
        cout << "===================================== " << endl;
        cout << "INPUT: ";
        cin  >> User_input;

        if((User_input == 'A') | (User_input == 'a'))
        {
            User_points++;
            cout << endl;
            cout << "Congrats on scoring a point!!" << endl;
            cout << endl;
        }

        if((User_input == 'B') | (User_input == 'b'))
        {
            Opp_points++;
            cout << endl;
            cout << "There is always room for improvement!!" << endl;
            cout << endl;
        }

    }

};

class User : public RecordPoint
{
private:
    string name;

public:
    User(string n, int up, int op) : RecordPoint(up, op)
    {
        name = n;
    }
};



class Opponent : public RecordPoint
{
private:
    string name;

public:
    Opponent(string n, int up, int op) : RecordPoint(up, op)
    {
        name = n;
    }
};


class Calories
{
private:
    float time_spent;
    double weight;

public:
	Calories (){}
    Calories(float t, double w)
    {
        time_spent = t;
        weight = w;
    }

    string getCalories()
    {
        const int MET = 5.5;

        cout << " NOW CALCULATING YOUR BURNT CALORIES..." << endl;
        cout << "========================================" << endl;
        cout << endl;
        cout << "Please enter your weight in Kilograms : ";
        cin  >> weight;
        cout << "For how long did you play Badminton for in minutes? :";
        cin  >> time_spent;
        cout << "========================================" << endl;
        cout << endl;

        double calories_burned_per_min = (MET * weight * 3.5) / 200;
        double total_calories_burnt = calories_burned_per_min * time_spent;

        cout << endl;
        cout << "Congratulations!! You have burned " << calories_burned_per_min << " calories per minute." << endl;
        cout << "This sums up to a total " << total_calories_burnt << " calories burned during your playtime." << endl;
        cout << endl;
    };
};


class Feedback
{
private:
    char error;
public:
    Feedback(){}

    void setError()
    {
        cout << "THIS WIZARD ALLOWS YOU TO RECEIVE FEEDBACK ACCORDING TO YOUR NEEDS" << endl;
        cout << "==================================================================" << endl;
        cout << endl;
        cout << "FEEDBACK OPTIONS : (A) --- Service techniques." << endl;
        cout << "                   (B) --- Racket holding technique." << endl;
        cout << "                   (C) --- Swinging styles." << endl;
        cout << endl;
        cout << "==================================================================" << endl;
        cout << "INPUT: ";
        cin  >> error;

        if((error=='A') || (error=='a'))
        {
            cout << "                           SERVICE TECHNIQUES                          " << endl;
            cout << "=======================================================================" << endl;
            cout << endl;
            cout << "The Low Serve" << endl;
            cout << "_____________" << endl;
            cout << "This low serve is almost a gentle tap over the net with the shuttle, " << endl;
            cout << "with the aim of flying just over the net, yet falling just over the front" << endl;
            cout << "line of his service court. It must not be too high or predictable, otherwise" << endl;
            cout << "it would be easy for your opponent to do an outright smash or net kill." << endl;
            cout << endl;
            cout << "The High Serve" << endl;
            cout << "______________" << endl;
            cout << "The high serve is a powerful strike upwards with the shuttle, that aims" << endl;
            cout << "to travel a great distance upwards and fall deep at the rear end of the" << endl;
            cout << "court." << endl;
            cout << "Although it is a strong serve and the popular choice of beginner players," << endl;
            cout << "its a serve that isn't so easy to disguise especially since you're using" << endl;
            cout << "a forehand grip. Your opponent will already expect the shuttlecock to land" << endl;
            cout << "at the back of the court." << endl;
            cout << endl << endl;
        }

        if((error=='B') || (error=='b'))
        {
            cout << "                       RACKET HOLDING TECHNIQUES                       " << endl;
            cout << "=======================================================================" << endl;
            cout << "Forehand Gripping Technique" << endl;
            cout << "___________________________" << endl;
            cout << "Your thumb does not necessarily have to press against the wider surface of the" << endl;
            cout << "badminton grip for a forehand stroke. Your index finger should be the one “in control” " << endl;
            cout << "in a forehand stroke. This simply means using your index finger to push the racquet " << endl;
            cout << "forward while doing a forehand stroke. However, rest your thumb comfortably anywhere " << endl;
            cout << "near the wider surface of the badminton grip to enable you to change to a backhand grip quickly." << endl;
            cout << endl;
            cout << "Backhand Gripping Technique" << endl;
            cout << "The key to perform strong backhands depends on how you hold your racquet. The true power " << endl;
            cout << "of a badminton backhand shot comes from the push of your thumb. A backhand stroke requires " << endl;
            cout << "you to USE YOUR THUMB. So you should now press your thumb on the wider surface of the " << endl;
            cout << "badminton grip. Relax your index finger and move it closer to your middle finger." << endl;
            cout << "The backhand grip will look like you’re doing a ‘thumbs up’." << endl;
            cout << "Just remember, finger action plays an important role in generating strength for a badminton stroke." << endl;
            cout << endl << endl;
        }

        if((error=='C') || (error=='c'))
        {
            cout << "                       SWINGING STYLES                       " << endl;
            cout << "=============================================================" << endl;
            cout << "Forehand Swinging Style" << endl;
            cout << "___________________________" << endl;
            cout << "Step 1 : Get yourself in a position which is ideally behind shuttle turn your body so that " << endl;
            cout << "it is vertical to net it means your chest should not be facing your opponent where are " << endl;
            cout << "both of your arms at the neck position." << endl;
            cout << "Step 2 : Shift your body weight to your dominant leg and take your racket arm and stretch " << endl;
            cout << "back as much as you can but also be comfortable and your non-racket arm should be straight " << endl;
            cout << "pointing towards the shuttle." << endl;
            cout << "Step 3 : As soon as you see shuttle in front of you start off by pushing your right leg " << endl;
            cout << "forward and extending your arm over the shuttle, perform action with your racket arm like " << endl;
            cout << "you are throwing a ball to someone. Don’t try to add any extra power, just be with the motion. " << endl;
            cout << "More your technique become crisp more is there it will be for you to play full length clear." << endl;
            cout << "Step 4 : After finishing off, arm movement should follow through in one fluid motion." << endl;
            cout << endl;
            cout << "Backhand Swinging Style" << endl;
            cout << "___________________________" << endl;
            cout << "Step 1 : After holding the racket with the backhand grip now drop the racket to you back " << endl;
            cout << "side so that there is gap between your palm and racket, the motive of this is to hold the " << endl;
            cout << "racket with the fingers and not with your fist.This will help in generating an explosive " << endl;
            cout << "snap of racket which is important in backhand stroke." << endl;
            cout << "Step 2 : The next step is to keep your arm very loose if you are tensing your arm you " << endl;
            cout << "are not going to be able to hit the backhand shot. Approach shuttle with dominant leg and " << endl;
            cout << "with your elbow pointing at birdie and make sure your head of the racket is on your " << endl;
            cout << "non-racket shoulder." << endl;
            cout << "Step 3 : The last step in the backhand clear is to hit the shuttle. From here you will " << endl;
            cout << "extend your arm as your pivot your body forward and snap your wrist at highest point " << endl;
            cout << "of contact with shuttle and follow through appropriately." << endl;
            cout << endl << endl;
        }
    }
};


int main() {
	
	char choice;
	int up, op;

    RecordPoint* a = new User("Aswind", 21, 10);
    RecordPoint* b = new Opponent("Varman", 10, 21);
	Calories c;
	Feedback d;
	
	for ( int i = 0; i < 100; i++){
	cout << " === HELLO. Welome to the BADMINTON PRO ===" << endl << endl;
	cout << " === Choose a option, PLAYER ! ===" << endl;
	cout << "     (A) Record Points" << endl;
	cout << "     (B) Calculate Calories Burnt" << endl;
	cout << "     (C) Receive Feedback" << endl;
	cout << "     (D) Exit" << endl << endl;
	cout << "Your choice ? ";
	cin >> choice;
	cout << endl;
	
	if ((choice =='A') || ( choice =='a'))
	{
		a -> getPoints();
		getchar ();
		cout << endl << endl;
		
	}
	
	if ((choice == 'B') || (choice == 'b'))
	{
		c.getCalories ();
		getchar ();
		cout << endl << endl;
	}
	
	if ((choice == 'C') || (choice == 'c'))
	{
		d.setError();
		getchar ();
		cout << endl << endl;
	}
	
	if ((choice == 'D') || (choice == 'd'))
	{
		break;
	}
}
    return 0;
}

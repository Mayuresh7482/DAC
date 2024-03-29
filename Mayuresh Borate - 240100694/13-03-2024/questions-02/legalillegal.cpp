#include<iostream>

using namespace std;

// Define a Task class to represent tasks with a task ID and a name
class Task {
	private:
		int taskId;       // Private member variable for task ID
		string taskName;  // Private member variable for task name

	public:
		// Constructor to initialize task ID and name
		Task(int taskId, string name) {
			this->taskId = taskId;
			this->taskName = name;
		}

		// Getter method to retrieve task ID
		int getTaskId() {
			return this->taskId;
		}

		// Getter method to retrieve task name
		string getTaskName() {
			return this->taskName;
		}

		// Method to display task details
		void toString() {
			// Modify taskId for demonstration (not recommended in practice)
			this->taskId = 10;
			cout << "Task ID: " << this->taskId << ", Task Name: " << this->taskName;
		}

		// Default constructor
		Task() {}

		// Destructor
		~Task() {}
};

int main() {
	// Create a constant pointer to a Task object with ID 12 and name "Mayuresh"
	const Task *t1 = new Task(12, "Mayuresh");

	// Create a pointer to a Task object with ID 13 and name "Chetan"
	Task *t2 = new Task(13, "Chetan");

	// Uncomment below lines to test individual functionality
	// cout << "Task Name: " << t1->getTaskName() << endl;
	// t1->toString();   // Uncomment to test modifying member variables within toString() - not recommended

	cout << endl;
	t2->toString();     // Display task details for t2

	// Free memory allocated for t1 and t2
	delete t1;
	delete t2;

	return 0;
}

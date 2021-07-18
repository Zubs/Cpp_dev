# include <iostream> // Input out put stream
# include <fstream> // File stream
# include <string> // You can guess what this does.

using namespace std;

/*
    # Steps in file io
    - Include the <fstream> library 
    - Create a stream (input, output, both)
        - ofstream myfile; (for writing to a file)
        - ifstream myfile; (for reading a file)
        - fstream myfile; (for reading and writing a file)
    - Open the file  myfile.open(“filename”);
    - Write or read the file
    - Close the file myfile.close();
*/

int main() {

    // Used to store every line of file as we stream it
    string line;

    // Write to a file, create it if it exists not. :smile
    ofstream testFile ("test.txt", ios::app);

    // Check for error, then write to file
    if (testFile.is_open()) {
        testFile << "Writing my first ever line to this file." << endl;
        testFile << "\nWho says I have to stop there, yunno.";
        cout << "Done. :cheers" << endl;
        
        // Close file, just for security :wink
        testFile.close();
    } else {
        cout << "Unable to write to file :oops." << endl;
    };

    // Read from file
    ifstream testingFile ("test.txt");

    if (testingFile.is_open()) {

        // Output every line in file
        while (getline (testingFile, line)) {
            cout << line << endl;
        }

        // Yunno what it is already, don't you?
        testingFile.close();
    } else {
        cout << "Unable to read file" << endl;
    }

    return 0;
}

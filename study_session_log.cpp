/*
 * Course: COEN 2220 - Programming 2
 * Name: [Julian Pagan]
 * Lab: Lab 7 - Abstract Data Types
 * Description: ADT contract, implementation, and client code practice
 * Due date: [10/1/2026]
 */

#include <iostream>
using namespace std;

/*
 * StudySessionLog ADT
 *
 * Data:
 * TODO (Part C): Describe the study session durations managed by this ADT.
 * 
 * The study session durations are stored as integers representing the number of minutes for each session.
 *
 * Operations:
 * TODO (Part C): Describe addSession(minutes), including its result when the log cannot accept another session.
 * 
 * The addSession(minutes) operation attempts to add a new study session duration to the log. If the log has not reached its fixed capacity, the session duration is stored, and the operation returns true.
 * 
 * TODO (Part C): Describe totalMinutes().
 * 
 * The totalMinutes() operation calculates and returns the sum of all stored study session durations in the log.
 * 
 * TODO (Part C): Describe longestSession() and its precondition.
 * 
 * The longestSession() operation returns the duration of the longest study session stored in the log.
 * 
 * TODO (Part C): Describe size() and isEmpty().
 * 
 * The size() operation returns the number of study sessions currently stored in the log
 * 
 */
class StudySessionLog
{
private:
    // ===== Resolve these TODOs later (Part D) =====

    // TODO (Part D): Add a fixed capacity constant of four study sessions.
    static const int CAPACITY = 4;
    // TODO (Part D): Add an int array named sessionMinutes for the stored session durations.
    int sessionMinutes[CAPACITY];
    // TODO (Part D): Add an int that tracks how many study sessions are stored.
    int count;

public:
    // TODO (Part D): Write a constructor that creates an empty log.
    StudySessionLog()
    {
        count = 0;
    }

    // TODO (Part D): Write addSession. It receives minutes and reports whether the session was stored.
    bool addSession(int minutes)
    {
        if (count == CAPACITY)
        {
            return false;
        }

        sessionMinutes[count] = minutes;
        count++;
        return true;
    }

    // TODO (Part D): Write totalMinutes as a const member function.

    int totalMinutes() const
    {
        int total = 0;  
        for (int index = 0; index < count; index++)
        {
            total += sessionMinutes[index];
        }
        return total;
    }

    // TODO (Part D): Write longestSession as a const member function.

    int longestSession() const
    {
        if (count == 0)
        {
            return 0; // Return 0 if there are no sessions stored.
        }

        int longest = sessionMinutes[0];
        for (int index = 1; index < count; index++)
        {
            if (sessionMinutes[index] > longest)
            {
                longest = sessionMinutes[index];
            }
        }
        return longest;
    }

    // TODO (Part D): Write size as a const member function.
    int size() const
    {
        return count;
    }

    // TODO (Part D): Write isEmpty as a const member function.
    bool isEmpty() const
    {
        return count == 0;
    }
};

int main()
{
    // ===== Resolve these TODOs later (Part E) =====

    // TODO (Part E): Create a StudySessionLog object and print whether it starts empty.
    // TODO (Part E): Add four dummy session durations and attempt to add a fifth.
    // TODO (Part E): Print the number of stored sessions and whether the fifth session was accepted.
    // TODO (Part E): Print the total minutes and the longest stored session.
    // TODO (Part E): Print descriptive English labels for all results.

    return 0;
}
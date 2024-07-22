//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct Process {
//    int id;
//    int burst_time;
//    int time_period;
//    int next_deadline;
//    int remaining_time;
//    bool operator<(const Process& other) const {
//        return next_deadline > other.next_deadline; // Compare based on deadline
//    }
//};
//
//int main() {
//    int n;
//    cout << "Enter the number of processes: ";
//    cin >> n;
//
//    // Initialize the priority queue
//    priority_queue<Process> pq;
//
//    // Input the processes
//    for (int i = 1; i <= n; i++) {
//        Process p;
//        p.id = i;
//        cout << "Enter the burst time and time period of process " << i << ": ";
//        cin >> p.burst_time >> p.time_period;
//        p.next_deadline = p.time_period; // Set the first deadline
//        p.remaining_time = p.burst_time; // Set the remaining time
//        pq.push(p); // Add the process to the priority queue
//    }
//
//    int current_time = 0;
//    while (!pq.empty()) {
//        Process p = pq.top();
//        pq.pop();
//
//        // Check if the deadline is missed
//        if (current_time >= p.next_deadline) {
//            cout << "Process " << p.id << " missed its deadline!" << endl;
//            p.next_deadline += p.time_period; // Update the next deadline
//        }
//
//        // Execute the process
//        cout << "Executing process " << p.id << " at time " << current_time << endl;
//        p.remaining_time--;
//
//        // Check if the process has finished
//        if (p.remaining_time == 0) {
//            cout << "Process " << p.id << " finished at time " << current_time + 1 << endl;
//            p.next_deadline += p.time_period; // Update the next deadline
//            p.remaining_time = p.burst_time; // Reset the remaining time
//        }
//        else {
//            pq.push(p); // Add the process back to the queue
//        }
//
//        current_time++; // Increment the current time
//    }
//
//    return 0;
//}

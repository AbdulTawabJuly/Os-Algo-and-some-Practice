//vclass Processes {
//    constructor(num_of_processes, exec, dead) {
//        this.processes = num_of_processes;
//        this.schedulable = true;
//        this.executed = 0;
//        this.available = new Array(num_of_processes).fill(1);
//        this.startDeadline = [...dead];
//        this.deadline = [...dead];
//        this.executionTime = [...exec];
//        this.remainingExecution = [...exec];
//    }

//    checkMinDeadline() {
//        let min = 999999;
//        let process = 99;
//        for (let i = 0; i < this.processes; i++) {
//            if (this.deadline[i] < min && this.available[i]) {
//                min = this.deadline[i];
//                process = i;
//            }
//        }
//        return process;
//    }

//    checkAvailabilityRefresh() {
//        for (let i = 0; i < this.processes; i++) {
//            if (this.deadline[i] == this.executed) {
//                if (this.available[i]) {
//                    return false;
//                } else {
//                    this.deadline[i] += this.startDeadline[i];
//                    this.available[i] = 1;
//                    this.remainingExecution[i] = this.executionTime[i];
//                }
//            }
//        }
//        return true;
//    }

//    run(size) {
//        while (this.executed < size) {
//            this.schedulable = this.checkAvailabilityRefresh();
//            if (!this.schedulable) {
//                return false;
//            }
//            let curr = this.checkMinDeadline();
//            this.executed += 1;
//            if (curr == 99) {
//                console.log("Stall->");
//            } else {
//                console.log("P" + curr + "->");
//                this.remainingExecution[curr] -= 1;
//                if (this.remainingExecution[curr] == 0) {
//                    this.available[curr] = 0;
//                }
//            }
//        }
//        return true;
//    }


//    UpdateDisplay()
//    {

//    }
//}




////const numberButtons=document.querySelectorAll('[data-number]')
////const StartButtons=document.querySelector('[data-Start]')
////const DeleteButtons=document.querySelector('[data-Delete]')
////const Previous = document.querySelector('[data-Previous]')
////const Current = document.querySelector('[data-Current]')


////Previous.innerHTML="Enter No of Process"
////let process=prompt()

//console.log("Using Earliest Deadline First Algorithm");

//let processes = 0;
//const readlineSync = require('readline-sync');
//processes = parseInt(readlineSync.question("Enter how many processes do you want to schedule : "));

//let deadlines = new Array(processes);
//let exe = new Array(processes);
//let exec, period;
//for (let i = 0; i < processes; i++) {
//    deadlines[i] = parseInt(readlineSync.question(`Enter Period for P ${i} : `));
//    exe[i] = parseInt(readlineSync.question(`Enter Execution Time for P ${i} : `));
//}

//let schedulable;
//let result = findlcm(deadlines, processes);
//console.log(`LCM of given ${processes} integers is: ${result}`);

//let P = new Processes(processes, exe, deadlines);
//schedulable = P.Run(result);
//if (!schedulable) {
//    console.log("Given Process, Deadline and Execution time combination is not schedulable");
//} else {
//    console.log("Given Process, Deadline and Execution time combination is schedulable");
//}


# Performance-Analysis-of-Live-Migration-using-KVM
This project analyse the performance of live migration with pre-copy technique in virtualized environments using QEMU-KVM. Analysis includes monitoring downtime, service availability, and resource utilization.

## Project Structure
* `lib` folder contains the entire code used for the analysis and evaluation.
* A specific load test file `loadtest.c` is used to measure the metrics on different loads.
* Rest shell files are run on host and guest machines to continuosly moniter the migration situation.
* `report.pdf` and `presentation.pdf` contains a detailed explanation of the analysis with diagrams and screenshots.

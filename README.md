##Snort-InterfaceDS#

• Check activity performed with Snort IDS in real time: start the Snort program independently of the process that captures data in the background, it is useful when you want to visualize the traffic that Snort is detecting on the network.
• Update Snort IDS Signatures: The PulledPork Script is executed to update alert signatures for Snort. It is important to stop the Snort IDS and Barnyard2 service before executing this command.
• Stop Snort IDS service: Stops the background process that allows you to detect alerts on the network.
• Stop barnyard2 service: Stops alert logging in the database, note that if the Snort IDS service is stopped Barnyard2 will not write any alerts
• Restart web server: Restart the Apache2 web server.
• Start SNORT IDS service: Initialize the process in the background for Snort (at the start of the system the process runs automatically).
• Start Barnyard2 service: Initialize the process in the background for Barnyard2 (when starting the system the process runs automatically).
• Check Active Services: check the services Snort needs to function properly in the system (Snort IDS process, barnyard2 process and apache web server)
• Execute BASE (web interface for Snort): automatically executes the BASE web interface in the browser
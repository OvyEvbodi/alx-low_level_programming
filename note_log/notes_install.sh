#!/bin/bash
gcc notes_log.c -o notes_log;
sudo mv notes_log /usr/bin/;
echo "All set.
Run 'notes_log' from anywhere for new or existing notes with auto timestamp.";

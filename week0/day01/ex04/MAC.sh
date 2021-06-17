#!/bin/sh
ifconfig -a | grep "ether" | cut -d " " -f 10
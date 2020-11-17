#!/bin/bash
ifconfig -a | grep -i 'ether ' | cut -c 8-24

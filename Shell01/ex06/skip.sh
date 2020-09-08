#!/bin/bash
ls -l | sed -n 'P;n'
ls -l | awk 'NR%2'

#!/bin/bash
. /emsincludes/config.sh
$BINDIR/ems-gen-graphs.py $GRAPHDIR halfweek > /dev/null 2>&1

#!/bin/bash
. /emsincludes/config.sh
$BINDIR/ems-gen-graphs.py $GRAPHDIR hour > /dev/null 2>&1

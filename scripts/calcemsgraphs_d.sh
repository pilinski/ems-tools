#!/bin/bash
. /emsincludes/config.sh
$BINDIR/ems-gen-graphs.py $GRAPHDIR day > /dev/null 2>&1

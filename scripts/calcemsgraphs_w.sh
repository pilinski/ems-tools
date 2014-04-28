#!/bin/bash
. /emsincludes/config.sh
$BINDIR/ems-gen-graphs.py $GRAPHDIR week > /dev/null 2>&1

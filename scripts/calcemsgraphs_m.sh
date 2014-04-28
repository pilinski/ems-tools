#!/bin/bash
. /emsincludes/config.sh
$BINDIR/ems-gen-graphs.py $GRAPHDIR month > /dev/null 2>&1

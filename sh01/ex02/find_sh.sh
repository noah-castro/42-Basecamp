#!/bin/sh
find . -type f -name "*.sh" | xargs basename -s="*.sh" |  sed 's/\.sh//'
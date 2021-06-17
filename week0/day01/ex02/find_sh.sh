#!/bin/sh
find -depth -type f -name '*.sh' -printf '%f\n' | sed 's/...$//'
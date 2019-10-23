#!/bin/bash

name=$(echo "$1" | cut -f 1 -d '.')

mkdir $name

python makeAdlSingles.py $1 $name
python makeAdl.py $1 $name
python makeDb.py $1 $name.template
python makeEdl.py $1 $name
#python makeMine.py $1 _$name _$name
mv *.adl $name
mv *.edl $name
mv *.template $name
mv *.inc $name

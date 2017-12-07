#!/bin/bash

rm *.db
for entry in "."/*.sql
do
  sqlite3 "${entry%.*}".db < "$entry"
  echo
done

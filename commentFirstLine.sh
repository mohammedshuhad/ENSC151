#! /bin/bash
dirList=$(ls -d */ |  cut -f1 -d'/' | grep -v '^solution$')

for entry in $dirList
do
    cd ${entry}
    cppFile=$(ls -1 | sed -e 's/\..*$//')
    oldtext="cout << \"Do not change this line."
    newtext="\/\/${oldtext}"
    sed -i "s/$oldtext/$newtext/" "${cppFile}.cpp"
    cd "../"
done
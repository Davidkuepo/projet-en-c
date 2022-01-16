mkdir projet
cd projet
pwd
sudo apt-get update
sudo apt-get install gedit
sudo apt-get install gcc
git clone "https://github.com/Davidkuepo/etudiant.git"
cd projet
gcc etudiant.c -o etudiant
gedit etudiant.c
./etudiant

if [ -z "~/.zshrc" ]
then
	echo "~/.zshrc not found. Creating."
	mkdir "~/.zshrc"
	echo "Done."
fi
echo "Updating zshrc"
echo "alias 42Tester='bash $(dirname $(pwd))/test.sh" > ~/./zshrc
echo "done."
echo "Good Luck"

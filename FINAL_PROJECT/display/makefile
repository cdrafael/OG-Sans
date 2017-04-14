# Makefile for display tests of Tamagotchi program
all: titleblock dialogue empty_dialogue egg_sprite ui display

# Executables
titleblock: display_functions.h .test-titleblock.cpp titleblock.cpp
	g++ .test-titleblock.cpp titleblock.cpp -o test-titleblock

dialogue: display_functions.h .test-dialogue.cpp dialogue.cpp
	g++ .test-dialogue.cpp dialogue.cpp -o test-dialogue

empty_dialogue: display_functions.h .test-empty_dialogue.cpp dialogue.cpp
	g++ .test-empty_dialogue.cpp dialogue.cpp -o test-empty_dialogue

egg_sprite: display_functions.h .test-egg.cpp egg_sprite.cpp
	g++ .test-egg.cpp egg_sprite.cpp -o test-egg_sprite

ui: display_functions.h .test-ui.cpp ui.cpp
	g++ .test-ui.cpp ui.cpp -o test-ui

display: display_functions.h titleblock.cpp dialogue.cpp egg_sprite.cpp ui.cpp
	g++ .test-display.cpp titleblock.cpp dialogue.cpp egg_sprite.cpp ui.cpp -o test-display

# Utility Targets
clean:
	rm *.exe

# Makefile for display tests of Tamagotchi program
all: titleblock dialogue empty_dialogue sprite_egg sprite_baby ui display

# Executables
titleblock: display_functions.h .test-titleblock.cpp titleblock.cpp
	g++ .test-titleblock.cpp titleblock.cpp -o test-titleblock

dialogue: display_functions.h .test-dialogue.cpp dialogue.cpp
	g++ .test-dialogue.cpp dialogue.cpp -o test-dialogue

empty_dialogue: display_functions.h .test-empty_dialogue.cpp dialogue.cpp
	g++ .test-empty_dialogue.cpp dialogue.cpp -o test-empty_dialogue

sprite_egg: display_functions.h .test-egg.cpp sprites.cpp
	g++ .test-egg.cpp sprite_egg.cpp -o test-sprite_egg

sprite_baby: display_functions.h .test-baby.cpp sprites.cpp
	g++ .test-baby.cpp sprite_baby.cpp -o test-sprite_baby

sprite_kid: display_functions.h .test-kid.cpp sprites.cpp
	g++ .test-kid.cpp sprite_kid.cpp -o test-sprite_kid

sprite_teen: display_functions.h .test-teen.cpp sprites.cpp
	g++ .test-teen.cpp sprite_teen.cpp -o test-sprite_teen

sprite_adult: display_functions.h .test-adult.cpp sprites.cpp
	g++ .test-adult.cpp sprite_adult.cpp -o test-sprite_adult

sprite_parent: display_functions.h .test-parent.cpp sprites.cpp
	g++ .test-parent.cpp sprite_parent.cpp -o test-sprite_parent

ui: display_functions.h .test-ui.cpp ui.cpp
	g++ .test-ui.cpp ui.cpp -o test-ui

display: display_functions.h titleblock.cpp dialogue.cpp sprites.cpp ui.cpp
	g++ .test-display.cpp titleblock.cpp dialogue.cpp sprites.cpp ui.cpp -o test-display

# Utility Targets
clean:
	rm *.exe

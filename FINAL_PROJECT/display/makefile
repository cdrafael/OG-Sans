# Makefile for display tests of Tamagotchi program
all: titleblock dialogue empty_dialogue ui info_ui game_ui sprite_egg sprite_baby sprite_kid sprite_teen sprite_adult sprite_parent sprite_grave display

# Executables
titleblock: display_functions.h display.cpp .test-titleblock.cpp
	g++ .test-titleblock.cpp display.cpp -o test-titleblock

dialogue: display_functions.h display.cpp .test-dialogue.cpp
	g++ .test-dialogue.cpp display.cpp -o test-dialogue

empty_dialogue: display_functions.h display.cpp .test-empty_dialogue.cpp
	g++ .test-empty_dialogue.cpp display.cpp -o test-empty_dialogue

ui: display_functions.h display.cpp .test-ui.cpp
	g++ .test-ui.cpp display.cpp -o test-ui

info_ui: display_functions.h display.cpp .test-info_ui.cpp
	g++ .test-info_ui.cpp display.cpp -o test-info_ui

game_ui: display_functions.h display.cpp .test-game_ui.cpp
	g++ .test-game_ui.cpp display.cpp -o test-game_ui

sprite_egg: display_functions.h .test-egg.cpp sprites.cpp
	g++ .test-egg.cpp sprites.cpp -o test-sprite_egg

sprite_baby: display_functions.h .test-baby.cpp sprites.cpp
	g++ .test-baby.cpp sprites.cpp -o test-sprite_baby

sprite_kid: display_functions.h .test-kid.cpp sprites.cpp
	g++ .test-kid.cpp sprites.cpp -o test-sprite_kid

sprite_teen: display_functions.h .test-teen.cpp sprites.cpp
	g++ .test-teen.cpp sprites.cpp -o test-sprite_teen

sprite_adult: display_functions.h .test-adult.cpp sprites.cpp
	g++ .test-adult.cpp sprites.cpp -o test-sprite_adult

sprite_parent: display_functions.h .test-parent.cpp sprites.cpp
	g++ .test-parent.cpp sprites.cpp -o test-sprite_parent

sprite_grave: display_functions.h .test-grave.cpp sprites.cpp
	g++ .test-grave.cpp sprites.cpp -o test-sprite_grave

display: display_functions.h display.cpp sprites.cpp .test-display.cpp
	g++ .test-display.cpp display.cpp sprites.cpp -o test-display

# Utility Targets
clean:
	rm *.exe

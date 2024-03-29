#define BLACK #191919
#define BACKGROUND #222222
#define BACKGROUND_LIGHT #2b2b2b
#define DARKERGREY #363537
#define DARKGREY #525053
#define GREY #69676c
#define LIGHTGREY #8b888f
#define LIGHTERGREY #bab6c0
#define FOREGROUND #f7f1ff

#define MAGENTA #948ae3
#define RED #fc618d
#define YELLOW #fce566
#define BLUE #5ad4e6
#define GREEN #7bd88f
#define ORANGE #fd9353
#define CYAN #df62d0

#define RED_ALT #fc326f
#define GREEN_ALT #41d95f
#define YELLOW_ALT #fcde32
#define ORANGE_ALT #fc7c26
#define BLUE_ALT #00dede
#define MAGENTA_ALT #6f5be3

#define BASEFF #00ffff

#define concat(COLOR, val) "^c" #COLOR "^" val "^d^"
#define set_fg(COLOR,val) concat(COLOR, val)

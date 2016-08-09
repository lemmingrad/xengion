;---------------------------------------------------------------------------------
; GAME INFO
;---------------------------------------------------------------------------------

E_GAME_LIVES_0_TITLE			= 0
E_GAME_LIVES_1					= 1
E_GAME_LIVES_2					= 2
E_GAME_LIVES_3					= 3

KEY_START						= 1

GAME_TITLE_SCREEN_WIDTH			= 32
GAME_TITLE_SCREEN_HEIGHT		= 16

GAME_SCROLL_SPEED				= 1

dGameInfo:
  DB 0							; V0
  DB 0							; V1
  DB 0							; V2
  DB 0							; V3 
  DB 0							; V4 
  DB 0							; V5 
  DB 0							; V6 
  DB 0							; V7 
  DB 0							; V8 
  DB KEY_START					; V9 game.const KEY_START
  DB 0							; VA game.lives
  DB 0							; VB game.score
  DB 0							; VC game.hi-score

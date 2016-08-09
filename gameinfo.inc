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

data_game_info:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB KEY_START					; game.const KEY_START
  DB 0							; game.lives
  DB 0							; game.score
  DB 0							; game.hi-score

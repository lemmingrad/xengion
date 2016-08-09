;---------------------------------------------------------------------------------
; PLAYER INFO
;---------------------------------------------------------------------------------

E_PLAYER_STATE_REVIVING				= 0
E_PLAYER_STATE_ALIVE				= 2
E_PLAYER_STATE_HIT_WALL				= 4
E_PLAYER_STATE_HIT_ENEMY			= 6
E_PLAYER_STATE_HIT_BULLET			= 8
E_PLAYER_STATE_DYING				= 10

E_PLAYER_SPRITE_ALIVE_0				= 0
E_PLAYER_SPRITE_ALIVE_1				= 1
E_PLAYER_SPRITE_ALIVE_2				= 2
E_PLAYER_SPRITE_ALIVE_3				= 3
E_PLAYER_SPRITE_ALIVE_4				= 4
E_PLAYER_SPRITE_ALIVE_5				= 5
E_PLAYER_SPRITE_ALIVE_6				= 6
E_PLAYER_SPRITE_ALIVE_7				= 7
E_PLAYER_SPRITE_ALIVE_8				= 8
E_PLAYER_SPRITE_ALIVE_9				= 9
E_PLAYER_SPRITE_ALIVE_10			= 10
E_PLAYER_SPRITE_ALIVE_11			= 11
E_PLAYER_SPRITE_ALIVE_12			= 12
E_PLAYER_SPRITE_ALIVE_13			= 13
E_PLAYER_SPRITE_ALIVE_14			= 14
E_PLAYER_SPRITE_ALIVE_15			= 15
E_PLAYER_SPRITE_DYING_0				= 16
E_PLAYER_SPRITE_DYING_1				= 17
E_PLAYER_SPRITE_DYING_2				= 18
E_PLAYER_SPRITE_DYING_3				= 19
E_PLAYER_SPRITE_DYING_4				= 20
E_PLAYER_SPRITE_DYING_5				= 21
E_PLAYER_SPRITE_DYING_6				= 22
E_PLAYER_SPRITE_DYING_7				= 23
E_PLAYER_SPRITE_DYING_8				= 24
E_PLAYER_SPRITE_DYING_9				= 25
E_PLAYER_SPRITE_DYING_10			= 26
E_PLAYER_SPRITE_DYING_11			= 27
E_PLAYER_SPRITE_DYING_12			= 28
E_PLAYER_SPRITE_DYING_13			= 29
E_PLAYER_SPRITE_DYING_14			= 30
E_PLAYER_SPRITE_DYING_15			= 31
E_PLAYER_SPRITE_REVIVING_0			= 32
E_PLAYER_SPRITE_REVIVING_1			= 33
E_PLAYER_SPRITE_REVIVING_2			= 34
E_PLAYER_SPRITE_REVIVING_3			= 35
E_PLAYER_SPRITE_REVIVING_4			= 36
E_PLAYER_SPRITE_REVIVING_5			= 37
E_PLAYER_SPRITE_REVIVING_6			= 38
E_PLAYER_SPRITE_REVIVING_7			= 39
E_PLAYER_SPRITE_REVIVING_8			= 40
E_PLAYER_SPRITE_REVIVING_9			= 41
E_PLAYER_SPRITE_REVIVING_10			= 42
E_PLAYER_SPRITE_REVIVING_11			= 43
E_PLAYER_SPRITE_REVIVING_12			= 44
E_PLAYER_SPRITE_REVIVING_13			= 45
E_PLAYER_SPRITE_REVIVING_14			= 46
E_PLAYER_SPRITE_REVIVING_15			= 47
E_PLAYER_SPRITE_MOVE_UP				= 48
E_PLAYER_SPRITE_MOVE_DOWN			= 49
E_PLAYER_SPRITE_MOVE_LEFT_0			= 50
E_PLAYER_SPRITE_MOVE_LEFT_1			= 51
E_PLAYER_SPRITE_MOVE_LEFT_2			= 52
E_PLAYER_SPRITE_MOVE_LEFT_3			= 53
E_PLAYER_SPRITE_MOVE_RIGHT_0		= 54
E_PLAYER_SPRITE_MOVE_RIGHT_1		= 55
E_PLAYER_SPRITE_MOVE_RIGHT_2		= 56
E_PLAYER_SPRITE_MOVE_RIGHT_3		= 57
E_PLAYER_SPRITE_CLEAR_COLLISION		= 58
E_PLAYER_SPRITE_COLLISION			= 59
E_PLAYER_SPRITE_MAXCOUNT			= 60
		
KEY_RIGHT							= 9
KEY_LEFT 							= 7 
KEY_DOWN							= 8 
KEY_UP								= 5

PLAYER_WIDTH						= 32
PLAYER_HEIGHT						= 16
PLAYER_REVIVING_TIMER_MAX 			= 50 
PLAYER_REVIVING_START_XPOS			= 0
PLAYER_REVIVING_START_YPOS			= 70
PLAYER_REVIVING_SPEED_X				= 2
PLAYER_ALIVE_XPOS_MIN 				= 0
PLAYER_ALIVE_XPOS_MAX				= 200
PLAYER_ALIVE_SPEED_X				= 2
PLAYER_ALIVE_SPEED_Y				= 2
PLAYER_DYING_XPOS_MIN				= 0
PLAYER_DYING_SPEED_X				= GAME_SCROLL_SPEED
PLAYER_DYING_TIMER_MAX				= 50

data_player_info:
  DB 0								
  DB 0							
  DB 0								
  DB 0								
  DB 0 								
  DB 0 								
  DB 0 								 
  DB 0 								  
  DB 0								; player.nextsprite
  DB 0								; player.timer
  DB 0								; player.xpos
  DB 0								; player.ypos
  DB 0								; player.state
 
data_player_alive_constants:
  DB PLAYER_ALIVE_XPOS_MIN			; V0 player.const PLAYER_ALIVE_XPOS_MIN
  DB PLAYER_ALIVE_XPOS_MAX			; V1 player.const PLAYER_ALIVE_XPOS_MAX
  DB PLAYER_ALIVE_SPEED_X			; V2 player.const PLAYER_ALIVE_SPEED_X
  DB PLAYER_ALIVE_SPEED_Y			; V3 player.const PLAYER_ALIVE_SPEED_Y
  DB KEY_RIGHT						; V4 player.const KEY_RIGHT 
  DB KEY_LEFT						; V5 player.const KEY_LEFT
  DB KEY_DOWN						; V6 player.const KEY_DOWN
  DB KEY_UP							; V7 player.const KEY_UP

data_player_reviving_constants:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB 0								; V5
  DB PLAYER_REVIVING_SPEED_X		; V6 player.const PLAYER_REVIVING_SPEED_X
  DB PLAYER_REVIVING_TIMER_MAX		; V7 player.const PLAYER_REVIVING_TIMER_MAX

data_player_dying_constants:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB PLAYER_DYING_XPOS_MIN			; V5 player.const PLAYER_DYING_XPOS_MIN
  DB PLAYER_DYING_SPEED_X			; V6 player.const PLAYER_DYING_SPEED_X 
  DB PLAYER_DYING_TIMER_MAX			; V7 player.const PLAYER_DYING_TIMER_MAX

data_player_reset:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0 								; V4
  DB 0 								; V5
  DB 0 								; V6
  DB 0 								; V7  
  DB E_PLAYER_SPRITE_REVIVING_0		; V8 player.sprite = E_PLAYER_SPRITE_REVIVING_0
  DB 0								; V9 player.timer = 0
  DB PLAYER_REVIVING_START_XPOS		; VA player.xpos = PLAYER_REVIVING_START_XPOS
  DB PLAYER_REVIVING_START_YPOS		; VB player.ypos = PLAYER_REVIVING_START_YPOS
  DB E_PLAYER_STATE_REVIVING		; VC player.state = E_PLAYER_STATE_REVIVING
 
data_player_update_switch_lookup:
  JP lbl_player_update_switch_case_reviving		; E_PLAYER_STATE_REVIVING
  JP lbl_player_update_switch_case_alive		; E_PLAYER_STATE_ALIVE
  JP lbl_player_update_switch_case_hit_wall		; E_PLAYER_STATE_HIT_WALL
  JP lbl_player_update_switch_case_hit_enemy	; E_PLAYER_STATE_HIT_ENEMY
  JP lbl_player_update_switch_case_hit_bullet	; E_PLAYER_STATE_HIT_BULLET
  JP lbl_player_update_switch_case_dying		; E_PLAYER_STATE_DYING

data_player_sprite_lookup:
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_0
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_1
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_2
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_3
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_4
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_5
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_6
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_7
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_8
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_9
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_10
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_11
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_12
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_13
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_14
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_ALIVE_15
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_DYING_0
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_DYING_1
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_DYING_2
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_DYING_3
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_DYING_4
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_DYING_5
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_DYING_6
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_DYING_7
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_DYING_8
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_DYING_9
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_DYING_10
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_DYING_11
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_DYING_12
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_DYING_13
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_DYING_14
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_DYING_15
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_REVIVING_0
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_REVIVING_1
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_REVIVING_2
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_REVIVING_3
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_REVIVING_4
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_REVIVING_5
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_REVIVING_6
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_REVIVING_7
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_REVIVING_8
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_REVIVING_9
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_REVIVING_10
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_REVIVING_11
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_REVIVING_12
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_REVIVING_13
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_REVIVING_14
  LDHI I, data_generic_sprite_boom				; E_PLAYER_SPRITE_REVIVING_15
  LDHI I, data_player_sprite_up					; E_PLAYER_SPRITE_MOVE_UP
  LDHI I, data_player_sprite_down				; E_PLAYER_SPRITE_MOVE_DOWN
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_LEFT_0
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_LEFT_1
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_LEFT_2
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_LEFT_3
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_RIGHT_0
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_RIGHT_1
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_RIGHT_2
  LDHI I, data_player_sprite_normal				; E_PLAYER_SPRITE_MOVE_RIGHT_3
  LDHI I, data_player_sprite_clear_collision 	; E_PLAYER_SPRITE_CLEAR_COLLISION
  LDHI I, data_player_sprite_collision			; E_PLAYER_SPRITE_COLLISION

data_player_sprite_collision:
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1

data_player_sprite_clear_collision:
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  DB 2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2
  
data_player_sprite_normal:
  DB 0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,0,0,3,3,3,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,0,3,5,5,5,5,5,0,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,3,0,0,0,5,5,5,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0
  DB 4,4,3,3,3,3,3,0,0,0,0,0,0,5,0,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,0,0,0,0,0,3,3,3,0
  DB 4,4,3,0,0,0,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,3,3,3,3,3,3,0,0,0,0
  DB 0,0,0,3,3,3,0,3,0,0,0,0,0,0,0,0,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,3,3,3,3,3,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

data_player_sprite_up:
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,0,3,5,5,5,5,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,3,3,3,3,3,0,0,0,5,5,5,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,0,0,3,3,3,3,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0
  DB 4,4,3,0,0,0,3,3,3,3,3,3,3,3,3,3,0,0,0,0,0,0,3,3,3,3,3,3,0,0,0,0
  DB 0,0,0,3,3,3,0,3,0,0,0,0,0,0,0,0,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,3,3,3,3,3,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

data_player_sprite_down:
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,3,0,3,3,3,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,0,3,5,5,5,5,5,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,3,0,3,0,0,3,0,0,5,5,5,5,6,6,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,0
  DB 4,4,3,0,0,0,3,0,0,0,0,5,5,5,0,6,6,6,6,6,3,3,3,3,3,3,0,0,0,0,0,0
  DB 4,4,3,3,3,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,0,0,0
  DB 4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,0
  DB 4,4,3,0,0,0,3,3,3,3,3,3,3,3,3,3,0,0,4,4,4,4,4,3,3,3,3,3,0,0,0,0
  DB 0,0,0,3,3,3,0,3,0,0,0,0,0,0,0,0,3,3,3,3,3,3,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,3,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,3,3,3,3,3,3,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

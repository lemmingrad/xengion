;---------------------------------------------------------------------------------
; LASER INFO
;---------------------------------------------------------------------------------

E_LASER_STATE_DEAD					= 0		
E_LASER_STATE_ALIVE					= 2
E_LASER_STATE_HIT_WALL				= 4
E_LASER_STATE_HIT_ENEMY				= 6
E_LASER_STATE_DYING					= 8

E_LASER_SPRITE_ALIVE_0				= 0
E_LASER_SPRITE_ALIVE_1				= 1
E_LASER_SPRITE_ALIVE_2				= 2
E_LASER_SPRITE_ALIVE_3				= 3
E_LASER_SPRITE_ALIVE_4				= 4
E_LASER_SPRITE_ALIVE_5				= 5
E_LASER_SPRITE_ALIVE_6				= 6
E_LASER_SPRITE_ALIVE_7				= 7
E_LASER_SPRITE_ALIVE_8				= 8
E_LASER_SPRITE_ALIVE_9				= 9
E_LASER_SPRITE_ALIVE_10				= 10
E_LASER_SPRITE_ALIVE_11				= 11
E_LASER_SPRITE_ALIVE_12				= 12
E_LASER_SPRITE_ALIVE_13				= 13
E_LASER_SPRITE_ALIVE_14				= 14
E_LASER_SPRITE_ALIVE_15				= 15
E_LASER_SPRITE_DYING_0				= 16
E_LASER_SPRITE_DYING_1				= 17
E_LASER_SPRITE_DYING_2				= 18
E_LASER_SPRITE_DYING_3				= 19
E_LASER_SPRITE_DYING_4				= 20
E_LASER_SPRITE_DYING_5				= 21
E_LASER_SPRITE_DYING_6				= 22
E_LASER_SPRITE_DYING_7				= 23
E_LASER_SPRITE_DYING_8				= 24
E_LASER_SPRITE_DYING_9				= 25
E_LASER_SPRITE_DYING_10				= 26
E_LASER_SPRITE_DYING_11				= 27
E_LASER_SPRITE_DYING_12				= 28
E_LASER_SPRITE_DYING_13				= 29
E_LASER_SPRITE_DYING_14				= 30
E_LASER_SPRITE_DYING_15				= 31
E_LASER_SPRITE_CLEAR_COLLISION		= 32
E_LASER_SPRITE_COLLISION			= 33
E_LASER_SPRITE_MAXCOUNT				= 34

KEY_FIRE 							= 1

LASER_WIDTH							= 32
LASER_HEIGHT						= PLAYER_HEIGHT
LASER_DEAD_OFFSET_X					= PLAYER_WIDTH
LASER_DEAD_CHARGE					= 1
LASER_ALIVE_XPOS_MAX				= 232
LASER_ALIVE_SPEED_X					= 4
LASER_DYING_TIMER_MAX				= 15

data_laser_info:
  DB 0							
  DB 0							
  DB 0							
  DB 0							
  DB 0							
  DB 0							
  DB 0							
  DB 0							
  DB 0								; laser.timer
  DB 0								; laser.xpos
  DB 0								; laser.ypos
  DB 0								; laser.state
  DB 0								; laser.charge

data_laser_alive_constants:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB 0								; V5
  DB LASER_ALIVE_XPOS_MAX			; V6 laser.const LASER_ALIVE_XPOS_MAX
  DB LASER_ALIVE_SPEED_X			; V7 laser.const LASER_ALIVE_SPEED_X

data_laser_dead_constants:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB 0								; V5
  DB LASER_DEAD_OFFSET_X 			; V6 laser.const LASER_DEAD_OFFSET_X
  DB KEY_FIRE						; V7 laser.const KEY_FIRE 

data_laser_dying_constants:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB 0								; V5
  DB 0								; V6
  DB LASER_DYING_TIMER_MAX			; V7 laser.const LASER_DYING_TIMER_MAX

data_laser_reset:
  DB 0								; V0
  DB 0								; V1
  DB 0								; V2
  DB 0								; V3
  DB 0								; V4
  DB 0								; V5
  DB 0								; V6
  DB 0								; V7
  DB 0								; V8 laser.timer = 0
  DB 0								; V9 laser.xpos = 0
  DB 0								; VA laser.ypos = 0
  DB E_LASER_STATE_DEAD				; VB laser.state = E_LASER_STATE_DEAD
  DB 0								; VC laser.charge = 0

data_laser_update_switch_lookup:
  JP lbl_laser_update_switch_case_dead		; E_LASER_STATE_DEAD
  JP lbl_laser_update_switch_case_alive		; E_LASER_STATE_ALIVE
  JP lbl_laser_update_switch_case_hit_wall	; E_LASER_STATE_HIT_WALL
  JP lbl_laser_update_switch_case_hit_enemy	; E_LASER_STATE_HIT_ENEMY
  JP lbl_laser_update_switch_case_dying		; E_LASER_STATE_DYING

data_laser_sprite_lookup:
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_0
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_1
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_2
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_3
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_4
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_5
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_6
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_7
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_8
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_9
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_10
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_11
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_12
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_13
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_14
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_ALIVE_15
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_0
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_1
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_2
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_3
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_4
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_5
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_6
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_7
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_8
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_9
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_10
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_11
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_12
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_13
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_DYING_14
  LDHI I, data_generic_sprite_boom			; E_LASER_SPRITE_DYING_15
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_CLEAR_COLLISION
  LDHI I, data_laser_sprite_collision		; E_LASER_SPRITE_COLLISION

data_laser_sprite_collision:
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
  DB 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0

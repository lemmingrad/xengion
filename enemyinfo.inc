;---------------------------------------------------------------------------------
; ENEMY INFO
;---------------------------------------------------------------------------------

E_ENEMY_STATE_DEAD
E_ENEMY_STATE_ALIVE					= 2
E_ENEMY_STATE_HIT_WALL				= 4
E_ENEMY_STATE_HIT_PLAYER			= 6
E_ENEMY_STATE_DAMAGED_BY_LASER		= 8
E_ENEMY_STATE_KILLED_BY_LASER		= 10
E_ENEMY_STATE_DYING					= 12

E_ENEMY_TYPE_SHIP_1					= 0
E_ENEMY_TYPE_SHIP_2					= 4
E_ENEMY_TYPE_MISSILE				= 8
E_ENEMY_TYPE_TURRET					= 12

E_ENEMY_SLOT_0 	 		= 0
E_ENEMY_SLOT_1			= 4
E_ENEMY_SLOT_2			= 8
E_ENEMY_SLOT_3			= 12
E_ENEMY_SLOT_4			= 16
E_ENEMY_SLOT_MAX			= E_ENEMY_SLOT_1

E_ENEMY_SPRITE_ALIVE_0				= 0 
E_ENEMY_SPRITE_ALIVE_1				= 1 
E_ENEMY_SPRITE_ALIVE_2				= 2 
E_ENEMY_SPRITE_ALIVE_3				= 3 
E_ENEMY_SPRITE_ALIVE_4				= 4 
E_ENEMY_SPRITE_ALIVE_5				= 5 
E_ENEMY_SPRITE_ALIVE_6				= 6 
E_ENEMY_SPRITE_ALIVE_7				= 7 
E_ENEMY_SPRITE_ALIVE_8				= 8 
E_ENEMY_SPRITE_ALIVE_9				= 9 
E_ENEMY_SPRITE_ALIVE_10				= 10 
E_ENEMY_SPRITE_ALIVE_11				= 11 
E_ENEMY_SPRITE_ALIVE_12				= 12 
E_ENEMY_SPRITE_ALIVE_13				= 13 
E_ENEMY_SPRITE_ALIVE_14				= 14 
E_ENEMY_SPRITE_ALIVE_15				= 15 
E_ENEMY_SPRITE_DAMAGED_0			= 16
E_ENEMY_SPRITE_DAMAGED_1			= 17
E_ENEMY_SPRITE_DAMAGED_2			= 18
E_ENEMY_SPRITE_DAMAGED_3			= 19
E_ENEMY_SPRITE_DAMAGED_4			= 20
E_ENEMY_SPRITE_DAMAGED_5			= 21
E_ENEMY_SPRITE_DAMAGED_6			= 22
E_ENEMY_SPRITE_DAMAGED_7			= 23
E_ENEMY_SPRITE_DAMAGED_8			= 24
E_ENEMY_SPRITE_DAMAGED_9			= 25
E_ENEMY_SPRITE_DAMAGED_10			= 26
E_ENEMY_SPRITE_DAMAGED_11			= 27
E_ENEMY_SPRITE_DAMAGED_12			= 28
E_ENEMY_SPRITE_DAMAGED_13			= 29
E_ENEMY_SPRITE_DAMAGED_14			= 30
E_ENEMY_SPRITE_DAMAGED_15			= 31
E_ENEMY_SPRITE_DYING_0				= 32
E_ENEMY_SPRITE_DYING_1				= 33
E_ENEMY_SPRITE_DYING_2				= 34
E_ENEMY_SPRITE_DYING_3				= 35
E_ENEMY_SPRITE_DYING_4				= 36
E_ENEMY_SPRITE_DYING_5				= 37
E_ENEMY_SPRITE_DYING_6				= 38
E_ENEMY_SPRITE_DYING_7				= 39
E_ENEMY_SPRITE_CLEAR_COLLISION			= 40
E_ENEMY_SPRITE_COLLISION			= 41
E_ENEMY_SPRITE_MAXCOUNT				= 42

ENEMY_WIDTH							= 32
ENEMY_HEIGHT						= 16
ENEMY_ALIVE_XPOS_MIN				= 0
ENEMY_DYING_TIMER_MAX				= 8



data_enemy_slot_lookup:
  LDHI I, data_enemy_slot_0

data_enemy_slot_0:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 3								; enemy.health
  DB E_ENEMY_STATE_ALIVE					; enemy.state
  DB 220							; enemy.xpos
  DB 150							; enemy.ypos
  DB E_ENEMY_TYPE_SHIP_1		 			; enemy.type
  DB 1 + E_ENEMY_Y_MOVE_POS32_SIN64			; enemy.move
  DB 0								; enemy.timer
  DB 0								; reserved
data_enemy_slot_1:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
data_enemy_slot_2:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
data_enemy_slot_3:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
data_enemy_slot_4:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0

data_enemy_type_lookup:
  LDHI I, data_enemy_ship_1_sprite_lookup
  LDHI I, data_enemy_ship_2_sprite_lookup
  LDHI I, data_enemy_missile_sprite_lookup
  LDHI I, data_enemy_turret_sprite_lookup

data_enemy_ship_1_sprite_lookup:
data_enemy_ship_2_sprite_lookup:
data_enemy_missile_sprite_lookup:
data_enemy_turret_sprite_lookup:
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision

data_enemy_ship_1_sprite_collision:
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1
  DB 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1










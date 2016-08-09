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
E_ENEMY_SLOT_MAX			= ENEMY_SLOT_2

E_ENEMY_SPRITE_ALIVE_0				= 0 
; x16
E_ENEMY_SPRITE_DYING_0				= 1
; x16
E_ENEMY_SPRITE_DAMAGED_0			= 2
; x16
E_ENEMY_SPRITE_CLEAR_COLLISION		= 3
E_ENEMY_SPRITE_COLLISION			= 4
E_ENEMY_SPRITE_MAXCOUNT				= 5

ENEMY_WIDTH							= 32
ENEMY_HEIGHT						= 16


data_enemy_slot_lookup:
  LDHI I, data_enemy_slot_0
  LDHI I, data_enemy_slot_1

data_enemy_slot_0:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 3								; enemy.health
  DB 220							; enemy.xpos
  DB 150							; enemy.ypos
  DB E_ENEMY_STATE_ALIVE			; enemy.state
  DB E_ENEMY_TYPE_SHIP_1		 	; enemy.type
  DB 0								; enemy.dx
  DB 0								; enemy.dy
  DB 0								; enemy.timer

data_enemy_slot_1:
  DB 0
  DB 0
  DB 0
  DB 0
  DB 0
  DB 3								; enemy.health
  DB 200							; enemy.xpos
  DB 100							; enemy.ypos
  DB E_ENEMY_STATE_ALIVE			; enemy.state
  DB E_ENEMY_TYPE_SHIP_1		 	; enemy.type
  DB 0								; enemy.dx
  DB 0								; enemy.dy
  DB 0								; enemy.timer
 
data_enemy_type_lookup:
  LDHI I, data_enemy_ship_1_sprite_lookup
  LDHI I, data_enemy_ship_2_sprite_lookup
  LDHI I, data_enemy_missile_sprite_lookup
  LDHI I, data_enemy_turret_sprite_lookup

data_enemy_ship_1_sprite_lookup:
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision

data_enemy_ship_2_sprite_lookup:
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision

data_enemy_missile_sprite_lookup:
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision
  LDHI I, data_enemy_ship_1_sprite_collision

data_enemy_turret_sprite_lookup:
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










/* Kanibo__executeState_BackMove
 * address: 0x6030EC88   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__executeState_BackMove(Enemy *this)
{
  Enemy *v2; // r6
  float x; // s0
  float v4; // s4
  float v5; // s2
  float v6; // s4
  char v7; // r5
  float y; // r2
  int v9; // r0
  Vec3 position; // [sp+4h] [bp-1Ch] BYREF

  v2 = this + 1;
  j_ModelWrapper_updateAnims(*((_DWORD *)this + 1575));
  sub_604218E0(FIELD_U32(v2, 0x0)._._._.vtable);
  StageActor__accelerateX(&FIELD_U32(this, 0x0)._._);
  CollisionActor__handleGravity(&FIELD_U32(this, 0x0)._);
  CollisionActor__handleSpeed(&FIELD_U32(this, 0x0)._);
  x = FIELD_U32(this, 0x0)._._.position.x;
  v4 = *((float *)this + 1583);
  v5 = v4 + -16.0;
  if ( x >= (float)(v4 + -16.0) )
  {
    v6 = v4 + 16.0;
    v5 = FIELD_U32(this, 0x0)._._.position.x;
    if ( x > v6 )
      v5 = v6;
  }
  FIELD_U32(this, 0x0)._._.position.x = v5;
  v7 = CollisionActor__sub_600034C8(&FIELD_U32(this, 0x0)._);
  if ( !*((_BYTE *)this + 6472) )
  {
    *((_BYTE *)this + 6472) = 1;
    goto LABEL_10;
  }
  if ( (FIELD_U32(this, 0x0)._.collisionMgr[2232] & 1) != 0 || (FIELD_U32(this, 0x0)._.collisionMgr[2224] & 1) == 0 )
  {
LABEL_10:
    if ( (v7 & 1) == 0 )
      return;
    goto LABEL_11;
  }
  y = FIELD_U32(this, 0x0)._._.position.y;
  v9 = *(_DWORD *)&FIELD_U32(this, 0x0)._.collisionMgr[5308];
  position.x = FIELD_U32(this, 0x0)._._.position.x;
  position.y = y;
  position.z = 4500.0;
  EffectData_create(dword_60AFF324[BYTE1(v9)], &position, 0, 0);
  if ( (v7 & 1) != 0 )
  {
LABEL_11:
    *((_DWORD *)this + 1586) = 2;
    sub_60421AD4(FIELD_U32(v2, 0x0)._._._.vtable);
    (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0)._._._.vtable + 192))(this, &Kanibo__StateID_Wait);
  }
}

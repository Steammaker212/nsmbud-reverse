/* Kanibo__executeState_Wait
 * address: 0x6030E4AC   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__executeState_Wait(Enemy *this)
{
  Enemy *v2; // r5
  float y; // r2
  int fallEffectIdx; // r0
  int vtable; // r0
  unsigned int v6; // r3
  unsigned int v7; // r5
  int v8; // r2
  int v9; // r0
  Enemy *v10; // r5
  float v11; // s0
  float v12; // s0
  float v13; // s0
  float x; // s0
  Vec3 position; // [sp+4h] [bp-1Ch] BYREF

  v2 = this + 1;
  j_ModelWrapper_updateAnims(*((_DWORD *)this + 1575));
  sub_604218E0(FIELD_U32(v2, 0x0));
  CollisionActor__handleGravity(&FIELD_U32(this, 0x0));
  CollisionActor__handleSpeed(&FIELD_U32(this, 0x0));
  CollisionActor__sub_600034C8(&FIELD_U32(this, 0x0));
  if ( *((_BYTE *)this + 6472) )
  {
    if ( (FIELD_U8(this, 0x288)[2232] & 1) == 0 && (FIELD_U8(this, 0x288)[2224] & 1) != 0 )
    {
      y = FIELD_F32(this, 0x70);
      fallEffectIdx = *(_DWORD *)&FIELD_U8(this, 0x288)[5308];
      position.x = FIELD_F32(this, 0x6C);
      position.y = y;
      position.z = 4500.0;
      EffectData_create(dword_60AFF324[BYTE1(fallEffectIdx)], &position, 0, 0);
    }
  }
  else
  {
    *((_BYTE *)this + 6472) = 1;
  }
  if ( *((_DWORD *)this + 1586) == 2 )
  {
    vtable = FIELD_U32(v2, 0x0);
    v6 = *(_DWORD *)(FIELD_U32(v2, 0x0) + 8);
    v7 = *(_DWORD *)(FIELD_U32(v2, 0x0) + 68);
    v8 = FIELD_U32(vtable, 0xC);
    if ( v6 > v7 )
      v8 += 4 * v7;
    if ( (*(_DWORD *)(*(_DWORD *)v8 + 0x1C) & 0x21) == 0x20 )
    {
      *((_DWORD *)this + 1586) = 0;
      sub_60421AD4(vtable);
    }
  }
  v10 = (Enemy *)((char *)this + 6348);
  v9 = *((_DWORD *)this + 1587);
  if ( v9 )
    FIELD_U32(v10, 0x0) = v9 - 1;
  v11 = FIELD_F32(this, 0x6C) + FIELD_F32(this, 0x23C);
  if ( FIELD_F32(dword_60CC6484, 40) <= v11 && v11 <= FIELD_F32(dword_60CC6484, 48) )
  {
    v12 = FIELD_F32(this, 0x70) + FIELD_F32(this, 0x240);
    if ( FIELD_F32(dword_60CC6484, 44) <= v12 && v12 <= FIELD_F32(dword_60CC6484, 52) )
    {
      if ( (unsigned int)StageActor__distanceToPlayer((StateActor *)this, (Vec2 *)&position) > 3 )
        goto LABEL_27;
      v13 = position.y;
      if ( position.y <= 0.0 )
        v13 = -position.y;
      if ( v13 >= 192.0 )
        goto LABEL_27;
      x = position.x;
      if ( (float)(position.x * (float)byte_60AFE3F4[FIELD_U32(this, 0x50)]) <= 0.0 )
        goto LABEL_30;
      if ( position.x <= 0.0 )
        x = -position.x;
      if ( x >= 320.0 )
      {
LABEL_27:
        FIELD_U32(v10, 0x0) = 0;
      }
      else
      {
LABEL_30:
        if ( !FIELD_U32(v10, 0x0) )
          (*(void (__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0) + 192))(this, &Kanibo__StateID_RockUp);
      }
    }
  }
}

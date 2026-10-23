/* Kanibo__executeState_Jump
 * address: 0x6030E9CC   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall Kanibo__executeState_Jump(Enemy *this)
{
  Enemy *v2; // r6
  char v3; // r5
  float y; // r2
  int v5; // r0
  int vtable; // r0
  unsigned int v7; // r3
  unsigned int v8; // r6
  int v9; // r2
  int *result; // r0
  float v11; // s0
  Vec3 v12; // [sp+4h] [bp-1Ch] BYREF

  v2 = this + 1;
  j_ModelWrapper_updateAnims(*((_DWORD *)this + 1575));
  sub_604218E0(FIELD_U32(v2, 0x0));
  CollisionActor__handleGravity(&FIELD_U32(this, 0x0));
  CollisionActor__handleSpeed(&FIELD_U32(this, 0x0));
  v3 = CollisionActor__sub_600034C8(&FIELD_U32(this, 0x0));
  if ( *((_BYTE *)this + 6472) )
  {
    if ( (FIELD_U8(this, 0x288)[2232] & 1) == 0 && (FIELD_U8(this, 0x288)[2224] & 1) != 0 )
    {
      y = FIELD_F32(this, 0x70);
      v5 = *(_DWORD *)&FIELD_U8(this, 0x288)[5308];
      v12.x = FIELD_F32(this, 0x6C);
      v12.y = y;
      v12.z = 4500.0;
      EffectData_create(dword_60AFF324[BYTE1(v5)], &v12, 0, 0);
      if ( (v3 & 1) == 0 )
        goto LABEL_13;
      goto LABEL_8;
    }
  }
  else
  {
    *((_BYTE *)this + 6472) = 1;
  }
  if ( (v3 & 1) == 0 )
    goto LABEL_13;
LABEL_8:
  if ( *((_DWORD *)this + 1586) == 1 )
  {
    vtable = FIELD_U32(v2, 0x0);
    v7 = *(_DWORD *)(FIELD_U32(v2, 0x0) + 8);
    v8 = *(_DWORD *)(FIELD_U32(v2, 0x0) + 0x44);
    v9 = FIELD_U32(vtable, 0xC);
    if ( v7 > v8 )
      v9 += 4 * v8;
    if ( (*(_DWORD *)(*(_DWORD *)v9 + 0x1C) & 0x21) == 0x20 )
    {
      *((_DWORD *)this + 1586) = 2;
      sub_60421AD4(vtable);
      return (*(int *(__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0) + 192))(this, &Kanibo__StateID_Wait);
    }
  }
LABEL_13:
  result = (int *)((char *)this + 6360);
  v11 = FIELD_F32(this, 0x7C) + *((float *)this + 1590);
  *((float *)this + 1590) = v11;
  if ( v11 >= 16.0 )
    return (*(int *(__fastcall **)(Enemy *, State *))(FIELD_U32(this, 0x0) + 192))(this, &Kanibo__StateID_BackMove);
  return result;
}

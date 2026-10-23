/* sub_60351578
 * address: 0x60351578   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60351578(int a1)
{
  bool v2; // zf
  float v3; // s16
  int v4; // r5
  int v5; // r0
  int v6; // r8
  int v7; // r7
  int *p_speed; // r6
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  int v13; // [sp+0h] [bp-30h] BYREF
  int target; // [sp+4h] [bp-2Ch] BYREF
  int speed; // [sp+8h] [bp-28h] BYREF
  int v16[9]; // [sp+Ch] [bp-24h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v2 = FIELD_U8(a1, 6416) == 0;
  if ( FIELD_U8(a1, 6416) )
    v2 = FIELD_U8(a1, 6329) == 0;
  if ( !v2 )
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 6412) + 12));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = FIELD_F32(a1, 108);
  v4 = 0;
  v5 = 0;
  if ( v3 <= 264.0 )
  {
    v4 = 1;
    FIELD_U32(a1, 108) = 1132724224;
  }
  v6 = FIELD_U32(a1, 2872) & 1;
  if ( v6 )
  {
    v7 = FIELD_U32(a1, 80);
    p_speed = &speed;
    if ( !v7 )
      p_speed = v16;
    v9 = sub_6014C4A4(a1 + 648);
    v10 = 2;
    *p_speed = v9;
    if ( !v7 )
      v10 = -2;
    v5 = v9 / v10;
  }
  target = v5;
  v13 = 0x1000000;
  moveValueTo((int *)(a1 + 156), &target, &v13);
  if ( v6 )
    FIELD_U32(a1, 124) = 0;
  if ( v4 == 1 )
    FIELD_F32(a1, 108) = v3;
  sub_60352BD8(a1);
  v11 = FIELD_U32(a1, 80);
  if ( v11 >= 2 )
    v11 = 0;
  v16[0] = *(_DWORD *)(a1 + 4 * v11 + 6320);
  speed = 0x4000000;
  result = moveValueTo((int *)(a1 + 160), v16, &speed);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94F9C);
  return result;
}

/* sub_60368A64
 * address: 0x60368A64   size: 488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60368A64(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // s0
  char v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r0
  int result; // r0
  signed int v11; // [sp+4h] [bp-24h] BYREF
  int speed; // [sp+8h] [bp-20h] BYREF
  int target; // [sp+Ch] [bp-1Ch] BYREF

  FIELD_U32(a1, 104) = 1031798784;
  v2 = FIELD_U32(a1, 80);
  v11 = 89522176;
  v3 = 0;
  if ( sub_6083246C((int *)(a1 + 160), &dword_60C95E20[v2 + 2], &v11) == 1 )
  {
    FIELD_U32(a1, 6528) = 0;
    StageActor__accelerateX((StageActor *)a1);
    v3 = 1;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  v4 = CollisionActor__handleSpeed((CollisionActor *)a1);
  sub_6036A6A8(a1, v4);
  v5 = FIELD_U8(a1, 6312);
  target = 0;
  if ( (v5 & 1) != 0 )
    target = sub_6014C4A4(a1 + 648) >> 1;
  speed = 0x1000000;
  moveValueTo((int *)(a1 + 164), &target, &speed);
  if ( (FIELD_U8(a1, 6312) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      if ( FIELD_U8(dword_60C9CF0C, 1361) )
        FIELD_U32(a1, 124) = 1071644672;
    }
  }
  if ( v3 == 1 )
  {
    v6 = FIELD_U32(a1, 80);
    v7 = a1 + 648;
    if ( ((*(_DWORD *)(a1 + 648 + 4 * ((v6 + 18) >> 5) + 2224) & (1 << ((v6 + 18) & 0x1F))) != 0
       || (*(_DWORD *)(v7 + 4 * ((v6 + 22) >> 5) + 2224) & (1 << ((v6 + 22) & 0x1F))) != 0)
      && (*(_DWORD *)(v7 + 4 * ((v6 + 28) >> 5) + 2224) & (1 << ((v6 + 28) & 0x1F))) == 0 )
    {
      FIELD_U32(a1, 6528) = 1;
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 80) = v6 ^ 1;
      FIELD_F32(a1, 132) = -FIELD_F32(a1, 132);
    }
  }
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6300));
  v8 = *(_DWORD *)(FIELD_U32(a1, 6300) + 12);
  v9 = *(_DWORD *)(FIELD_U32(a1, 6300) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6300) + 8) > v9 )
    v8 += 4 * v9;
  result = *(unsigned __int8 *)(*(_DWORD *)v8 + 28);
  if ( (result & 0x10) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C95D58);
  return result;
}

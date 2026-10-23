/* BobOmb_vf169
 * address: 0x60260428   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_vf169(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r1
  bool v5; // zf
  char v6; // r0
  float v7; // s0
  int result; // r0
  int v9; // r0
  int v10; // r2
  bool v11; // zf
  int v12; // r1
  int v13; // r7
  int v14; // r1
  bool v15; // zf
  float v16; // r9
  Vec3 v17; // [sp+4h] [bp-2Ch] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  if ( (FIELD_U32(a1, 2872) & 1) != 0 )
  {
    v4 = FIELD_U32(a1, 3200);
    v5 = (v4 & 0x20000) == 0;
    if ( (v4 & 0x20000) != 0 )
      v5 = (FIELD_U32(a1, 2872) & 8) == 0;
    if ( v5 )
      ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 0.2, 0.5);
    else
      FIELD_U32(a1, 124) = 1085276160;
    if ( !FIELD_U8(a1, 6468) )
    {
      v6 = 0;
      if ( !FIELD_U8(a1, 6469) )
      {
        v11 = (FIELD_U8(a1, 3202) & 2) == 0;
        if ( (FIELD_U8(a1, 3202) & 2) != 0 )
          v11 = (FIELD_U8(a1, 2872) & 8) == 0;
        if ( v11 && (FIELD_U8(a1, 2880) & 1) == 0 && (FIELD_U8(a1, 2872) & 1) != 0 )
        {
          v12 = FIELD_U32(a1, 5956);
          v6 = 0;
          v13 = BYTE1(v12);
          if ( BYTE1(v12) <= 0xBu )
          {
            v14 = BYTE1(v12);
            v15 = v14 == 6;
            if ( v14 != 6 )
              v15 = v14 == 8;
            if ( !v15 )
            {
              v16 = FIELD_F32(a1, 112);
              v17.x = FIELD_F32(a1, 108);
              v17.y = v16;
              v17.z = sub_600024C4(a1);
              EffectData_create(dword_60AFD900[v13], &v17, 0, 0);
              v6 = 1;
            }
          }
        }
      }
      FIELD_U8(a1, 6468) = v6;
    }
  }
  if ( (FIELD_U32(a1, 2872) & 0x10400) == 0x400 )
  {
    v7 = FIELD_F32(a1, 124);
    if ( v7 > 0.0 )
      FIELD_F32(a1, 124) = v7 * -0.85;
  }
  result = FIELD_U32(a1, 80);
  if ( (*(_DWORD *)(v3 + 4 * ((result + 18) >> 5) + 2224) & (1 << ((result + 18) & 0x1F))) != 0
    || (*(_DWORD *)(v3 + 4 * ((result + 22) >> 5) + 2224) & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v9 = result + 28;
    v10 = v9 >> 5;
    result = v9 & 0x1F;
    if ( (*(_DWORD *)(v3 + 4 * v10 + 2224) & (1 << result)) == 0 )
    {
      result = 0;
      FIELD_U32(a1, 120) = 0;
    }
  }
  return result;
}

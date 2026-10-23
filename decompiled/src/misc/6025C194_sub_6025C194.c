/* sub_6025C194
 * address: 0x6025C194   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6025C194(int a1)
{
  float v2; // s0
  int v3; // r5
  int v4; // r1
  bool v5; // zf
  char v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0
  float v10; // s0
  float v11; // s0
  int v12; // r6
  bool v13; // zf
  int v14; // r1
  int v15; // r7
  int v16; // r1
  bool v17; // zf
  float v18; // r9
  Vec3 v19; // [sp+4h] [bp-2Ch] BYREF

  StageActor__accelerateX((StageActor *)a1);
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
      ((void (__fastcall *)(int, float, float, float))loc_602A25F8)(a1, 0.1875, 0.5, 0.5);
    else
      FIELD_U32(a1, 124) = 1085276160;
    if ( !FIELD_U8(a1, 6468) )
    {
      v6 = 0;
      if ( !FIELD_U8(a1, 6469) )
      {
        v13 = (FIELD_U8(a1, 3202) & 2) == 0;
        if ( (FIELD_U8(a1, 3202) & 2) != 0 )
          v13 = (FIELD_U8(a1, 2872) & 8) == 0;
        if ( v13 && (FIELD_U8(a1, 2880) & 1) == 0 && (FIELD_U8(a1, 2872) & 1) != 0 )
        {
          v14 = FIELD_U32(a1, 5956);
          v6 = 0;
          v15 = BYTE1(v14);
          if ( BYTE1(v14) <= 0xBu )
          {
            v16 = BYTE1(v14);
            v17 = v16 == 6;
            if ( v16 != 6 )
              v17 = v16 == 8;
            if ( !v17 )
            {
              v18 = FIELD_F32(a1, 112);
              v19.x = FIELD_F32(a1, 108);
              v19.y = v18;
              v19.z = sub_600024C4(a1);
              EffectData_create(dword_60AFD900[v15], &v19, 0, 0);
              v6 = 1;
            }
          }
        }
      }
      FIELD_U8(a1, 6468) = v6;
    }
  }
  v7 = FIELD_U32(a1, 80);
  if ( ((*(_DWORD *)(v3 + 4 * ((v7 + 18) >> 5) + 2224) & (1 << ((v7 + 18) & 0x1F))) != 0
     || (*(_DWORD *)(v3 + 4 * ((v7 + 22) >> 5) + 2224) & (1 << ((v7 + 22) & 0x1F))) != 0)
    && (*(_DWORD *)(v3 + 4 * ((v7 + 28) >> 5) + 2224) & (1 << ((v7 + 28) & 0x1F))) == 0 )
  {
    v8 = v7 ^ 1;
    FIELD_U32(a1, 80) = v8;
    FIELD_U32(a1, 160) = Enemy_CommonRotations[v8];
    FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * -0.5;
  }
  result = FIELD_U32(a1, 2872);
  if ( (result & 0x10400) == 0x400 )
  {
    v10 = FIELD_F32(a1, 124);
    if ( v10 > 0.0 )
      FIELD_F32(a1, 124) = v10 * -0.85;
  }
  if ( (result & 1) != 0 )
  {
    v11 = FIELD_F32(a1, 120);
    if ( v11 <= 0.00000011921 && v11 >= -0.00000011921 )
    {
      v12 = FIELD_U8(a1, 6468);
      FIELD_U32(a1, 120) = 0;
      result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
      if ( v12 )
        FIELD_U8(a1, 6468) = v12;
    }
  }
  return result;
}

/* sub_602D4430
 * address: 0x602D4430   size: 812   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D4430(int a1)
{
  int v2; // r5
  float v3; // s0
  int v4; // r0
  _DWORD *v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // r1
  unsigned int v10; // r0
  float v11; // r0
  int v12; // r5
  int v13; // r1
  int v14; // r1
  int v15; // r0
  int (__fastcall *v16)(int, int *); // r2
  int *v17; // r1
  int result; // r0
  int v19; // r1
  float v20; // s2
  int v21; // r1
  float v22; // s0
  float v23; // s2
  int v24; // r0
  bool v25; // cc
  _DWORD *v26; // r5
  int v27; // r0
  int U32; // r0
  Vec3 v29; // [sp+4h] [bp-1Ch] BYREF

  v2 = a1 + 6856;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6856));
  CollisionActor__handleGravity((CollisionActor *)a1);
  v3 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v3);
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  if ( (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0
    || (v4 & 0x880000) != 0 && (v4 & 0x20000000) == 0
    || fabsf(FIELD_F32(a1, 108) - FIELD_F32(a1, 6744)) >= 10.0 )
  {
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  v5 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v6 )
    v5 += v6;
  if ( sub_60418548(*v5 + 4) )
  {
    v7 = 6688;
    v8 = 6684;
    goto LABEL_17;
  }
  v9 = *(_DWORD **)(*(_DWORD *)v2 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v10 )
    v9 += v10;
  if ( sub_60418548(*v9 + 4) )
  {
    v7 = 6700;
    v8 = 6696;
LABEL_17:
    v11 = *(float *)(a1 + v7);
    v29.x = *(float *)(a1 + v8);
    v29.y = v11;
    v29.z = 4500.0;
    if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    {
      EffectData_setEffectId((EffectData *)(a1 + 6988), 646);
      sub_60237208(a1 + 6972, &v29, 0, 0);
    }
  }
  v12 = FIELD_U32(a1, 80);
  if ( v12 != StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) )
  {
    v16 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
    v17 = &dword_60C91BE0;
    return v16(a1, v17);
  }
  v13 = FIELD_U32(a1, 160);
  if ( FIELD_U32(a1, 80) )
  {
    v14 = v13 + 0x2000000;
    v15 = -536870912;
    if ( v14 < -536870912 )
      v15 = v14;
  }
  else
  {
    v19 = v13 - 0x2000000;
    v15 = 0x20000000;
    if ( v19 > 0x20000000 )
      v15 = v19;
  }
  FIELD_U32(a1, 160) = v15;
  v20 = FIELD_F32(a1, 112);
  v21 = *(_DWORD *)(FIELD_U32(a1, 12) + 12);
  result = dword_60CC6484;
  v22 = (float)FIELD_S32(v21, 16);
  if ( v20 <= (float)(FIELD_F32(dword_60CC6484, 124) + -32.0)
    && (float)(v20 + (float)(2 * FIELD_U32(v21, 20))) >= (float)(FIELD_F32(dword_60CC6484, 132) + -16.0) )
  {
    v23 = FIELD_F32(a1, 108);
    if ( (float)(v22 + v23) >= FIELD_F32(dword_60CC6484, 112)
      && (float)(v23 - v22) <= FIELD_F32(dword_60CC6484, 120) )
    {
      result = FIELD_U8(a1, 2872);
      if ( (result & 1) != 0 )
      {
        v24 = FIELD_U32(a1, 6664);
        v25 = v24 <= 1;
        result = v24 - 1;
        FIELD_U32(a1, 6664) = result;
        if ( v25 )
        {
          FIELD_U32(a1, 6864) = -1;
          v26 = (_DWORD *)(a1 + 6864);
          v27 = FIELD_U32(a1, 6668) - 1;
          FIELD_U32(a1, 6668) = v27;
          if ( v27 )
          {
            *v26 = 2;
            v16 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          }
          else
          {
            U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
            *v26 = U32 >= 0;
            FIELD_U32(a1, 6668) = 2;
            v16 = *(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            if ( U32 >> 31 == -1 )
            {
              v17 = &dword_60C91AE0;
              return v16(a1, v17);
            }
          }
          v17 = &dword_60C91B20;
          return v16(a1, v17);
        }
      }
    }
  }
  return result;
}

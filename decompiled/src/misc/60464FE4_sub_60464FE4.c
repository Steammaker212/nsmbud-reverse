/* sub_60464FE4
 * address: 0x60464FE4   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60464FE4(int a1)
{
  int v2; // r0
  _DWORD *v3; // r1
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r0
  int v7; // r1
  float v8; // s18
  float v9; // s0
  float v10; // s20
  float v11; // s16
  float v12; // s22
  float v13; // s26
  float v14; // s24
  float v15; // s0
  float v16; // s0
  int v17; // r5
  __int16 v18; // r0

  v3 = (_DWORD *)(a1 + 6232);
  v2 = FIELD_U32(a1, 6232);
  if ( v2 )
  {
    v4 = v2 - 1;
    *v3 = v4;
  }
  else
  {
    v4 = 0;
  }
  v5 = FIELD_U32(a1, 6208);
  if ( v5 != -1 && v5 == FIELD_S8(a1, 6250) && v4 )
    FIELD_U32(a1, 6208) = -1;
  else
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  v6 = sub_6014C4A4(a1 + 648);
  v7 = (v6 >> 20) & 0xFF0;
  v8 = FIELD_F32(a1, 120);
  v9 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
  v10 = *(float *)((char *)&sinLutTable[2] + v7) + (float)(v9 * *(float *)((char *)&sinLutTable[3] + v7));
  v11 = *(float *)((char *)sinLutTable + v7) + (float)(*(float *)((char *)&sinLutTable[1] + v7) * v9);
  if ( FIELD_U8(a1, 6054) || FIELD_U8(a1, 6053) )
    v8 = v8 * 0.5;
  v12 = FIELD_F32(a1, 124);
  v13 = FIELD_F32(a1, 6024);
  v14 = FIELD_F32(a1, 6028);
  sub_600037A0(a1);
  FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)(v13 + (float)(v10 * v8)) + FIELD_F32(a1, 6000));
  v15 = (float)((float)(v12 + (float)(v11 * v8)) + v14) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v15;
  v16 = CollisionMgr_process((_BYTE *)(a1 + 648), v15);
  v17 = 0;
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    if ( !FIELD_U32(a1, 6192) )
      sub_60462A58(a1);
    v18 = FIELD_U16(a1, 6252) - 1;
    FIELD_U16(a1, 6252) = v18;
    if ( v18 < 1 )
    {
      FIELD_U32(a1, 120) = 0;
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 6172) = 0;
      (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 208))(a1, v16);
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
    }
    else
    {
      FIELD_U32(a1, 124) = 1069547520;
      FIELD_F32(a1, 120) = FIELD_F32(a1, 120) * 0.8;
    }
    v17 = 1;
  }
  if ( sub_6000346C(a1) == 1 )
  {
    FIELD_U32(a1, 80) = FIELD_U8(a1, 80) ^ 1;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  }
  FIELD_U32(a1, 6192) = v17;
  return 6192;
}

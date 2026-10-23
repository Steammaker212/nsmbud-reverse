/* sub_6000D2E0
 * address: 0x6000D2E0   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000D2E0(int a1)
{
  int v2; // r9
  float *v3; // r7
  float v4; // r10
  float *v5; // r5
  float v6; // s0
  float v7; // s4
  float v8; // s0
  float v9; // s2
  unsigned int result; // r0
  float v11; // s2
  float v12; // s0
  float v13; // s0
  float v14; // s16
  unsigned int v15; // r0
  int v16; // r0
  State *v17; // r1
  float *v18; // [sp+8h] [bp-58h]
  int v19; // [sp+Ch] [bp-54h]

  v2 = 1;
  v3 = (float *)(a1 + 100);
  v4 = FIELD_F32(a1, 100);
  v5 = (float *)(a1 + 40);
  v19 = FIELD_U32(a1, 104);
  v6 = FIELD_F32(a1, 136) * 0.89101;
  FIELD_F32(a1, 92) = v6;
  v7 = v6 * 0.5;
  v8 = v6 + v4;
  FIELD_F32(a1, 96) = v7;
  FIELD_F32(a1, 100) = v8;
  v9 = (float)(FIELD_F32(a1, 120) + -16.0) + (float)((float)(v8 - FIELD_F32(a1, 116)) * 0.5);
  FIELD_F32(a1, 104) = v9;
  v18 = (float *)(a1 + 116);
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v8 + *(v5 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(v9 + *v5) * 0.0625) * -16.0),
               FIELD_U8(a1, 141),
               1)
           & 0xFFFFFF;
    if ( result == 0x200001 )
    {
      v12 = FIELD_F32(a1, 136);
      if ( !FIELD_U8(a1, 140) )
      {
        v12 = -v12;
        FIELD_F32(a1, 136) = v12;
        FIELD_U8(a1, 142) ^= 1u;
      }
      v13 = v12 * 0.89101;
      result = 1;
      FIELD_U8(a1, 143) = 1;
      FIELD_F32(a1, 100) = v4;
      FIELD_U32(a1, 104) = v19;
      FIELD_F32(a1, 92) = v13;
      FIELD_F32(a1, 96) = v13 * 0.5;
      return result;
    }
    if ( v2 > 6 )
      break;
    v8 = FIELD_F32(a1, 100);
    v9 = FIELD_F32(a1, 104);
    v5 += 2;
    ++v2;
  }
  v11 = *v18;
  if ( *v3 < *v18 )
    return sub_60012FA4(a1, v18, 0);
  v14 = v11 + 16.0;
  if ( *v3 >= (float)(v11 + 16.0) )
  {
    v15 = sub_607160F4(
            TileMgr_instance,
            (int)v14,
            (unsigned __int16)(int)(float)-FIELD_F32(a1, 120),
            FIELD_U8(a1, 141),
            1);
    if ( (unsigned __int16)v15 != 1 )
      goto LABEL_16;
    v16 = BYTE2(v15);
    if ( v16 == 9 )
    {
      FIELD_F32(a1, 116) = v14;
      v17 = (State *)&dword_60C7B5C8;
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v17, 0x0));
    }
    if ( v16 != 7 )
    {
LABEL_16:
      v17 = &LineFollower_StateID_Fall;
    }
    else
    {
      FIELD_F32(a1, 116) = v14;
      v17 = (State *)&dword_60C7B588;
    }
    return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v17, 0x0));
  }
  return result;
}

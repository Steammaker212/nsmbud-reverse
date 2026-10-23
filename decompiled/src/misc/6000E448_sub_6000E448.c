/* sub_6000E448
 * address: 0x6000E448   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000E448(int a1)
{
  int v2; // r8
  float *v3; // r6
  int v4; // r9
  float v5; // s0
  int v6; // r10
  float v7; // s0
  float v8; // s2
  unsigned int result; // r0
  float v10; // s0
  float v11; // s2
  float v12; // s0
  float v13; // s0
  float v14; // s16
  unsigned int v15; // r0
  int v16; // r0
  State *v17; // r1
  int v18; // [sp+4h] [bp-54h]

  v2 = 1;
  v3 = (float *)(a1 + 40);
  v4 = a1 + 116;
  v18 = FIELD_U32(a1, 104);
  v5 = FIELD_F32(a1, 136) * -0.89101;
  v6 = FIELD_U32(a1, 100);
  FIELD_F32(a1, 92) = v5 * -0.5;
  FIELD_F32(a1, 96) = v5;
  v7 = v5 + FIELD_F32(a1, 104);
  FIELD_F32(a1, 104) = v7;
  v8 = (float)(FIELD_F32(a1, 116) + 8.0) + (float)((float)(FIELD_F32(a1, 120) - v7) * 0.5);
  FIELD_F32(a1, 100) = v8;
  while ( 1 )
  {
    result = sub_607160F4(
               TileMgr_instance,
               (int)(float)((float)(int)(float)((float)(v8 + *(v3 - 1)) * 0.0625) * 16.0),
               (unsigned __int16)(int)(float)((float)(int)(float)((float)(v7 + *v3) * 0.0625) * -16.0),
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
      v13 = v12 * -0.89101;
      result = 1;
      FIELD_U8(a1, 143) = 1;
      FIELD_U32(a1, 100) = v6;
      FIELD_U32(a1, 104) = v18;
      FIELD_F32(a1, 96) = v13;
      FIELD_F32(a1, 92) = v13 * -0.5;
      return result;
    }
    if ( v2 > 6 )
      break;
    v8 = FIELD_F32(a1, 100);
    v7 = FIELD_F32(a1, 104);
    v3 += 2;
    ++v2;
  }
  v10 = FIELD_F32(a1, 120);
  v11 = FIELD_F32(a1, 104);
  if ( v11 < (float)(v10 + -16.0) )
    return sub_600130B4(a1, v4, 0);
  if ( v11 >= v10 )
  {
    v14 = v10 + 16.0;
    v15 = sub_607160F4(
            TileMgr_instance,
            (int)FIELD_F32(a1, 116),
            (unsigned __int16)(int)(float)-(float)(v10 + 16.0),
            FIELD_U8(a1, 141),
            1);
    if ( (unsigned __int16)v15 != 1 )
      goto LABEL_16;
    v16 = BYTE2(v15);
    if ( v16 == 14 )
    {
      FIELD_F32(a1, 120) = v14;
      v17 = (State *)&dword_60C7B648;
      return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v17, 0x0));
    }
    if ( v16 != 11 )
    {
LABEL_16:
      v17 = &LineFollower_StateID_Fall;
    }
    else
    {
      FIELD_F32(a1, 120) = v14;
      v17 = (State *)&dword_60C7B5E8;
    }
    return (unsigned int)StateMgr__changeState((StateMgr *)(a1 + 20), &FIELD_U32(v17, 0x0));
  }
  return result;
}

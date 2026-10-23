/* sub_603AFCB8
 * address: 0x603AFCB8   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603AFCB8(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int result; // r0
  int v5; // r1
  unsigned int v6; // r2
  float *v7; // r1
  float *v8; // r3
  float v9; // s10
  float v10; // s6
  float v11; // s9
  float v12; // s0
  float v13; // s14
  float v14; // s3
  float v15; // s2
  __int64 v16; // [sp+0h] [bp-40h] BYREF
  float v17; // [sp+8h] [bp-38h]
  int v18; // [sp+Ch] [bp-34h]
  float v19; // [sp+10h] [bp-30h]
  float v20; // [sp+14h] [bp-2Ch]
  float v21; // [sp+18h] [bp-28h]
  int v22; // [sp+1Ch] [bp-24h]
  float v23; // [sp+20h] [bp-20h]
  float v24; // [sp+24h] [bp-1Ch]
  float v25; // [sp+28h] [bp-18h]
  int v26; // [sp+2Ch] [bp-14h]

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)dword_60C97C68 & ~(1614478552 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C97C68) )
  {
    dword_60C97C64 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C97C68);
  }
  if ( v3 && (**v3)(v3, &dword_60C97C64) == 1 )
  {
    sub_603B2690(v3, FIELD_U32(a1, 6456), &v16);
    FIELD_U64(a1, 108) = v16;
  }
  result = FIELD_U8(a1, 6608);
  if ( !FIELD_U8(a1, 6608) )
  {
    ((void (__fastcall *)(int))loc_603B1A78)(a1);
    ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6304));
    v5 = FIELD_U32(a1, 80);
    v6 = FIELD_U32(a1, 156);
    if ( v5 )
      v5 = 128;
    else
      v6 = -v6;
    v7 = &sinLutTable[4 * v5];
    v8 = (float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0));
    v9 = v7[2] + (float)(v7[3] * 0.0);
    v10 = *v7 + (float)(v7[1] * 0.0);
    v11 = (float)(-0.00030118 * 0.0) + 1.0;
    v12 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
    v13 = *v8 + (float)(v12 * v8[1]);
    v14 = v8[2] + (float)(v12 * v8[3]);
    v15 = (float)(0.024541 * 0.0) + 0.0;
    *(float *)&v16 = v9 * v14;
    v19 = v9 * v13;
    v23 = -v10;
    *((float *)&v16 + 1) = (float)((float)(v15 * v10) * v14) - (float)(v11 * v13);
    v20 = (float)(v11 * v14) + (float)((float)(v15 * v10) * v13);
    v24 = v15 * v9;
    v17 = (float)(v10 * (float)(v11 * v14)) + (float)(v15 * v13);
    v21 = (float)(v10 * (float)(v11 * v13)) - (float)(v15 * v14);
    v25 = v11 * v9;
    v18 = FIELD_U32(a1, 6420);
    v22 = FIELD_U32(a1, 6424);
    v26 = FIELD_U32(a1, 6428);
    return sub_602372C0(a1 + 6316, 374, &v16, 0);
  }
  return result;
}

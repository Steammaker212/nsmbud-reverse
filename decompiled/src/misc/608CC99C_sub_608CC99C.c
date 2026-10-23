/* sub_608CC99C
 * address: 0x608CC99C   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608CC99C(int a1)
{
  int v2; // r11
  int v3; // r10
  int v4; // r9
  float v5; // s16
  unsigned int v6; // r0
  int v7; // r1
  float v8; // s18
  float v9; // s22
  float v10; // s6
  unsigned int v11; // r0
  float v12; // s24
  float v13; // s26
  unsigned int v14; // r7
  unsigned int v15; // r8
  unsigned int v16; // r5
  unsigned int v17; // r6
  _DWORD *v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  float v23[20]; // [sp+0h] [bp-A8h] BYREF

  v2 = FIELD_U32(a1, 268);
  if ( v2 )
  {
    v3 = FIELD_S8(a1, 60);
    v4 = FIELD_U32(a1, 44);
    if ( v3 == -1 )
    {
      LOBYTE(v3) = FIELD_U8(a1, 264);
      v5 = (float)FIELD_U8(a1, 265) / 127.0;
    }
    else
    {
      v5 = FIELD_F32(a1, 56);
    }
    v6 = FIELD_U8(a1, 257);
    v7 = -64;
    v8 = FIELD_F32(a1, 52) + (float)((float)(FIELD_U8(a1, 263) - 64) * 0.015625);
    v9 = FIELD_F32(a1, 48) * FIELD_F32(a1, 248);
    if ( v6 < 2 )
      v7 = -63;
    v10 = (float)(int)(v7 + v6);
    v11 = FIELD_U8(a1, 258);
    v12 = FIELD_F32(a1, 192) * (float)(v10 / 63.0);
    if ( v11 > 0x3F )
      v13 = (float)(int)(v11 + 1) * 0.015625;
    else
      v13 = (float)v11 / 63.0;
    v14 = FIELD_U8(a1, 259);
    v15 = FIELD_U8(a1, 260);
    v16 = FIELD_U8(a1, 261);
    v17 = FIELD_U8(a1, 262);
    qmemcpy(v23, (const void *)(a1 + 76), sizeof(v23));
    v23[14] = v12 + v23[14];
    v23[15] = v13 + v23[15];
    v23[16] = (float)((float)((float)v14 / 127.0) + -1.0) + v23[16];
    v23[17] = (float)((float)v15 / 127.0) + v23[17];
    v23[18] = (float)((float)v16 / 127.0) + v23[18];
    v23[19] = (float)((float)v17 / 127.0) + v23[19];
    FIELD_U32(v2, 336) = FIELD_U32(a1, 64);
    *(_DWORD *)(FIELD_U32(a1, 268) + 340) = FIELD_U32(a1, 68);
    *(_DWORD *)(FIELD_U32(a1, 268) + 184) = v4;
    *(float *)(FIELD_U32(a1, 268) + 188) = v9;
    v18 = *(_DWORD **)(a1 + 268);
    v19 = FIELD_U32(a1, 236);
    v20 = FIELD_U32(a1, 240);
    v21 = FIELD_U32(a1, 244);
    v18[11] = FIELD_U32(a1, 232);
    v18 += 12;
    *v18 = v19;
    v18[1] = v20;
    v18[2] = v21;
    *(float *)(FIELD_U32(a1, 268) + 192) = v8;
    sub_608C7C58(FIELD_U32(a1, 268), v3, v5);
    *(_DWORD *)(FIELD_U32(a1, 268) + 200) = FIELD_U32(a1, 72);
    qmemcpy((void *)(FIELD_U32(a1, 268) + 204), v23, 0x50u);
    v22 = FIELD_U32(a1, 156);
    if ( v22 )
      sub_608C7C64(FIELD_U32(a1, 268), v22);
  }
}

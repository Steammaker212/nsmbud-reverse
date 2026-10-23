/* sub_608C78C8
 * address: 0x608C78C8   size: 732   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C78C8(int a1, int a2, int a3, int a4)
{
  int result; // r0
  unsigned __int16 *v7; // r9
  int v8; // r8
  int v9; // r10
  int v10; // r11
  int v11; // r3
  _WORD *v12; // r12
  int v13; // r4
  unsigned __int16 v14; // r0
  int v15; // r0
  int v16; // r2
  _WORD *v17; // r1
  int v18; // r0
  int v19; // r1
  int v21; // [sp+8h] [bp-50h]
  int v22; // [sp+Ch] [bp-4Ch]
  unsigned int v23; // [sp+10h] [bp-48h]
  _DWORD v24[17]; // [sp+14h] [bp-44h] BYREF

  FIELD_U8(a1, 840) = FIELD_U8(a2, 4);
  FIELD_U32(a1, 832) = FIELD_U32(a2, 16);
  FIELD_U32(a1, 836) = FIELD_U32(a2, 24);
  v23 = a3;
  if ( a3 >= 1 && *(_DWORD *)a2 == 2 )
    v23 = 14 * (a3 / 0xEu);
  result = *(_DWORD *)(FIELD_U32(a1, 364) + 400);
  v22 = *(_DWORD *)(FIELD_U32(a1, 364) + 400);
  if ( result >= 1 )
  {
    v7 = (unsigned __int16 *)(a2 + 44);
    v8 = 0;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = *((_DWORD *)v7 - 3);
      v12 = (_WORD *)(a1 + v8);
      v13 = a1 + v8 + 576;
      if ( *(_DWORD *)a2 == 2 )
        break;
LABEL_16:
      v15 = a1 + v9;
      *(_DWORD *)(a1 + v9 + 372) = v11;
      v16 = a1 + v9 + 372;
      FIELD_U32(v16, 4) = *((_DWORD *)v7 - 2);
      FIELD_U32(v16, 12) = v23;
      FIELD_U32(v16, 8) = FIELD_U32(a2, 20);
      FIELD_U8(v16, 24) = 0;
      if ( *(_DWORD *)a2 != 2 )
        v13 = 0;
      *(_DWORD *)(a1 + v9 + 388) = v13;
      if ( FIELD_U8(a2, 4) )
      {
        FIELD_U32(v15, 408) = v11;
        FIELD_U32(v15, 412) = *((_DWORD *)v7 - 2);
        FIELD_U32(v15, 420) = FIELD_U32(a1, 832);
        FIELD_U32(v15, 416) = FIELD_U32(a2, 20);
        FIELD_U8(v15, 432) = 1;
        v17 = 0;
        if ( *(_DWORD *)a2 == 2 )
          v17 = v12 + 352;
        FIELD_U32(v15, 424) = v17;
        sub_608CAE20(FIELD_U32(a1, 364), v10, v16, 0);
        v18 = FIELD_U32(a1, 364);
        v19 = v10;
        v16 = a1 + v9 + 408;
      }
      else
      {
        v18 = FIELD_U32(a1, 364);
        v19 = v10;
      }
      sub_608CAE20(v18, v19, v16, 1);
      result = v22;
      ++v10;
      v8 += 64;
      v9 += 72;
      v7 += 26;
      if ( v22 == v10 )
        return result;
    }
    v24[0] = *(v7 - 2) | (*(v7 - 1) << 16);
    v24[1] = *v7 | (v7[1] << 16);
    v24[2] = v7[2] | (v7[3] << 16);
    v24[3] = v7[4] | (v7[5] << 16);
    v24[4] = v7[6] | (v7[7] << 16);
    v24[5] = v7[8] | (v7[9] << 16);
    v24[6] = v7[10] | (v7[11] << 16);
    v21 = v11;
    v24[7] = v7[12] | (v7[13] << 16);
    if ( v23 )
    {
      if ( a4 != 1 )
      {
        v12[288] = v7[14];
        v12[289] = v7[15];
        v12[290] = v7[16];
        sub_608CAE64(a1 + v8 + 576, v24, v23);
        v12 = (_WORD *)(a1 + v8);
        goto LABEL_13;
      }
      v14 = 0;
      *((_DWORD *)v12 + 144) = 0;
    }
    else
    {
      v12[288] = v7[14];
      v12[289] = v7[15];
      v14 = v7[16];
    }
    v12[290] = v14;
LABEL_13:
    if ( FIELD_U8(a2, 4) )
    {
      v12[352] = v7[17];
      v12[353] = v7[18];
      v12[354] = v7[19];
    }
    sub_608CAE4C(FIELD_U32(a1, 364), v10);
    v11 = v21;
    v13 = a1 + v8 + 576;
    v12 = (_WORD *)(a1 + v8);
    goto LABEL_16;
  }
  return result;
}

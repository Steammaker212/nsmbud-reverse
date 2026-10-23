/* sub_6083C318
 * address: 0x6083C318   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083C318(int a1, int a2, unsigned __int8 *a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r6
  float v10; // r1
  float v11; // s2
  int v12; // r1
  float v13; // s0
  char v14; // r1
  char v15; // r2
  char v16; // r0
  char v17; // r1
  char v18; // r0

  dword_60CC7734(a1);
  v5 = sub_6083ACA0(a3[2]);
  dword_60CC7738(a1, v5);
  v6 = sub_6083AB28(a3[1]);
  dword_60CC773C(a1, v6);
  v7 = sub_6083AB3C(*a3);
  dword_60CC7740(a1, v7);
  v8 = *((_DWORD *)a3 + 3);
  v9 = 0;
  FIELD_F32(a1, 32) = (float)v8;
  v10 = *((float *)a3 + 4);
  FIELD_F32(a1, 36) = v10;
  v11 = v10;
  v12 = 0;
  v13 = *((float *)a3 + 2);
  FIELD_F32(a1, 40) = v13;
  if ( v13 != 0.0 )
    v12 = 7;
  if ( v11 != 0.0 )
    v12 = 7;
  if ( v8 )
    v12 = 7;
  dword_60CC7744(a1, v12);
  FIELD_U32(a1, 28) = *((_DWORD *)a3 + 7);
  dword_60CC76D8(a1 + 4);
  dword_60CC76DC(a1 + 4, (*((unsigned __int16 *)a3 + 2) >> 1) & 1);
  if ( a3[24] > 1u )
    v9 = a3[24];
  dword_60CC76E0(a1 + 4, v9);
  dword_60CC76E4(a1 + 4, *((_WORD *)a3 + 13) & 1);
  v14 = FIELD_U8(a1, 45);
  v15 = v14 & 0xFE;
  if ( (*((_WORD *)a3 + 2) & 2) != 0 )
    v15 = v14 | 1;
  FIELD_U8(a1, 45) = v15;
  v16 = v15 & 0xFD;
  if ( (*((_WORD *)a3 + 2) & 4) == 0 )
    v16 = v15 | 2;
  FIELD_U8(a1, 45) = v16;
  v17 = v16 & 0xFB;
  if ( (*((_WORD *)a3 + 2) & 1) == 0 )
    v17 = v16 | 4;
  FIELD_U8(a1, 45) = v17;
  v18 = v17 & 0xF7;
  if ( a3[6] == 1 )
    v18 = v17 | 8;
  FIELD_U8(a1, 45) = v18;
  FIELD_U8(a1, 44) = 1;
  return 1;
}

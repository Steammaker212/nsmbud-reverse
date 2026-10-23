/* sub_6044F890
 * address: 0x6044F890   size: 1072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044F890(int a1)
{
  int v2; // r0
  int v3; // r1
  int i; // r0
  unsigned int v5; // r6
  int v6; // r7
  _DWORD *v7; // r6
  int v8; // r7
  int v9; // r4
  int v10; // r11
  int v11; // r6
  int v12; // r6
  int v13; // r6
  int v14; // r6
  int v15; // r6
  int v16; // r6
  unsigned int v17; // r1
  int result; // r0
  _BYTE v19[12]; // [sp+8h] [bp-48h] BYREF
  _DWORD v20[3]; // [sp+14h] [bp-3Ch] BYREF
  _DWORD v21[12]; // [sp+20h] [bp-30h] BYREF

  v2 = sub_608DE334(0x1Cu, 0, 4);
  if ( v2 )
  {
    v3 = 7;
    FIELD_U32(a1, 20) = 7;
    FIELD_U32(a1, 24) = v2;
  }
  else
  {
    v3 = FIELD_U32(a1, 20);
    if ( v3 < 1 )
      goto LABEL_10;
  }
  for ( i = 0; i < v3; ++i )
  {
    v5 = dword_60B023BC[i];
    v6 = 0;
    if ( FIELD_U32(dword_60C9CD58, 16) > v5 )
      v6 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 4 * v5);
    v7 = *(_DWORD **)(a1 + 24);
    if ( v3 > (unsigned int)i )
      v7 += i;
    *v7 = v6;
    v3 = FIELD_U32(a1, 20);
  }
LABEL_10:
  if ( FIELD_S32(a1, 868) >= 1 )
  {
    v8 = 20;
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = dword_60CC73E8(FIELD_U32(a1, 896));
      *(_DWORD *)(v11 + sub_60913FB4(a1 + 884) + v8 - 20) = v9;
      v12 = dword_60CC73E8(FIELD_U32(a1, 896));
      *(_DWORD *)(v12 + sub_60913FB4(a1 + 884) + v8 - 16) = v9 + 1;
      v13 = dword_60CC73E8(FIELD_U32(a1, 896));
      *(_DWORD *)(v13 + sub_60913FB4(a1 + 884) + v8 - 12) = v9 + 2;
      v14 = dword_60CC73E8(FIELD_U32(a1, 896));
      *(_DWORD *)(v14 + sub_60913FB4(a1 + 884) + v8 - 8) = v9 + 2;
      v15 = dword_60CC73E8(FIELD_U32(a1, 896));
      *(_DWORD *)(v15 + sub_60913FB4(a1 + 884) + v8 - 4) = v9 + 3;
      v16 = dword_60CC73E8(FIELD_U32(a1, 896));
      ++v10;
      *(_DWORD *)(v16 + sub_60913FB4(a1 + 884) + v8) = v9;
      v9 += 4;
      v8 += 24;
    }
    while ( v10 < FIELD_U32(a1, 868) );
  }
  FIELD_U32(a1, 856) = 0;
  FIELD_U32(a1, 860) = 0;
  sub_60913A6C(v20, a1 + 884, 0);
  v17 = FIELD_U32(a1, 892);
  v21[0] = v20[0];
  v21[1] = v20[1];
  v21[2] = v20[2];
  sub_60919D48(a1 + 672, v21, 2, v17 >> 2);
  FIELD_U32(a1, 680) = 4;
  sub_60913A6C(v19, a1 + 912, 0);
  sub_609225B8(a1 + 64, v19, 136, 136 * FIELD_U32(a1, 876));
  sub_60922768(a1 + 64, 0, 34, 0, 0);
  sub_60922768(a1 + 64, 1, 34, 12, 0);
  sub_60922768(a1 + 64, 2, 22, 24, 0);
  sub_60922768(a1 + 64, 3, 22, 32, 0);
  sub_60922768(a1 + 64, 4, 46, 40, 0);
  sub_60922768(a1 + 64, 5, 46, 56, 0);
  sub_60922768(a1 + 64, 6, 46, 72, 0);
  sub_60922768(a1 + 64, 7, 46, 88, 0);
  sub_60922768(a1 + 64, 8, 46, 104, 0);
  sub_60922768(a1 + 64, 9, 46, 120, 0);
  sub_60921D30(a1 + 336, 1, 0);
  sub_60921DF0(a1 + 336, 0, a1 + 64, 0);
  sub_60921DF0(a1 + 336, 5, a1 + 64, 1);
  sub_60921DF0(a1 + 336, 2, a1 + 64, 2);
  sub_60921DF0(a1 + 336, 3, a1 + 64, 3);
  sub_60921DF0(a1 + 336, 6, a1 + 64, 4);
  sub_60921DF0(a1 + 336, 7, a1 + 64, 5);
  sub_60921DF0(a1 + 336, 8, a1 + 64, 6);
  sub_60921DF0(a1 + 336, 9, a1 + 64, 7);
  sub_60921DF0(a1 + 336, 10, a1 + 64, 8);
  sub_60921DF0(a1 + 336, 11, a1 + 64, 9);
  sub_60921F90(a1 + 336);
  result = sub_60922730(a1 + 64, 0, FIELD_U32(a1, 332));
  FIELD_U8(a1, 754) = 1;
  FIELD_U8(a1, 841) = 1;
  return result;
}

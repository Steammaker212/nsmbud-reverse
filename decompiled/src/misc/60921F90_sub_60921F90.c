/* sub_60921F90
 * address: 0x60921F90   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60921F90(int a1)
{
  int v2; // r10
  int v3; // r5
  int i; // r4
  int v5; // r9
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r2
  int v9; // r11
  int v10; // r0
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r6
  int result; // r0
  int v16; // [sp+8h] [bp-28h]

  v2 = a1 + 144;
  dword_60CC778C(a1 + 144);
  v3 = a1 + 208;
  dword_60CC77A0(a1 + 208);
  dword_60CC778C(a1 + 148);
  dword_60CC77A0(a1 + 216);
  dword_60CC778C(a1 + 152);
  dword_60CC77A0(a1 + 224);
  dword_60CC778C(a1 + 156);
  dword_60CC77A0(a1 + 232);
  dword_60CC778C(a1 + 160);
  dword_60CC77A0(a1 + 240);
  dword_60CC778C(a1 + 164);
  dword_60CC77A0(a1 + 248);
  dword_60CC778C(a1 + 168);
  dword_60CC77A0(a1 + 256);
  dword_60CC778C(a1 + 172);
  dword_60CC77A0(a1 + 264);
  dword_60CC778C(a1 + 176);
  dword_60CC77A0(a1 + 272);
  dword_60CC778C(a1 + 180);
  dword_60CC77A0(a1 + 280);
  dword_60CC778C(a1 + 184);
  dword_60CC77A0(a1 + 288);
  dword_60CC778C(a1 + 188);
  dword_60CC77A0(a1 + 296);
  dword_60CC778C(a1 + 192);
  dword_60CC77A0(a1 + 304);
  dword_60CC778C(a1 + 196);
  dword_60CC77A0(a1 + 312);
  dword_60CC778C(a1 + 200);
  dword_60CC77A0(a1 + 320);
  dword_60CC778C(a1 + 204);
  v16 = a1;
  dword_60CC77A0(a1 + 328);
  for ( i = 0; i != 64; i += 4 )
  {
    v5 = v2 + 2 * i;
    v6 = *(_DWORD *)(v5 - 140);
    if ( v6 )
    {
      v7 = *(unsigned __int8 *)(v5 - 136);
      v8 = 0;
      v9 = v6 + 56;
      v10 = v6 + 56;
      if ( v7 < 0x10 )
        v8 = (char)v7;
      dword_60CC7790(v2 + i, *(_DWORD *)(v10 + 12 * v8), *(_DWORD *)(v10 + 12 * v8 + 4));
      dword_60CC7794(v2 + i, *(char *)(v5 - 135));
      v11 = *(unsigned __int8 *)(v5 - 136);
      v12 = 0;
      if ( v11 < 0x10 )
        v12 = (char)v11;
      if ( *(_BYTE *)(v9 + 12 * v12 + 9) )
        dword_60CC77A8(v16 + 8 * *(char *)(v5 - 135) + 208, 1);
    }
  }
  v13 = FIELD_U32(v16, 132);
  if ( v13 )
  {
    v14 = FIELD_U32(v16, 136);
    do
    {
      if ( *(_DWORD *)v14 )
        dword_60CC77A4(v3, *(_DWORD *)(*(_DWORD *)v14 + 260));
      v3 += 8;
      --v13;
      v14 += 4;
    }
    while ( v13 );
  }
  result = FIELD_U8(v16, 140) | 1;
  FIELD_U8(v16, 140) = result;
  return result;
}

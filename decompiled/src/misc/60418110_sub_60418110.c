/* sub_60418110
 * address: 0x60418110   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418110(unsigned int a1, _DWORD *a2)
{
  int v3; // r6
  int v4; // r0
  _DWORD *v5; // r0
  unsigned int v6; // r7
  int v7; // s16
  int v8; // s18
  int v9; // s20
  int v10; // s22
  int v11; // r0
  int v12; // r1
  int v13; // r7
  int v14; // r1
  float v16; // [sp+8h] [bp-200h] BYREF
  _BYTE v17[80]; // [sp+10h] [bp-1F8h] BYREF
  int v18; // [sp+60h] [bp-1A8h] BYREF
  __int16 v19; // [sp+168h] [bp-A0h] BYREF
  char v20; // [sp+16Ah] [bp-9Eh]
  int v21; // [sp+16Ch] [bp-9Ch]

  if ( a1 >= 5 )
    a1 = 0;
  v3 = *(_DWORD *)(dword_60C9BAAC + 52 * a1 + 16);
  v4 = sub_6090B350(&v19);
  v19 = 0;
  v20 = 0;
  v21 &= ~1u;
  sub_6090B4B0(v4, a2[10]);
  sub_6090B260(a2[3], a2[10]);
  sub_6090E560(a2[8], a2[10], a2[3]);
  agl_TextureSampler_copy_ref(v17, v3);
  v5 = (_DWORD *)a2[8];
  v6 = FIELD_U16(v3, 24);
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  v10 = v5[4];
  v11 = sub_609200A0(v3);
  v12 = FIELD_U16(v3, 26);
  if ( v6 <= 1 )
    v13 = 1;
  if ( v11 > v12 )
    v14 = v11;
  ((void (__fastcall *)(_DWORD, _BYTE *, _DWORD, float *, int *))sub_6093F214)(
    a2[10],
    v17,
    a2[8],
    &v16,
    &dword_60B3B944);
  sub_609175E4(&v18);
  return sub_60917AE4(v17);
}

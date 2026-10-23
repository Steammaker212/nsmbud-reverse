/* sub_6049D5B0
 * address: 0x6049D5B0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6049D5B0(int a1)
{
  int v2; // r1
  _DWORD *v3; // r7
  int v4; // r0
  unsigned int v5; // r9
  char *v6; // r5
  unsigned int v7; // r1
  int v8; // r0
  _DWORD *v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  unsigned int v14; // r1
  _DWORD *v15; // r1
  _DWORD v17[3]; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v18[12]; // [sp+10h] [bp-30h] BYREF

  v3 = (_DWORD *)(a1 + 22496);
  v2 = FIELD_U32(a1, 22496);
  v4 = v2 - 2;
  if ( v2 - 2 > 2 )
    v4 = 0;
  if ( v2 < 2 )
    v4 = 0;
  if ( v2 >= 1 && v4 != 12 )
  {
    v5 = 0;
    v6 = (char *)&unk_60B02C18 + 16 * v4;
    do
    {
      v7 = *(_DWORD *)&v6[4 * v5];
      v8 = FIELD_U32(a1, 3632);
      if ( v7 >= 0xC )
        v7 = 0;
      if ( v8 )
      {
        v9 = *(_DWORD **)(a1 + 4 * v7 + 20204);
        v10 = v9[23];
        v11 = v9[27];
        v12 = v9[31];
        v18[0] = v10;
        v18[1] = v11;
        v18[2] = v12;
        sub_6090A384(v8, v17, v18);
        v13 = v17[0];
      }
      else
      {
        v13 = 0;
        memset(v17, 0, sizeof(v17));
      }
      v14 = 0;
      if ( v5 < 7 )
        v14 = v5;
      ++v5;
      v15 = (_DWORD *)(a1 + 12 * v14);
      v15[5599] = v13;
      v15[5600] = 0;
      v15[5601] = 0;
    }
    while ( (signed int)v5 < *v3 );
  }
  return sub_604A2298(a1);
}

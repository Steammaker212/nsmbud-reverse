/* sub_6024AFB4
 * address: 0x6024AFB4   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024AFB4(int a1)
{
  _BYTE *v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r4
  char v6; // r0
  _DWORD *v7; // r0
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r3
  int v11; // r2
  unsigned int v12; // r0
  bool v13; // cc
  _BYTE *v14; // r2
  unsigned int v15; // r4
  unsigned int v16; // r4
  int v17; // r2
  _BYTE *v18; // r1
  char v19; // r4
  int v20; // r3
  int result; // r0
  _WORD *v22; // r6
  int v23; // t1

  v2 = (_BYTE *)(a1 + 15421);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v6 = FIELD_U8(a1, 15421) + 1;
  *v2 = v6;
  v7 = (_DWORD *)(a1 + 24 * (v6 & 0x7F));
  v7[3086] = v3;
  v7[3087] = v4;
  v7[3088] = v5;
  v8 = FIELD_U32(a1, 156);
  v9 = FIELD_U32(a1, 160);
  v7[3091] = FIELD_U32(a1, 164);
  v7[3090] = v9;
  v7[3089] = v8;
  if ( !FIELD_U8(a1, 15461) )
  {
    v17 = -18;
    v18 = (_BYTE *)(a1 + 15417);
    while ( 1 )
    {
      v20 = (unsigned __int8)*v18;
      v19 = -1;
      if ( v17 + v20 <= 0 )
      {
        if ( v17 + v20 >= 0 )
          goto LABEL_17;
        v19 = 1;
      }
      *v18 = v19 + v20;
LABEL_17:
      ++v18;
      v17 -= 12;
      if ( (unsigned int)v18 > a1 + 15420 )
        goto LABEL_18;
    }
  }
  v10 = 36;
  v11 = FIELD_S8(a1, 15422);
  v12 = (unsigned __int8)v11;
  v13 = v11 < 0;
  if ( v11 >= 0 )
    v12 = (unsigned __int8)v11 + 1;
  v14 = (_BYTE *)(a1 + 15417);
  if ( !v13 )
    FIELD_U8(a1, 15422) = v12;
  do
  {
    v15 = (unsigned __int8)*v14;
    if ( v15 < v12 )
    {
      v16 = v15 + 1;
      if ( v16 > v10 )
        LOBYTE(v16) = v10;
      *v14 = v16;
    }
    ++v14;
    v10 += 24;
  }
  while ( (unsigned int)v14 <= a1 + 15420 );
LABEL_18:
  FIELD_U32(a1, 15456) -= 0x1000000;
  sub_6024B130(a1);
  result = FIELD_U8(a1, 536);
  if ( !FIELD_U8(a1, 536) )
  {
    v23 = FIELD_S16(a1, 15452);
    v22 = (_WORD *)(a1 + 15452);
    result = v23;
    if ( v23 >= 0 )
    {
      if ( (__int16)--result <= 0 )
        result = 0;
      *v22 = result;
    }
  }
  return result;
}

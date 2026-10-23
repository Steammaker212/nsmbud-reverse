/* sub_6086F6F8
 * address: 0x6086F6F8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F6F8(int a1, int a2)
{
  int v4; // r9
  int v5; // r5
  int v6; // r7
  int v7; // r4
  int v8; // r11
  int v9; // r6
  int v10; // r0
  int v11; // r0
  int v12; // r11
  int v13; // r1
  int result; // r0
  int v15; // r1
  int v16; // r7
  unsigned int v17; // r6

  v4 = FIELD_U8(a1, 168);
  if ( FIELD_U8(a1, 168) )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = FIELD_U32(a1, 72);
      v9 = FIELD_U32(a1, 64) + v5;
      v10 = sub_6083B2A0(v9);
      sub_6083B2BC(v10, a2, (float *)(v8 + v6));
      v11 = FIELD_U32(a1, 80);
      v12 = v7 + 1;
      v13 = 0;
      if ( v11 )
        v13 = *(_DWORD *)(v11 + 16 * v7 + 32) + 2;
      sub_608A7DA4(v9, v13);
      v5 += 120;
      v6 += 32;
      ++v7;
    }
    while ( v4 != v12 );
  }
  result = FIELD_U16(a1, 170);
  if ( FIELD_U16(a1, 170) )
  {
    v15 = 0;
    do
    {
      v16 = FIELD_U32(a1, 88);
      v17 = *(unsigned __int8 *)(v16 + 32 * v15 + 16);
      if ( v17 >= 0x1C && !*(_DWORD *)(v16 + 32 * v15) )
      {
        *(_DWORD *)(v16 + 32 * v15) = off_60C5A7E4[v17 - 28];
        *(_BYTE *)(v16 + 32 * v15 + 28) = 1;
      }
      ++v15;
    }
    while ( result != v15 );
  }
  return result;
}

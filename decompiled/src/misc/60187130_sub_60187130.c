/* sub_60187130
 * address: 0x60187130   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60187130(int a1, int a2)
{
  int v3; // r6
  int v4; // r7
  int v5; // r9
  unsigned int v6; // r11
  signed int v7; // r10
  int v8; // r4
  int v9; // r2
  int v10; // r3
  int v11; // r6
  int v12; // r0
  unsigned int v13; // r1
  int result; // r0
  int v15; // [sp+8h] [bp-40h] BYREF
  int v16; // [sp+Ch] [bp-3Ch]
  int v17; // [sp+10h] [bp-38h]
  int v18; // [sp+14h] [bp-34h]
  int v19; // [sp+18h] [bp-30h]
  int v20; // [sp+1Ch] [bp-2Ch]

  v3 = a1;
  sub_60186EA8(a1);
  v4 = 0;
  v5 = 0;
  v17 = -1;
  v16 = -1;
  v15 = -1;
  v18 = 0;
  v19 = 6;
  v20 = -1;
  do
  {
    if ( ((0x5Fu >> v5) & 1) != 0 )
    {
      v6 = 0;
      v7 = dword_60AFA0E0[v5];
      do
      {
        v8 = v3;
        v9 = *(char *)(a2 + v4 + 4);
        v10 = *(unsigned __int8 *)(a2 + v4 + 1);
        v11 = *(unsigned __int8 *)(a2 + v4 + 2);
        v12 = *(unsigned __int8 *)(a2 + v4 + 3);
        v15 = *(char *)(a2 + v4);
        v16 = v10;
        v17 = v11;
        v19 = 6;
        v20 = v9;
        v18 = v12;
        v13 = 0;
        v3 = v8;
        if ( v6 < 5 )
          v13 = v6;
        sub_6019EC50(v8 + 120 * v5 + 24 * v13, &v15);
        ++v6;
        v4 += 5;
      }
      while ( (int)v6 < v7 );
    }
    ++v5;
  }
  while ( v5 != 9 );
  qmemcpy((void *)(v3 + 1080), (const void *)(a2 + v4), 0x12u);
  result = *(unsigned __int8 *)(a2 + v4 + 18);
  FIELD_U8(v3, 1098) = result;
  return result;
}

/* sub_609892CC
 * address: 0x609892CC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609892CC(_BYTE *a1, int a2, _DWORD *a3, int a4, int a5)
{
  __int16 v5; // r1
  unsigned int v6; // r3
  int v7; // r1
  unsigned int v8; // r8
  unsigned __int8 *v9; // r4
  int v10; // r5
  int v11; // r7
  int v12; // r3
  int v13; // r6
  int v14; // r5
  int v15; // r1

  a3[1] = a5;
  if ( !a4 )
  {
    if ( FIELD_U8(a2, 8) )
      v5 = FIELD_U8(a2, 9);
    else
      v5 = 255;
    a1[53] = v5;
    v6 = (unsigned __int8)a1[54] * v5;
    v7 = (unsigned __int8)a1[55] * v5;
    v8 = v6 / 0xFF;
    v9 = (unsigned __int8 *)(*a3 + 4);
    v10 = *v9;
    v11 = *(unsigned __int8 *)(*a3 + 6);
    v12 = *(unsigned __int8 *)(*a3 + 7);
    v13 = *(unsigned __int8 *)(*a3 + 5);
    *(v9 - 1) = v8;
    v14 = v10 | (v13 << 8);
    v15 = ((2155905153u * (unsigned __int64)(unsigned int)v7) >> 32 << 17) & 0xFF000000
        | (v14 | ((v11 | (v12 << 8)) << 16)) & 0xFFFFFF;
    *v9 = v14;
    v9[3] = HIBYTE(v15);
    v9[2] = BYTE2(v15);
    v9[1] = BYTE1(v15);
    *(_BYTE *)(*a3 + 49) = a1[53];
  }
  return 0;
}

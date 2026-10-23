/* sub_60182F24
 * address: 0x60182F24   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60182F24(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r4
  unsigned int v6; // r5
  bool v7; // zf
  unsigned int v8; // r7
  int v9; // r0
  int v10; // r8
  unsigned int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int result; // r0

  v5 = a3;
  v6 = a2;
  v7 = a5 == 128;
  if ( a5 != 128 )
    v7 = a5 == 512;
  if ( v7 || a5 == 256 )
  {
    v8 = 0;
    if ( a4 >= 0x100 )
      a4 = 0;
    v9 = a1 + 1096 * a4;
    v10 = FIELD_U32(v9, 1112);
    v11 = sub_6081F5DC(dword_60CC6D78, a2, a3, v9 + 44);
    if ( v6 >= 9 )
      v6 = 0;
    if ( v5 >= 2 )
      v5 = 0;
    if ( v11 < 0x80 )
      v8 = v11;
    v12 = *(_DWORD *)(dword_60CC6D78 + 9216 * v6 + 4608 * v5 + 36 * v8 + 15572);
    v13 = v10 & a5;
    if ( (v12 & 4) != 0 )
      v13 |= 0x80u;
    if ( a5 != 128 )
      v13 = v10 & a5;
    v14 = v13;
    if ( (v12 & 8) != 0 )
      v14 = v13 | 0x100;
    if ( a5 != 256 )
      v14 = v13;
    result = v14;
    if ( (*(_DWORD *)(dword_60CC6D78 + 9216 * v6 + 4608 * v5 + 36 * v8 + 15572) & 0x40) != 0 )
      result = v14 | 0x200;
    if ( a5 != 512 )
      return v14;
  }
  else
  {
    if ( a4 >= 0x100 )
      a4 = 0;
    return *(_DWORD *)(a1 + 1096 * a4 + 1112) & a5;
  }
  return result;
}

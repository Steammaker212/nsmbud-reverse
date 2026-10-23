/* sub_60959318
 * address: 0x60959318   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60959318(unsigned __int8 *a1, int a2)
{
  int result; // r0
  bool v4; // zf
  int *v5; // r5
  int v6; // r8
  int v7; // r7
  _DWORD v8[12]; // [sp+8h] [bp-30h] BYREF

  result = a1[361];
  v4 = result == 0;
  if ( result )
  {
    result = *a1;
    v4 = result == 0;
  }
  if ( !v4 )
  {
    v5 = (int *)(a1 + 8);
    v6 = a2 + 8;
    v7 = 0;
    do
    {
      memset(v8, 0, 16);
      sub_60835528(*(v5 - 1), (int)v8);
      sub_60835D28(v6, v7, v8, *v5, v5[1]);
      result = *a1;
      ++v7;
      v5 += 3;
    }
    while ( v7 < result );
  }
  return result;
}

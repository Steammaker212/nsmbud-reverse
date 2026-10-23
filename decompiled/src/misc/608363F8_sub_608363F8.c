/* sub_608363F8
 * address: 0x608363F8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608363F8(unsigned int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v5; // r2
  bool v6; // cc
  bool v7; // zf
  bool v8; // cc
  int v9; // r2

  v2 = a2 - 26;
  if ( (unsigned int)(a2 - 26) <= 0x20 )
  {
    v3 = 4;
    if ( (unsigned int)(a2 - 39) <= 0x13 )
      v3 = dword_60B0E1F0[a2 - 39];
    a1 = (a1 + v3 - 1) / v3;
  }
  if ( v2 < 0x22 )
    return dword_60B0E240[v2] * a1;
  v5 = 1;
  v6 = a2 < 3;
  if ( a2 >= 3 )
  {
    v5 = 2;
    v6 = a2 < 11;
  }
  if ( v6 )
    return v5 * a1;
  v5 = 4;
  v7 = a2 == 21;
  v8 = a2 < 21;
  if ( a2 >= 21 )
  {
    v5 = 8;
    v7 = a2 == 24;
    v8 = a2 < 24;
  }
  if ( v8 )
    return v5 * a1;
  v9 = 16;
  if ( v7 )
    v9 = 12;
  return v9 * a1;
}

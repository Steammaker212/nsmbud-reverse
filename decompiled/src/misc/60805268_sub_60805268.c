/* sub_60805268
 * address: 0x60805268   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60805268(_DWORD *a1, _BYTE *a2)
{
  int v3; // r7
  int v5; // r4
  int v6; // r1
  int v7; // r2
  int result; // r0
  bool v9; // [sp+7h] [bp-19h] BYREF

  v3 = 0;
  *a2 = 0;
  v9 = 0;
  v5 = a1[7];
  if ( !v5 )
    return -1;
  while ( 1 )
  {
    v6 = a1[5];
    v7 = a1[6];
    if ( v3 + v7 >= v6 )
      v7 -= v6;
    result = sub_60803B6C((_BYTE *)(a1[4] + 20 * (v3 + v7)), &v9);
    if ( result >= 0 )
      break;
    if ( v5 == ++v3 )
      return result;
  }
  *a2 = v9;
  return result;
}

/* sub_6081F070
 * address: 0x6081F070   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F070(int a1, int *a2)
{
  int v2; // r3
  int v3; // r12
  int v4; // lr
  _DWORD *v5; // r2
  int result; // r0
  int v7; // r1
  bool v8; // zf

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = (_DWORD *)(a1 + 548);
  result = 0;
  while ( 1 )
  {
    v7 = *(v5 - 2);
    v8 = v7 == v2;
    if ( v7 == v2 )
      v8 = *(v5 - 1) == v3;
    if ( v8 && *v5 == v4 )
      break;
    ++result;
    v5 += 3;
    if ( result >= 18 )
      return -1;
  }
  return result;
}

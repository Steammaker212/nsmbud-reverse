/* sub_60727950
 * address: 0x60727950   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60727950(_DWORD *a1, int a2)
{
  unsigned int v2; // r12
  int v3; // r3
  int v4; // r2
  bool v5; // zf
  unsigned __int16 *v6; // lr
  unsigned int v7; // r3

  v3 = a1[14];
  v4 = 0;
  v5 = v3 == 0;
  if ( v3 )
  {
    v2 = a1[44];
    v5 = v2 == 0;
  }
  if ( v5 )
    return v4;
  v6 = (unsigned __int16 *)(v3 + 2);
  v7 = 0;
  while ( *((unsigned __int8 *)v6 - 2) != a2 )
  {
    ++v7;
    v6 += 6;
    if ( v7 >= v2 )
      return 0;
  }
  if ( v6 != (unsigned __int16 *)2 )
    return a1[15] + 20 * *v6;
  return 0;
}

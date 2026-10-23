/* sub_6085F594
 * address: 0x6085F594   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085F594(_WORD *a1, int a2, int a3)
{
  int result; // r0
  int v5; // lr
  unsigned __int16 *v6; // r3
  int v7; // r12
  int v8; // r4
  bool v9; // zf

  result = -1;
  v5 = (unsigned __int16)*a1;
  if ( *a1 )
  {
    v6 = a1 + 2;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(v6 - 1);
      v9 = v8 == a2;
      if ( v8 == a2 )
        v9 = *v6 == a3;
      if ( v9 )
        break;
      ++v7;
      v6 += 3;
      if ( v7 >= v5 )
        return result;
    }
    return v6[1];
  }
  return result;
}

/* sub_608FDFB8
 * address: 0x608FDFB8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608FDFB8(int a1, _BYTE *a2, signed int a3)
{
  signed int v4; // r5
  _BYTE *v5; // r6
  signed int v6; // r0
  int v7; // r2

  v4 = a3;
  v5 = *(_BYTE **)a1;
  if ( *(_BYTE **)a1 == a2 )
    return 0;
  v6 = FIELD_U32(a1, 8);
  if ( a3 == -1 )
  {
    v7 = 0;
    while ( a2[v7++] )
      ;
    v4 = v7 - 1;
  }
  if ( v4 >= v6 )
    v4 = v6 - 1;
  if ( v4 < 1 )
  {
    v4 = 0;
    *v5 = 0;
  }
  else
  {
    qmemcpy(v5, a2, v4);
    v5[v4] = 0;
  }
  FIELD_U32(a1, 4) = v4;
  return v4;
}

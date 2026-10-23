/* sub_60455378
 * address: 0x60455378   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60455378(int *a1, int a2)
{
  int v2; // r3
  _BOOL4 result; // r0
  int v5; // r1
  bool v6; // zf

  v2 = 1380995656;
  v6 = a2 == 0;
  result = 0;
  v5 = *a1;
  if ( !v6 )
    v2 = 1213354066;
  v6 = v2 == v5;
  if ( v2 == v5 )
    v6 = *((_BYTE *)a1 + 4) == 1;
  if ( v6 )
    return *((_BYTE *)a1 + 5) == 0;
  return result;
}

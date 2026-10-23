/* sub_607EB60C
 * address: 0x607EB60C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_607EB60C(_BYTE *a1)
{
  int v2; // r4
  _BYTE *result; // r0
  bool v4; // zf

  v2 = (int)(a1 + 568);
  sub_60560E3C((int)(a1 + 568));
  result = a1 + 64540;
  v4 = a1[64540] == 0;
  if ( a1[64540] )
    v4 = a1[64541] == 0;
  if ( !v4 && !a1[620] )
  {
    *result = 0;
    sub_60561088(v2, 0, 1);
    return (_BYTE *)sub_60560E3C(v2);
  }
  return result;
}

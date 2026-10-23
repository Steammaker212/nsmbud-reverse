/* sub_6044406C
 * address: 0x6044406C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6044406C(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60BFAEE0;
  v2 = a1 + 17;
  sub_60422F3C(dword_60C9BB38, (int)a1);
  sub_60924350(v2);
  return sead__IDisposer__dtor(a1);
}

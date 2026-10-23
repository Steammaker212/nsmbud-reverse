/* sub_604440B8
 * address: 0x604440B8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604440B8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60BFAEE0;
  v2 = a1 + 17;
  sub_60422F3C(dword_60C9BB38, (int)a1);
  sub_60924350(v2);
  v3 = sead__IDisposer__dtor(a1);
  operator_delete(v3);
}

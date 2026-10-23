/* sub_60721310
 * address: 0x60721310   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60721310(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C21D74;
  if ( (_DWORD *)dword_60CBD858 == a1 )
  {
    dword_60CBD858 = 0;
    sub_6072166C(dword_60CBD85C);
    dword_60CBD85C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

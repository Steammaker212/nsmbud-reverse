/* sub_60532E04
 * address: 0x60532E04   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60532E04(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C003FC;
  if ( (_DWORD *)dword_60CAADA4 == a1 )
  {
    dword_60CAADA4 = 0;
    sub_605369BC(dword_60CAADA8);
    dword_60CAADA8 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

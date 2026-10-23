/* sub_60497374
 * address: 0x60497374   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60497374(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFDBC0;
  if ( (_DWORD *)dword_60CA0598 == a1 )
  {
    dword_60CA0598 = 0;
    sub_60498EB0(dword_60CA059C);
    dword_60CA059C = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

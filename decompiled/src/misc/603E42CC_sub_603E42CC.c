/* sub_603E42CC
 * address: 0x603E42CC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603E42CC(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF8D5C;
  if ( dword_60C995D0 )
    sub_603E5610(dword_60C995D0, a1);
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

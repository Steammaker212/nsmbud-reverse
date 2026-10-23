/* sub_604458F8
 * address: 0x604458F8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_604458F8(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BFAEF0;
  if ( (_DWORD *)dword_60C9CD54 == a1 )
  {
    dword_60C9CD54 = 0;
    sub_6091E720(dword_60C9CD58 + 124);
    dword_60C9CD58 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

/* sub_6077AED4
 * address: 0x6077AED4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6077AED4(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C24990;
  if ( (_DWORD *)dword_60CBFBBC == a1 )
  {
    dword_60CBFBBC = 0;
    dword_60CBFBC0 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}

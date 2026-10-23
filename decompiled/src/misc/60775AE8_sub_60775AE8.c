/* sub_60775AE8
 * address: 0x60775AE8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60775AE8(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60C248EC;
  if ( (_DWORD *)dword_60CBFA8C == a1 )
  {
    dword_60CBFA8C = 0;
    dword_60CBFA90 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}

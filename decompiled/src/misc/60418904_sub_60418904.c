/* sub_60418904
 * address: 0x60418904   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60418904(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BF9D38;
  if ( (_DWORD *)dword_60C9BAF0 == a1 )
  {
    dword_60C9BAF0 = 0;
    sub_60418D0C(dword_60C9BAF4);
    dword_60C9BAF4 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

/* sub_60237E34
 * address: 0x60237E34   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60237E34(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BD95D0;
  if ( (_DWORD *)dword_60C8D9D8 == a1 )
  {
    dword_60C8D9D8 = 0;
    sub_60237FD0(dword_60C8D9DC);
    dword_60C8D9DC = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

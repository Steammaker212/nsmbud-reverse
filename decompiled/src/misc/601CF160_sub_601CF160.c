/* sub_601CF160
 * address: 0x601CF160   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601CF160(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BD6B54;
  if ( (_DWORD *)dword_60C8AEEC == a1 )
  {
    dword_60C8AEEC = 0;
    dword_60C8AEF0 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}

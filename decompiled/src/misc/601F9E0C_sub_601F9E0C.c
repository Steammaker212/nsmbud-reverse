/* sub_601F9E0C
 * address: 0x601F9E0C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601F9E0C(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BD7C68;
  if ( (_DWORD *)dword_60C8BF54 == a1 )
  {
    dword_60C8BF54 = 0;
    dword_60C8BF58 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}

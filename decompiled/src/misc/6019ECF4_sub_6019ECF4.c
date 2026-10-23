/* sub_6019ECF4
 * address: 0x6019ECF4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6019ECF4(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60BD5E9C;
  if ( (_DWORD *)dword_60C89DFC == a1 )
  {
    dword_60C89DFC = 0;
    sub_601AAD98(dword_60C89E00 + 164);
    dword_60C89E00 = 0;
  }
  v2 = sead__IDisposer__dtor(a1);
  operator_delete(v2);
}

/* sub_6047F600
 * address: 0x6047F600   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6047F600(_DWORD *a1)
{
  _DWORD *v1; // r0

  *a1 = off_60BFD32C;
  if ( (_DWORD *)dword_60C9EBB0 == a1 )
  {
    dword_60C9EBB0 = 0;
    dword_60C9EBB4 = 0;
  }
  v1 = sead__IDisposer__dtor(a1);
  operator_delete(v1);
}

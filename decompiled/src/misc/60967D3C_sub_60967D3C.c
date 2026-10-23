/* sub_60967D3C
 * address: 0x60967D3C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60967D3C(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5EBB4;
  v2 = (void *)a1[7];
  if ( v2 )
  {
    operator_delete_8DE3FC(v2);
    a1[6] = 0;
    a1[7] = 0;
  }
  sead__CriticalSection__dtor(a1 + 8);
  return a1;
}

/* sub_608FBF98
 * address: 0x608FBF98   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608FBF98(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C5CB24;
  if ( (_DWORD *)dword_60CCEF70 == a1 )
  {
    dword_60CCEF70 = 0;
    v2 = *(void **)(dword_60CCEF74 + 28);
    if ( v2 )
      operator_delete_8DE3FC(v2);
    dword_60CCEF74 = 0;
  }
  return sead__IDisposer__dtor(a1);
}

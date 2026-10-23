/* BanzaiBill_vf139
 * address: 0x603222F8   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BanzaiBill_vf139(_DWORD *result)
{
  int v1; // r2
  int v2; // r2

  v1 = result[1824];
  if ( v1 )
  {
    v2 = v1 - 1;
    result[1824] = v2;
    if ( v2 == 1 )
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 76))(result);
  }
  return result;
}

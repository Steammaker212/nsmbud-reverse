/* sub_607CC404
 * address: 0x607CC404   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CC404(int result, int a2, _DWORD *a3)
{
  bool v4; // zf

  v4 = a2 == 0;
  if ( a2 )
    v4 = a3 == 0;
  if ( !v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 160))(result);
    *a3 = 1082130432;
    return 1082130432;
  }
  return result;
}

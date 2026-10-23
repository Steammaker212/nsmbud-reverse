/* sub_608E57AC
 * address: 0x608E57AC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E57AC(int a1, _DWORD *a2, int a3)
{
  bool v5; // zf
  int result; // r0

  v5 = a3 == 0;
  result = 0;
  if ( a3 )
    v5 = FIELD_U32(a1, 80) == 0;
  if ( !v5 )
  {
    *a2 = *(_DWORD *)(sub_608E78F8(a1, a3) + 8);
    return 1;
  }
  return result;
}

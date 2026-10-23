/* sub_608DE510
 * address: 0x608DE510   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DE510(int result, _DWORD *a2)
{
  _DWORD *v2; // r2

  v2 = *(_DWORD **)(result + 4);
  FIELD_U32(result, 4) = a2;
  *a2 = result;
  a2[1] = v2;
  if ( v2 )
    *v2 = a2;
  return result;
}

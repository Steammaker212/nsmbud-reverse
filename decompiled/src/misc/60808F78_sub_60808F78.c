/* sub_60808F78
 * address: 0x60808F78   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808F78(int *a1, int a2)
{
  int v2; // r0
  int result; // r0

  v2 = *a1;
  if ( v2 )
    result = FIELD_U32(v2, 220);
  else
    result = -1;
  if ( result == *(_DWORD *)a2 )
  {
    FIELD_U8(a2, 4) = 1;
    return 1;
  }
  return result;
}

/* sub_60917BC8
 * address: 0x60917BC8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_60917BC8(int a1, int a2)
{
  int v3; // r2
  __int64 result; // r0

  v3 = FIELD_S16(a1, 8);
  if ( v3 == -1 )
  {
    *(_QWORD *)a1 = 0;
    return 0;
  }
  else
  {
    result = dword_60CC72C8(FIELD_U32(dword_60CCFC8C, 28), a2, v3);
    *(_QWORD *)a1 = result;
  }
  return result;
}

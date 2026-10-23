/* sub_60835528
 * address: 0x60835528   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_60835528(int a1, int a2)
{
  __int64 result; // r0

  result = dword_60CC746C(FIELD_U32(a1, 8));
  *(_QWORD *)a2 = result;
  FIELD_U32(a2, 8) = 0;
  FIELD_U32(a2, 12) = 0;
  return result;
}

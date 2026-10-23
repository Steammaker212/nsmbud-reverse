/* sub_608F2998
 * address: 0x608F2998   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_608F2998(_QWORD *a1)
{
  __int64 v2; // r0
  __int64 result; // r0
  __int64 v4; // [sp+0h] [bp-10h] BYREF

  v2 = dword_60CC72FC(FIELD_U32(dword_60CCF464, 24));
  nn__os__ConvertToTick(&v4, HIDWORD(v2), v2, HIDWORD(v2));
  result = v4;
  *a1 = v4;
  return result;
}

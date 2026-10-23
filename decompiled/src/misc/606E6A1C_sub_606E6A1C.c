/* sub_606E6A1C
 * address: 0x606E6A1C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

__int64 __fastcall sub_606E6A1C(int a1)
{
  __int64 result; // r0

  result = 3LL * sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  FIELD_U8(a1, 16) = BYTE4(result);
  return result;
}

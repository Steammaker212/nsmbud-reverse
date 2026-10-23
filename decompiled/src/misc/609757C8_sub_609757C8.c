/* sub_609757C8
 * address: 0x609757C8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_609757C8(int a1, int a2)
{
  signed int result; // r0
  int v4; // r12
  int v5; // t1

  v5 = FIELD_U32(a1, 2356);
  result = a1 + 2356;
  v4 = v5;
  if ( v5 < FIELD_U32(result, 4) )
  {
    *(_DWORD *)(FIELD_U32(a1, 2364) + 4 * v4) = a2;
    ++FIELD_U32(a1, 2356);
  }
  if ( (FIELD_U8(a1, 2352) & 2) != 0 )
    return sub_608DED80(result, (int (__fastcall *)(int, _DWORD))sub_6097580C);
  return result;
}

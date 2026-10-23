/* sub_605EC190
 * address: 0x605EC190   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EC190(int a1)
{
  int result; // r0

  FIELD_U8(a1, 6560) = -1;
  result = a1 + 6560;
  FIELD_U8(result, 3) = -1;
  FIELD_U8(result, 2) = -1;
  FIELD_U8(result, 1) = -1;
  FIELD_U8(result, 43) = 0;
  *(_DWORD *)(result - 6428) = 0;
  *(_DWORD *)(result - 6432) = 0;
  *(_DWORD *)(result - 6436) = 0;
  *(_DWORD *)(result - 6440) = 0;
  *(_DWORD *)(result - 6424) = -1073741824;
  *(_DWORD *)(result - 6420) = 0;
  *(_DWORD *)(result - 6460) = 0;
  FIELD_U32(result, 24) = 4;
  return result;
}

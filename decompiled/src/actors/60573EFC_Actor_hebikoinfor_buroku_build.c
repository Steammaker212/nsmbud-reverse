/* Actor_hebikoinfor_buroku_build
 * address: 0x60573EFC   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_hebikoinfor_buroku_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1CE8u);
  result = BlockBase__ctor(v2, a1);
  *(_DWORD *)result = &off_60C03AD8;
  FIELD_U32(result, 7388) = 0;
  FIELD_U32(result, 7392) = 0;
  FIELD_U8(result, 7396) = 0;
  return result;
}

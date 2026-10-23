/* Actor_ringu_3_build
 * address: 0x606BF328   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ringu_3_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x18E8u);
  result = sub_606C6638(v2, a1);
  *(_DWORD *)result = off_60C1B960;
  FIELD_U8(result, 6372) = 0;
  return result;
}

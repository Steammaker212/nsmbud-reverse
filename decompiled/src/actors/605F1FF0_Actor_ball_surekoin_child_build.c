/* Actor_ball_surekoin_child_build
 * address: 0x605F1FF0   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ball_surekoin_child_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D50u);
  result = CoinBase__ctor(v2, a1);
  *(_DWORD *)result = &off_60C0C0D8;
  FIELD_U8(result, 7482) = 0;
  FIELD_U8(result, 7481) = 0;
  FIELD_U8(result, 7484) = 0;
  FIELD_U8(result, 7483) = 0;
  return result;
}

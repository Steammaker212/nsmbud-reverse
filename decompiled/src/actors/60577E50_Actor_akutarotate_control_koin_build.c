/* Actor_akutarotate_control_koin_build
 * address: 0x60577E50   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_akutarotate_control_koin_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D48u);
  result = CoinBase__ctor(v2, a1);
  *(_DWORD *)result = &off_60C045A0;
  FIELD_U32(result, 7484) = 0;
  FIELD_U8(result, 7488) = 0;
  return result;
}

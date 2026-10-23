/* Actor_level_faiyaPiranha_furawa_build
 * address: 0x602FCCA0   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_level_faiyaPiranha_furawa_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x36A0u);
  result = sub_602FEC74(v2, a1);
  *(_DWORD *)result = off_60BE827C;
  FIELD_U32(result, 13980) = 0;
  FIELD_U8(result, 6298) = 5;
  return result;
}

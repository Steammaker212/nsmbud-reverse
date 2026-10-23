/* Actor_level_big_Piranha_furawa_build
 * address: 0x602FC32C   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_level_big_Piranha_furawa_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x36B0u);
  result = Actor_level_big_Piranha_furawa_build_helper(v2, a1);
  *(_DWORD *)result = &off_60BE7FA8;
  FIELD_U16(result, 13992) = 3;
  return result;
}

/* Iggy__vf654
 * address: 0x6009F2B8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: KoopalingBase : 0x600B7674
// 
// Overridden by: None
int __fastcall Iggy__vf654(int a1)
{
  int result; // r0

  sub_60421AE4(FIELD_U32(a1, 7096), FIELD_U32(a1, 7120) + 8, 0);
  result = sub_60232E8C(dword_60C8D904);
  FIELD_U32(result, 20) = 0;
  return result;
}

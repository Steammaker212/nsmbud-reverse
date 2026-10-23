/* Actor_CourseSelectoke_build
 * address: 0x60192A00   size: 64   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelectoke_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x114u);
  result = sub_601A75F0(v2, a1);
  *(_DWORD *)result = off_60BD5980;
  FIELD_U32(result, 268) = 0;
  FIELD_U16(result, 272) = 6;
  return result;
}

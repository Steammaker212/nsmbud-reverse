/* Actor_ne_build
 * address: 0x6066B314   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ne_build(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1B20u);
  result = sub_606CA9C4(v2, a1);
  *(_DWORD *)result = &off_60C1537C;
  FIELD_U8(result, 6936) = 0;
  FIELD_U32(result, 6932) = 0;
  FIELD_U32(result, 6928) = 0;
  FIELD_U32(result, 6920) = 0;
  FIELD_U32(result, 6924) = 0;
  return result;
}

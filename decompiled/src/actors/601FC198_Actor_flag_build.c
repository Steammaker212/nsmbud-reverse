/* Actor_flag_build
 * address: 0x601FC198   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_flag_build(unsigned __int8 *a1)
{
  Actor *v2; // r0
  Actor *result; // r0

  v2 = (Actor *)operator_new(0x11Cu);
  result = sub_601A75F0(v2, a1);
  FIELD_U32(result, 0x0) = (int)off_60BD81BC;
  *(_DWORD *)&FIELD_U8(result + (3) * 80, 0x1C) = 0;
  FIELD_U32(result + (3) * 80, 0x24) = 0;
  LOWORD(FIELD_U32(result + (3) * 80, 0x28)) = a1[37];
  return result;
}

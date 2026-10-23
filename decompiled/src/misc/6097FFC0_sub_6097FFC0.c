/* sub_6097FFC0
 * address: 0x6097FFC0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097FFC0(int a1, int a2)
{
  int result; // r0

  result = sub_609847CC();
  *(_DWORD *)result = off_60C5F680;
  FIELD_U32(result, 200) = FIELD_U32(a2, 200);
  FIELD_U8(result, 204) = FIELD_U8(a2, 204);
  return result;
}

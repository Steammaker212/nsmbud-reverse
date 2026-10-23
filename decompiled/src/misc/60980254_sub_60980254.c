/* sub_60980254
 * address: 0x60980254   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980254(int a1, int a2)
{
  int result; // r0

  result = sub_6098625C();
  *(_DWORD *)result = off_60C5F6F8;
  FIELD_U32(result, 232) = FIELD_U32(a2, 232);
  FIELD_U8(result, 236) = FIELD_U8(a2, 236);
  return result;
}

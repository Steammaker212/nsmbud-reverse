/* sub_60980228
 * address: 0x60980228   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980228(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = sub_6098620C(a1, a2, a3, a4);
  *(_DWORD *)result = off_60C5F6F8;
  FIELD_U32(result, 232) = 0;
  FIELD_U8(result, 236) = 0;
  return result;
}

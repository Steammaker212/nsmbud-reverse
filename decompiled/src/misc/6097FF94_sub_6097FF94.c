/* sub_6097FF94
 * address: 0x6097FF94   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097FF94(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = sub_60984774(a1, a2, a3, a4);
  *(_DWORD *)result = off_60C5F680;
  FIELD_U32(result, 200) = 0;
  FIELD_U8(result, 204) = 0;
  return result;
}

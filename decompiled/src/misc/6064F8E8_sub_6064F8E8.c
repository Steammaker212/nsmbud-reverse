/* sub_6064F8E8
 * address: 0x6064F8E8   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064F8E8(int a1)
{
  int result; // r0
  signed int v3; // [sp+4h] [bp-14h] BYREF
  int v4; // [sp+8h] [bp-10h] BYREF
  int v5; // [sp+Ch] [bp-Ch] BYREF

  v5 = FIELD_U32(a1, 164);
  v4 = 0;
  v3 = 28049408;
  sub_6083224C(&v5, &v4, &v3);
  result = v5;
  FIELD_U32(a1, 164) = v5;
  return result;
}

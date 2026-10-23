/* sub_6098C20C
 * address: 0x6098C20C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098C20C(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 20) = a2;
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = a3;
  sead__SafeStringBase__operator_assign(a1 + 92, (int)v5);
  result = FIELD_U8(a1, 130) | 8;
  FIELD_U8(a1, 130) = result;
  return result;
}

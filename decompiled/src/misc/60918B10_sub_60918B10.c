/* sub_60918B10
 * address: 0x60918B10   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60918B10(int *a1, int a2, int a3, int a4)
{
  _DWORD v7[2]; // [sp+4h] [bp-1Ch] BYREF
  int v8; // [sp+Ch] [bp-14h] BYREF

  v8 = -1;
  sub_60918B70(&v8, a2, a3, a4);
  v7[0] = &sead__SafeStringBase__vtable;
  v7[1] = FIELD_U32(a4, 4);
  *a1 = v8;
  return sead__SafeStringBase__operator_assign((int)(a1 + 1), (int)v7);
}

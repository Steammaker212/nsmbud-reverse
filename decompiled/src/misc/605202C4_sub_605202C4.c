/* sub_605202C4
 * address: 0x605202C4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605202C4(int a1)
{
  _DWORD *v1; // r4
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 4296) = 0;
  v1 = (_DWORD *)(a1 + 36);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_6052283C(1);
  sub_60473DE4(v1, 1u, v3, 0);
  sub_6047455C((int)v1, 1u, 0.0);
  return sub_6047459C((int)v1, 1u);
}

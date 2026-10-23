/* sub_6051113C
 * address: 0x6051113C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051113C(int a1)
{
  int v2; // r5
  int *v3; // r6
  _DWORD v5[8]; // [sp+0h] [bp-20h] BYREF

  v2 = 0;
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = sub_60473DA4(a1 + 56);
  v3 = &dword_60CA82C0;
  do
  {
    *(_DWORD *)(a1 + 5784 + 4 * v2++) = sub_60502E60(a1 + 3704, v3);
    v3 += 2;
  }
  while ( v2 != 35 );
  sub_60502210(a1 + 3704, (_DWORD *)(a1 + 5784), 17);
  sead__SafeStringBase__operator_assign(a1 + 4716, (int)v5);
  sub_6050292C(a1 + 3704, 15);
  sub_60502994(a1 + 3704, 15);
  sub_60502960(a1 + 3704, 15);
  sub_605029C8(a1 + 3704, 15);
  return 1;
}

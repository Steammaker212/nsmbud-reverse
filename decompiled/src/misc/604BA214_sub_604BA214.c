/* sub_604BA214
 * address: 0x604BA214   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604BA214(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r6
  int v9; // r7
  int v10; // r5

  *a1 = &sead__SafeStringBase__vtable;
  a1[1] = &byte_60B3BA34;
  a1[2] = &sead__SafeStringBase__vtable;
  v8 = (int)(a1 + 2);
  a1[3] = &byte_60B3BA34;
  a1[4] = &sead__SafeStringBase__vtable;
  v9 = (int)(a1 + 4);
  a1[5] = &byte_60B3BA34;
  a1[6] = &sead__SafeStringBase__vtable;
  v10 = (int)(a1 + 6);
  a1[7] = &byte_60B3BA34;
  a1[8] = a2;
  sead__SafeStringBase__operator_assign((int)a1, a4);
  sead__SafeStringBase__operator_assign(v8, a5);
  sead__SafeStringBase__operator_assign(v9, a6);
  sead__SafeStringBase__operator_assign(v10, a3);
  return a1;
}

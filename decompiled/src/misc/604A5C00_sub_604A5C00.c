/* sub_604A5C00
 * address: 0x604A5C00   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (**__fastcall sub_604A5C00(int a1, unsigned int a2, unsigned int a3, int a4))()
{
  int (**result)(); // r0
  int *v8; // r1
  int v9; // r7
  unsigned int v10; // r0
  _DWORD v11[2]; // [sp+8h] [bp-40h] BYREF
  _DWORD v12[2]; // [sp+10h] [bp-38h] BYREF
  _DWORD v13[12]; // [sp+18h] [bp-30h] BYREF

  result = &sead__SafeStringBase__vtable;
  v13[0] = &sead__SafeStringBase__vtable;
  v12[0] = &sead__SafeStringBase__vtable;
  v11[0] = &sead__SafeStringBase__vtable;
  v13[1] = &byte_60B3BA34;
  v12[1] = &byte_60B3BA34;
  v11[1] = &byte_60B3BA34;
  if ( a4 == 3 )
  {
    sead__SafeStringBase__operator_assign((int)v13, (int)&dword_60CA12E0);
    sead__SafeStringBase__operator_assign((int)v12, (int)&dword_60CA12D8);
    v8 = &dword_60CA12F8;
  }
  else
  {
    if ( a4 != 2 )
      return result;
    sead__SafeStringBase__operator_assign((int)v13, (int)&dword_60CA12D8);
    sead__SafeStringBase__operator_assign((int)v12, (int)&dword_60CA12E0);
    v8 = &dword_60CA12F0;
  }
  sead__SafeStringBase__operator_assign((int)v11, (int)v8);
  v9 = 0;
  sub_6047467C((_DWORD *)(a1 + 48), 2u, v11, (int)&dword_60CA1340, 1.0, 0);
  if ( a3 >= 7 )
    a3 = 0;
  v10 = dword_60BFDD80[a3];
  if ( v10 >= 0x12 )
    v10 = 0;
  sub_6047467C((_DWORD *)(a1 + 48), dword_60BFDD9C[a3], v13, (int)&dword_60CA1330[2 * v10], 1.0, 0);
  if ( a2 >= 7 )
    a2 = 0;
  if ( dword_60BFDD80[a2] < 0x12u )
    v9 = dword_60BFDD80[a2];
  return (int (**)())sub_6047467C((_DWORD *)(a1 + 48), dword_60BFDD9C[a2], v12, (int)&dword_60CA1330[2 * v9], -1.0, 0);
}

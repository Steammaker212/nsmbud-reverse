/* sub_60497460
 * address: 0x60497460   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60497460(int a1)
{
  _DWORD *v2; // r4
  int result; // r0
  _DWORD v4[6]; // [sp+8h] [bp-18h] BYREF

  FIELD_U8(a1, 146854) = 0;
  FIELD_U8(a1, 146856) = 0;
  sub_60499DBC(a1);
  v2 = (_DWORD *)(a1 + 64);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = dword_60CA0710;
  result = sub_6047467C(v2, 0, v4, (int)&dword_60CA06FC, 1.0, 0);
  if ( result == 1 )
  {
    result = sub_6047482C((int)v2, 0);
    if ( result )
      return (*(int (__fastcall **)(int))(*(_DWORD *)result + 104))(result);
  }
  return result;
}

/* sub_60514884
 * address: 0x60514884   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60514884(_DWORD *a1)
{
  int *v2; // r1
  _DWORD *v3; // r4
  int result; // r0
  int (**v5)(); // [sp+8h] [bp-18h] BYREF
  char *v6; // [sp+Ch] [bp-14h]

  if ( a1[1156] == a1[3223] )
  {
    v5 = &sead__SafeStringBase__vtable;
    v6 = off_60C5CB34;
    v2 = &dword_60CA8694;
  }
  else
  {
    v5 = &sead__SafeStringBase__vtable;
    v6 = off_60C5CB34;
    v2 = &dword_60CA869C;
  }
  sead__SafeStringBase__operator_assign((int)&v5, (int)v2);
  v3 = a1 + 12;
  result = sub_6047467C(v3, 0, &v5, (int)&dword_60CA868C, -1.0, 0);
  if ( result == 1 )
    return sub_6047482C((int)v3, 0);
  return result;
}

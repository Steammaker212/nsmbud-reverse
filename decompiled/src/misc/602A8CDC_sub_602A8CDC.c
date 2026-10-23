/* sub_602A8CDC
 * address: 0x602A8CDC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A8CDC(unsigned __int8 *a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r5
  signed int v7; // [sp+4h] [bp-14h] BYREF

  v2 = (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 624))(a1);
  result = 2;
  if ( v2 == 1 )
  {
    v4 = a1[28];
    a1[6321] = v4;
    v5 = sub_606D4384(&v7, v4);
    v6 = v5;
    if ( v5 )
    {
      (*(void (__fastcall **)(unsigned __int8 *, int, signed int))(*(_DWORD *)a1 + 644))(a1, v5, v7);
      (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 648))(a1, v6);
      (*(void (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9088C);
    }
    else
    {
      (*(void (__fastcall **)(unsigned __int8 *, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9086C);
    }
    return 1;
  }
  return result;
}

/* sub_60772A08
 * address: 0x60772A08   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60772A08(int *a1)
{
  int v2; // r0
  _DWORD *v3; // r7
  int v4; // r0
  int v5; // r5
  int result; // r0
  bool v7; // zf
  int *v8; // r0
  int v9; // r1
  StateBase *v10; // r1
  signed int v11; // [sp+4h] [bp-24h] BYREF
  signed int v12; // [sp+8h] [bp-20h] BYREF
  int v13; // [sp+Ch] [bp-1Ch] BYREF

  sub_607712D4((int)a1);
  (*(void (__fastcall **)(int *))(*a1 + 1104))(a1);
  ((void (__fastcall *)(int *))loc_60771910)(a1);
  sub_607711C8((int)a1);
  v3 = a1 + 2492;
  v2 = a1[2492];
  if ( v2 )
    *v3 = v2 - 1;
  v4 = 0;
  if ( (a1[1725] & 1) != 0 )
    v4 = (int)(float)((float)sub_607634CC((int)a1, a1[20]) * 0.3);
  v13 = -v4;
  v12 = 0x20000000;
  v11 = 0x1000000;
  sub_608322C0(a1 + 39, &v13, &v12, &v11);
  v5 = sub_60773F4C(a1);
  if ( (*((_BYTE *)a1 + 6905) & 0x20) != 0 )
  {
    *v3 = 9;
  }
  else
  {
    result = sub_6075FC38((int)a1);
    if ( result )
      return result;
    v7 = v5 == 1;
    if ( v5 == 1 )
      v7 = *v3 == 0;
    if ( v7 && sub_60772C30(a1) == 1 )
    {
      v8 = a1;
      v9 = 0;
      return sub_60772D04(v8, v9);
    }
  }
  result = a1[2485];
  switch ( result )
  {
    case 3:
      a1[23] = 0;
      result = sub_60793CA8(*(_DWORD *)(a1[162] + 4));
      if ( result == 1 )
      {
        v8 = a1;
        v9 = 1;
        return sub_60772D04(v8, v9);
      }
      break;
    case 2:
      a1[23] = 0;
      if ( sub_60793CA8(*(_DWORD *)(a1[162] + 4)) || (result = sub_6075EDF8((int)a1), result == 1) )
      {
        v10 = &stru_60CBF8AC;
        return Player_changeState((int)a1, v10, 1);
      }
      break;
    case 0:
      if ( (a1[1725] & 1) == 0 && (sub_6078663C(a1 + 172) || sub_60786890(a1 + 172) == 1) )
      {
        v10 = (StateBase *)&dword_60CBF864;
        return Player_changeState((int)a1, v10, 1);
      }
      sub_60764D14(a1);
      ((void (__fastcall *)(int *, int))loc_60772E38)(a1, v5);
      return (*(int (__fastcall **)(int *))(*a1 + 996))(a1);
  }
  return result;
}

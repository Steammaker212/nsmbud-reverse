/* sub_6076906C
 * address: 0x6076906C   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076906C(int *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // [sp+0h] [bp-18h] BYREF
  int v5; // [sp+4h] [bp-14h] BYREF

  a1[25] = *(_DWORD *)(*(int (__fastcall **)(int *))(*a1 + 1100))(a1);
  (*(void (__fastcall **)(int *))(*a1 + 1104))(a1);
  ((void (__fastcall *)(int *))loc_60771910)(a1);
  sub_607711C8(a1);
  if ( (a1[301] & 0x10) != 0 || (result = (*(int (__fastcall **)(int *))(*a1 + 972))(a1)) == 0 )
  {
    result = a1[2509];
    switch ( result )
    {
      case 0:
        return sub_607692C0(a1);
      case 1:
        sub_60773F4C(a1);
        v3 = a1 + 2485;
        result = a1[2485];
        if ( result )
          return result;
        PlayerBase_dispatchVirtual3(a1[162], 153);
        goto LABEL_20;
      case 2:
        return sub_60769398(a1);
      case 3:
        return sub_607694D0(a1);
      case 4:
        v5 = 0;
        sub_60773F88(a1, &v5, 0.1);
        v3 = a1 + 2485;
        result = a1[2485];
        if ( result == 1 )
        {
          result = a1[2486];
          if ( result )
            return result;
          PlayerBase_dispatchVirtual3(a1[162], 154);
          sub_6076DC6C(a1, 1);
LABEL_20:
          a1[301] &= ~0x10u;
LABEL_21:
          result = 5;
        }
        else
        {
          if ( result )
            return result;
          a1[2486] = 15;
          result = 1;
        }
        *v3 = result;
        break;
      case 5:
        return sub_607695CC(a1);
      case 6:
        return sub_60769700(a1);
      case 7:
        JUMPOUT(0x60769838);
      case 8:
        return sub_607699D4(a1);
      case 9:
        v4 = 0;
        sub_60773F88(a1, &v4, 0.1);
        v3 = a1 + 2485;
        result = a1[2485];
        if ( result )
          return result;
        a1[306] |= 1u;
        sub_60794954(a1[162], 191, 5.0, 0.0);
        goto LABEL_21;
      case 10:
        return (*(int (__fastcall **)(int *))(*a1 + 1048))(a1);
      default:
        return result;
    }
  }
  return result;
}

/* sub_607695CC
 * address: 0x607695CC   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607695CC(int *a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // [sp+4h] [bp-14h] BYREF

  v4 = 0;
  sub_60773F88(a1, &v4, 0.1);
  v3 = a1 + 2485;
  result = a1[2485];
  switch ( result )
  {
    case 0:
      a1[2486] = 15;
      result = 1;
      break;
    case 1:
      result = a1[2486];
      if ( result )
        return result;
      sub_6076DC50(a1);
      result = 2;
      break;
    case 2:
      result = (*(int (__fastcall **)(int *, int))(*a1 + 700))(a1, 3);
      if ( result == 1 )
        *v3 = 3;
      return result;
    case 3:
      result = sub_607798D0(dword_60CBFA90);
      if ( result )
        return result;
      a1[2486] = 20;
      result = 4;
      break;
    case 4:
      result = a1[2486];
      if ( result )
        return result;
      sub_60794954(a1[162], 0, 5.0, 0.0);
      a1[301] &= ~0x10u;
      result = 5;
      break;
    default:
      return result;
  }
  *v3 = result;
  return result;
}

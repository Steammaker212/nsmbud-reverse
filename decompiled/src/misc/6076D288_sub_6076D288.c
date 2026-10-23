/* sub_6076D288
 * address: 0x6076D288   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076D288(int *a1)
{
  int *v2; // r5
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r1

  v2 = a1 + 2426;
  switch ( a1[2426] )
  {
    case 0:
      sub_6076D3D0(a1);
      break;
    case 1:
      ((void (__fastcall *)(int *))loc_6076D814)(a1);
      break;
    case 2:
      v3 = a1[308];
      if ( (v3 & 8) != 0 )
      {
        *v2 = 3;
        a1[2427] = 0;
        v3 = v3 & 0xFFFFFFC7 | 0x30;
        a1[308] = v3;
        a1[2452] = 0;
      }
      if ( (v3 & 0x40) != 0 )
      {
        v4 = sub_6077965C(dword_60CBFA90);
        v5 = 6;
        if ( v4 )
          v5 = 7;
        *v2 = v5;
        a1[2427] = 0;
      }
      break;
    case 3:
      if ( (*(int (__fastcall **)(int *, _DWORD))(*a1 + 700))(a1, 0) == 1 )
      {
        *v2 = 2;
        a1[2427] = 0;
      }
      break;
    case 4:
      (*(void (__fastcall **)(int *))(*a1 + 684))(a1);
      break;
    case 5:
      (*(void (__fastcall **)(int *))(*a1 + 688))(a1);
      break;
    case 6:
      (*(void (__fastcall **)(int *))(*a1 + 692))(a1);
      break;
    case 7:
      (*(void (__fastcall **)(int *))(*a1 + 696))(a1);
      break;
    default:
      return sub_607612CC((int)a1, 0);
  }
  return sub_607612CC((int)a1, 0);
}

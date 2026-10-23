/* sub_607C2768
 * address: 0x607C2768   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C2768(_DWORD *a1)
{
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // t1
  int result; // r0
  _DWORD *v7; // r5
  int v8; // t1
  int v9; // r1

  a1[304] &= 0xFFF9FFFF;
  v5 = a1[3068];
  v3 = a1 + 3068;
  v4 = v5;
  if ( v5 )
    *v3 = --v4;
  v8 = a1[2485];
  v7 = a1 + 2485;
  result = v8;
  switch ( v8 )
  {
    case 0:
      JUMPOUT(0x607C2874);
    case 1:
      result = SE_PLY_JUMP_FENCE_ref(a1, v4);
      break;
    case 2:
      result = SE_PLY_ATTACK_FENCE_ref(a1, v4);
      break;
    case 3:
      result = a1[309];
      a1[309] = result | 0x10000;
      v9 = a1[3059];
      if ( v9 == 3 )
      {
        a1[309] = result & 0xFFFEFFFF;
        PlayerBase_dispatchVirtual3((int)(a1 + 2839), 54, 0.0);
        result = 1;
        *v7 = 1;
      }
      else if ( v9 == 1 )
      {
        result = sub_60793CA8(a1[2840]);
        if ( result == 1 )
        {
          a1[3059] = 2;
          result = PlayerBase_dispatchVirtual3((int)(a1 + 2839), 54, 0.0);
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

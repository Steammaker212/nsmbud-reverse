/* SE_PLY_ref_3
 * address: 0x6076F7F0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_ref_3(int a1)
{
  int v1; // r1
  const char *v2; // r1

  v1 = FIELD_U32(a1, 7004);
  if ( FIELD_U32(a1, 1320) == 3 )
  {
    if ( v1 == 13 )
    {
      v2 = "SE_PLY_HIP_ATTACK_WATER";
    }
    else if ( v1 == 5 )
    {
      v2 = "SE_PLY_HPDP_SPLASH";
    }
    else
    {
      v2 = "SE_PLY_HIP_ATTACK_M";
    }
  }
  else
  {
    switch ( v1 )
    {
      case 5:
        v2 = "SE_PLY_HPDP_SPLASH";
        break;
      case 7:
      case 11:
        v2 = "SE_PLY_HIP_ATTACK_SOFT";
        break;
      case 13:
        v2 = "SE_PLY_HIP_ATTACK_WATER";
        break;
      default:
        v2 = "SE_PLY_HIP_ATTACK";
        break;
    }
  }
  return sub_607734E8(a1, (int)v2, 0, 0);
}

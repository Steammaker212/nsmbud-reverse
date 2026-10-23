/* sub_6000F7B8
 * address: 0x6000F7B8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6000F7B8(float a1, float a2)
{
  float v3; // s2
  float v4; // s0

  if ( a1 == 0.0 )
    return 0;
  if ( a2 >= 0.0 )
  {
    if ( a1 < 0.0 )
    {
      v4 = -a1;
      if ( a2 >= v4 )
        return -sub_608FBB48(v4 / a2);
      else
        return sub_608FBB48(a2 / v4) - 0x40000000;
    }
    else if ( a2 >= a1 )
    {
      return sub_608FBB48(a1 / a2);
    }
    else
    {
      return 0x40000000 - sub_608FBB48(a2 / a1);
    }
  }
  else if ( a1 < 0.0 )
  {
    if ( a2 <= a1 )
      return sub_608FBB48(a1 / a2) ^ 0x80000000;
    else
      return -1073741824 - sub_608FBB48(a2 / a1);
  }
  else
  {
    v3 = -a2;
    if ( (float)-a2 >= a1 )
      return 0x80000000 - sub_608FBB48(a1 / v3);
    else
      return sub_608FBB48(v3 / a1) + 0x40000000;
  }
}

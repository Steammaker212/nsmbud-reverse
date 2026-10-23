/* sub_605C69F0
 * address: 0x605C69F0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C69F0(StageActor *a1)
{
  signed int v2; // r1
  int result; // r0
  int v4; // r1
  int v5; // r1
  float v6; // s2

  v2 = CollisionActor__beforeExecute(a1);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = a1[9].aCollider.info.field_10;
    if ( v4 && (v5 = v4 - 1, (a1[9].aCollider.info.field_10 = v5) != 0) )
    {
      if ( (v5 & 4) != 0 )
        v6 = 0.039062;
      else
        v6 = -0.039062;
      a1[9].aCollider.info.distToEdge.y = a1[9].aCollider.info.distToEdge.y + v6;
      return 1;
    }
    else
    {
      a1[9].aCollider.info.distToEdge.y = 0.0;
      return 1;
    }
  }
  return result;
}

/* sub_60273B70
 * address: 0x60273B70   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60273B70(CollisionActor *a1)
{
  int *v2; // r5
  int result; // r0
  int v4; // r0
  int v5; // r2

  CollisionActor__handleSpeed(a1);
  v2 = &a1[1]._.field_200;
  nullsub_7();
  result = FIELD_U32(a1, 0x50);
  if ( (*(_DWORD *)&a1[1].collisionMgr[4 * ((result + 18) >> 5) + 2088] & (1 << ((result + 18) & 0x1F))) != 0
    || (v2[((result + 22) >> 5) + 556] & (1 << ((result + 22) & 0x1F))) != 0 )
  {
    v4 = result + 28;
    v5 = v4 >> 5;
    result = v4 & 0x1F;
    if ( (v2[v5 + 556] & (1 << result)) == 0 )
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C8EB88);
  }
  return result;
}

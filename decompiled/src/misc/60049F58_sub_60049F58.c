/* sub_60049F58
 * address: 0x60049F58   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60049F58(int a1)
{
  int v3; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  if ( *(_BYTE *)(FIELD_U32(a1, 11456) + 7265) )
  {
    FIELD_U8(a1, 535) = 0;
    return 0;
  }
  else
  {
    FIELD_U32(a1, 164) += dword_60AF1EC8[FIELD_U32(a1, 6284)];
    CollisionActor__handleGravity((CollisionActor *)a1);
    CollisionActor__handleSpeed((CollisionActor *)a1);
    target[0] = 0;
    v3 = 0x2000000;
    moveValueTo((int *)(a1 + 156), target, &v3);
    target[0] = 0;
    v3 = 0x2000000;
    return moveValueTo((int *)(a1 + 160), target, &v3);
  }
}

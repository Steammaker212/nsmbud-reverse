/* sub_6065D07C
 * address: 0x6065D07C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6065D07C(CollisionActor *a1)
{
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  if ( a1[1].collisionMgr[206] == 1 )
  {
    if ( FIELD_U32(a1, 0x0).position.y < (float)(FIELD_F32(dword_60CC6484, 132) + -32.0) )
      a1[1].collisionMgr[232] = 1;
  }
  else
  {
    StageActor__cullCheck(&FIELD_U32(a1, 0x0), 0);
  }
}

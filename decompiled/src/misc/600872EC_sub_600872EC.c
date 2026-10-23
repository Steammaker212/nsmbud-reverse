/* sub_600872EC
 * address: 0x600872EC   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600872EC(CollisionActor *a1)
{
  Actor *collisionMgr; // r5
  int result; // r0
  int v4; // r0
  bool v5; // zf

  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  collisionMgr = (Actor *)FIELD_U8(a1, 0x288);
  CollisionMgr_process(FIELD_U8(a1, 0x288));
  result = (unsigned __int8)FIELD_U8(a1, 0x288)[2224];
  if ( (result & 1) != 0 )
  {
    v4 = sub_6014B69C(FIELD_U8(a1, 0x288));
    v5 = v4 == 0;
    if ( v4 )
    {
      collisionMgr = *(Actor **)(v4 + 144);
      v5 = collisionMgr == 0;
    }
    if ( v5 || Actor__getProfileId(collisionMgr) != 392 )
    {
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C81B2C);
    }
    else
    {
      result = sub_602EE904(collisionMgr);
      if ( !result )
        return sub_602EE7B8(collisionMgr, FIELD_U32(a1, 0x50), -1);
    }
  }
  return result;
}

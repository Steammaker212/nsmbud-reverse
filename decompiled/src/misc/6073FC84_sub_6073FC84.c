/* sub_6073FC84
 * address: 0x6073FC84   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6073FC84(CollisionActor *a1)
{
  int result; // r0

  result = LOWORD(a1[1]._.aCollider.activeNode.prev);
  if ( !result )
  {
    if ( FIELD_U32(a1, 0x0).position.y <= (float)(FIELD_F32(dword_60CC6484, 132) + -64.0) )
    {
      return (*(int (__fastcall **)(CollisionActor *, int *))(FIELD_U32(a1, 0x0)._.vtable + 192))(a1, &dword_60CBE284);
    }
    else
    {
      CollisionActor__handleGravity(a1);
      CollisionActor__handleSpeed(a1);
      result = FIELD_U32(a1, 0x0).rotation.z - 0x4000000;
      FIELD_U32(a1, 0x0).rotation.z = result;
    }
  }
  return result;
}

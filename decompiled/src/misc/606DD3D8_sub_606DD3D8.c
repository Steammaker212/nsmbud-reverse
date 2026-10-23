/* sub_606DD3D8
 * address: 0x606DD3D8   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_606DD3D8(CollisionActor *a1)
{
  int *i; // r7
  char v3; // r12
  int v4; // r6

  FIELD_U32(a1, 0xA0) += 458752000;
  CollisionActor__handleGravity(a1);
  CollisionActor__handleSpeed(a1);
  if ( FIELD_F32(a1, 0x7C) < -3.0 )
  {
    for ( i = (int *)sub_60008598(ActorMgr__instance, 808, FIELD_U32(ActorMgr__instance, 27172));
          ;
          i = (int *)sub_60008598(ActorMgr__instance, 808, (int)(i + 1)) )
    {
      v4 = *i;
      if ( ((unsigned int)&dword_60C906C8 & ~(1617810624 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C906C8) )
      {
        dword_60C906C4 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60C906C8);
      }
      if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C906C4) != 1 )
        break;
      FIELD_U8(v4, 6568) = 1;
    }
    FIELD_U8(a1, 0x13) = 1;
  }
}

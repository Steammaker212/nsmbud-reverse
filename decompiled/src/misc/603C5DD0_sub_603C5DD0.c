/* sub_603C5DD0
 * address: 0x603C5DD0   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603C5DD0(Actor *a1)
{
  char v1; // r12
  Actor **v2; // r7
  Actor **v3; // r6
  Actor *v4; // r5
  float v5; // s16
  float v6; // s20
  float v7; // s18
  unsigned int v8; // r4
  int ProfileId; // r1

  v2 = *(Actor ***)(ActorMgr__instance + 27180);
  v3 = *(Actor ***)(ActorMgr__instance + 27172);
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( ((unsigned int)&dword_60C987EC & ~(1614569052 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C987EC) )
      {
        dword_60C987E8 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C987EC);
      }
      if ( v4
        && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v4, 0x0))(v4, &dword_60C987E8) == 1
        && Actor__getProfileId(v4) == 663 )
      {
        break;
      }
      if ( v2 == ++v3 )
        return;
    }
    v5 = *(float *)&a1[337].id;
    v6 = *(float *)&a1[337].vtable;
    v7 = *(float *)&a1[337].heap;
    v8 = FIELD_U32(a1, 0x14) & 0xFFEFFFFF;
    ProfileId = Actor__getProfileId(a1);
    sub_603D3180(v4, ProfileId, v8, 0, v6, v7, v5);
  }
}

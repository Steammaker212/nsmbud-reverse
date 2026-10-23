/* sub_603C6E3C
 * address: 0x603C6E3C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603C6E3C(int a1)
{
  StateBase *CurrentState; // r0
  int v2; // r4
  char v3; // r12
  Actor **v4; // r7
  Actor **v5; // r6
  Actor *v6; // r5
  int v7; // r4
  float v8; // s20
  float v9; // s16
  float v10; // s18
  int ProfileId; // r1

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v2 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v2 != (*(int (**)(void))(dword_60C98878 + 8))() )
  {
    v4 = *(Actor ***)(ActorMgr__instance + 27180);
    v5 = *(Actor ***)(ActorMgr__instance + 27172);
    if ( v5 != v4 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( ((unsigned int)&dword_60C987EC & ~(1614573312 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C987EC) )
        {
          dword_60C987E8 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C987EC);
        }
        if ( v6
          && (*(int (__fastcall **)(Actor *, int *))FIELD_U32(v6, 0x0))(v6, &dword_60C987E8) == 1
          && Actor__getProfileId(v6) == 664 )
        {
          break;
        }
        if ( v4 == ++v5 )
          return;
      }
      v7 = FIELD_U32(a1, 20);
      v8 = FIELD_F32(a1, 26960);
      v9 = FIELD_F32(a1, 26968);
      v10 = FIELD_F32(a1, 26964);
      ProfileId = Actor__getProfileId((Actor *)a1);
      sub_603D3180(v6, ProfileId, v7 & 0xFFEFFFFF, FIELD_U8(a1, 539), v8, v10, v9);
    }
  }
}

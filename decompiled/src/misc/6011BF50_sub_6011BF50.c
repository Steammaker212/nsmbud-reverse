/* sub_6011BF50
 * address: 0x6011BF50   size: 664   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6011BF50(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r4
  int v4; // r8
  int *v5; // r7
  int v6; // r6
  char v7; // r12
  float v8; // s18
  float v9; // s20
  float v10; // s0
  char v11; // r12

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 0;
  if ( v3 == (*(int (**)(void))(dword_60C86C24 + 8))() )
  {
    v5 = (int *)sub_60008598(ActorMgr__instance, 818, FIELD_U32(ActorMgr__instance, 27172));
    v6 = *v5;
    if ( ((unsigned int)&dword_60C86B48 & ~(1611775964 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
    {
      dword_60C86B44 = (int)&off_60BD0CA4;
      _cxa_guard_release(&dword_60C86B48);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C86B44) == 1 )
    {
      do
      {
        v8 = FIELD_F32(a1, 112) - FIELD_F32(v6, 112);
        v9 = FIELD_F32(a1, 108) - FIELD_F32(v6, 108);
        if ( sqrtf((float)(v8 * v8) + (float)(v9 * v9)) > 96.0 )
          goto LABEL_16;
        if ( FIELD_U32(a1, 80) )
        {
          if ( v9 < 0.0 )
            goto LABEL_16;
        }
        else if ( v9 >= 0.0 )
        {
          goto LABEL_16;
        }
        v10 = FIELD_F32(a1, 124);
        if ( v10 > 0.0 && v8 < 0.0 || v8 > 0.0 && v10 < 0.0 )
        {
          v4 = 1;
          *(_DWORD *)(FIELD_U32(a1, 9232) + 7636) = FIELD_U32(v6, 8);
          return v4;
        }
LABEL_16:
        v5 = (int *)sub_60008598(ActorMgr__instance, 818, (int)(v5 + 1));
        v6 = *v5;
        if ( ((unsigned int)&dword_60C86B48 & ~(1611776352 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B48) )
        {
          dword_60C86B44 = (int)&off_60BD0CA4;
          _cxa_guard_release(&dword_60C86B48);
        }
      }
      while ( v6 && ((**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C86B44) ^ 1) != 1 );
    }
  }
  return v4;
}

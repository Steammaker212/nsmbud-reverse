/* sub_6024B96C
 * address: 0x6024B96C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024B96C(int a1)
{
  int v1; // r8
  int i; // r9
  unsigned int v3; // r1
  int v4; // r6
  char v5; // r12
  StateBase *CurrentState; // r0
  int v7; // r4

  v1 = a1 + 15424;
  for ( i = 0; i != 4; ++i )
  {
    v3 = *(_DWORD *)(v1 + 4 * i);
    if ( v3 )
    {
      v4 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
      if ( ((unsigned int)dword_60C8DD54 & ~(1613019656 << v5) & 1) == 0 && _cxa_guard_acquire(dword_60C8DD54) )
      {
        dword_60C8DD50 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C8DD54);
      }
      if ( v4 )
      {
        if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DD50) == 1 )
        {
          if ( FIELD_U8(v4, 6324) )
          {
            FIELD_U8(v4, 6334) = 1;
            CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
            v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
            if ( v7 != (*((int (__fastcall **)(StateVirtual *))Enemy_StateId_Frozen._._.vtable + 2))(&Enemy_StateId_Frozen) )
              (*(void (__fastcall **)(int, void *))(*(_DWORD *)v4 + 192))(v4, &unk_60C915C4);
          }
        }
      }
    }
  }
  FIELD_U8(a1, 15460) = 0;
  return 15460;
}

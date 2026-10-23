/* sub_607011B8
 * address: 0x607011B8   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607011B8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  StateBase *v4; // r0
  int v5; // r7
  StateBase *v6; // r0
  int v7; // r6
  int v8; // r6
  _BOOL4 v9; // r0
  float v10; // s0
  int v11; // r1

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 192))(a1) )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 != (*(int (**)(void))(stru_60CBC6D0 + 8))() )
    {
      if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
        sub_606F5378(a1);
      sub_606F53C4(a1);
      if ( sub_601536B0((int)ColliderMgr_instance, a1 + 6888) )
        ((void (__fastcall *)(int))loc_606F544C)(a1);
      if ( FIELD_U8(a1, 6884) )
        sub_606F5548((int *)a1);
      if ( FIELD_S32(a1, 6520) >= 1 )
        sub_606F5974(a1);
      ef_waterpillar_ref(a1);
      v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
      if ( v5 == (*(int (**)(void))(dword_60CBC6F4 + 8))()
        || (v6 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
            v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v6, 0x0) + 2))(v6),
            v7 == (*(int (**)(void))(dword_60CBC718 + 8))()) )
      {
        v8 = ((int (__fastcall *)(int, int))loc_606F5CB4)(a1, a1 + 108);
        v9 = sub_601536B0((int)ColliderMgr_instance, a1 + 6888);
        if ( v8 )
        {
          if ( v9 )
          {
            ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          }
        }
        else if ( !v9 )
        {
          ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6888));
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
        }
      }
      v10 = FIELD_F32(a1, 6492) * 0.6;
      v11 = dword_60CC6484;
      FIELD_F32(a1, 6132) = FIELD_F32(dword_60CC6484, 112) - v10;
      FIELD_F32(a1, 6136) = (float)(FIELD_F32(v11, 112) + FIELD_F32(v11, 104)) + v10;
    }
  }
  return 1;
}

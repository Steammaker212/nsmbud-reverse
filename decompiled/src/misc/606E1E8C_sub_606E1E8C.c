/* sub_606E1E8C
 * address: 0x606E1E8C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E1E8C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r5
  char v5; // r12
  int v6; // r5
  int v7; // r0

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  ShapedCollider_execute((ColliderBase *)(a1 + 6176));
  sub_606E1CB4(a1);
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 == (*(int (**)(void))(dword_60CBBD54 + 8))() )
  {
    if ( FIELD_U32(a1, 6964) )
    {
      v6 = FIELD_U32(a1, 56);
      if ( ((unsigned int)&dword_60C9D3DC & ~(1617829648 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
      {
        dword_60C9D3D8 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C9D3DC);
      }
      if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C9D3D8) == 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(v6, 7800);
        FIELD_U32(a1, 112) = FIELD_U32(v6, 7804);
        FIELD_U32(a1, 116) = FIELD_U32(v6, 7808);
        v7 = FIELD_U32(v6, 8176);
        FIELD_U32(a1, 144) = v7;
        FIELD_U32(a1, 148) = v7;
        FIELD_U32(a1, 152) = v7;
      }
    }
    else if ( !FIELD_U32(a1, 6924) )
    {
      StageActor__cullCheck((StageActor *)a1, 0);
    }
  }
  FIELD_U8(a1, 6944) = 0;
  FIELD_U8(a1, 6963) = 0;
  FIELD_U16(a1, 6954) = 0;
  FIELD_U16(a1, 6952) = 0;
  FIELD_U16(a1, 6950) = 0;
  FIELD_U16(a1, 6948) = 0;
  if ( FIELD_U8(a1, 6968) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 260))(a1);
    FIELD_U8(a1, 6968) = 0;
  }
  return 1;
}

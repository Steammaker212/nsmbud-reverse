/* StarCoin_onExecute
 * address: 0x605F3714   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall StarCoin_onExecute(int a1)
{
  StateMgr *v2; // r5
  char v3; // r12
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r5
  float v7; // s2
  int v8; // r0
  int v10; // [sp+0h] [bp-18h] BYREF
  float v11; // [sp+4h] [bp-14h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
  {
    v6 = FIELD_U32(a1, 56);
    if ( ((unsigned int)&dword_60C9D3DC & ~(1616852968 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9D3DC) )
    {
      dword_60C9D3D8 = (int)&off_60BC00C8;
      _cxa_guard_release(&dword_60C9D3DC);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C9D3D8) == 1 )
    {
      FIELD_U32(a1, 0x6C) = FIELD_U32(v6, 7800);
      v7 = FIELD_F32(v6, 0x1E7C);
      FIELD_F32(a1, 0x70) = v7;
      FIELD_U32(a1, 0x74) = FIELD_U32(v6, 7808);
      FIELD_F32(a1, 0x70) = v7 + 16.0;
      v8 = FIELD_U32(v6, 8176);
      FIELD_U32(a1, 0x90) = v8;
      FIELD_U32(a1, 0x94) = v8;
      FIELD_U32(a1, 0x98) = v8;
    }
  }
  else
  {
    CurrentState = StateMgr__getCurrentState(v2);
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v5 != (*(int (**)(void))(dword_60CB2200 + 8))() )
    {
      if ( FIELD_U32(a1, 6196) )
      {
        v11 = 0.0;
        ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
          &v10,
          &v11,
          a1 + 108,
          FIELD_U8(a1, 86));
        FIELD_F32(a1, 112) = FIELD_F32(a1, 6188) + (float)(v11 - FIELD_F32(a1, 6192));
      }
      StageActor__cullCheck((StageActor *)a1, 0);
    }
  }
  StarCoinBase_updateModel((ModelWrapper **)a1);
  return 1;
}

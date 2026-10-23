/* ShellEnemy__vfDC
 * address: 0x603A1C9C   size: 480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by: None
StateMethodExecuter *__fastcall ShellEnemy__vfDC(int a1)
{
  float v3; // r1
  float v4; // s0
  float v5; // s2
  int v6; // r1
  int v7; // r0
  StateBase *CurrentState; // r0
  int v9; // r5
  TileCheck_Result v10; // [sp+8h] [bp-48h] BYREF
  Vec2 positionOffset; // [sp+30h] [bp-20h] BYREF
  Vec2 a3; // [sp+38h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 6352) )
    return Enemy__vfDC((Enemy *)a1);
  FIELD_U8(a1, 84) = -1;
  v3 = FIELD_F32(a1, 112);
  a3.x = FIELD_F32(a1, 108);
  positionOffset.x = a3.x;
  a3.y = v3;
  positionOffset.y = v3;
  v4 = v3;
  if ( FIELD_U8(a1, 2991) )
  {
    v5 = v3;
    if ( FIELD_U8(a1, 2995) )
      goto LABEL_9;
    v6 = 3028;
  }
  else
  {
    v5 = v3;
    if ( !FIELD_U8(a1, 2999) )
      goto LABEL_9;
    v6 = 3076;
  }
  v5 = *(float *)(a1 + v6 + 8) + v4;
  a3.y = v5;
LABEL_9:
  if ( FIELD_U8(a1, 2992) )
  {
    if ( FIELD_U8(a1, 2996) )
      goto LABEL_15;
    v7 = a1 + 3040;
  }
  else
  {
    if ( !FIELD_U8(a1, 3000) )
      goto LABEL_15;
    v7 = a1 + 3088;
  }
  v4 = FIELD_F32(v7, 8) + v4;
  positionOffset.y = v4;
LABEL_15:
  if ( v5 != v4 )
  {
    sub_6014F61C(a1 + 648);
    FIELD_U16(a1, 652) = 257;
    v10.field_C = 0;
    v10.field_10 = 0;
    if ( TileCheck_check((TileCheck *)(a1 + 652), &v10, &a3, &positionOffset, 8) == 1 )
      FIELD_F32(a1, 112) = v10.field_8;
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6376) = 511;
  FIELD_U32(a1, 6380) = 96;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v9 == (*((int (**)(void))ShellEnemy_StateID_Sleep._._.vtable + 2))() )
    return (StateMethodExecuter *)(*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 6084) + 24))(
                                    FIELD_U32(a1, 6084),
                                    FIELD_U32(a1, 6092));
  else
    return (StateMethodExecuter *)(*(int (__fastcall **)(int, StateVirtual *))(*(_DWORD *)a1 + 192))(
                                    a1,
                                    &ShellEnemy_StateID_Sleep);
}

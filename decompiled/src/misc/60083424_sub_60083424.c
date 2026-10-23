/* sub_60083424
 * address: 0x60083424   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60083424(int a1)
{
  char v1; // r12
  int *v3; // r7
  unsigned int v4; // r0
  int v5; // r5
  float v6; // s16
  StateMgr *v7; // r5
  StateBase *CurrentState; // r0
  int v9; // r6
  StateBase *v10; // r0
  int v11; // r5
  float v12; // s0
  float v13; // s2
  float v14; // r0
  char v15; // r12
  int (__fastcall ***v16)(_DWORD, int *); // r5
  int result; // r0
  int v18; // [sp+0h] [bp-28h] BYREF
  int target; // [sp+4h] [bp-24h] BYREF

  v3 = (int *)(a1 + 7244);
  v4 = FIELD_U16(a1, 6278);
  if ( v4 >= 0x1F )
  {
    v5 = *v3;
    if ( *v3 )
    {
      v6 = (float)v4;
      if ( ((unsigned int)&dword_60C81104 & ~(1611150448 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
      {
        dword_60C81100 = (int)&off_60BC66E8;
        _cxa_guard_release(&dword_60C81104);
      }
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81100) == 1 )
      {
        if ( FIELD_U32(v5, 15240) <= 3u
          || (v7 = (StateMgr *)(v5 + 6084),
              CurrentState = StateMgr__getCurrentState(v7),
              v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
              v9 != (*(int (**)(void))(dword_60C82220 + 8))())
          && (v10 = StateMgr__getCurrentState(v7),
              v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v10, 0x0) + 2))(v10),
              v11 != (*(int (**)(void))(dword_60C82080 + 8))()) )
        {
          v6 = v6 * 0.5;
        }
      }
      v12 = (float)(*(float *)(*v3 + 108) - FIELD_F32(a1, 108)) / v6;
      if ( FIELD_U32(a1, 80) )
      {
        v13 = -2.0;
        if ( v12 >= -2.0 )
        {
          v13 = (float)(*(float *)(*v3 + 108) - FIELD_F32(a1, 108)) / v6;
          if ( v12 > 0.0 )
            v13 = 0.0;
        }
      }
      else if ( v12 >= 0.0 )
      {
        v13 = (float)(*(float *)(*v3 + 108) - FIELD_F32(a1, 108)) / v6;
        if ( v12 > 2.0 )
          v13 = 2.0;
      }
      else
      {
        v13 = 0.0;
      }
      v14 = v13;
      FIELD_F32(a1, 120) = v13;
    }
    else
    {
      v14 = FIELD_F32(a1, 120);
    }
    FIELD_F32(a1, 132) = v14;
  }
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  target = 0;
  v18 = 35791394;
  moveValueTo((int *)(a1 + 160), &target, &v18);
  v16 = (int (__fastcall ***)(_DWORD, int *))*v3;
  if ( *v3 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611150892 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( (**v16)(v16, &dword_60C81100) == 1 && !FIELD_U16(a1, 6276) )
      sub_600951E4(v16);
  }
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81B2C);
  return result;
}

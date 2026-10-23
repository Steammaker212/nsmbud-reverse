/* sub_603035FC
 * address: 0x603035FC   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603035FC(int a1, ActiveCollider *a2, ActiveCollider *a3, int a4)
{
  char v4; // r12
  int (__fastcall ***v9)(_DWORD, int *); // r4
  int v10; // r7
  StageActor *owner; // r4
  int v12; // r6
  bool v13; // zf
  StateBase *CurrentState; // r0
  int v15; // r4
  int v16; // r7
  int v17; // r0
  StageActor *v18; // r5
  int v19; // r4
  int Resource; // r0
  _DWORD v21[2]; // [sp+0h] [bp-30h] BYREF
  Vec2 v22[5]; // [sp+8h] [bp-28h] BYREF

  v9 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
  if ( ((unsigned int)&dword_60C92F04 & ~(1613772328 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C92F04) )
  {
    dword_60C92F00 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C92F04);
  }
  if ( v9 )
  {
    v10 = (**v9)(v9, &dword_60C92F00);
    if ( v10 )
      v10 = (int)v9;
  }
  else
  {
    v10 = 0;
  }
  owner = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613772460 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( owner )
  {
    v12 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378);
    if ( v12 )
      v12 = (int)owner;
    v13 = v10 == 0;
    if ( v10 )
      v13 = v12 == 0;
    if ( !v13 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v10 + 6084));
      v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      v16 = 2;
      if ( v15 != (*(int (**)(void))(dword_60C92FA8 + 8))()
        || (FIELD_U8(v12, 6900) & 1) == 0 && (v16 = 1, FIELD_F32(a1, 6968) > 0.5) )
      {
        v17 = Enemy__processCollision((Enemy *)a1, a2, a3, 0);
        if ( v17 )
        {
          if ( (v17 | 2) == 3 )
          {
            FIELD_U8(a1, 84) = FIELD_U8(v12, 84);
            v18 = FIELD_U32(a3, 0x40);
            if ( a4 )
            {
              v19 = **(_DWORD **)(FIELD_U32(a1, 6952) + 12);
              LODWORD(v22[0].x) = &sead__SafeStringBase__vtable;
              LODWORD(v22[0].y) = "jugem";
              Resource = LoadResource(ResourceMgrRelated_instance, v22);
              v21[0] = &sead__SafeStringBase__vtable;
              v21[1] = "dead";
              SkeletalAnim_play(v19, Resource, (int)v21);
              *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 24) = 1065353216;
              AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4), 1);
              sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 6952) + 12) + 4));
              FIELD_U32(a1, 7000) = 4;
              (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
              Enemy_killYoshi(a1, (int)v18);
            }
            else
            {
              v22[0].x = 0.0;
              v22[0].y = 0.0;
              Enemy_killWithState((Enemy *)a1, v18, v22, (int)&dword_60C92EB0);
            }
          }
        }
        else if ( v16 == 2 )
        {
          (*(void (__fastcall **)(int, ActiveCollider *, ActiveCollider *))(*(_DWORD *)a1 + 200))(a1, a2, a3);
        }
      }
    }
  }
}

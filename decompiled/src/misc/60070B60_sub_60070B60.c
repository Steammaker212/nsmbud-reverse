/* sub_60070B60
 * address: 0x60070B60   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60070B60(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  StageActor *owner; // r5
  float x; // s0
  StageActor *v7; // r7
  char v8; // r12
  int *v9; // r9
  StateBase *CurrentState; // r0
  int v11; // r8
  float y; // s16
  float v13; // s0
  int v14; // r0
  float v15; // s0
  float v16; // s16
  float v17; // s0
  float v18[12]; // [sp+0h] [bp-30h] BYREF

  owner = FIELD_U32(a1, 0x40);
  if ( ((unsigned int)&dword_60C81738 & ~(1611074440 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81738) )
  {
    dword_60C81734 = (int)&off_60BC1FA8;
    _cxa_guard_release(&dword_60C81738);
  }
  if ( owner )
  {
    if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C81734) == 1 )
    {
      x = FIELD_F32(owner, 0x6C);
      if ( (float)(x + 240.0) >= FIELD_F32(dword_60CC6484, 112)
        && (float)(x + -240.0) <= FIELD_F32(dword_60CC6484, 120) )
      {
        v7 = FIELD_U32(a2, 0x40);
        if ( v7 )
        {
          if ( Actor__getProfileId(&FIELD_U32(a2, 0x40)) != 373 )
            goto LABEL_24;
          if ( ((unsigned int)&dword_60C81104 & ~(1611074660 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
          {
            dword_60C81100 = (int)&off_60BC66E8;
            _cxa_guard_release(&dword_60C81104);
          }
          if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v7, 0x0))(v7, &dword_60C81100) == 1
            && (v9 = &v7[23].aCollider.field_F0, v7[23].aCollider.field_F0 <= 3u)
            && (CurrentState = StateMgr__getCurrentState((StateMgr *)&v7[9].aCollider.field_64),
                v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
                v11 == (*(int (**)(void))(dword_60C82140 + 8))())
            && !LOBYTE(v7[23].aCollider.field_108)
            && (y = FIELD_F32(v7, 0x70),
                ActiveCollider_getCenterY((ActiveCollider *)&owner[16].aCollider.trapezoidOffsetBottomLeft),
                y > v13) )
          {
            v14 = *v9;
            if ( (unsigned int)*v9 >= 4 )
              v14 = 0;
            if ( *(_DWORD *)(PlayerMgr_instance + 4 * v14 + 48) )
            {
              (*(void (__fastcall **)(StageActor *))(FIELD_U32(owner, 0x0) + 804))(owner);
              ActiveCollider_getCenterX(a2);
              v16 = v15;
              ActiveCollider_getBottom(a2);
              v18[0] = v16;
              v18[1] = v17;
              ((void (__fastcall *)(StageActor *, float *, int))koopa_damage_ice_ref)(owner, v18, 1);
            }
            LOBYTE(v7[23].aCollider.field_108) = 1;
            FIELD_U8(a2, 0x6E) |= 2u;
          }
          else
          {
LABEL_24:
            Enemy__collisionCallback(a1, a2);
          }
        }
      }
    }
  }
}

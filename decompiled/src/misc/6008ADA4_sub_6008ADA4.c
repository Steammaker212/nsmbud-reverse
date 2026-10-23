/* sub_6008ADA4
 * address: 0x6008ADA4   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008ADA4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r6
  StageActor *v8; // r5
  int v9; // r10
  int v10; // r7
  char v11; // r12
  bool v12; // zf
  int v13; // r1
  unsigned int playerId; // r0
  float v15; // s0
  float v16; // s16
  float v17; // s0
  StateBase *CurrentState; // r0
  int v19; // r6
  StateBase *v20; // r0
  int v21; // r4
  _BOOL4 v22; // r1
  float v23; // s0

  owner = FIELD_U32(a2, 0x40);
  v8 = FIELD_U32(a3, 0x40);
  if ( ((unsigned int)&dword_60C81760 & ~(1611181520 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
  {
    dword_60C8175C = (int)&off_60BC6E94;
    _cxa_guard_release(&dword_60C81760);
  }
  v9 = 0;
  if ( owner )
  {
    v10 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C8175C);
    if ( v10 )
      v10 = (int)owner;
    v12 = v8 == 0;
    if ( v8 )
      v12 = v10 == 0;
    if ( !v12 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611181656 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v9 = 1;
      if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(v8, 0x0))(v8, &dword_60C7B370) == 1 )
      {
        v13 = 0;
        FIELD_U8(a3, 0x6E) |= 2u;
        playerId = (unsigned __int8)FIELD_U8(v8, 0x54);
        if ( playerId < 4 )
          v13 = (char)playerId;
        *(_WORD *)(a1 + 2 * v13 + 6140) = 32;
        if ( FIELD_U8(v10, 7248) )
        {
          ActiveCollider_getCenterY(a3);
          v16 = v15;
          ActiveCollider_getCenterY(a2);
          if ( v16 > v17 )
            (*(void (__fastcall **)(int, StageActor *))(*(_DWORD *)a1 + 804))(a1, v8);
        }
        else
        {
          CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v19 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          if ( v19 == (*(int (**)(void))(dword_60C81D4C + 8))()
            || (v20 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
                v21 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v20, 0x0) + 2))(v20),
                v21 == (*(int (**)(void))(dword_60C81D6C + 8))()) )
          {
            FIELD_U8(a1, 84) = FIELD_U8(v8, 0x54);
            v22 = FIELD_F32(v8, 0x6C) > FIELD_F32(a1, 108);
            v23 = (float)byte_60AFE3F4[v22];
            FIELD_U32(a1, 80) = v22;
            FIELD_F32(a1, 120) = (float)(v23 * 3.5) * 1.5;
            FIELD_U32(a1, 124) = 1075838976;
            FIELD_U32(a1, 128) = 0;
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C81D8C);
          }
          else
          {
            (*(void (__fastcall **)(StageActor *, StageActor *, int))(FIELD_U32(v8, 0x0) + 1168))(v8, FIELD_U32(a2, 0x40), 4);
          }
        }
      }
    }
  }
  return v9;
}

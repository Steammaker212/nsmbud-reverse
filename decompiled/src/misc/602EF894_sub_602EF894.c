/* sub_602EF894
 * address: 0x602EF894   size: 964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602EF894(int a1, _DWORD *a2)
{
  char v2; // r12
  int v5; // r4
  int v6; // r0
  bool v7; // zf
  int v8; // r5
  unsigned int v9; // r2
  int v10; // r0
  _BOOL4 v11; // r1
  int v12; // r0
  StateBase *CurrentState; // r0
  int v14; // r7
  StateBase *v15; // r0
  int v16; // r7
  StateBase *v17; // r0
  int v18; // r7
  StateBase *v19; // r0
  int v20; // r7
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  char v25; // r0
  _BOOL4 v26; // r6
  float v27; // s16
  float v28; // s18

  v5 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60C7B39C & ~(1613691064 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B398) == 1 && !FIELD_U8(v5, 7525) )
  {
    v6 = FIELD_U32(v5, 7368);
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U8(v6, 74) == 0;
    if ( v7 )
    {
      v8 = (*(int (__fastcall **)(_DWORD *, int, int))(*a2 + 32))(a2, a1, 3);
      if ( Actor__getProfileId((Actor *)v8) == 324 )
      {
        v9 = FIELD_S8(v5, 84);
        v10 = v5;
        v11 = FIELD_F32(v5, 108) <= FIELD_F32(v8, 108);
        goto LABEL_14;
      }
      v12 = FIELD_U8(v8, 533);
      if ( (unsigned int)(v12 - 1) >= 2 )
      {
        if ( v12 == 4 )
          return;
        v26 = FIELD_F32(v5, 108) < FIELD_F32(v8, 108);
        if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v8 + 80))(v8) + 2553) & 2) == 0
          || sub_602F0A90(v5, v8, v26) )
        {
          return;
        }
        if ( FIELD_U8(v5, 7529) )
        {
          v10 = v5;
          v11 = v26;
          v9 = -1;
        }
        else
        {
          if ( FIELD_U8(v8, 84) <= 3u )
          {
            sub_602EEF20(v5, (StageActor *)v8, v26);
            return;
          }
          v9 = FIELD_S8(v5, 84);
          v10 = v5;
          v11 = v26;
        }
LABEL_14:
        sub_602EE7D8(v10, v11, v9, 0);
        return;
      }
      if ( (FIELD_U8(v5, 21) & 1) == 0 && (FIELD_U8(v5, 7440) & 1) != 0 )
      {
        v27 = FIELD_F32(v8, 108);
        v28 = FIELD_F32(v5, 108);
        if ( (*(_BYTE *)((*(int (__fastcall **)(int))(*(_DWORD *)v8 + 80))(v8) + 2553) & 2) != 0 )
        {
          sub_602F05E4(v5, v8, v28 < v27);
          a2[556] |= 0x20u;
        }
        return;
      }
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v14 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v14 != (*(int (**)(void))(dword_60C923A4 + 8))() )
      {
        v15 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
        v16 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
        if ( v16 != (*(int (**)(void))(dword_60C924C4 + 8))() )
        {
          v17 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
          v18 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v17, 0x0) + 2))(v17);
          if ( v18 != (*(int (**)(void))(dword_60C924E4 + 8))() )
          {
            v19 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
            v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
            if ( v20 != (*((int (**)(void))stru_60C924A4.vtable + 2))() )
              return;
          }
        }
      }
      v21 = FIELD_U8(v8, 533);
      if ( v21 == 2 )
      {
        v25 = 1;
        if ( (FIELD_U8(v8, 1210) & 1) != 0 )
          goto LABEL_39;
      }
      else
      {
        if ( v21 != 1 )
          return;
        v22 = sub_6075F914(v8);
        v23 = FIELD_U32(v8, 1208);
        v24 = v23 & 0x10000;
        if ( v22 == 1 )
        {
          v25 = 1;
          if ( !v24 )
            return;
          goto LABEL_39;
        }
        v25 = 1;
        if ( (v23 & 0x100000) != 0 || v24 != 0 )
          goto LABEL_39;
      }
      v25 = 0;
      if ( FIELD_F32(v8, 124) >= -3.0 )
        return;
LABEL_39:
      FIELD_U8(v5, 7537) = v25;
      StateMgr__changeState((StateMgr *)(v5 + 6084), &stru_60C924A4);
    }
  }
}

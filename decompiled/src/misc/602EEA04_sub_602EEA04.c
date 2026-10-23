/* sub_602EEA04
 * address: 0x602EEA04   size: 1228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602EEA04(int a1, int a2)
{
  int v4; // r6
  int v5; // r9
  int ProfileId; // r4
  int v7; // r0
  bool v8; // zf
  int v9; // r11
  StateBase *CurrentState; // r0
  int v11; // r10
  StateBase *v12; // r0
  int v13; // r10
  char v14; // r12
  float v15; // s0
  float v16; // s2
  _BOOL4 v17; // r1
  unsigned int v18; // r2
  StateBase *v19; // r0
  int v20; // r10
  StateBase *v21; // r0
  int v22; // r5
  bool v23; // zf
  float v24; // s0
  float v25; // s2
  int v26; // r0
  StateBase *v27; // r0
  int v28; // r5
  bool v29; // zf
  StateMgr *v30; // [sp+0h] [bp-28h]

  v4 = FIELD_U32(a2, 64);
  v5 = FIELD_U32(a1, 64);
  ProfileId = Actor__getProfileId((Actor *)v4);
  if ( ProfileId != 392 && !FIELD_U8(v5, 7525) )
  {
    v7 = FIELD_U32(v5, 7368);
    v8 = v7 == 0;
    if ( v7 )
      v8 = FIELD_U8(v7, 74) == 0;
    if ( v8 )
    {
      v9 = FIELD_U32(a2, 140);
      if ( v9 == 4 || (FIELD_U8(a2, 153) & 2) != 0 )
        goto LABEL_46;
      if ( FIELD_U32(a1, 140) != 9 )
        goto LABEL_24;
      v30 = (StateMgr *)(v5 + 6084);
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
      v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( (v11 != (*((int (**)(void))stru_60C92664.vtable + 2))() || ProfileId != 767 && ProfileId != 761)
        && (FIELD_U8(a2, 153) & 1) == 0 )
      {
        if ( FIELD_U32(a2, 136) == 4 )
        {
          v12 = StateMgr__getCurrentState(v30);
          v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v12, 0x0) + 2))(v12);
          if ( v13 != (*((int (**)(void))stru_60C92664.vtable + 2))() )
          {
            if ( ((unsigned int)&dword_60C8DC20 & ~(1613687908 << v14) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DC20) )
            {
              dword_60C8DC1C = (int)&off_60BC04AC;
              _cxa_guard_release(&dword_60C8DC20);
            }
            if ( !v4 || (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C8DC1C) != 1 || !sub_60242F84(v4) )
              return;
            goto LABEL_58;
          }
        }
        if ( FIELD_U8(v5, 7527) && ProfileId != 222 && FIELD_U8(v4, 533) == 3 )
        {
          v15 = FIELD_F32(v4, 108);
          v16 = FIELD_F32(v5, 108);
          v17 = 0;
          v18 = *(char *)(FIELD_U32(v5, 7368) + 75);
LABEL_59:
          if ( v16 <= v15 )
            v17 = 1;
          v26 = v5;
          goto LABEL_47;
        }
        if ( (v19 = StateMgr__getCurrentState(v30),
              v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19),
              v20 != (*(int (**)(void))(dword_60C92424 + 8))())
          && (v21 = StateMgr__getCurrentState(v30),
              v22 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v21, 0x0) + 2))(v21),
              v22 != (*((int (**)(void))stru_60C92444.vtable + 2))())
          || FIELD_U8(v4, 533) != 3 )
        {
LABEL_24:
          if ( (FIELD_U8(v5, 21) & 1) != 0 || (FIELD_U8(v5, 7440) & 1) == 0 )
            return;
          if ( v9 == 9 )
          {
            if ( sub_600005D4((StageActor *)v4, 0)
              || FIELD_U32(a1, 140) != 9 && FIELD_U8(v4, 533) == 3 && (FIELD_U8(v4, 6148) & 1) != 0 )
            {
              return;
            }
            v24 = FIELD_F32(v4, 108);
            v25 = FIELD_F32(v5, 108);
            if ( FIELD_U8(v4, 84) > 3u )
            {
              v18 = FIELD_S8(v5, 84);
              v26 = v5;
              v17 = v25 <= v24;
              goto LABEL_47;
            }
            sub_602EEF20(v5, v4, v25 <= v24);
          }
          else
          {
            v23 = v9 == 19;
            if ( v9 != 19 )
              v23 = v9 == 20;
            if ( !v23 )
            {
              if ( FIELD_U8(v4, 533) == 3 )
              {
                if ( ProfileId == 670 )
                {
LABEL_46:
                  v26 = v5;
                  v18 = -1;
                  v17 = FIELD_F32(v5, 108) <= FIELD_F32(v4, 108);
LABEL_47:
                  sub_602EE7D8(v26, v17, v18, 0);
                  goto LABEL_48;
                }
                v27 = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
                v28 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v27, 0x0) + 2))(v27);
                if ( v28 != (*((int (**)(void))stru_60C92664.vtable + 2))() )
                {
                  if ( FIELD_U32(a2, 136) != 7 )
                  {
                    if ( ProfileId == 651 )
                    {
                      sub_602EE7D8(v5, FIELD_F32(v5, 108) <= FIELD_F32(v4, 108), FIELD_S8(v5, 84), 0);
                      FIELD_U8(a1, 110) |= 2u;
                      sub_603E10FC(v4, a2 + 84);
                    }
                    return;
                  }
                  goto LABEL_46;
                }
                v29 = (FIELD_U32(a2, 148) & 0x200) == 0;
                if ( (FIELD_U32(a2, 148) & 0x200) != 0 )
                  v29 = ProfileId == 520;
                if ( v29 || ProfileId == 441 )
                  return;
              }
              else if ( FIELD_U8(v4, 533) || ProfileId != 128 )
              {
                return;
              }
              goto LABEL_58;
            }
            sub_602EEF20(v5, v4, FIELD_F32(v5, 108) <= FIELD_F32(v4, 108));
          }
LABEL_48:
          FIELD_U8(a1, 110) |= 2u;
          return;
        }
      }
LABEL_58:
      v15 = FIELD_F32(v4, 108);
      v16 = FIELD_F32(v5, 108);
      v18 = FIELD_S8(v5, 84);
      v17 = 0;
      goto LABEL_59;
    }
  }
}

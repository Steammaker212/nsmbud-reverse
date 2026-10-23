/* sub_602EFC88
 * address: 0x602EFC88   size: 1400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602EFC88(int a1, _BYTE *a2)
{
  char v2; // r12
  int v5; // r4
  _BYTE *v6; // r6
  int v7; // r0
  bool v8; // zf
  StageActor *v9; // r5
  int type; // r0
  _BOOL4 v11; // r8
  StateBase *CurrentState; // r0
  int v13; // r9
  int v14; // r5
  int v15; // r1
  unsigned int playerId; // r2
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r2
  unsigned int U32; // r0
  float v21; // s0
  float v22; // s2
  float v23[4]; // [sp+0h] [bp-38h] BYREF
  char v24; // [sp+10h] [bp-28h]
  char v25; // [sp+11h] [bp-27h]
  char v26; // [sp+12h] [bp-26h]
  char v27; // [sp+13h] [bp-25h]
  char v28; // [sp+14h] [bp-24h]
  char v29; // [sp+15h] [bp-23h]
  char v30; // [sp+16h] [bp-22h]

  v5 = FIELD_U32(a1, 144);
  if ( ((unsigned int)&dword_60C7B39C & ~(1613692076 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  if ( v5 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B398) == 1 )
    {
      v6 = (_BYTE *)(v5 + 7525);
      if ( !FIELD_U8(v5, 7525) )
      {
        v7 = FIELD_U32(v5, 7368);
        v8 = v7 == 0;
        if ( v7 )
          v8 = FIELD_U8(v7, 74) == 0;
        if ( v8 )
        {
          v9 = (StageActor *)(*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 2);
          type = (unsigned __int8)FIELD_U8(v9, 0x215);
          v11 = FIELD_F32(v5, 108) < FIELD_F32(v9, 0x6C);
          if ( (unsigned int)(type - 1) < 2 )
          {
            if ( (*(int (__fastcall **)(StageActor *))(FIELD_U32(v9, 0x0) + 1204))(v9) != 1 )
            {
              CurrentState = StateMgr__getCurrentState((StateMgr *)(v5 + 6084));
              v13 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
              if ( v13 == (*(int (**)(void))(dword_60C924E4 + 8))() )
              {
                if ( !*v6 )
                {
                  v14 = FIELD_U32(v5, 7368);
                  v15 = -1;
                  if ( !FIELD_U8(v5, 7529) )
                    v15 = FIELD_S8(v14, 75);
                  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(v5 + 56) + 68))(FIELD_U32(v5, 56), v15);
                  FIELD_U8(v14, 74) = 3;
                  *v6 = 1;
                }
                return;
              }
              if ( (FIELD_U8(v5, 7440) & 1) == 0 )
                return;
              if ( (a2[2545] & 2) != 0 )
              {
                if ( !FIELD_U8(v5, 7529) )
                {
                  playerId = FIELD_U8(v9, 0x54);
                  if ( playerId == -1 )
                    goto LABEL_47;
                  goto LABEL_48;
                }
              }
              else if ( (v9[1].field_234 & 0x4000000) != 0 )
              {
                if ( !FIELD_U8(v5, 7529) )
                {
                  playerId = FIELD_U8(v9, 0x54);
                  if ( playerId == -1 )
                  {
LABEL_47:
                    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
                    v21 = FIELD_F32(v5, 108) + FIELD_F32(v5, 572);
                    v22 = FIELD_F32(v5, 112) + FIELD_F32(v5, 576);
                    v23[2] = FIELD_F32(v5, 116) + FIELD_F32(v5, 580);
                    v23[0] = v21;
                    v23[1] = v22;
                    LODWORD(v23[3]) = U32 >> 31;
                    v24 = 1;
                    v25 = 0;
                    v28 = 0;
                    v27 = 0;
                    v30 = 0;
                    v29 = 0;
                    v26 = 0;
                    sub_60583000(dword_60CAF15C, v23, 3);
                    playerId = FIELD_S8(v5, 84);
                  }
LABEL_48:
                  sub_602EE7D8(v5, v11, playerId, 0);
                  return;
                }
              }
              else
              {
                if ( sub_602F08CC(v5, v9) != 1 )
                  return;
                if ( !FIELD_U8(v5, 7529) )
                {
                  playerId = FIELD_U8(v9, 0x54);
                  if ( playerId == -1 )
                    goto LABEL_47;
                  goto LABEL_48;
                }
              }
              goto LABEL_43;
            }
LABEL_21:
            sub_602F07A4(v5, v9, v11);
            return;
          }
          if ( type == 4 )
          {
            if ( sub_605DD6E8(v9) == 1 )
              goto LABEL_21;
            if ( (FIELD_U8(v5, 7440) & 1) == 0 || sub_602F08CC(v5, v9) != 1 )
              return;
            if ( !FIELD_U8(v5, 7529) )
            {
              playerId = FIELD_U8(v9, 0x54);
              if ( playerId == -1 )
                goto LABEL_47;
              goto LABEL_48;
            }
          }
          else
          {
            if ( (*(_BYTE *)((*(int (__fastcall **)(StageActor *))(FIELD_U32(v9, 0x0) + 80))(v9) + 2545) & 2) == 0
              || sub_602F0A90(v5, v9, v11) )
            {
              return;
            }
            if ( !FIELD_U8(v5, 7529) )
            {
              if ( (unsigned __int8)FIELD_U8(v9, 0x54) <= 3u )
              {
                sub_602EEF20(v5, v9, v11);
                return;
              }
              v19 = FIELD_S8(v5, 84);
              v17 = v5;
              v18 = v11;
              goto LABEL_44;
            }
          }
LABEL_43:
          v17 = v5;
          v18 = v11;
          v19 = -1;
LABEL_44:
          sub_602EE7D8(v17, v18, v19, 0);
        }
      }
    }
  }
}

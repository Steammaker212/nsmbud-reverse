/* SE_MG__ref
 * address: 0x607317FC   size: 1964   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_MG__ref(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  char v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r1
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r0
  int v17; // r0
  _DWORD *v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v22; // r3
  int v23; // r3
  int v24; // r0
  char v25; // r5
  int v26; // r0
  int v27; // [sp+0h] [bp-28h]
  int v28; // [sp+4h] [bp-24h]
  int v29; // [sp+8h] [bp-20h]
  int v30; // [sp+Ch] [bp-1Ch]
  int v31; // [sp+10h] [bp-18h]

  if ( !FIELD_U8(a1, 100) )
  {
    v2 = FIELD_U32(a1, 88);
    if ( v2 )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
      if ( ((unsigned int)&dword_60CBDD28 & ~(1618155604 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD28) )
      {
        dword_60CBDD24 = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CBDD28);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBDD24) == 1 )
      {
        switch ( FIELD_U8(a1, 101) )
        {
          case 0:
            FIELD_U32(a1, 104) = 60;
            v5 = 1;
            goto LABEL_41;
          case 1:
            if ( FIELD_U32(a1, 104) )
              return;
            v5 = 2;
            goto LABEL_41;
          case 2:
            sub_60733344(a1, 0);
            v7 = sub_607335A4(a1);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60CBDB40);
            goto LABEL_40;
          case 3:
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            v8 = 20;
            goto LABEL_35;
          case 4:
            if ( FIELD_U32(a1, 104) )
              return;
            StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60CBDF24);
            v8 = 78;
            goto LABEL_35;
          case 5:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_START", 0, 1);
            sub_60815F50(dword_60CC6B68, 3);
            ++FIELD_U8(a1, 101);
            goto LABEL_101;
          case 6:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60807EF0(SoundSystem_instance, "SE_MG_SH_ITEM_IN", 0, 1);
            goto LABEL_40;
          case 7:
            if ( !FIELD_U8(v3, 6111) )
              return;
            FIELD_U32(a1, 104) = 20;
            v5 = 8;
            goto LABEL_41;
          case 8:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60733344(a1, 1);
            goto LABEL_40;
          case 9:
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60CBDF64);
            v8 = 30;
LABEL_35:
            FIELD_U32(a1, 104) = v8;
            goto LABEL_40;
          case 0xA:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_6077A44C(dword_60CBFA90);
            goto LABEL_40;
          case 0xB:
            if ( !FIELD_U8(v3, 6112) )
              return;
            FIELD_U32(a1, 104) = 40;
            sub_6077A268(dword_60CBFA90);
            *(_BYTE *)(sub_607335A4(a1) + 6328) = 0;
            v9 = sub_607335A4(a1);
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 72))(v9);
LABEL_40:
            v5 = FIELD_U8(a1, 101) + 1;
            goto LABEL_41;
          case 0xC:
            v10 = sub_6077A158(dword_60CBFA90);
            v11 = v10 == 1;
            if ( v10 == 1 )
              v11 = FIELD_U32(a1, 104) == 0;
            if ( !v11 )
              return;
            v27 = FIELD_U32(v3, 6216);
            v28 = FIELD_U32(v3, 6220);
            v29 = FIELD_U32(v3, 6224);
            v30 = FIELD_U32(v3, 6228);
            v31 = FIELD_U32(v3, 6232);
            v12 = 0;
            v13 = (_DWORD *)dword_60C99DD4;
            FIELD_U32(dword_60C99DD4, 740) = 15;
            v13[186] = 15;
            v13[187] = 15;
            v13[188] = 15;
            v13[189] = 15;
            v13[190] = 0;
            FIELD_U8(a1, 111) = 0;
            FIELD_U32(a1, 116) = 0;
            if ( (v27 & 0xFFFFFFFE) == 0x18 )
              goto LABEL_52;
            v14 = 1;
            FIELD_U8(a1, 111) = 1;
            if ( v27 == 11 )
              goto LABEL_50;
            if ( v27 == 10 )
            {
              v14 = 3;
LABEL_50:
              FIELD_U32(a1, 116) = v14;
            }
            v13[185] = dword_60B0A2EC[v27];
            v13[190] = 0;
            v12 = 1;
LABEL_52:
            if ( (v28 & 0xFFFFFFFE) == 0x18 )
              goto LABEL_75;
            ++FIELD_U8(a1, 111);
            if ( v28 == 11 )
            {
              v15 = 1;
            }
            else
            {
              if ( v28 != 10 )
                goto LABEL_74;
              v15 = 3;
            }
            FIELD_U32(a1, 116) += v15;
LABEL_74:
            v18 = &v13[v12];
            LOBYTE(v12) = v12 + 1;
            v18[185] = dword_60B0A2EC[v28];
            v13[190] = 0;
LABEL_75:
            if ( (v29 & 0xFFFFFFFE) == 0x18 )
              goto LABEL_82;
            ++FIELD_U8(a1, 111);
            if ( v29 == 11 )
            {
              v19 = 1;
            }
            else
            {
              if ( v29 != 10 )
                goto LABEL_81;
              v19 = 3;
            }
            FIELD_U32(a1, 116) += v19;
LABEL_81:
            v20 = (unsigned __int8)v12;
            LOBYTE(v12) = v12 + 1;
            v13[v20 + 185] = dword_60B0A2EC[v29];
            v13[190] = 0;
LABEL_82:
            if ( (v30 & 0xFFFFFFFE) == 0x18 )
              goto LABEL_89;
            ++FIELD_U8(a1, 111);
            if ( v30 == 11 )
            {
              v21 = 1;
            }
            else
            {
              if ( v30 != 10 )
                goto LABEL_88;
              v21 = 3;
            }
            FIELD_U32(a1, 116) += v21;
LABEL_88:
            v22 = (unsigned __int8)v12;
            LOBYTE(v12) = v12 + 1;
            v13[v22 + 185] = dword_60B0A2EC[v30];
            v13[190] = 0;
LABEL_89:
            if ( (v31 & 0xFFFFFFFE) == 0x18 )
              goto LABEL_96;
            ++FIELD_U8(a1, 111);
            if ( v31 == 11 )
            {
              v23 = 1;
            }
            else
            {
              if ( v31 != 10 )
                goto LABEL_95;
              v23 = 3;
            }
            FIELD_U32(a1, 116) += v23;
LABEL_95:
            v13[(unsigned __int8)v12 + 185] = dword_60B0A2EC[v31];
            v13[190] = 0;
LABEL_96:
            if ( FIELD_U8(a1, 111) )
            {
              sub_6073132C(dword_60CBDBF8);
              v24 = sub_607335A4(a1);
              sub_607305D0(v24);
              FIELD_U8(a1, 108) = 1;
              sub_60815F50(dword_60CC6B68, 7);
              v25 = 13;
              if ( FIELD_U8(a1, 111) >= 2u )
                sub_6081F114(dword_60CC6D78);
            }
            else
            {
              sub_60733344(a1, 3);
              v26 = sub_607335A4(a1);
              sub_60730680(v26);
              sub_6081F12C(dword_60CC6D78);
              v25 = 14;
            }
            FIELD_U8(a1, 101) = v25;
LABEL_101:
            FIELD_U32(a1, 104) = 30;
            return;
          case 0xD:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            if ( FIELD_S32(a1, 116) < 1 )
            {
              if ( sub_60731338(dword_60CBDBF8) != 1 )
                return;
LABEL_70:
              v5 = 17;
            }
            else
            {
              FIELD_U32(a1, 120) = 60;
              if ( sub_60731338(dword_60CBDBF8) != 1 )
                return;
              v5 = 15;
            }
            goto LABEL_41;
          case 0xE:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            if ( sub_60731324(dword_60CBDBF8) == 1 )
              goto LABEL_70;
            return;
          case 0xF:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            v16 = FIELD_U32(a1, 120) - 1;
            FIELD_U32(a1, 120) = v16;
            if ( v16 )
              return;
            sub_600220C0(dword_60C7F52C, 1);
            v17 = FIELD_U32(a1, 116);
            FIELD_U32(a1, 116) = v17 - 1;
            if ( v17 < 2 )
            {
              v5 = 16;
LABEL_41:
              FIELD_U8(a1, 101) = v5;
            }
            else
            {
              FIELD_U32(a1, 120) = 40;
            }
            break;
          case 0x10:
            v6 = FIELD_U32(a1, 104);
            if ( !v6 )
              goto LABEL_70;
            if ( v6 == 1 )
              FIELD_U8(a1, 113) = 1;
            return;
          case 0x11:
            FIELD_U32(a1, 104) = 60;
            v5 = 18;
            goto LABEL_41;
          case 0x12:
            if ( !FIELD_U32(a1, 104) )
            {
              FIELD_U8(dword_60CC6D78, 513) |= 1u;
              sub_603F48B0(AreaTask_intance);
            }
            return;
          default:
            return;
        }
      }
    }
  }
}

/* SE_MG_CMN_START_ref_2
 * address: 0x60732688   size: 2104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_MG_CMN_START_ref_2(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  char v5; // r0
  int v6; // r0
  StateBase *CurrentState; // r0
  int v8; // r6
  signed int v9; // r6
  int v10; // r0
  int v11; // r0
  unsigned int U32; // r0
  unsigned int v13; // r10
  signed int v14; // r6
  _BYTE *v15; // r7
  unsigned int v16; // r0
  signed int v17; // r4
  int v18; // r0
  StateBase *v19; // r0
  int v20; // r6
  int v21; // r0
  __int16 v22; // r0
  _DWORD *v23; // r6
  int v24; // r0
  int v25; // r0
  int v26; // r5
  int v27; // r6
  char v28; // r0
  signed int v29; // r6
  int v30; // r0
  int v31; // r0

  if ( FIELD_U8(a1, 100) == 3 )
  {
    v2 = FIELD_U32(a1, 96);
    if ( v2 )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
      if ( ((unsigned int)&dword_60CBD950 & ~(1618159320 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBD950) )
      {
        dword_60CBD94C = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CBD950);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBD94C) == 1 && sub_6072EFA0(v3, 0) )
      {
        switch ( FIELD_U8(a1, 101) )
        {
          case 0:
            FIELD_U32(a1, 104) = 60;
            v5 = 1;
            goto LABEL_77;
          case 1:
            if ( FIELD_U32(a1, 104) )
              return;
            v5 = 2;
            goto LABEL_77;
          case 2:
            sub_60733344(a1, 0);
            v6 = sub_607335A4(a1);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60CBDB40);
            goto LABEL_76;
          case 3:
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
            v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
            if ( v8 != (*(int (**)(void))(dword_60CBDAA8 + 8))() )
              return;
            if ( FIELD_S32(v3, 6112) >= 1 )
            {
              v9 = 0;
              do
              {
                v10 = sub_6072EFA0(v3, v9);
                (*(void (__fastcall **)(int, int *))(*(_DWORD *)v10 + 192))(v10, &dword_60CBD8DC);
                ++v9;
              }
              while ( v9 < FIELD_U32(v3, 6112) );
            }
            FIELD_U32(a1, 104) = 40;
            sub_6077A44C(dword_60CBFA90);
            goto LABEL_76;
          case 4:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_604BBBCC(dword_60CA2674);
            v11 = 180;
            goto LABEL_75;
          case 5:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60815F50(dword_60CC6B68, 3);
            FIELD_U8(a1, 110) = 0;
            sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_START", 0, 1);
            U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
            if ( FIELD_S32(v3, 6112) >= 1 )
            {
              v13 = U32 >> 31;
              v14 = 0;
              do
              {
                v15 = (_BYTE *)sub_6072EFA0(v3, v14);
                if ( v13 == v14 )
                  v15[6308] = (unsigned int)sub_6072EC50() >> 1;
                else
                  v15[6308] = 0;
                (*(void (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v15 + 192))(v15, &dword_60CBD8FC);
                ++v14;
              }
              while ( v14 < FIELD_U32(v3, 6112) );
            }
            v11 = 10;
            goto LABEL_75;
          case 6:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_6077A44C(dword_60CBFA90);
            SE_MG_CMN_START_ref_2_helper_559D14((_DWORD *)dword_60CAD908, 26);
            SE_MG_CMN_START_ref_2_helper_559D2C(dword_60CAD908);
            FIELD_U8(dword_60CAD908, 3624) = 1;
            v11 = 1560;
            goto LABEL_75;
          case 7:
            v16 = FIELD_U32(a1, 104);
            if ( v16 )
            {
              if ( v16 == 360 )
              {
                if ( FIELD_S32(v3, 6112) >= 1 )
                {
                  v17 = 0;
                  do
                    *(_BYTE *)(sub_6072EFA0(v3, v17++) + 6348) = 1;
                  while ( v17 < FIELD_U32(v3, 6112) );
                }
              }
              else if ( v16 <= 0xB3 )
              {
                sub_607337BC(v3);
              }
              return;
            }
            if ( FIELD_S32(dword_60CAD908, 3620) > 0 )
              return;
            SE_MG_CMN_START_ref_2_helper_559D58(dword_60CAD908);
            if ( FIELD_S32(v3, 6112) >= 1 )
            {
              v29 = 0;
              do
              {
                v30 = sub_6072EFA0(v3, v29);
                (*(void (__fastcall **)(int, int *))(*(_DWORD *)v30 + 192))(v30, &dword_60CBD8BC);
                ++v29;
              }
              while ( v29 < FIELD_U32(v3, 6112) );
            }
            v11 = 240;
LABEL_75:
            FIELD_U32(a1, 104) = v11;
LABEL_76:
            v5 = FIELD_U8(a1, 101) + 1;
            goto LABEL_77;
          case 8:
            if ( FIELD_U32(a1, 104) )
              return;
            StateMgr__changeState((StateMgr *)(v3 + 6084), (StateBase *)&dword_60CBDAC8);
            FIELD_U32(a1, 104) = 20;
            sub_6077A268(dword_60CBFA90);
            *(_BYTE *)(sub_607335A4(a1) + 6328) = 0;
            v18 = sub_607335A4(a1);
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 72))(v18);
            goto LABEL_76;
          case 9:
            if ( sub_6077A158(dword_60CBFA90) == 1 )
            {
              v19 = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
              v20 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v19, 0x0) + 2))(v19);
              if ( v20 == (*(int (**)(void))(dword_60CBDAA8 + 8))() )
              {
                if ( FIELD_U16(v3, 6106) >= (unsigned int)FIELD_U16(v3, 6104) )
                {
                  FIELD_U8(a1, 101) = 13;
                  FIELD_U32(a1, 104) = 60;
                  v31 = sub_607335A4(a1);
                  sub_60730680(v31);
                }
                else
                {
                  FIELD_U8(a1, 101) = 10;
                  v21 = sub_607335A4(a1);
                  sub_607305D0(v21);
                }
              }
            }
            return;
          case 0xA:
            v22 = FIELD_U16(v3, 6104) - FIELD_U16(v3, 6106);
            if ( FIELD_U16(v3, 6104) - FIELD_U16(v3, 6106) <= 0 )
              LOBYTE(v22) = 0;
            FIELD_U8(a1, 109) = v22;
            v23 = (_DWORD *)dword_60C99DD4;
            FIELD_U32(dword_60C99DD4, 740) = 15;
            v23[186] = 15;
            v23[187] = 15;
            v23[188] = 15;
            v23[189] = 15;
            v23[190] = 0;
            v24 = FIELD_U8(a1, 109);
            v23[185] = 4;
            v23[190] = v24;
            sub_6073132C(dword_60CBDBF8);
            SE_MG_CMN_START_ref_2_helper(dword_60CBDBF8 + 4144);
            FIELD_U8(a1, 101) = 11;
            FIELD_U8(a1, 108) = 1;
            FIELD_U32(a1, 104) = 30;
            sub_60815F50(dword_60CC6B68, 7);
            v23[185] = 15;
            v23[186] = 15;
            v23[187] = 15;
            v23[188] = 15;
            v23[189] = 15;
            v23[190] = 0;
            FIELD_U8(a1, 101) = 11;
            return;
          case 0xB:
            v25 = FIELD_U32(a1, 104);
            if ( v25 )
            {
              if ( v25 == 1 )
                FIELD_U8(a1, 113) = 1;
            }
            else if ( sub_60731338(dword_60CBDBF8) == 1 )
            {
              v28 = 12;
LABEL_83:
              FIELD_U8(a1, 101) = v28;
              FIELD_U32(a1, 104) = 30;
            }
            return;
          case 0xC:
            if ( FIELD_U32(a1, 104) )
              return;
            if ( FIELD_U8(a1, 109) )
            {
              v26 = dword_60C7F52C;
              v27 = PlayerMgr_instance;
              if ( sub_6078A4C8(PlayerMgr_instance, 0) == 1 )
                sub_600221A0(v26, 8, 0, 1);
              if ( sub_6078A4C8(v27, 1) )
                sub_600221A0(v26, 8, 1u, 1);
              if ( sub_6078A4C8(v27, 2) == 1 )
                sub_600221A0(v26, 8, 2u, 1);
              if ( sub_6078A4C8(v27, 3) == 1 )
                sub_600221A0(v26, 8, 3u, 1);
              FIELD_U32(a1, 104) = 40;
              --FIELD_U8(a1, 109);
            }
            else
            {
              FIELD_U32(a1, 104) = 240;
              v5 = 15;
LABEL_77:
              FIELD_U8(a1, 101) = v5;
            }
            break;
          case 0xD:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60733344(a1, 3);
            v28 = 14;
            goto LABEL_83;
          case 0xE:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            v5 = 15;
            goto LABEL_77;
          case 0xF:
            FIELD_U32(a1, 104) = 60;
            v5 = 16;
            goto LABEL_77;
          case 0x10:
            if ( !FIELD_U32(a1, 104) )
              sub_603F48B0(AreaTask_intance);
            return;
          default:
            return;
        }
      }
    }
  }
}

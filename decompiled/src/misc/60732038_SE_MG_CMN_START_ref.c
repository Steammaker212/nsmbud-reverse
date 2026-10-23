/* SE_MG_CMN_START_ref
 * address: 0x60732038   size: 1508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_MG_CMN_START_ref(int a1)
{
  unsigned int v2; // r1
  int v3; // r5
  char v4; // r12
  char v5; // r0
  int v6; // r0
  int v7; // r0
  char v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r2
  int v21; // [sp+0h] [bp-20h]
  int v22; // [sp+4h] [bp-1Ch]
  int v23; // [sp+8h] [bp-18h]

  if ( FIELD_U8(a1, 100) == 2 )
  {
    v2 = FIELD_U32(a1, 92);
    if ( v2 )
    {
      v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
      if ( ((unsigned int)&dword_60CBDD30 & ~(1618157704 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD30) )
      {
        dword_60CBDD2C = (int)&off_60BC00E0;
        _cxa_guard_release(&dword_60CBDD30);
      }
      if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CBDD2C) == 1 )
      {
        switch ( FIELD_U8(a1, 101) )
        {
          case 0:
            FIELD_U32(a1, 104) = 60;
            v5 = 1;
            goto LABEL_54;
          case 1:
            if ( FIELD_U32(a1, 104) )
              return;
            v5 = 2;
            goto LABEL_54;
          case 2:
            sub_60733344(a1, 0);
            ++FIELD_U8(a1, 101);
            v6 = sub_607335A4(a1);
            (*(void (__fastcall **)(int, int *))(*(_DWORD *)v6 + 192))(v6, &dword_60CBDB40);
            return;
          case 3:
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            v7 = 40;
            goto LABEL_32;
          case 4:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_604BBBCC(dword_60CA2674);
            v7 = 180;
            goto LABEL_32;
          case 5:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_60815F50(dword_60CC6B68, 3);
            sub_60807EF0(SoundSystem_instance, "SE_MG_CMN_START", 0, 1);
            sub_607435D4(v3);
            v7 = 10;
LABEL_32:
            FIELD_U32(a1, 104) = v7;
            v5 = FIELD_U8(a1, 101) + 1;
            goto LABEL_54;
          case 6:
            if ( FIELD_U32(a1, 104) )
              return;
            sub_6077A44C(dword_60CBFA90);
            v5 = 7;
            goto LABEL_54;
          case 7:
            if ( FIELD_U8(v3, 6101) )
            {
              *(_BYTE *)(sub_607335A4(a1) + 6328) = 0;
              v11 = sub_607335A4(a1);
              (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 72))(v11);
              if ( FIELD_U8(v3, 6102) )
              {
                FIELD_U8(a1, 101) = 9;
                v12 = sub_607335A4(a1);
                sub_60730680(v12);
                sub_60743894(v3);
              }
              else
              {
                FIELD_U8(a1, 101) = 8;
                v18 = sub_607335A4(a1);
                sub_607305D0(v18);
                sub_60743BCC(v3);
              }
              sub_6077A268(dword_60CBFA90);
            }
            return;
          case 8:
            if ( sub_6077A158(dword_60CBFA90) != 1 )
              return;
            v23 = FIELD_U32(v3, 6128);
            v22 = FIELD_U32(v3, 6124);
            v21 = FIELD_U32(v3, 6120);
            v13 = (_DWORD *)dword_60C99DD4;
            FIELD_U32(dword_60C99DD4, 740) = 15;
            v13[186] = 15;
            v13[187] = 15;
            v13[188] = 15;
            v13[189] = 15;
            v13[190] = 0;
            FIELD_U32(a1, 116) = 0;
            if ( (unsigned int)(v21 - 24) < 2 )
              goto LABEL_62;
            if ( v21 == 23 )
            {
              v14 = 1;
            }
            else
            {
              if ( v21 != 22 )
                goto LABEL_61;
              v14 = 3;
            }
            FIELD_U32(a1, 116) = v14;
LABEL_61:
            v13[185] = dword_60B0A2EC[v21];
            v13[190] = 0;
LABEL_62:
            if ( (unsigned int)(v22 - 24) < 2 )
              goto LABEL_69;
            if ( v22 == 22 )
            {
              v19 = 3;
            }
            else
            {
              v19 = 1;
              if ( v22 != 23 )
                goto LABEL_68;
            }
            FIELD_U32(a1, 116) += v19;
LABEL_68:
            v13[186] = dword_60B0A2EC[v22];
            v13[190] = 0;
LABEL_69:
            if ( (unsigned int)(v23 - 24) < 2 )
              goto LABEL_76;
            if ( v23 == 23 )
            {
              v20 = 1;
            }
            else
            {
              if ( v23 != 22 )
                goto LABEL_75;
              v20 = 3;
            }
            FIELD_U32(a1, 116) += v20;
LABEL_75:
            v13[187] = dword_60B0A2EC[v23];
            v13[190] = 0;
LABEL_76:
            sub_6073132C(dword_60CBDBF8);
            FIELD_U8(a1, 108) = 1;
            sub_60815F50(dword_60CC6B68, 7);
            v8 = 10;
LABEL_77:
            FIELD_U8(a1, 101) = v8;
            FIELD_U32(a1, 104) = 30;
            return;
          case 9:
            sub_60733344(a1, 3);
            v8 = 11;
            goto LABEL_77;
          case 0xA:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            v15 = FIELD_U32(a1, 116);
            v16 = sub_60731338(dword_60CBDBF8);
            if ( v15 < 1 )
            {
              if ( v16 != 1 )
                return;
LABEL_53:
              v5 = 14;
            }
            else
            {
              if ( v16 != 1 )
                return;
              FIELD_U32(a1, 120) = 60;
              v5 = 12;
            }
            goto LABEL_54;
          case 0xB:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            if ( sub_60731324(dword_60CBDBF8) != 1 )
              return;
            goto LABEL_53;
          case 0xC:
            if ( FIELD_U32(a1, 104) == 1 )
              FIELD_U8(a1, 113) = 1;
            v9 = FIELD_U32(a1, 120) - 1;
            FIELD_U32(a1, 120) = v9;
            if ( v9 )
              return;
            sub_600220C0(dword_60C7F52C, 1);
            v10 = FIELD_U32(a1, 116);
            FIELD_U32(a1, 116) = v10 - 1;
            if ( v10 < 2 )
            {
              v5 = 13;
LABEL_54:
              FIELD_U8(a1, 101) = v5;
            }
            else
            {
              FIELD_U32(a1, 120) = 40;
            }
            break;
          case 0xD:
            v17 = FIELD_U32(a1, 104);
            if ( !v17 )
              goto LABEL_53;
            if ( v17 == 1 )
              FIELD_U8(a1, 113) = 1;
            return;
          case 0xE:
            FIELD_U32(a1, 104) = 60;
            v5 = 15;
            goto LABEL_54;
          case 0xF:
            if ( !FIELD_U32(a1, 104) )
            {
              FIELD_U8(dword_60CC6D78, 513) |= 2u;
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

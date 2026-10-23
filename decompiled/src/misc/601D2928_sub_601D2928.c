/* sub_601D2928
 * address: 0x601D2928   size: 4152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_601D2928(int a1)
{
  float *result; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s0
  float v6; // s2
  _DWORD *v7; // r10
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r0
  bool v14; // zf
  int v15; // r11
  int v16; // r9
  int v17; // r1
  bool v18; // zf
  int v19; // r0
  float v20; // s0
  _DWORD *v21; // r5
  int v22; // r1
  char *v23; // r0
  bool v24; // cc
  int v25; // r5
  char v26; // r12
  int v27; // r5
  int v28; // r0
  int v29; // r9
  _DWORD *v30; // r11
  int v31; // r0
  bool v32; // zf
  int v33; // r5
  __int16 v34; // r8
  int v35; // r9
  int v36; // r0
  int v37; // r5
  bool v38; // zf
  _DWORD *v39; // r0
  int v40; // r1
  int v41; // r0
  bool v42; // zf
  int v43; // r0
  bool v44; // zf
  float v45; // s0
  float v46; // s0
  float v47; // s0
  float v48; // s0
  float v49; // s0
  int v50; // r5
  int v51; // r0
  int v52; // r6
  float v53; // s0
  float v54; // s0
  float v55; // s0
  float v56; // s0
  float v57; // s0
  int v58; // r0
  _DWORD *v59; // r5
  char *v60; // lr
  int i; // r2
  int v62; // r5
  int v63; // r0
  int v64; // r0
  int v65; // r2
  int v66; // r1
  bool v67; // zf
  int *v68; // r1
  float v69; // s0
  float v70; // s0
  float v71; // s0
  float v72; // s0
  float v73; // s0
  __int16 v74; // [sp+0h] [bp-40h]
  int v75; // [sp+4h] [bp-3Ch]
  int v76; // [sp+8h] [bp-38h]
  _DWORD v77[3]; // [sp+Ch] [bp-34h] BYREF
  _DWORD *v78; // [sp+18h] [bp-28h] BYREF

  sub_601B51B8();
  sub_601D39F0(a1, a1 + 944, a1 + 956);
  sub_60169030(a1, a1 + 944, a1 + 956, FIELD_U32(a1, 1092));
  ((void (__fastcall *)(int))loc_601D8DEC)(a1);
  ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
  result = (float *)((int (__fastcall *)(int))loc_601D3B8C)(a1);
  if ( result )
    return result;
  result = *(float **)(a1 + 1092);
  switch ( (unsigned int)result )
  {
    case 0u:
      v3 = FIELD_F32(a1, 84);
      v4 = FIELD_F32(a1, 960);
      goto LABEL_12;
    case 1u:
      v5 = FIELD_F32(a1, 84);
      v6 = FIELD_F32(a1, 960);
      goto LABEL_9;
    case 2u:
      v3 = FIELD_F32(a1, 88);
      v4 = FIELD_F32(a1, 964);
      goto LABEL_12;
    case 3u:
      v5 = FIELD_F32(a1, 88);
      v6 = FIELD_F32(a1, 964);
      goto LABEL_9;
    case 4u:
      v5 = FIELD_F32(a1, 80);
      v6 = FIELD_F32(a1, 956);
LABEL_9:
      if ( v5 <= v6 )
        goto LABEL_13;
      return result;
    case 5u:
      v3 = FIELD_F32(a1, 80);
      v4 = FIELD_F32(a1, 956);
LABEL_12:
      if ( v3 < v4 )
        return result;
LABEL_13:
      sub_601D413C(a1);
      FIELD_U32(a1, 1120) &= ~0x200000u;
      v7 = (_DWORD *)(a1 + 1032);
      v8 = sub_601D056C(dword_60C8AEF0, a1 + 1032);
      if ( v8 )
      {
        if ( FIELD_U8(dword_60CC6D78, 532) )
        {
          v9 = a1;
          v10 = 115;
          v11 = 0;
        }
        else
        {
          FIELD_U8(dword_60CC6D78, 532) = 1;
          v10 = 116;
          v11 = FIELD_U32(v8, 8);
          v9 = a1;
        }
        sub_6018642C(v9, v10, v11, 0);
        return (float *)sub_601B3F54(a1);
      }
      result = (float *)sub_601D42EC(a1);
      if ( result )
        return result;
      v12 = sub_601D86E4(a1, a1 + 1032, 0);
      if ( v12 == 1 )
      {
        if ( *v7 == 4 )
        {
          v13 = FIELD_U32(a1, 1036);
          v14 = v13 == 1;
          if ( v13 == 1 )
            v14 = FIELD_U32(a1, 1040) == 12;
          if ( v14 )
            sub_60172250(dword_60C88BC8);
        }
        sub_6021C520(dword_60C8D408);
      }
      v15 = FIELD_U32(a1, 1112);
      v16 = FIELD_U32(a1, 1120);
      sub_601D43F8(a1);
      if ( (FIELD_U32(a1, 1120) & 0x200) != 0 )
      {
        v21 = (_DWORD *)sub_601E0010(a1 + 1032);
        (*(void (__fastcall **)(_DWORD *))(*v21 + 12))(v21);
        v22 = 0;
        v23 = (char *)v21[1];
        while ( v23[v22] )
        {
          if ( !v23[v22 + 1] )
          {
            ++v22;
            break;
          }
          if ( !v23[v22 + 2] )
          {
            v22 += 2;
            break;
          }
          v24 = v22 + 2 <= 0x7FFFF;
          v22 += 3;
          if ( !v24 )
          {
            v22 = 0;
            break;
          }
        }
        if ( v22 < 0 )
          v23 = &byte_60B3BA34;
        if ( *v23 != 70 )
          goto LABEL_77;
        if ( sub_601DA114(a1 + 1032) == 1 )
        {
          sub_6022D0D0(dword_60C8D864, a1 + 1032, 0);
          goto LABEL_77;
        }
        if ( sub_601DA484(a1 + 1032) == 1 )
        {
          v25 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 1172));
          if ( ((unsigned int)&dword_60C88AA8 & ~(1612524752 << v26) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
          {
            dword_60C88AA4 = (int)&off_60BD4BA4;
            _cxa_guard_release(&dword_60C88AA8);
          }
          if ( v25 && (**(int (__fastcall ***)(int, int *))v25)(v25, &dword_60C88AA4) == 1 )
          {
            FIELD_U32(a1, 1000) = 0;
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 108))(v25);
          }
          else
          {
            sub_601D0A30(a1, 0);
          }
          sub_601D1C5C(a1, 1);
          FIELD_U32(a1, 1120) &= ~0x200u;
          switch ( FIELD_U32(a1, 1096) )
          {
            case 0:
              v54 = FIELD_F32(a1, 960);
              if ( FIELD_F32(a1, 84) > v54 )
                FIELD_F32(a1, 84) = v54;
              break;
            case 1:
              v71 = FIELD_F32(a1, 960);
              if ( FIELD_F32(a1, 84) < v71 )
                FIELD_F32(a1, 84) = v71;
              break;
            case 2:
              v72 = FIELD_F32(a1, 964);
              if ( FIELD_F32(a1, 88) > v72 )
                goto LABEL_210;
              break;
            case 3:
              v72 = FIELD_F32(a1, 964);
              if ( FIELD_F32(a1, 88) < v72 )
              {
LABEL_210:
                FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
                FIELD_F32(a1, 88) = v72;
              }
              break;
            case 4:
              v73 = FIELD_F32(a1, 956);
              if ( FIELD_F32(a1, 80) < v73 )
                goto LABEL_214;
              break;
            case 5:
              v73 = FIELD_F32(a1, 956);
              if ( FIELD_F32(a1, 80) > v73 )
              {
LABEL_214:
                FIELD_F32(a1, 80) = v73;
                FIELD_U32(a1, 88) = FIELD_U32(a1, 964);
              }
              break;
            default:
              return (float *)sub_601B3F54(a1);
          }
          return (float *)sub_601B3F54(a1);
        }
        v74 = v16;
        v75 = v15;
        v27 = sub_601E131C(FIELD_U32(a1, 1096));
        v28 = sub_601DFFE4(a1 + 1032);
        v29 = v28;
        if ( v27 )
        {
          v76 = 0;
          v30 = (_DWORD *)sub_60178694(v28, 0);
          if ( v30 && RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 0, 1) == 1 )
            goto LABEL_75;
          if ( v27 == 1 )
            goto LABEL_67;
        }
        v76 = 1;
        v30 = (_DWORD *)sub_60178694(v29, 1);
        if ( v30 && RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 1, 1) )
          goto LABEL_75;
        if ( v27 != 2 )
        {
LABEL_67:
          v76 = 2;
          v30 = (_DWORD *)sub_60178694(v29, 2);
          if ( v30 && RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 2, 1) )
            goto LABEL_75;
          if ( v27 == 3 )
          {
LABEL_73:
            v76 = 5;
            v30 = (_DWORD *)sub_60178694(v29, 5);
            if ( !v30 || !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 5, 1) )
              goto LABEL_76;
            goto LABEL_75;
          }
        }
        v76 = 3;
        v30 = (_DWORD *)sub_60178694(v29, 3);
        if ( !v30 || !RW9M0W909_ref_22AE5C(dword_60C8D864, a1 + 1032, 3, 1) )
        {
          if ( v27 == 5 )
          {
LABEL_76:
            sub_601D462C(a1, 0);
            LOWORD(v16) = v74;
            v15 = v75;
            goto LABEL_77;
          }
          goto LABEL_73;
        }
LABEL_75:
        FIELD_U32(a1, 1044) = v30[21];
        FIELD_U32(a1, 1048) = v30[22];
        FIELD_U32(a1, 1052) = v30[24];
        FIELD_U32(a1, 1092) = v76;
        goto LABEL_76;
      }
      v19 = FIELD_U32(a1, 1120) & 0x400;
      v18 = v19 == 0;
      if ( !v19 )
      {
        v17 = v12 ^ 1;
        v18 = v12 == 1;
      }
      if ( v18 )
      {
        if ( sub_601D4E6C(a1, v17) == 1 )
        {
          result = *(float **)(a1 + 1096);
          switch ( (unsigned int)result )
          {
            case 0u:
              v20 = FIELD_F32(a1, 960);
              if ( FIELD_F32(a1, 84) > v20 )
                goto LABEL_194;
              break;
            case 1u:
              v20 = FIELD_F32(a1, 960);
              if ( FIELD_F32(a1, 84) < v20 )
LABEL_194:
                FIELD_F32(a1, 84) = v20;
              break;
            case 2u:
              v69 = FIELD_F32(a1, 964);
              if ( FIELD_F32(a1, 88) > v69 )
                goto LABEL_198;
              break;
            case 3u:
              v69 = FIELD_F32(a1, 964);
              if ( FIELD_F32(a1, 88) < v69 )
              {
LABEL_198:
                result = *(float **)(a1 + 956);
                FIELD_U32(a1, 80) = result;
                FIELD_F32(a1, 88) = v69;
              }
              break;
            case 4u:
              v70 = FIELD_F32(a1, 956);
              if ( FIELD_F32(a1, 80) < v70 )
                goto LABEL_202;
              break;
            case 5u:
              v70 = FIELD_F32(a1, 956);
              if ( FIELD_F32(a1, 80) > v70 )
              {
LABEL_202:
                FIELD_F32(a1, 80) = v70;
                result = *(float **)(a1 + 964);
                FIELD_U32(a1, 88) = result;
              }
              break;
            default:
              return result;
          }
          return result;
        }
      }
      else if ( v19 && sub_601DA2B8(a1 + 1032, v17) == 1 )
      {
        FIELD_U32(a1, 1120) &= ~0x400u;
      }
LABEL_77:
      v31 = FIELD_U32(a1, 1044);
      v32 = v31 == -1;
      if ( v31 != -1 )
        v32 = FIELD_U32(a1, 1048) == -1;
      if ( v32 || (v33 = 1, FIELD_U32(a1, 1052) == -1) )
      {
        v34 = v16;
        v35 = sub_601D532C(a1);
        if ( !v35 )
        {
          v33 = 0;
          goto LABEL_118;
        }
        if ( sub_601CF294(dword_60C8AEF0) == 1 && !sub_601DACFC(a1 + 1032) )
        {
          v36 = FIELD_U32(a1, 1096);
          v37 = FIELD_U32(dword_60CC6D78, 492);
          v38 = v37 == v36;
          if ( v37 != v36 )
            v38 = v35 == 1;
          if ( !v38 && (FIELD_U32(a1, 1120) & 0x8000) == 0 || sub_601DAD34(a1 + 1032) )
          {
            FIELD_U32(a1, 1100) = v37;
            sub_601B3AB0(a1, v37);
            return (float *)sub_601B1FA4(a1, &unk_60C8AAB8);
          }
        }
        sub_6019EC34(dword_60CC6D78 + 480, a1 + 1032);
        FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
        FIELD_F32(a1, 1132) = sub_601D89B8(a1);
        sub_6019EC34(a1 + 1080, a1 + 1032);
        FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
        FIELD_U32(a1, 1120) &= ~0x10u;
        FIELD_U32(a1, 1136) = *(_DWORD *)(sub_601C6BF0(a1) + 1016);
        v39 = (_DWORD *)sub_601E039C(a1 + 1032, FIELD_U32(a1, 1092));
        FIELD_U32(a1, 1044) = v39[21];
        v40 = v39[22];
        FIELD_U32(a1, 1048) = v40;
        FIELD_U32(a1, 1052) = v39[24];
        v41 = FIELD_U32(a1, 1032);
        if ( v41 == 4 )
        {
          if ( FIELD_U32(a1, 1036) == 1 && sub_601DA8A8(a1 + 1032) == 1 )
          {
            sub_601E14F8(a1 + 1032, FIELD_U32(a1, 1092), &v78);
            if ( v78 )
            {
              v77[0] = v78[21];
              v77[1] = v78[22];
              v77[2] = v78[24];
              if ( sub_601DA8E0(v77) == 1 )
                sub_601D1498(a1);
            }
          }
        }
        else if ( v41 == 2 )
        {
          sub_60219568(dword_60C8D3F0);
        }
        else
        {
          v40 = v34 & 0x400;
          if ( (v34 & 0x400) != 0 )
          {
            v42 = v41 == 6;
            if ( v41 == 6 )
              v42 = (FIELD_U8(a1, 1121) & 4) == 0;
            if ( v42 && sub_601DA4BC(a1 + 1032, v40) == 1 )
              sub_601D1C5C(a1, 0);
          }
        }
        sub_601B3FFC(a1, v40);
        FIELD_U32(a1, 1120) &= ~0x10000u;
        if ( sub_601D8D24(a1) == 1 )
        {
          v43 = FIELD_U32(a1, 1120);
        }
        else
        {
          v43 = sub_601D8D88(a1);
          v44 = v43 == 1;
          if ( v43 == 1 )
          {
            v43 = FIELD_U32(a1, 1120);
            v44 = (v43 & 0x400) == 0;
          }
          if ( !v44 )
            goto LABEL_113;
        }
        FIELD_U32(a1, 1120) = v43 | 0x10000;
LABEL_113:
        v33 = 1;
        if ( v35 == -1 )
        {
          FIELD_U32(a1, 200) = 0;
          if ( sub_601CF29C(dword_60C8AEF0) == 1 && sub_601E0194(a1 + 1032) >= 3 && !sub_601D9FC4(a1 + 1032) )
            FIELD_U32(a1, 1136) = 10;
        }
      }
LABEL_118:
      if ( sub_601DABF0(a1 + 1032) == 1 )
        FIELD_U32(a1, 1120) &= ~0x4000u;
      if ( !v33 )
      {
        switch ( FIELD_U32(a1, 1096) )
        {
          case 0:
            v46 = FIELD_F32(a1, 960);
            if ( FIELD_F32(a1, 84) > v46 )
              FIELD_F32(a1, 84) = v46;
            break;
          case 1:
            v47 = FIELD_F32(a1, 960);
            if ( FIELD_F32(a1, 84) < v47 )
              FIELD_F32(a1, 84) = v47;
            break;
          case 2:
            v48 = FIELD_F32(a1, 964);
            if ( FIELD_F32(a1, 88) > v48 )
              goto LABEL_135;
            break;
          case 3:
            v48 = FIELD_F32(a1, 964);
            if ( FIELD_F32(a1, 88) < v48 )
            {
LABEL_135:
              FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
              FIELD_F32(a1, 88) = v48;
            }
            break;
          case 4:
            v49 = FIELD_F32(a1, 956);
            if ( FIELD_F32(a1, 80) < v49 )
              goto LABEL_139;
            break;
          case 5:
            v49 = FIELD_F32(a1, 956);
            if ( FIELD_F32(a1, 80) > v49 )
            {
LABEL_139:
              FIELD_F32(a1, 80) = v49;
              FIELD_U32(a1, 88) = FIELD_U32(a1, 964);
            }
            break;
          default:
            break;
        }
        if ( sub_601D9F8C(a1 + 1032) == 1 )
        {
          if ( !FIELD_U8(dword_60CC6D78, 505) )
          {
LABEL_148:
            sub_601B3F54(a1);
            result = (float *)(a1 + 1168);
            v53 = FIELD_F32(a1, 1168);
            if ( v53 >= 0.0 )
            {
              if ( v53 > 1.0 )
                v53 = 1.0;
            }
            else
            {
              v53 = 0.0;
            }
            *result = v53;
            return result;
          }
        }
        else
        {
          if ( *v7 != 8 )
            goto LABEL_148;
          v50 = sub_601E0010(a1 + 1032);
          v51 = sub_6040D864(v50);
          if ( v51 == -1 )
            goto LABEL_148;
          v52 = (unsigned __int8)v51;
          if ( sub_6040E2A4((unsigned __int8)v51) != 1 || sub_6040E368(v52) || sub_6022C144(dword_60C8D864, v50) )
            goto LABEL_148;
        }
        FIELD_U32(a1, 1120) |= 0x40u;
        goto LABEL_148;
      }
      if ( fabsf(fabsf(sub_601D54BC(a1)) + -1.0) > 0.05 || FIELD_U32(a1, 1112) != v15 )
      {
        switch ( FIELD_U32(a1, 1096) )
        {
          case 0:
            v45 = FIELD_F32(a1, 960);
            if ( FIELD_F32(a1, 84) > v45 )
              FIELD_F32(a1, 84) = v45;
            break;
          case 1:
            v55 = FIELD_F32(a1, 960);
            if ( FIELD_F32(a1, 84) < v55 )
              FIELD_F32(a1, 84) = v55;
            break;
          case 2:
            v56 = FIELD_F32(a1, 964);
            if ( FIELD_F32(a1, 88) > v56 )
              goto LABEL_164;
            break;
          case 3:
            v56 = FIELD_F32(a1, 964);
            if ( FIELD_F32(a1, 88) < v56 )
            {
LABEL_164:
              FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
              FIELD_F32(a1, 88) = v56;
            }
            break;
          case 4:
            v57 = FIELD_F32(a1, 956);
            if ( FIELD_F32(a1, 80) < v57 )
              goto LABEL_168;
            break;
          case 5:
            v57 = FIELD_F32(a1, 956);
            if ( FIELD_F32(a1, 80) > v57 )
            {
LABEL_168:
              FIELD_F32(a1, 80) = v57;
              FIELD_U32(a1, 88) = FIELD_U32(a1, 964);
            }
            break;
          default:
            break;
        }
      }
      sub_601D55A4(a1, 0, -1, 0);
      v58 = FIELD_U32(a1, 1032);
      if ( v58 == 6 )
      {
        sub_601B4194(a1);
      }
      else if ( v58 == 5 )
      {
        v59 = (_DWORD *)sub_601E0010(a1 + 1056);
        (*(void (__fastcall **)(_DWORD *))(*v59 + 12))(v59);
        (*(void (__fastcall **)(_DWORD *))(*v59 + 12))(v59);
        v60 = (char *)v59[1];
        if ( v60 == "W6C1" )
        {
LABEL_178:
          FIELD_U32(a1, 1120) |= 0x10000u;
          sub_601D99F8(a1, FIELD_U32(a1, 1032), 22);
        }
        else
        {
          for ( i = 0; i < 524289; ++i )
          {
            if ( v60[i] != aW6c1[i] )
              break;
            if ( !v60[i] )
              goto LABEL_178;
          }
        }
      }
      sub_601B402C(a1);
      if ( !sub_601D99BC(a1, FIELD_U32(a1, 1112))
        && !sub_601D99BC(a1, v15)
        && (sub_601D9980(a1, FIELD_U32(a1, 1112)) || sub_601D99A8(a1, FIELD_U32(a1, 1112)) == 1) )
      {
        sub_601D39F0(a1, a1 + 944, a1 + 956);
        ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
      }
      if ( sub_601C6D90(a1, a1 + 1032) == 1 )
      {
        sub_6019EC34(a1 + 1080, a1 + 1032);
        FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
        FIELD_U32(a1, 1120) &= ~0x10u;
        ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
        sub_601C6C14(a1, a1 + 1032, FIELD_U32(a1, 1092));
        v62 = dword_60C88BC8;
        v63 = sub_601C6F34(a1);
        sub_6017113C(v62, a1 + 1032, v63);
      }
      v64 = FIELD_U32(a1, 1096);
      v65 = FIELD_U32(a1, 1092);
      v66 = FIELD_U32(a1, 1112);
      v67 = v64 == v65;
      if ( v64 == v65 )
        v67 = v15 == v66;
      if ( v67 )
      {
        FIELD_U32(dword_60CC6D78, 496) = v64;
        return (float *)sub_601C6A74(a1, FIELD_U32(a1, 1112));
      }
      else
      {
        result = (float *)(v66 - 3);
        switch ( v66 )
        {
          case 3:
          case 4:
          case 5:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 28:
          case 33:
            v68 = (int *)&unk_60C8A92C;
            goto LABEL_216;
          case 6:
          case 10:
          case 26:
          case 27:
          case 29:
          case 30:
          case 31:
          case 32:
            v68 = (int *)&unk_60C8A974;
            goto LABEL_216;
          case 7:
            v68 = &dword_60C8A950;
            goto LABEL_216;
          case 11:
          case 12:
            v68 = (int *)&unk_60C8A998;
LABEL_216:
            result = (float *)sub_601B1FA4(a1, v68);
            break;
          default:
            return result;
        }
      }
      return result;
    default:
      return result;
  }
}

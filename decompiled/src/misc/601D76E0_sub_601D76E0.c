/* sub_601D76E0
 * address: 0x601D76E0   size: 2032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601D76E0(int a1)
{
  _DWORD *v2; // r11
  int result; // r0
  float v4; // s0
  float v5; // s2
  float v6; // s0
  float v7; // s2
  int v8; // r7
  int v9; // r1
  int v10; // r10
  _DWORD *v11; // r7
  bool v12; // zf
  _DWORD *v13; // r8
  _DWORD *v14; // r9
  _DWORD *v15; // r7
  int v16; // t1
  int v17; // r0
  int v18; // r1
  _DWORD *v19; // r7
  bool v20; // zf
  int v21; // t1
  int v22; // r0
  _DWORD *v23; // r7
  bool v24; // zf
  int v25; // t1
  int v26; // r0
  _DWORD *v27; // r7
  bool v28; // zf
  int v29; // t1
  int v30; // r0
  _DWORD *v31; // r7
  bool v32; // zf
  int v33; // t1
  int v34; // r0
  _DWORD *v35; // r7
  bool v36; // zf
  int v37; // t1
  int v38; // r0
  _DWORD *v39; // r8
  int v40; // r1
  int v41; // r5
  StateBase *v42; // r1
  int v43; // r0
  bool v44; // zf
  float v45; // s0
  float v46; // s0
  float v47; // s0
  float v48; // s0
  float v49; // s0
  float v50; // s0
  float v51; // s0
  float v52; // s0
  float v53; // s0
  float v54; // s0
  int v55; // r5
  unsigned int *v56; // r0
  int v57; // [sp+0h] [bp-48h]
  int v58; // [sp+8h] [bp-40h]
  int v59; // [sp+Ch] [bp-3Ch] BYREF
  int v60; // [sp+10h] [bp-38h]
  int v61; // [sp+14h] [bp-34h]

  v2 = (_DWORD *)(a1 + 1240);
  ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 200, FIELD_F32(a1, 1240), 0.1, 1.0, 0.1);
  sub_601D39F0((float *)a1, (float *)(a1 + 944), (float *)(a1 + 956));
  sub_60169030(a1, (float *)(a1 + 944), (float *)(a1 + 956), FIELD_U32(a1, 1092));
  ((void (__fastcall *)(int))loc_601D8DEC)(a1);
  ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
  result = FIELD_U32(a1, 1092);
  switch ( result )
  {
    case 0:
      v4 = FIELD_F32(a1, 84);
      v5 = FIELD_F32(a1, 960);
      goto LABEL_10;
    case 1:
      v6 = FIELD_F32(a1, 84);
      v7 = FIELD_F32(a1, 960);
      goto LABEL_7;
    case 2:
      v4 = FIELD_F32(a1, 88);
      v5 = FIELD_F32(a1, 964);
      goto LABEL_10;
    case 3:
      v6 = FIELD_F32(a1, 88);
      v7 = FIELD_F32(a1, 964);
      goto LABEL_7;
    case 4:
      v6 = FIELD_F32(a1, 80);
      v7 = FIELD_F32(a1, 956);
LABEL_7:
      if ( v6 > v7 )
        return result;
      goto LABEL_11;
    case 5:
      v4 = FIELD_F32(a1, 80);
      v5 = FIELD_F32(a1, 956);
LABEL_10:
      if ( v4 >= v5 )
      {
LABEL_11:
        sub_601D413C((_DWORD *)a1);
        v8 = FIELD_U32(a1, 1112);
        sub_601D43F8(a1, v9);
        if ( FIELD_U32(a1, 1092) == 6 )
        {
          v57 = v8;
          v58 = sub_601DFFE4(a1 + 1020);
          v10 = sub_601DFFE4(a1 + 1032);
          v59 = -1;
          v60 = -1;
          v61 = -1;
          v11 = (_DWORD *)sub_60178694(v10, 0);
          v12 = v11 == 0;
          if ( v11 )
            v12 = v11 == (_DWORD *)v58;
          if ( !v12 )
          {
            v13 = v11 + 21;
            v59 = v11[21];
            v14 = v11 + 22;
            v60 = v11[22];
            v16 = v11[24];
            v15 = v11 + 24;
            v61 = v16;
            v17 = sub_601DADDC(&v59);
            v18 = 0;
            if ( !v17 )
              goto LABEL_36;
          }
          v19 = (_DWORD *)sub_60178694(v10, 1u);
          v20 = v19 == 0;
          if ( v19 )
            v20 = v19 == (_DWORD *)v58;
          if ( !v20 )
          {
            v13 = v19 + 21;
            v59 = v19[21];
            v14 = v19 + 22;
            v60 = v19[22];
            v21 = v19[24];
            v15 = v19 + 24;
            v61 = v21;
            v22 = sub_601DADDC(&v59);
            v18 = 1;
            if ( v22 != 1 )
              goto LABEL_36;
          }
          v23 = (_DWORD *)sub_60178694(v10, 2u);
          v24 = v23 == 0;
          if ( v23 )
            v24 = v23 == (_DWORD *)v58;
          if ( !v24 )
          {
            v13 = v23 + 21;
            v59 = v23[21];
            v14 = v23 + 22;
            v60 = v23[22];
            v25 = v23[24];
            v15 = v23 + 24;
            v61 = v25;
            v26 = sub_601DADDC(&v59);
            v18 = 2;
            if ( v26 != 1 )
              goto LABEL_36;
          }
          v27 = (_DWORD *)sub_60178694(v10, 3u);
          v28 = v27 == 0;
          if ( v27 )
            v28 = v27 == (_DWORD *)v58;
          if ( !v28 )
          {
            v13 = v27 + 21;
            v59 = v27[21];
            v14 = v27 + 22;
            v60 = v27[22];
            v29 = v27[24];
            v15 = v27 + 24;
            v61 = v29;
            v30 = sub_601DADDC(&v59);
            v18 = 3;
            if ( v30 != 1 )
              goto LABEL_36;
          }
          v31 = (_DWORD *)sub_60178694(v10, 4u);
          v32 = v31 == 0;
          if ( v31 )
            v32 = v31 == (_DWORD *)v58;
          if ( !v32 )
          {
            v13 = v31 + 21;
            v59 = v31[21];
            v14 = v31 + 22;
            v60 = v31[22];
            v33 = v31[24];
            v15 = v31 + 24;
            v61 = v33;
            v34 = sub_601DADDC(&v59);
            v18 = 4;
            if ( v34 != 1 )
              goto LABEL_36;
          }
          v35 = (_DWORD *)sub_60178694(v10, 5u);
          v36 = v35 == 0;
          if ( v35 )
            v36 = v35 == (_DWORD *)v58;
          if ( !v36 )
          {
            v13 = v35 + 21;
            v59 = v35[21];
            v14 = v35 + 22;
            v60 = v35[22];
            v37 = v35[24];
            v15 = v35 + 24;
            v61 = v37;
            v38 = sub_601DADDC(&v59);
            v18 = 5;
            if ( !v38 )
            {
LABEL_36:
              FIELD_U32(a1, 1092) = v18;
              FIELD_U32(a1, 1044) = *v13;
              FIELD_U32(a1, 1048) = *v14;
              FIELD_U32(a1, 1052) = *v15;
            }
          }
          v8 = v57;
          v39 = (_DWORD *)(a1 + 1032);
        }
        else
        {
          v39 = (_DWORD *)(a1 + 1032);
        }
        if ( sub_601DAE14(v39) == 1 )
        {
          sub_6021C520(dword_60C8D408);
          v40 = 2;
          v41 = 0;
          if ( FIELD_U32(a1, 1032) == 3 )
            v40 = 4;
          FIELD_U32(a1, 1092) = v40;
          *v2 = 0;
          FIELD_U32(a1, 200) = 0;
          sub_601DAEF0(a1 + 1044);
          sub_601D55A4(a1, 0, 7, 0);
          switch ( FIELD_U32(a1, 1112) )
          {
            case 3:
            case 4:
            case 5:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x1C:
            case 0x21:
              v42 = (StateBase *)&unk_60C8A92C;
              goto LABEL_57;
            case 6:
            case 0xA:
            case 0x1A:
            case 0x1B:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
              v42 = (StateBase *)&unk_60C8A974;
              goto LABEL_57;
            case 7:
              v42 = (StateBase *)&dword_60C8A950;
              goto LABEL_57;
            case 0xB:
            case 0xC:
              v42 = (StateBase *)&unk_60C8A998;
LABEL_57:
              sub_601B1FA4(a1, v42);
              break;
            default:
              break;
          }
          FIELD_U32(a1, 1120) |= 0x80000u;
          if ( FIELD_U32(a1, 1092) == 4 )
            v41 = -1073741824;
          FIELD_U32(a1, 1000) = v41;
          result = FIELD_U32(a1, 1236);
          if ( result )
            FIELD_U8(result, 12892) = 0;
        }
        else
        {
          v43 = FIELD_U32(a1, 1044);
          v44 = v43 == -1;
          if ( v43 != -1 )
            v44 = FIELD_U32(a1, 1048) == -1;
          if ( v44 || FIELD_U32(a1, 1052) == -1 )
          {
            switch ( FIELD_U32(a1, 1096) )
            {
              case 0:
                v47 = FIELD_F32(a1, 960);
                if ( FIELD_F32(a1, 84) > v47 )
                  FIELD_F32(a1, 84) = v47;
                break;
              case 1:
                v48 = FIELD_F32(a1, 960);
                if ( FIELD_F32(a1, 84) < v48 )
                  FIELD_F32(a1, 84) = v48;
                break;
              case 2:
                v49 = FIELD_F32(a1, 964);
                if ( FIELD_F32(a1, 88) > v49 )
                  goto LABEL_69;
                break;
              case 3:
                v49 = FIELD_F32(a1, 964);
                if ( FIELD_F32(a1, 88) < v49 )
                {
LABEL_69:
                  FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
                  FIELD_F32(a1, 88) = v49;
                }
                break;
              case 4:
                v50 = FIELD_F32(a1, 956);
                if ( FIELD_F32(a1, 80) < v50 )
                  goto LABEL_73;
                break;
              case 5:
                v50 = FIELD_F32(a1, 956);
                if ( FIELD_F32(a1, 80) > v50 )
                {
LABEL_73:
                  FIELD_F32(a1, 80) = v50;
                  FIELD_U32(a1, 88) = FIELD_U32(a1, 964);
                }
                break;
              default:
                break;
            }
            sub_601B3F54(a1);
            result = a1 + 1168;
            v51 = FIELD_F32(a1, 1168);
            if ( v51 >= 0.0 )
            {
              if ( v51 > 1.0 )
                v51 = 1.0;
              *(float *)result = v51;
            }
            else
            {
              *(_DWORD *)result = 0;
            }
          }
          else
          {
            sub_601D54BC((_DWORD *)a1);
            if ( fabsf(fabsf(v45) + -1.0) > 0.05 || FIELD_U32(a1, 1112) != v8 )
            {
              switch ( FIELD_U32(a1, 1096) )
              {
                case 0:
                  v46 = FIELD_F32(a1, 960);
                  if ( FIELD_F32(a1, 84) > v46 )
                    FIELD_F32(a1, 84) = v46;
                  break;
                case 1:
                  v54 = FIELD_F32(a1, 960);
                  if ( FIELD_F32(a1, 84) < v54 )
                    FIELD_F32(a1, 84) = v54;
                  break;
                case 2:
                  v52 = FIELD_F32(a1, 964);
                  if ( FIELD_F32(a1, 88) > v52 )
                    goto LABEL_84;
                  break;
                case 3:
                  v52 = FIELD_F32(a1, 964);
                  if ( FIELD_F32(a1, 88) < v52 )
                  {
LABEL_84:
                    FIELD_U32(a1, 80) = FIELD_U32(a1, 956);
                    FIELD_F32(a1, 88) = v52;
                  }
                  break;
                case 4:
                  v53 = FIELD_F32(a1, 956);
                  if ( FIELD_F32(a1, 80) < v53 )
                    goto LABEL_91;
                  break;
                case 5:
                  v53 = FIELD_F32(a1, 956);
                  if ( FIELD_F32(a1, 80) > v53 )
                  {
LABEL_91:
                    FIELD_F32(a1, 80) = v53;
                    FIELD_U32(a1, 88) = FIELD_U32(a1, 964);
                  }
                  break;
                default:
                  break;
              }
            }
            sub_601D75F4(a1);
            sub_601D39F0((float *)a1, (float *)(a1 + 944), (float *)(a1 + 956));
            ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
            if ( sub_601C6D90(a1, v39) == 1 )
            {
              sub_6019EC34((_DWORD *)(a1 + 1080), v39);
              FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
              FIELD_U32(a1, 1120) &= ~0x10u;
              ((void (__fastcall *)(int, _DWORD))loc_601C6F7C)(a1, 0);
              sub_601C6C14((_DWORD *)a1, (int)v39, FIELD_U32(a1, 1092));
              v55 = dword_60C88BC8;
              v56 = sub_601C6F34((_DWORD *)a1);
              sub_6017113C(v55, v39, v56);
            }
            result = FIELD_U32(a1, 1092);
            FIELD_U32(dword_60CC6D78, 496) = result;
          }
        }
      }
      break;
    default:
      return result;
  }
  return result;
}

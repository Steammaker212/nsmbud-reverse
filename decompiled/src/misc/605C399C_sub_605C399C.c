/* sub_605C399C
 * address: 0x605C399C   size: 2316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C399C(int a1)
{
  int v1; // r11
  int v2; // r8
  int v3; // r6
  int v4; // r7
  _DWORD **v5; // r12
  unsigned int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r4
  unsigned int v10; // r5
  _BYTE *v11; // r0
  _DWORD *v12; // r2
  int v13; // r0
  int v14; // r1
  float v15; // s0
  float v16; // s23
  int v17; // r1
  bool v18; // zf
  float v19; // s23
  int v20; // r1
  bool v21; // zf
  int v22; // r0
  float v23; // s25
  float v24; // s23
  int v25; // r1
  bool v26; // zf
  int v27; // r0
  float v28; // s25
  float v29; // s23
  int v30; // r1
  bool v31; // zf
  int v32; // r0
  int v33; // r11
  _DWORD *v34; // r3
  float *v35; // r11
  unsigned int v36; // r10
  int v37; // r1
  bool v38; // zf
  float *v39; // r0
  int v40; // r1
  unsigned int v41; // r3
  float v42; // s2
  float v43; // s0
  _DWORD **v44; // r2
  void *v45; // r0
  unsigned int U32; // r0
  float *v47; // r1
  float v48; // s0
  _DWORD *v49; // r0
  bool v50; // cc
  int v51; // r1
  void *v52; // r0
  unsigned int v53; // r0
  float *v54; // r1
  float v55; // s0
  void *v56; // r0
  unsigned int v57; // r0
  float *v58; // r1
  void *v59; // r0
  unsigned int v60; // r0
  float *v61; // r1
  void *v62; // r0
  unsigned int v63; // r0
  int v64; // r10
  float v65; // s2
  float v66; // s4
  float v67; // s6
  float v68; // s8
  float v69; // s10
  int v70; // r1
  float v71; // s6
  float v72; // s2
  int v73; // r0
  float v74; // s0
  int v77; // [sp+60h] [bp-A0h]
  _DWORD *v78; // [sp+64h] [bp-9Ch]
  unsigned int v79; // [sp+68h] [bp-98h]
  unsigned int *v80; // [sp+70h] [bp-90h]
  _DWORD *v81; // [sp+74h] [bp-8Ch]
  _DWORD **v82; // [sp+78h] [bp-88h]
  unsigned int *v83; // [sp+7Ch] [bp-84h]
  int v84; // [sp+80h] [bp-80h]
  int v85; // [sp+88h] [bp-78h]
  bool v86; // [sp+8Ch] [bp-74h]
  int v87; // [sp+90h] [bp-70h]
  _BYTE *v88; // [sp+94h] [bp-6Ch]

  v1 = a1;
  v2 = 0;
  v3 = a1 + 18460;
  v4 = a1 + 18461;
  v82 = (_DWORD **)(a1 + 6424);
  v83 = (unsigned int *)(a1 + 6420);
  v5 = (_DWORD **)(a1 + 6376);
  v6 = (unsigned int *)(a1 + 6372);
  v81 = (_DWORD *)(a1 + 6376);
  v80 = (unsigned int *)(a1 + 6372);
  v84 = a1 + 6304;
  do
  {
    if ( *(_BYTE *)(TileMgr_instance + v2 + 13952) )
    {
      v7 = *(unsigned __int8 *)(TileMgr_instance + v2 + 14052);
      v8 = v7;
      if ( v7 == 99 )
        v8 = 1;
      v87 = v8;
      if ( v8 )
      {
        v9 = 0;
        v86 = v7 == 99;
        v85 = v8 - 1;
        while ( 2 )
        {
          v10 = 0;
          while ( 1 )
          {
            if ( !*(_BYTE *)(v3 + v10) )
            {
              v11 = (_BYTE *)(v3 + v10);
              goto LABEL_14;
            }
            if ( !*(_BYTE *)(v4 + v10) )
              break;
            v10 += 2;
            if ( (int)v10 >= 600 )
              goto LABEL_89;
          }
          v11 = (_BYTE *)(v4 + v10++);
LABEL_14:
          v88 = v11;
          v12 = *v5;
          if ( *v6 > v10 )
            v12 += 3 * v10;
          v13 = TileMgr_instance + 4 * v2;
          v14 = FIELD_U32(v13, 13552);
          *v12 = FIELD_U32(v13, 13152);
          v12[1] = v14;
          v12[2] = 0;
          v15 = 4.5;
          switch ( *(_BYTE *)(TileMgr_instance + v2 + 13952) )
          {
            case 1:
              goto LABEL_88;
            case 2:
              v15 = 5.5;
              goto LABEL_88;
            case 3:
              v15 = 6.0;
              goto LABEL_88;
            case 0xA:
              v16 = *(float *)(TileMgr_instance + 4 * v2 + 13152);
              v17 = FIELD_U8(LevelInfo_instance, 16);
              if ( v17 == 2 )
              {
                if ( FIELD_U8(LevelInfo_instance, 17) != 20 )
                {
LABEL_56:
                  v45 = (void *)(dword_60C9CF0C + 1340);
                  goto LABEL_57;
                }
              }
              else
              {
                v18 = v17 == 0;
                if ( !FIELD_U8(LevelInfo_instance, 16) )
                  v18 = FIELD_U8(LevelInfo_instance, 17) == 12;
                if ( !v18 )
                  goto LABEL_56;
              }
              v45 = (void *)sead__GlobalRandom__sInstance;
LABEL_57:
              U32 = sead__Random__getU32(v45);
              v6 = v80;
              v5 = (_DWORD **)v81;
              v47 = (float *)*v81;
              v48 = *(float *)(TileMgr_instance + 4 * v2 + 13552);
              if ( *v80 > v10 )
                v47 += 3 * v10;
              v47[2] = 0.0;
              *v47 = v16 + (float)((float)((float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0) * 24.0) + -12.0);
              v47[1] = v48 + 1.0;
              v49 = *v82;
              v50 = *v83 > v10;
              v51 = 3;
              goto LABEL_85;
            case 0xB:
              v19 = *(float *)(TileMgr_instance + 4 * v2 + 13152);
              v20 = FIELD_U8(LevelInfo_instance, 16);
              if ( v20 == 2 )
              {
                if ( FIELD_U8(LevelInfo_instance, 17) == 20 )
                  goto LABEL_61;
              }
              else
              {
                v21 = v20 == 0;
                if ( !FIELD_U8(LevelInfo_instance, 16) )
                  v21 = FIELD_U8(LevelInfo_instance, 17) == 12;
                if ( v21 )
                {
LABEL_61:
                  v52 = (void *)sead__GlobalRandom__sInstance;
                  goto LABEL_63;
                }
              }
              v52 = (void *)(dword_60C9CF0C + 1340);
LABEL_63:
              v53 = sead__Random__getU32(v52);
              v6 = v80;
              v5 = (_DWORD **)v81;
              v54 = (float *)*v81;
              v55 = *(float *)(TileMgr_instance + 4 * v2 + 13552);
              if ( *v80 > v10 )
                v54 += 3 * v10;
              v54[2] = 0.0;
              *v54 = v19 + (float)((float)((float)(COERCE_FLOAT((v53 >> 9) | 0x3F800000) + -1.0) * 24.0) + -12.0);
              v54[1] = v55 + -1.0;
              v49 = *v82;
              v50 = *v83 > v10;
              v51 = 6;
              goto LABEL_85;
            case 0xC:
              v22 = TileMgr_instance + 4 * v2;
              v23 = FIELD_F32(v22, 13552);
              v24 = FIELD_F32(v22, 13152) + 1.0;
              v25 = FIELD_U8(LevelInfo_instance, 16);
              if ( v25 == 2 )
              {
                if ( FIELD_U8(LevelInfo_instance, 17) == 20 )
                  goto LABEL_67;
              }
              else
              {
                v26 = v25 == 0;
                if ( !FIELD_U8(LevelInfo_instance, 16) )
                  v26 = FIELD_U8(LevelInfo_instance, 17) == 12;
                if ( v26 )
                {
LABEL_67:
                  v56 = (void *)sead__GlobalRandom__sInstance;
                  goto LABEL_69;
                }
              }
              v56 = (void *)(dword_60C9CF0C + 1340);
LABEL_69:
              v57 = sead__Random__getU32(v56);
              v6 = v80;
              v5 = (_DWORD **)v81;
              v58 = (float *)*v81;
              if ( *v80 > v10 )
                v58 += 3 * v10;
              v58[2] = 0.0;
              *v58 = v24;
              v58[1] = v23 + (float)((float)((float)(COERCE_FLOAT((v57 >> 9) | 0x3F800000) + -1.0) * 24.0) + -12.0);
              v49 = *v82;
              v50 = *v83 > v10;
              v51 = 9;
              goto LABEL_85;
            case 0xD:
              v27 = TileMgr_instance + 4 * v2;
              v28 = FIELD_F32(v27, 13552);
              v29 = FIELD_F32(v27, 13152) + -1.0;
              v30 = FIELD_U8(LevelInfo_instance, 16);
              if ( v30 == 2 )
              {
                if ( FIELD_U8(LevelInfo_instance, 17) == 20 )
                  goto LABEL_73;
              }
              else
              {
                v31 = v30 == 0;
                if ( !FIELD_U8(LevelInfo_instance, 16) )
                  v31 = FIELD_U8(LevelInfo_instance, 17) == 12;
                if ( v31 )
                {
LABEL_73:
                  v59 = (void *)sead__GlobalRandom__sInstance;
                  goto LABEL_75;
                }
              }
              v59 = (void *)(dword_60C9CF0C + 1340);
LABEL_75:
              v60 = sead__Random__getU32(v59);
              v6 = v80;
              v5 = (_DWORD **)v81;
              v61 = (float *)*v81;
              if ( *v80 > v10 )
                v61 += 3 * v10;
              v61[2] = 0.0;
              *v61 = v29;
              v61[1] = v28 + (float)((float)((float)(COERCE_FLOAT((v60 >> 9) | 0x3F800000) + -1.0) * 24.0) + -12.0);
              v49 = *v82;
              v50 = *v83 > v10;
              v51 = 12;
              goto LABEL_85;
            case 0xE:
              v79 = *(_DWORD *)(TileMgr_instance + 4 * v2 + 14152);
              v32 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v79);
              v33 = v1 + 8 * v10;
              FIELD_U32(v33, 11260) = 0;
              v34 = (_DWORD *)(v33 + 11260);
              FIELD_U32(v33, 11264) = 0;
              v35 = (float *)(v33 + 11264);
              if ( v32 )
              {
                v36 = FIELD_U32(v32, 164);
                v37 = FIELD_U8(LevelInfo_instance, 16);
                v78 = v34;
                if ( v37 == 2 )
                {
                  if ( FIELD_U8(LevelInfo_instance, 17) != 20 )
                    goto LABEL_80;
                }
                else
                {
                  v38 = v37 == 0;
                  if ( !FIELD_U8(LevelInfo_instance, 16) )
                    v38 = FIELD_U8(LevelInfo_instance, 17) == 12;
                  if ( !v38 )
                  {
LABEL_80:
                    v62 = (void *)(dword_60C9CF0C + 1340);
                    goto LABEL_81;
                  }
                }
                v62 = (void *)sead__GlobalRandom__sInstance;
LABEL_81:
                v77 = (v36 >> 20) & 0xFF0;
                v63 = sead__Random__getU32(v62);
                v64 = v36 & 0xFFFFFF;
                v65 = *(float *)((char *)sinLutTable + v77);
                v66 = *(float *)((char *)&sinLutTable[1] + v77);
                v67 = *(float *)((char *)&sinLutTable[2] + v77);
                v68 = *(float *)((char *)&sinLutTable[3] + v77);
                v69 = (float)((float)(COERCE_FLOAT((v63 >> 9) | 0x3F800000) + -1.0) * 24.0) + -12.0;
                *v78 = 1065353216;
                *v35 = v69;
                v6 = v80;
                v5 = (_DWORD **)v81;
                v1 = a1;
                v70 = TileMgr_instance + 4 * v2;
                v39 = (float *)*v81;
                v41 = v79;
                v71 = v67 + (float)((float)((float)(unsigned int)v64 * v68) * 0.000000059605);
                v72 = v65 + (float)((float)((float)(unsigned int)v64 * v66) * 0.000000059605);
                if ( *v80 > v10 )
                  v39 += 3 * v10;
                v44 = v82;
                v43 = (float)(v71 + (float)(v72 * v69)) + FIELD_F32(v70, 13552);
                v42 = FIELD_F32(v70, 13152) + (float)(v72 + (float)(v69 * v71));
                goto LABEL_84;
              }
              v6 = v80;
              v5 = (_DWORD **)v81;
              v1 = a1;
              v39 = (float *)*v81;
              if ( *v80 > v10 )
                v39 += 3 * v10;
              v40 = TileMgr_instance + 4 * v2;
              v41 = 0;
              v42 = FIELD_F32(v40, 13152);
              v43 = FIELD_F32(v40, 13552);
              v44 = v82;
LABEL_84:
              v39[2] = 0.0;
              *v39 = v42;
              v39[1] = v43;
              *(_DWORD *)(v1 + 4 * v10 + 16060) = v41;
              v49 = *v44;
              v50 = *v83 > v10;
              v51 = 15;
LABEL_85:
              if ( v50 )
                v49 += v10;
              *v49 = v51;
              v15 = 7.2;
LABEL_88:
              v73 = v84 + 8 * v10;
              v74 = v15 + (float)((float)(v10 & 0xF) * -0.06);
              FIELD_F32(v73, 156) = v74;
              FIELD_F32(v73, 160) = v74;
              *v88 = 1;
              *(_BYTE *)(v84 + v10 + 12756) = v86;
              if ( v9 >= v85 )
              {
                *(_BYTE *)(TileMgr_instance + v2 + 13952) = 0;
                break;
              }
LABEL_89:
              if ( ++v9 >= v87 )
                break;
              continue;
            default:
              v15 = 0.0;
              goto LABEL_88;
          }
          break;
        }
      }
    }
    ++v2;
  }
  while ( v2 != 100 );
  return 1;
}

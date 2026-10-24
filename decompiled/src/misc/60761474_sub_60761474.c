/* sub_60761474
 * address: 0x60761474   size: 3076   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60761474(int a1, float a2)
{
  Actor *v2; // r5
  int v4; // r11
  int v5; // r0
  int result; // r0
  int *v7; // r6
  int v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r0
  Actor *v12; // r0
  bool v13; // zf
  float v14; // s2
  float v15; // s16
  int v16; // r0
  signed int v17; // r0
  signed int v18; // r0
  int v19; // r0
  float v20; // s16
  int v21; // r6
  float v22; // s0
  float v23; // r0
  int v24; // r0
  __int64 *v25; // r7
  int *v26; // r1
  int v27; // r0
  float v28; // r0
  float v29; // r1
  float v30; // s4
  int v31; // r3
  float *v32; // r8
  unsigned int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r1
  unsigned int *v38; // r9
  int v39; // r0
  int v40; // r0
  int *v41; // r10
  int v42; // r0
  bool v43; // zf
  __int64 v44; // r0
  float v45; // s0
  float v46; // r0
  int v47; // r0
  bool v48; // zf
  int v49; // r5
  int v50; // r2
  unsigned int v51; // r7
  unsigned int v52; // r0
  int v53; // r0
  int v54; // r2
  float v55; // s2
  float v56; // r1
  int *v57; // r0
  int v58; // r2
  int v59; // r1
  float v60; // s0
  float v61; // s2
  int v62; // r0
  int *v63; // r6
  int v64; // r0
  float v65; // s0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  bool v70; // zf
  int v71; // r0
  int v72; // r0
  bool v73; // zf
  int v74; // r1
  int v75; // r1
  int v76; // r0
  TileCheck_Result v77; // [sp+0h] [bp-68h] BYREF
  float v78[15]; // [sp+2Ch] [bp-3Ch] BYREF

  v4 = a1 + 1328;
  FIELD_U32(a1, 1236) |= 1u;
  FIELD_U32(a1, 1232) |= 0x80000000;
  j_CollisionMgr_process((_BYTE *)(a1 + 1328), a2);
  v5 = FIELD_U32(a1, 1232);
  v13 = (v5 & 0x40000000) == 0;
  result = v5 & 0x7FFFFFFF;
  FIELD_U32(a1, 1232) = result;
  if ( !v13 )
    return result;
  v7 = (int *)(a1 + 6976);
  FIELD_U32(a1, 6980) = FIELD_U32(a1, 6976);
  v8 = FIELD_U32(a1, 6984);
  FIELD_U32(a1, 6984) = 0;
  FIELD_U32(a1, 6988) = v8;
  FIELD_U32(a1, 6976) = 0;
  v9 = FIELD_U32(a1, 3552);
  if ( (v9 & 0x10400) == 0x400 )
  {
    FIELD_U32(a1, 6900) |= 2u;
    if ( (v9 & 0x4000) != 0 )
      FIELD_U32(a1, 6908) |= 0x1000u;
    if ( (v9 & 0x8000) != 0 )
      FIELD_U32(a1, 6908) |= 4u;
    if ( (FIELD_U8(a1, 3556) & 1) != 0 )
      FIELD_U32(a1, 6908) |= 0x2000u;
    if ( FIELD_U16(a1, 6624) == 0x15 )
      FIELD_U32(a1, 6904) |= 0x1000u;
    v2 = (Actor *)(a1 + 6908);
    v10 = FIELD_U32(a1, 6908);
    if ( (v9 & 0x2000) == 0 )
    {
      v11 = v10 | 0x10;
LABEL_19:
      FIELD_U32(v2, 0x0) = v11;
      goto LABEL_20;
    }
    FIELD_U32(v2, 0x0) = v10 | 0x20;
    v12 = (Actor *)sub_6014B6F8(v4);
    v13 = v12 == 0;
    if ( v12 )
    {
      v12 = (Actor *)FIELD_U32(v12 + (1) * 80, 0x40);
      v13 = v12 == 0;
    }
    if ( !v13 && Actor__getProfileId(v12) == 90 )
    {
      v11 = FIELD_U32(v2, 0x0) | 0x200;
      goto LABEL_19;
    }
  }
LABEL_20:
  if ( (FIELD_U8(a1, 3552) & 1) == 0 )
  {
    if ( (FIELD_U8(a1, 1220) & 1) != 0 )
    {
      v28 = FIELD_F32(a1, 10020);
      FIELD_F32(a1, 112) = v28;
      *v7 = 0;
      v14 = v28;
      FIELD_U32(a1, 6900) |= 1u;
    }
    else
    {
      v14 = FIELD_F32(a1, 112);
    }
    v29 = FIELD_F32(a1, 116);
    v30 = FIELD_F32(a1, 1244);
    *(_DWORD *)&v77.field_0 = FIELD_U32(a1, 108);
    v78[0] = 0.0;
    v77.field_4 = (float)(v14 + v30) + 8.0;
    v77.field_8 = v29;
    if ( sub_60156048(v4, 8.0, (int)v78, (float *)(a1 + 6968), (float *)&v77.field_0) == 1 )
    {
      v31 = 0x2000000;
      if ( !LODWORD(v78[0]) )
        v31 = 0x1000000;
      FIELD_U32(a1, 6904) |= v31;
    }
    v32 = (float *)(a1 + 124);
    goto LABEL_101;
  }
  v15 = FIELD_F32(a1, 88);
  v16 = sub_6014C4A4(v4);
  if ( v15 < 0.0 )
    v16 = -v16;
  *v7 = v16;
  FIELD_U32(a1, 6984) = sub_6014C4A4(v4);
  v17 = sub_6014C4A4(v4);
  FIELD_U32(a1, 6972) = sub_6014C57C(v4, v17);
  v18 = sub_6014C4A4(v4);
  if ( sub_6014C57C(v4, v18) )
    FIELD_U32(a1, 6904) |= 0x10000u;
  v19 = FIELD_U32(a1, 3552);
  if ( (v19 & 0x20) != 0 )
    FIELD_U32(a1, 6908) |= 0x800u;
  if ( (v19 & 0x40) != 0 )
    FIELD_U32(a1, 6908) |= 8u;
  if ( *v7 >= 1 )
  {
    v2 = (Actor *)(a1 + 6900);
    if ( (FIELD_U8(a1, 6900) & 2) != 0 )
    {
      v20 = FIELD_F32(a1, 112);
      v21 = FIELD_U32(a1, 108);
      v22 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1) + 20);
      v23 = FIELD_F32(a1, 116);
      *(_DWORD *)&v77.field_0 = v21;
      v77.field_4 = v20 + v22;
      v77.field_8 = v23;
      if ( sub_60155C38(v4, (float *)&v77.field_0, 0, 0, 8.0) == 1 )
        FIELD_U32(v2, 0x0) |= 0x40000000u;
    }
  }
  v25 = (__int64 *)(a1 + 6632);
  v24 = FIELD_U32(a1, 6632);
  switch ( (unsigned __int16)v24 )
  {
    case 0x10u:
      v33 = (unsigned __int8)__ROR4__(v24, 16) - 4;
      if ( v33 <= 0xC && ((0x1005u >> v33) & 1) != 0 )
      {
        v26 = (int *)(a1 + 6904);
        v27 = FIELD_U32(a1, 6904) | 0x4000;
LABEL_53:
        *v26 = v27;
      }
      break;
    case 0x12u:
      v2 = (Actor *)(a1 + 6904);
      FIELD_U32(a1, 6904) |= 0x100u;
      v34 = sub_6014B69C(v4);
      if ( v34 && FIELD_U32(v34, 300) == 16 )
        FIELD_U32(v2, 0x0) |= 0x200u;
      break;
    case 0x11u:
      switch ( BYTE2(v24) )
      {
        case 0:
        case 2:
          v26 = (int *)(a1 + 6904);
          v27 = FIELD_U32(a1, 6904) | 0x40;
          goto LABEL_53;
        case 1:
        case 3:
          v26 = (int *)(a1 + 6904);
          v27 = FIELD_U32(a1, 6904) | 0x80;
          goto LABEL_53;
        default:
          goto LABEL_54;
      }
  }
LABEL_54:
  v35 = (unsigned __int8)FIELD_U32(a1, 6636) >> 4;
  switch ( v35 )
  {
    case 6:
      v36 = 0x20000000;
      v37 = 0;
      break;
    case 5:
      v36 = 0x2000;
      v37 = 1;
      if ( !FIELD_U32(a1, 6972) )
      {
        v37 = 1;
        FIELD_U32(a1, 6972) = 1;
        FIELD_U32(a1, 6904) |= 0x10000u;
      }
      break;
    case 1:
      v36 = 0x2000;
      v37 = 1;
      break;
    default:
      goto LABEL_62;
  }
  *(_DWORD *)(a1 + 4 * v37 + 6900) |= v36;
LABEL_62:
  v32 = (float *)(a1 + 124);
  if ( FIELD_F32(a1, 124) > 0.0 )
    goto LABEL_101;
  v38 = (unsigned int *)(a1 + 6900);
  FIELD_U32(a1, 6900) |= 1u;
  v39 = FIELD_U32(a1, 3552);
  if ( (v39 & 0x10) != 0 )
    FIELD_U32(a1, 6904) |= 0x400u;
  if ( (v39 & 4) == 0 )
    goto LABEL_75;
  v41 = (int *)(a1 + 6904);
  v40 = FIELD_U32(a1, 6904);
  FIELD_U32(a1, 6904) = v40 | 0x800;
  if ( FIELD_F32(a1, 184) > 0.0 )
    *v41 = v40 | 0x801;
  v42 = sub_6014B69C(v4);
  v43 = v42 == 0;
  if ( v42 )
  {
    v2 = *(Actor **)(v42 + 144);
    v43 = v2 == 0;
  }
  if ( v43 )
    goto LABEL_75;
  if ( Actor__getProfileId(v2) == 184 || Actor__getProfileId(v2) == 185 || Actor__getProfileId(v2) == 186 )
  {
    *v41 |= 0x40000u;
    FIELD_U32(a1, 7104) = FIELD_U32(v2, 0x8);
  }
  else
  {
    if ( Actor__getProfileId(v2) == 309 )
    {
      v76 = *v41 | 0x80000;
    }
    else if ( Actor__getProfileId(v2) == 79 )
    {
      v76 = *v41 | 0x100000;
    }
    else if ( Actor__getProfileId(v2) == 53 )
    {
      v76 = *v41 | 0x200000;
    }
    else
    {
      if ( Actor__getProfileId(v2) != 121
        && Actor__getProfileId(v2) != 122
        && Actor__getProfileId(v2) != 123
        && Actor__getProfileId(v2) != 124
        && Actor__getProfileId(v2) != 127
        && Actor__getProfileId(v2) != 125 )
      {
        goto LABEL_75;
      }
      v76 = *v41 | 0x400000;
    }
    *v41 = v76;
  }
LABEL_75:
  v44 = *v25;
  if ( (unsigned __int16)*v25 == 0x14 )
  {
    if ( (FIELD_U8(a1, 1216) & 0x10) != 0 )
    {
      v45 = FIELD_F32(a1, 112);
      v46 = FIELD_F32(a1, 116);
      v78[0] = FIELD_F32(a1, 108);
      v78[1] = v45 + 2.0;
      v78[2] = v46;
      v77.field_C = 0;
      v77.field_10 = 0;
      v47 = sub_601559B8(v4, v78, &v77, 4.0);
      v48 = v47 == 1;
      if ( v47 == 1 )
        v48 = LOWORD(v77.field_18) == 0x14;
      if ( v48 )
        FIELD_U32(a1, 6904) |= 0x800000u;
      HIDWORD(v44) = FIELD_U32(a1, 6636);
    }
    else
    {
      FIELD_U32(a1, 6904) |= 0x800000u;
    }
  }
  v49 = 0;
  LODWORD(v44) = a1 + 6904;
  v50 = FIELD_U32(a1, 6904);
  v51 = BYTE5(v44);
  if ( (v50 & 8) != 0 )
    v51 = 3;
  if ( v51 <= 0xC )
    v49 = dword_60B0A930[v51];
  FIELD_U32(a1, 7004) = v49;
  switch ( v51 )
  {
    case 1u:
      LODWORD(v44) = *v38;
      if ( (BYTE4(v44) & 0xF0) != 0x30 )
        v52 = v44 | 0x8000000;
      else
        v52 = v44 | 0x10000000;
      goto LABEL_100;
    case 2u:
      v52 = *v38 | 0x4000000;
      goto LABEL_100;
    case 3u:
      v50 |= 8u;
      *(_DWORD *)v44 = v50;
      goto LABEL_94;
    case 4u:
LABEL_94:
      *(_DWORD *)v44 = v50 | 2;
      if ( (v50 & 0x800) != 0 )
        v53 = 7;
      else
        v53 = 2;
      FIELD_U32(a1, 7004) = v53;
      break;
    case 7u:
      *(_DWORD *)v44 = v50 | 2;
      break;
    case 0xBu:
      v52 = *v38 | 0x80000000;
LABEL_100:
      *v38 = v52;
      break;
    default:
      break;
  }
LABEL_101:
  if ( *v32 < 0.0 && ((FIELD_U8(a1, 1209) & 3) != 0 || (FIELD_U8(a1, 1219) & 1) != 0) )
  {
    v54 = FIELD_U32(a1, 6904) | 0x8800;
    FIELD_U32(a1, 6900) |= 1u;
    FIELD_U32(a1, 6904) = v54;
  }
  if ( (FIELD_U8(a1, 3552) & 1) != 0 || sub_601559B8(v4, (float *)(a1 + 108), 0, 16.0) == 1 )
    FIELD_U32(a1, 6904) |= 0x8000u;
  v55 = FIELD_F32(a1, 112);
  v56 = FIELD_F32(a1, 116);
  *(_DWORD *)&v77.field_0 = FIELD_U32(a1, 108);
  v78[0] = 0.0;
  v77.field_4 = v55 + 32.0;
  v77.field_8 = v56;
  if ( sub_60155F6C(v4, (float *)&v77.field_0, v78) == 1 )
  {
    v57 = (int *)(a1 + 6904);
    v58 = FIELD_U32(a1, 6904);
    v59 = v58 | 4;
    FIELD_U32(a1, 6904) = v58 | 4;
    v60 = v78[0];
    FIELD_F32(a1, 7044) = v78[0];
    v61 = FIELD_F32(a1, 112);
    if ( v60 > v61 )
    {
      v59 = v58 | 0xC;
      *v57 = v58 | 0xC;
    }
    if ( v60 > (float)(v61 + FIELD_F32(a1, 576)) )
    {
      v59 |= 0x10u;
      *v57 = v59;
    }
    if ( v60 > (float)(v61 + FIELD_F32(a1, 1244)) )
      *v57 = v59 | 0x20;
  }
  v62 = FIELD_U32(a1, 3552);
  if ( (v62 & 0x1000000) != 0 )
    FIELD_U32(a1, 6908) |= 0x400u;
  if ( (v62 & 0x880000) != 0 && (v62 & 0x20000000) == 0 || (FIELD_U8(a1, 1209) & 0x40) != 0 )
    FIELD_U32(a1, 6900) |= 0x20u;
  if ( (v62 & 0x440000) != 0 && (v62 & 0x10000000) == 0 || (FIELD_U8(a1, 1209) & 0x80) != 0 )
  {
    v63 = (int *)(a1 + 6900);
    v64 = FIELD_U32(a1, 6900) | 0x40;
    FIELD_U32(a1, 6900) = v64;
    if ( (v64 & 0x60) == 0 )
      goto LABEL_136;
  }
  else
  {
    v63 = (int *)(a1 + 6900);
    if ( (FIELD_U32(a1, 6900) & 0x60) == 0 )
      goto LABEL_136;
  }
  FIELD_U32(a1, 7008) = sub_6014C658(v4, FIELD_U32(a1, 80));
  v65 = FIELD_F32(a1, 120);
  if ( v65 < 0.0 )
  {
    v66 = *v63;
    if ( (*v63 & 0x20) == 0 )
      goto LABEL_136;
    goto LABEL_135;
  }
  if ( v65 > 0.0 )
  {
    v66 = *v63;
    if ( (*v63 & 0x40) == 0 )
      goto LABEL_136;
    goto LABEL_135;
  }
  v67 = dword_60B0A908[FIELD_U32(a1, 80)];
  if ( (*(_DWORD *)(v4 + 4 * (v67 >> 5) + 2224) & (1 << (v67 & 0x1F))) != 0 )
  {
    v66 = *v63;
LABEL_135:
    *v63 = v66 | 4;
  }
LABEL_136:
  sub_6076454C(a1, 1);
  sub_6076454C(a1, 0);
  v68 = FIELD_U32(a1, 3552);
  if ( (v68 & 0x440000) != 0 && (v68 & 0x10000000) == 0 )
  {
    v69 = sub_6014B758(v4, 0);
    v70 = v69 == 0;
    if ( v69 )
      v70 = (FIELD_U8(v69, 138) & 2) == 0;
    if ( v70 )
      *v63 |= 0x10u;
  }
  v71 = FIELD_U32(a1, 3552);
  if ( (v71 & 0x880000) != 0 && (v71 & 0x20000000) == 0 )
  {
    v72 = sub_6014B758(v4, 1);
    v73 = v72 == 0;
    if ( v72 )
      v73 = (FIELD_U8(v72, 138) & 2) == 0;
    if ( v73 )
      *v63 |= 8u;
  }
  v74 = FIELD_U32(a1, 3552);
  if ( (v74 & 0x4000000) != 0 )
    *v63 |= 0x10000u;
  result = *v63;
  if ( (v74 & 0x8000000) != 0 )
  {
    result |= 0x20000u;
    *v63 = result;
  }
  if ( (result & 1) == 0 )
  {
    if ( (FIELD_U8(a1, 6912) & 1) != 0 )
    {
      v75 = FIELD_U32(a1, 112);
      result = a1 + 1292;
    }
    else
    {
      result = a1 + 1292;
      if ( FIELD_F32(a1, 1292) >= FIELD_F32(a1, 112) )
        return result;
      v75 = FIELD_U32(a1, 112);
    }
    *(_DWORD *)result = v75;
  }
  return result;
}

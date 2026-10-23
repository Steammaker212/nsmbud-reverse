/* sub_60695454
 * address: 0x60695454   size: 5436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60695454(int a1)
{
  int *v2; // r1
  unsigned int v3; // r6
  int *v4; // r2
  unsigned __int8 *v5; // r5
  float v6; // s16
  float v7; // s18
  int v8; // r0
  float v9; // s20
  float *v10; // r10
  float v11; // s0
  float v12; // s4
  int v13; // r2
  float v14; // s0
  int v15; // r0
  int v16; // r3
  float v17; // s1
  float v18; // s0
  float v19; // s2
  float v20; // s1
  int v21; // r2
  int v22; // r0
  int v23; // r3
  float v24; // s0
  float v25; // s2
  float v26; // s6
  float v27; // s0
  float v28; // s0
  float v29; // s0
  float v30; // s0
  float v31; // s8
  float v32; // s0
  float v33; // s0
  float v34; // s0
  float v35; // s0
  float v36; // s0
  unsigned int v37; // r0
  int *v38; // r1
  int v39; // s0
  int v40; // r1
  int v41; // r1
  int v42; // r2
  int v43; // r0
  unsigned int v44; // r1
  bool v45; // cf
  float *v46; // r1
  int v47; // r0
  int v48; // r8
  int v49; // r9
  int v50; // r0
  char v51; // r12
  int v52; // r1
  int *v53; // r8
  int (__fastcall ***v54)(_DWORD, int *); // r6
  float *v55; // r9
  int v56; // r5
  bool v57; // zf
  int v58; // r0
  float v59; // s0
  float v60; // s0
  int v61; // r0
  StateBase *v62; // r1
  int v63; // r5
  ActorBuildInfo v65[2]; // [sp+Ch] [bp-74h] BYREF

  v2 = dword_606957A0;
  v3 = FIELD_U32(a1, 20);
  v4 = dword_606957A8;
  v5 = (unsigned __int8 *)(a1 + 6264);
  if ( (v3 & 0x700000) == 0x100000 )
  {
    v2 = &dword_606957A0[1];
    v4 = &dword_606957A8[1];
  }
  v6 = *(float *)v4;
  v7 = *(float *)v2;
  v8 = sub_607180AC(TileMgr_instance);
  FIELD_U32(a1, 6264) = v8;
  switch ( v3 & 0xF )
  {
    case 2u:
      v9 = -8.0;
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 4, *v5, 24, (float)(FIELD_F32(a1, 108) + 8.0) + 16.0, FIELD_F32(a1, 112), v7);
      sub_60718198(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v6);
      sub_60718198(TileMgr_instance, 0, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) == 0 && (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
      {
        v11 = FIELD_F32(a1, 108);
        v12 = FIELD_F32(a1, 112);
        v13 = *v5;
        goto LABEL_16;
      }
      goto LABEL_62;
    case 3u:
      v9 = -8.0;
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 4, *v5, 24, (float)(FIELD_F32(a1, 108) + 8.0) + 16.0, FIELD_F32(a1, 112), v7);
      sub_60718198(TileMgr_instance, 0, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v6);
      sub_60718198(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) == 0 && (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
      {
        v11 = FIELD_F32(a1, 108);
        v12 = FIELD_F32(a1, 112);
        v13 = *v5;
        goto LABEL_16;
      }
      goto LABEL_62;
    case 4u:
      v9 = -8.0;
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 4, *v5, 24, (float)(FIELD_F32(a1, 108) + 8.0) + 16.0, FIELD_F32(a1, 112), v7);
      sub_60718198(TileMgr_instance, 0, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v6);
      sub_60718198(TileMgr_instance, 1, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) == 0 && (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
      {
        v11 = FIELD_F32(a1, 108);
        v12 = FIELD_F32(a1, 112);
        v13 = *v5;
        goto LABEL_16;
      }
      goto LABEL_62;
    case 5u:
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 4, *v5, 24, (float)(FIELD_F32(a1, 108) + 8.0) + 16.0, FIELD_F32(a1, 112), v7);
      sub_60718198(TileMgr_instance, 1, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) == 0 && (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) == 0 )
      {
        v13 = *v5;
        v16 = 8;
        v14 = FIELD_F32(a1, 108) + 8.0;
        v17 = FIELD_F32(a1, 112) + 40.0;
        v15 = TileMgr_instance;
        break;
      }
      goto LABEL_62;
    case 6u:
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -16,
        FIELD_F32(a1, 108) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v7);
      v18 = FIELD_F32(a1, 108);
      v19 = 16.0;
      v20 = FIELD_F32(a1, 112);
      v21 = *v5;
      v22 = TileMgr_instance;
      v23 = 16;
      goto LABEL_22;
    case 7u:
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      v20 = FIELD_F32(a1, 112);
      v21 = *v5;
      v22 = TileMgr_instance;
      v19 = 16.0;
      v23 = 24;
      v18 = FIELD_F32(a1, 108) + 8.0;
LABEL_22:
      v24 = v18 + v19;
      v25 = v7;
      goto LABEL_24;
    case 8u:
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -32,
        (float)(FIELD_F32(a1, 108) + -16.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -16, FIELD_F32(a1, 108) + -16.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 0, FIELD_F32(a1, 108) + 0.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 1, *v5, 16, FIELD_F32(a1, 108) + 16.0, FIELD_F32(a1, 112), v7);
      v20 = FIELD_F32(a1, 112);
      v21 = *v5;
      v22 = TileMgr_instance;
      v25 = v7;
      v23 = 32;
      v24 = (float)(FIELD_F32(a1, 108) + 16.0) + 16.0;
LABEL_24:
      sub_60718110(v22, 4, v21, v23, v24, v20, v25);
      v10 = (float *)(a1 + 108);
      goto LABEL_62;
    case 9u:
      sub_60718198(TileMgr_instance, 1, (unsigned __int8)v8, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v14 = FIELD_F32(a1, 108);
      v26 = FIELD_F32(a1, 112);
      v13 = *v5;
      goto LABEL_60;
    case 0xAu:
      sub_60718198(TileMgr_instance, 2, (unsigned __int8)v8, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v14 = FIELD_F32(a1, 108);
      v26 = FIELD_F32(a1, 112);
      v13 = *v5;
      goto LABEL_60;
    case 0xBu:
      sub_60718198(TileMgr_instance, 0, (unsigned __int8)v8, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v14 = FIELD_F32(a1, 108);
      v26 = FIELD_F32(a1, 112);
      v13 = *v5;
      goto LABEL_60;
    case 0xCu:
      v27 = FIELD_F32(a1, 108);
      if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
      {
        sub_60718198(TileMgr_instance, 1, (unsigned __int8)v8, 0, v27, FIELD_F32(a1, 112), v6);
        memset(&v65[0].settings2, 0, 40);
        v65[0].settings1 = 16777258;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v29 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v29 + 16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
      }
      else
      {
        sub_60718198(TileMgr_instance, 1, (unsigned __int8)v8, -8, v27 + -8.0, FIELD_F32(a1, 112), v6);
        sub_60718198(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      }
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 6) > 1 )
        goto LABEL_62;
      v30 = FIELD_F32(a1, 108);
      v12 = FIELD_F32(a1, 112);
      v13 = *v5;
      v31 = -8.0;
      goto LABEL_50;
    case 0xDu:
      v28 = FIELD_F32(a1, 108);
      if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
      {
        sub_60718198(TileMgr_instance, 0, (unsigned __int8)v8, 0, v28, FIELD_F32(a1, 112), v6);
        memset(&v65[0].settings2, 0, 40);
        v65[0].settings1 = 16777258;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v32 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v32 + 16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
      }
      else
      {
        sub_60718198(TileMgr_instance, 0, (unsigned __int8)v8, -8, v28 + -8.0, FIELD_F32(a1, 112), v6);
        sub_60718198(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      }
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v30 = FIELD_F32(a1, 108);
      v12 = FIELD_F32(a1, 112);
      v13 = *v5;
      v31 = -8.0;
LABEL_50:
      v15 = TileMgr_instance;
      v14 = v30 + v31;
      goto LABEL_51;
    case 0xEu:
      sub_60718198(TileMgr_instance, 0, (unsigned __int8)v8, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v6);
      if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
      {
        memset(&v65[0].settings2, 0, 40);
        v65[0].settings1 = 16777257;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v33 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v33 + -16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
        v65[0].settings1 = 16777258;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v34 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v34 + 16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
      }
      else
      {
        sub_60718198(TileMgr_instance, 1, *v5, -16, FIELD_F32(a1, 108) + -16.0, FIELD_F32(a1, 112), v6);
        sub_60718198(TileMgr_instance, 2, *v5, 16, FIELD_F32(a1, 108) + 16.0, FIELD_F32(a1, 112), v6);
      }
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v14 = FIELD_F32(a1, 108);
      v26 = FIELD_F32(a1, 112);
      v13 = *v5;
      goto LABEL_60;
    case 0xFu:
      sub_60718198(TileMgr_instance, 0, (unsigned __int8)v8, 0, FIELD_F32(a1, 108), FIELD_F32(a1, 112), v6);
      if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
      {
        memset(&v65[0].settings2, 0, 40);
        v65[0].settings1 = 16777258;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v35 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v35 + -16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
        v65[0].settings1 = 16777257;
        v65[0].parentId = 0;
        v65[0].profile = Profile__get(0x2EAu);
        v36 = FIELD_F32(a1, 108);
        v65[0].position.y = FIELD_F32(a1, 112);
        v65[0].position.z = FIELD_F32(a1, 116);
        v65[0].position.x = v36 + 16.0;
        v65[0].field_1C = FIELD_U32(a1, 160);
        v65[0].field_20 = 0;
        ActorMgr__create((void *)ActorMgr__instance, v65, 0);
      }
      else
      {
        sub_60718198(TileMgr_instance, 2, *v5, -16, FIELD_F32(a1, 108) + -16.0, FIELD_F32(a1, 112), v6);
        sub_60718198(TileMgr_instance, 1, *v5, 16, FIELD_F32(a1, 108) + 16.0, FIELD_F32(a1, 112), v6);
      }
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v14 = FIELD_F32(a1, 108);
      v26 = FIELD_F32(a1, 112);
      v13 = *v5;
LABEL_60:
      v17 = v26 + 40.0;
      v15 = TileMgr_instance;
      v16 = 0;
      break;
    default:
      v9 = -8.0;
      sub_60718110(
        TileMgr_instance,
        0,
        (unsigned __int8)v8,
        -24,
        (float)(FIELD_F32(a1, 108) + -8.0) + -16.0,
        FIELD_F32(a1, 112),
        v7);
      sub_60718110(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v7);
      sub_60718110(TileMgr_instance, 4, *v5, 24, (float)(FIELD_F32(a1, 108) + 8.0) + 16.0, FIELD_F32(a1, 112), v7);
      sub_60718198(TileMgr_instance, 1, *v5, -8, FIELD_F32(a1, 108) + -8.0, FIELD_F32(a1, 112), v6);
      sub_60718198(TileMgr_instance, 2, *v5, 8, FIELD_F32(a1, 108) + 8.0, FIELD_F32(a1, 112), v6);
      v10 = (float *)(a1 + 108);
      if ( (FIELD_U8(a1, 23) & 1) != 0 || (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 7) != 0 )
        goto LABEL_62;
      v11 = FIELD_F32(a1, 108);
      v12 = FIELD_F32(a1, 112);
      v13 = *v5;
LABEL_16:
      v14 = v11 + v9;
      v15 = TileMgr_instance;
LABEL_51:
      v17 = v12 + 40.0;
      v16 = -8;
      break;
  }
  sub_60716978(v15, 0, v13, v16, v14, v17, 400.0);
LABEL_62:
  sub_60718420(TileMgr_instance, *v5, 1, *v10);
  v37 = FIELD_U32(a1, 20);
  if ( (v37 & 0x20000) != 0 )
  {
    v39 = -987594752;
  }
  else
  {
    v38 = &dword_60696958;
    if ( (v3 & 0x10) != 0 )
      v38 = &dword_6069695C;
    v39 = *v38;
  }
  FIELD_U32(a1, 116) = v39;
  v40 = (v3 >> 5) & 1;
  FIELD_U32(a1, 6080) = v40;
  if ( v40 )
  {
    CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B07F5C, &stru_60B07F68, &stru_60B07F74);
    v41 = FIELD_U32(a1, 3188);
    v42 = FIELD_U32(a1, 3196) | 0x201;
    v43 = FIELD_U32(a1, 3180) | 0x201;
    FIELD_U32(a1, 3204) |= 0x201u;
    FIELD_U32(a1, 3196) = v42;
    FIELD_U32(a1, 3180) = v43;
    FIELD_U32(a1, 3188) = v41 | 0x201;
    FIELD_U32(a1, 3200) |= 0x80000000;
    FIELD_U32(a1, 3192) |= 0x80000000;
    FIELD_U32(a1, 3176) |= 0x80000000;
    FIELD_U32(a1, 3184) |= 0x80000000;
    v37 = FIELD_U32(a1, 20);
  }
  if ( (v37 & 0x40) != 0 )
  {
    v44 = (v37 >> 8) & 3;
    FIELD_U32(a1, 6128) = v44;
    v45 = v44 >= 2;
    v46 = (float *)(a1 + 112);
    v47 = (v37 >> 12) & 7;
    if ( !v45 )
      v46 = v10;
    FIELD_U32(a1, 6120) = dword_60AF4D10[v47];
    FIELD_F32(a1, 6132) = *v46;
    v48 = FIELD_U8(a1, 28);
    v49 = *(_DWORD *)(ActorMgr__instance + 27180);
    v50 = sub_60008598(ActorMgr__instance, 51, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( v50 == v49 )
    {
LABEL_75:
      v53 = (int *)(a1 + 6128);
      v54 = 0;
    }
    else
    {
      while ( 1 )
      {
        v52 = *(_DWORD *)v50;
        if ( *(unsigned __int8 *)(*(_DWORD *)v50 + 28) == v48 )
          break;
        v50 = sub_60008598(ActorMgr__instance, 51, v50 + 4);
        if ( v50 == v49 )
          goto LABEL_75;
      }
      v53 = (int *)(a1 + 6128);
      v54 = 0;
      if ( v52 )
      {
        v54 = *(int (__fastcall ****)(_DWORD, int *))v50;
        FIELD_U32(a1, 6124) = FIELD_U32(v52, 8);
      }
    }
    if ( ((unsigned int)dword_60CB3EF4 & ~(1617520500 << v51) & 1) == 0 && _cxa_guard_acquire(dword_60CB3EF4) )
    {
      dword_60CB3EF0 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CB3EF4);
    }
    v55 = (float *)(a1 + 6132);
    v56 = (int)(v54 + 462);
    v57 = (**v54)(v54, &dword_60CB3EF0) == 0;
    v58 = *v53;
    if ( v57 )
      v56 = 1848;
    v59 = *(float *)v56 * FIELD_F32(a1, 6120);
    switch ( v58 )
    {
      case 2:
        v60 = v59 + *v55;
        break;
      case 1:
        *v10 = *v55 - v59;
        goto LABEL_91;
      case 0:
        *v10 = v59 + *v55;
        goto LABEL_91;
      default:
        v60 = *v55 - v59;
        break;
    }
    FIELD_F32(a1, 112) = v60;
  }
LABEL_91:
  v61 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6136) = BYTE2(v61) & 1;
  if ( (v61 & 0x10000) != 0 )
  {
    FIELD_U8(a1, 6138) = FIELD_U8(a1, 28);
    FIELD_U32(a1, 6080) = 0;
    FIELD_U8(a1, 6137) = 0;
    if ( sub_60696A80(a1) )
      v62 = (StateBase *)&stru_60CB92F0;
    else
      v62 = (StateBase *)&unk_60CB9314;
    StateMgr__changeState((StateMgr *)(a1 + 6104), v62);
  }
  v63 = 0;
  FIELD_U32(a1, 6256) = 0;
  FIELD_U32(a1, 6252) = 0;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6240) = 0;
  FIELD_U32(a1, 6236) = 0;
  FIELD_U32(a1, 6232) = 0;
  FIELD_U32(a1, 6228) = 0;
  sub_608337BC(a1 + 6156, &dword_60CB936C);
  sub_608337BC(a1 + 6192, &dword_60CB938C);
  FIELD_U32(a1, 6156) = FIELD_U32(a1, 6184);
  FIELD_U32(a1, 6192) = FIELD_U32(a1, 6220);
  if ( FIELD_U8(a1, 2992) )
  {
    if ( !FIELD_U8(a1, 2996) )
      v63 = a1 + 3040;
  }
  else
  {
    v63 = FIELD_U8(a1, 3000);
    if ( FIELD_U8(a1, 3000) )
      v63 = a1 + 3088;
  }
  sub_60003C60(a1, v63, 256.0);
  return 1;
}

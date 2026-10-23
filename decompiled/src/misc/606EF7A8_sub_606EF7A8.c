/* sub_606EF7A8
 * address: 0x606EF7A8   size: 1944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606EF7A8(int a1)
{
  int result; // r0
  __int16 v3; // t1
  int v4; // r1
  unsigned int v5; // r1
  float v6; // s16
  float v7; // s18
  int v8; // r6
  int v9; // r7
  float v10; // s20
  float v11; // s18
  unsigned int v12; // r1
  float v13; // s16
  float v14; // s18
  int v15; // r7
  int v16; // r6
  float v17; // s20
  float v18; // s18
  unsigned int v19; // r1
  float v20; // s16
  float v21; // s18
  int v22; // r6
  int v23; // r7
  float v24; // s20
  float v25; // s18
  unsigned int v26; // r1
  float v27; // s18
  float v28; // s16
  unsigned int v29; // r5
  float v30; // s16
  float v31; // s18
  unsigned int v32; // r1
  float v33; // s18
  float v34; // s16
  unsigned int v35; // r5
  float v36; // s16
  float v37; // s18
  void *v38; // r0
  unsigned int v39; // r1
  float v40; // s16
  float v41; // s18
  int v42; // r6
  int v43; // r7
  float v44; // s20
  float v45; // s18
  ActorBuildInfo v46[2]; // [sp+0h] [bp-60h] BYREF

  v3 = FIELD_U16(a1, 676);
  result = a1 + 676;
  v4 = *(_DWORD *)(result - 656);
  *(_WORD *)result = v3 - 1;
  if ( v3 == 1 )
  {
    switch ( (unsigned __int8)v4 >> 4 )
    {
      case 0:
        v5 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v5;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v5];
        if ( FIELD_S32(EnemyCounterMaybe_instance, 172) > 7 )
          goto LABEL_26;
        goto LABEL_4;
      case 1:
        v12 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v12;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v12];
        if ( FIELD_S32(EnemyCounterMaybe_instance, 224) > 7 )
          goto LABEL_26;
        v13 = FIELD_F32(a1, 112);
        v14 = FIELD_F32(a1, 108);
        v15 = FIELD_U32(a1, 668);
        v16 = FIELD_U32(a1, 80);
        memset(&v46[0].settings2, 0, 40);
        v46[0].settings1 = v16 | (v15 << 24) | 0x10000000;
        v17 = flt_60AF2B34[v16];
        v18 = v14 + flt_60AF2B24[v16];
        v46[0].profile = Profile__get(0x209u);
        v46[0].position.x = v18;
        v46[0].position.y = v13 + v17;
        v46[0].position.z = -2500.0;
        v46[0].field_1C = FIELD_U32(a1, 160);
        v46[0].field_20 = 0;
        goto LABEL_24;
      case 2:
        v19 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v19;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v19];
        if ( FIELD_S32(EnemyCounterMaybe_instance, 176) > 7 )
          goto LABEL_26;
        v20 = FIELD_F32(a1, 112);
        v21 = FIELD_F32(a1, 108);
        v22 = FIELD_U32(a1, 668);
        v23 = FIELD_U32(a1, 80);
        memset(&v46[0].settings2, 0, 40);
        v46[0].settings1 = (16 * v23) | (v22 << 24) | 2;
        v24 = flt_60AF2B34[v23];
        v25 = v21 + flt_60AF2B24[v23];
        v46[0].profile = Profile__get(0x1D4u);
        v46[0].position.x = v25;
        v46[0].position.y = v20 + v24;
        v46[0].position.z = -2500.0;
        v46[0].field_1C = FIELD_U32(a1, 160);
        v46[0].field_20 = 0;
        goto LABEL_24;
      case 3:
        v26 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v26;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v26];
        if ( FIELD_S32(EnemyCounterMaybe_instance, 192) > 7 )
          goto LABEL_26;
        v27 = FIELD_F32(a1, 108);
        v28 = FIELD_F32(a1, 112);
        v29 = FIELD_U32(a1, 80);
        memset(v46, 0, 44);
        v30 = v28 + flt_60AF2B34[v29];
        v31 = v27 + flt_60AF2B24[v29];
        if ( v29 <= 3 )
          v29 = dword_60AF5A10[v29];
        v46[0].settings1 = (v29 << 28) + 0x10000000;
        v46[0].profile = Profile__get(0x200u);
        v46[0].position.x = v31;
        v46[0].position.y = v30;
        v46[0].position.z = -2500.0;
        v46[0].field_1C = FIELD_U32(a1, 160);
        v46[0].field_20 = 0;
        goto LABEL_17;
      case 4:
        v32 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v32;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v32];
        if ( FIELD_S32(EnemyCounterMaybe_instance, 196) > 7 )
          goto LABEL_26;
        v33 = FIELD_F32(a1, 108);
        v34 = FIELD_F32(a1, 112);
        v35 = FIELD_U32(a1, 80);
        memset(v46, 0, 44);
        v36 = v34 + flt_60AF2B34[v35];
        v37 = v33 + flt_60AF2B24[v35];
        if ( v35 <= 3 )
          v35 = dword_60AF5A10[v35];
        v46[0].settings1 = ((v35 << 28) + 0x10000000) | 1;
        v46[0].profile = Profile__get(0x200u);
        v46[0].position.x = v37;
        v46[0].position.y = v36;
        v46[0].position.z = -2500.0;
        v46[0].field_1C = FIELD_U32(a1, 160);
        v46[0].field_20 = 0;
LABEL_17:
        v38 = (void *)ActorMgr__instance;
        goto LABEL_25;
      case 15:
        v39 = (unsigned __int16)(FIELD_U16(a1, 678) + 1) % 3u;
        FIELD_U16(a1, 678) = v39;
        *(_WORD *)result = word_60B09334[3 * FIELD_U32(a1, 672) + v39];
        result = FIELD_S8(EnemyCounterMaybe_instance, 224) + FIELD_S8(EnemyCounterMaybe_instance, 172);
        if ( result > 7 )
          return result;
        if ( (sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) & 0x80000000) != 0 )
        {
          if ( FIELD_S32(EnemyCounterMaybe_instance, 224) > 7 )
            goto LABEL_26;
          v40 = FIELD_F32(a1, 112);
          v41 = FIELD_F32(a1, 108);
          v42 = FIELD_U32(a1, 668);
          v43 = FIELD_U32(a1, 80);
          memset(&v46[0].settings2, 0, 40);
          v46[0].settings1 = v43 | (v42 << 24) | 0x10000000;
          v44 = flt_60AF2B34[v43];
          v45 = v41 + flt_60AF2B24[v43];
          v46[0].profile = Profile__get(0x209u);
          v46[0].position.x = v45;
          v46[0].position.y = v40 + v44;
          v46[0].position.z = -2500.0;
          v46[0].field_1C = FIELD_U32(a1, 160);
          v46[0].field_20 = 0;
        }
        else
        {
          if ( FIELD_S32(EnemyCounterMaybe_instance, 172) > 7 )
            goto LABEL_26;
LABEL_4:
          v6 = FIELD_F32(a1, 112);
          v7 = FIELD_F32(a1, 108);
          v8 = FIELD_U32(a1, 668);
          v9 = FIELD_U32(a1, 80);
          memset(&v46[0].settings2, 0, 40);
          v46[0].settings1 = (16 * v9) | (v8 << 24) | 2;
          v10 = flt_60AF2B34[v9];
          v11 = v7 + flt_60AF2B24[v9];
          v46[0].profile = Profile__get(0x1D3u);
          v46[0].position.x = v11;
          v46[0].position.y = v6 + v10;
          v46[0].position.z = -2500.0;
          v46[0].field_1C = FIELD_U32(a1, 160);
          v46[0].field_20 = 0;
        }
LABEL_24:
        v38 = (void *)ActorMgr__instance;
LABEL_25:
        ActorMgr__create(v38, v46, 0);
LABEL_26:
        result = ((unsigned __int8)FIELD_U32(a1, 668) + 1) & 0xF;
        FIELD_U32(a1, 668) = result;
        break;
      default:
        goto LABEL_26;
    }
  }
  return result;
}

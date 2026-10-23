/* SE_OBJ_SUISHA_ref
 * address: 0x60666F9C   size: 2028   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_SUISHA_ref(int a1)
{
  int v2; // r5
  unsigned int *v3; // r8
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r7
  float *v9; // r3
  float v10; // s4
  float v11; // s0
  float v12; // s6
  float v13; // s2
  float v14; // s6
  float v15; // s2
  float v16; // s0
  float *v17; // r3
  float v18; // s6
  float v19; // s8
  float v20; // s12
  float v21; // s10
  float *v22; // r3
  float v23; // s6
  float v24; // s6
  float v25; // s10
  float v26; // s8
  float v27; // s4
  unsigned int v28; // r0
  unsigned int v29; // r7
  float *v30; // r1
  float v31; // s8
  float v32; // s4
  float v33; // s10
  float v34; // s6
  float v35; // s6
  float v36; // s22
  int v37; // r5
  unsigned int *v38; // r8
  int v39; // r4
  float *v40; // r2
  float v41; // s4
  float v42; // s6
  float v43; // s2
  float v44; // s0
  float v45; // s8
  float *v46; // r3
  float v47; // s10
  float v48; // s6
  float v49; // s12
  float v50; // s8
  float v51; // s8
  float *v52; // r3
  float v53; // s6
  float v54; // s10
  float v55; // s8
  float v56; // s4
  float *v57; // r0
  float v58; // s8
  float v59; // s4
  float v60; // s10
  float v61; // s6
  float v62; // s6
  float v63; // r1
  int v64; // r5
  unsigned int v65; // r0
  unsigned int v66; // r4
  int v67; // r6
  int v68; // r5
  float v69; // s0
  StateMethodExecuter *result; // r0
  float *v71; // [sp+18h] [bp-78h]
  int v72; // [sp+1Ch] [bp-74h]
  _DWORD *v73; // [sp+20h] [bp-70h]
  unsigned int v74; // [sp+24h] [bp-6Ch]
  int v75; // [sp+28h] [bp-68h]
  float v76; // [sp+2Ch] [bp-64h]
  float v77; // [sp+30h] [bp-60h]
  Vec2 out; // [sp+38h] [bp-58h] BYREF
  Vec3 position; // [sp+40h] [bp-50h] BYREF

  if ( FIELD_U32(a1, 8228) && !FIELD_U64(EventMgr__instance, 16) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6C54);
  v2 = FIELD_U8(a1, 8244);
  v3 = (unsigned int *)(a1 + 8236);
  v74 = FIELD_U32(a1, 8236);
  v76 = FIELD_F32(a1, 108);
  v77 = FIELD_F32(a1, 112);
  v72 = FIELD_U32(a1, 116);
  sub_6066848C(a1);
  v4 = -16777216;
  v5 = FIELD_U32(a1, 8240);
  if ( v5 < -16777216 || (v4 = 0x1000000, v5 > 0x1000000) )
  {
    v5 = v4;
    FIELD_U32(a1, 8240) = v4;
  }
  *v3 += v5;
  if ( v2 == 1 )
  {
    sub_6000F338(a1 + 8064);
    StateMgr__execute((StateMgr *)(a1 + 8084));
    v6 = FIELD_U32(a1, 8168);
    FIELD_U32(a1, 108) = FIELD_U32(a1, 8164);
    FIELD_U32(a1, 112) = v6;
  }
  else if ( !v2 )
  {
    FIELD_F32(a1, 108) = (float)((float)((float)((float)((float)-v5 * 14.0) * 0.5) * 0.00048828) * 0.000015259)
                         + FIELD_F32(a1, 108);
  }
  v75 = v2;
  v7 = FIELD_U32(a1, 8232);
  if ( v7 )
    FIELD_U32(a1, 8232) = v7 - 1;
  v73 = (_DWORD *)(a1 + 8232);
  v8 = *v3;
  v9 = (float *)((char *)sinLutTable + ((*v3 >> 20) & 0xFF0));
  v10 = (float)(*v3 & 0xFFFFFF);
  v11 = (float)(v9[2] + (float)((float)(v10 * v9[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6568) = v11;
  v12 = v9[1];
  v13 = *v9;
  FIELD_F32(a1, 6292) = v11;
  v14 = (float)(v13 + (float)((float)(v10 * v12) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6296) = v14;
  v15 = FIELD_F32(a1, 108);
  v71 = (float *)(a1 + 6568);
  FIELD_F32(a1, 6568) = v11 + v15;
  v16 = FIELD_F32(a1, 112);
  v17 = (float *)((char *)sinLutTable + (((v8 + 0x40000000) >> 20) & 0xFF0));
  FIELD_F32(a1, 6572) = v14 + v16;
  FIELD_U32(a1, 6584) = v8;
  v18 = (float)((v8 + 0x40000000) & 0xFFFFFF);
  v19 = (float)(v17[2] + (float)((float)(v18 * v17[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7056) = v19;
  v20 = v17[1];
  v21 = *v17;
  FIELD_F32(a1, 6780) = v19;
  v22 = (float *)((char *)sinLutTable + (((v8 ^ 0x80000000) >> 20) & 0xFF0));
  v23 = (float)(v21 + (float)((float)(v18 * v20) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6784) = v23;
  FIELD_F32(a1, 7056) = v19 + v15;
  FIELD_F32(a1, 7060) = v23 + v16;
  FIELD_U32(a1, 7072) = v8 + 0x40000000;
  v24 = (float)(v22[2] + (float)((float)(v10 * v22[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7544) = v24;
  v25 = v22[1];
  v26 = *v22;
  FIELD_F32(a1, 7268) = v24;
  v27 = (float)(v26 + (float)((float)(v10 * v25) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7272) = v27;
  FIELD_U32(a1, 7560) = v8 ^ 0x80000000;
  v28 = v8 - 0x40000000;
  FIELD_F32(a1, 7544) = v24 + v15;
  v29 = a1 + 6104;
  v30 = (float *)((char *)sinLutTable + ((v28 >> 20) & 0xFF0));
  FIELD_F32(a1, 7548) = v27 + v16;
  v31 = (float)(v28 & 0xFFFFFF);
  v32 = (float)(v30[2] + (float)((float)(v31 * v30[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 8032) = v32;
  v33 = v30[1];
  v34 = *v30;
  FIELD_F32(a1, 7756) = v32;
  v35 = (float)(v34 + (float)((float)(v31 * v33) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7760) = v35;
  FIELD_F32(a1, 8032) = v32 + v15;
  FIELD_F32(a1, 8036) = v35 + v16;
  FIELD_U32(a1, 8048) = v28;
  while ( 1 )
  {
    v36 = FIELD_F32(v29, 464) + -24.0;
    v37 = (unsigned __int16)(int)(float)-FIELD_F32(v29, 468);
    if ( sub_607161E4(TileMgr_instance, (unsigned __int16)(int)v36, v37, 0) == 1
      || sub_607161E4(TileMgr_instance, (unsigned __int16)(int)(float)(v36 + 48.0), v37, 0) == 1 )
    {
      break;
    }
    v29 += 488;
    if ( v29 >= a1 + 8056 )
    {
      v38 = (unsigned int *)(a1 + 8240);
      v39 = 0;
      goto LABEL_23;
    }
  }
  *v3 = v74;
  v38 = (unsigned int *)(a1 + 8240);
  FIELD_U32(a1, 8240) = 0;
  FIELD_F32(a1, 108) = v76;
  FIELD_F32(a1, 112) = v77;
  FIELD_U32(a1, 116) = v72;
  v40 = (float *)((char *)sinLutTable + ((v74 >> 20) & 0xFF0));
  v41 = (float)(v74 & 0xFFFFFF);
  v42 = (float)(v40[2] + (float)((float)(v41 * v40[3]) * 0.000000059605)) * 48.0;
  *v71 = v42;
  v43 = v40[1];
  v44 = *v40;
  FIELD_F32(a1, 6292) = v42;
  v45 = (float)(v44 + (float)((float)(v41 * v43) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6296) = v45;
  *v71 = v42 + v76;
  v46 = (float *)((char *)sinLutTable + (((v74 + 0x40000000) >> 20) & 0xFF0));
  FIELD_F32(a1, 6572) = v45 + v77;
  FIELD_U32(a1, 6584) = v74;
  v39 = 1;
  v47 = (float)((v74 + 0x40000000) & 0xFFFFFF);
  v48 = (float)(v46[2] + (float)((float)(v47 * v46[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7056) = v48;
  v49 = v46[1];
  v50 = *v46;
  FIELD_F32(a1, 6780) = v48;
  v51 = (float)(v50 + (float)((float)(v47 * v49) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 6784) = v51;
  FIELD_F32(a1, 7056) = v48 + v76;
  FIELD_F32(a1, 7060) = v51 + v77;
  FIELD_U32(a1, 7072) = v74 + 0x40000000;
  v52 = (float *)((char *)sinLutTable + (((v74 ^ 0x80000000) >> 20) & 0xFF0));
  v53 = (float)(v52[2] + (float)((float)(v41 * v52[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7544) = v53;
  v54 = v52[1];
  v55 = *v52;
  FIELD_F32(a1, 7268) = v53;
  v56 = (float)(v55 + (float)((float)(v41 * v54) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7272) = v56;
  FIELD_F32(a1, 7544) = v53 + v76;
  FIELD_F32(a1, 7548) = v56 + v77;
  FIELD_U32(a1, 7560) = v74 ^ 0x80000000;
  v57 = (float *)((char *)sinLutTable + (((v74 - 0x40000000) >> 20) & 0xFF0));
  v58 = (float)((v74 - 0x40000000) & 0xFFFFFF);
  v59 = (float)(v57[2] + (float)((float)(v58 * v57[3]) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 8032) = v59;
  v60 = v57[1];
  v61 = *v57;
  FIELD_F32(a1, 7756) = v59;
  v62 = (float)(v61 + (float)((float)(v58 * v60) * 0.000000059605)) * 48.0;
  FIELD_F32(a1, 7760) = v62;
  FIELD_F32(a1, 8032) = v59 + v76;
  FIELD_F32(a1, 8036) = v62 + v77;
  FIELD_U32(a1, 8048) = v74 - 0x40000000;
  if ( v75 == 1 )
  {
    FIELD_F32(a1, 8164) = v76;
    FIELD_F32(a1, 8168) = v77;
  }
  if ( !*v73 && !FIELD_U32(a1, 8224) && FIELD_U32(a1, 8220) )
  {
    *v73 = 16;
    v63 = FIELD_F32(a1, 112);
    v64 = Global_BasicSoundActor2;
    position.x = FIELD_F32(a1, 108);
    position.y = v63;
    mapPositionToScreen(&out, &position);
    BasicSoundActor2_play(v64, "SE_OBJ_SUISHA_BUMP", &out.x, 0);
  }
LABEL_23:
  FIELD_U32(a1, 8224) = v39;
  v65 = *v38;
  FIELD_U32(a1, 8220) = *v38;
  if ( HIWORD(v65) )
  {
    if ( !v39 )
    {
      v66 = HIWORD(v65);
      out = *(Vec2 *)(a1 + 108);
      v67 = FIELD_U32(a1, 8);
      v68 = Global_BasicSoundActor2;
      mapPositionToScreen((Vec2 *)&position, (Vec3 *)&out);
      sub_60813CA0(v68, "SE_OBJ_SUISHA_ROLL", v67, &position, v69, (__int16)v66, 0);
    }
  }
  FIELD_U32(a1, 6576) = FIELD_U32(a1, 6568);
  FIELD_U32(a1, 6580) = FIELD_U32(a1, 6572);
  FIELD_U32(a1, 7064) = FIELD_U32(a1, 7056);
  FIELD_U32(a1, 7068) = FIELD_U32(a1, 7060);
  FIELD_U32(a1, 7552) = FIELD_U32(a1, 7544);
  FIELD_U32(a1, 7556) = FIELD_U32(a1, 7548);
  FIELD_U32(a1, 8040) = FIELD_U32(a1, 8032);
  result = *(StateMethodExecuter **)(a1 + 8036);
  FIELD_U32(a1, 8044) = result;
  return result;
}

/* sub_6065EBA8
 * address: 0x6065EBA8   size: 1296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6065EBA8(int a1)
{
  unsigned int v2; // r0
  int v3; // r0
  float v4; // s16
  float v5; // s2
  int ProfileId; // r0
  _DWORD *v7; // r1
  int v8; // r0
  int v9; // r0
  char v10; // r2
  int v11; // r0
  int v12; // t1
  __int64 v13; // r6
  _DWORD *v14; // r3
  int v15; // r7
  int v16; // r7
  unsigned int v17; // r1
  int v18; // r7
  int v19; // r0
  __int64 v20; // r2
  int *v21; // r1
  int v22; // r2
  __int64 v23; // r6
  _DWORD *v24; // r3
  int v25; // r7
  int v26; // r7
  unsigned int v27; // r9
  int v28; // r7
  int v29; // r1
  __int64 v30; // r2
  int v31; // r1
  float v32; // r2
  int v33; // r0
  float v34; // s4
  void (__fastcall ***v35)(_DWORD, _DWORD, SolidOnTopColliderInfo *, int *, int *); // r0
  int v36; // r1
  void (__fastcall *v37)(_DWORD, _DWORD, SolidOnTopColliderInfo *, int *, int *); // r7
  SolidOnTopColliderInfo info; // [sp+8h] [bp-78h] BYREF
  float v40; // [sp+20h] [bp-60h] BYREF
  int v41; // [sp+24h] [bp-5Ch]
  float v42; // [sp+28h] [bp-58h]
  int v43; // [sp+2Ch] [bp-54h]
  float v44; // [sp+30h] [bp-50h]
  int v45; // [sp+34h] [bp-4Ch]
  float v46; // [sp+38h] [bp-48h]
  int v47; // [sp+3Ch] [bp-44h]
  int v48; // [sp+44h] [bp-3Ch] BYREF

  FIELD_U32(a1, 116) = 1137180672;
  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 7080) = BYTE1(v2) & 3;
  FIELD_U32(a1, 7068) = *(_DWORD *)((char *)&unk_60B07848 + ((v2 >> 2) & 0x3C));
  v3 = (FIELD_U32(a1, 24) >> 8) & 0xF;
  if ( v3 )
    v4 = (float)((float)(unsigned int)v3 + (float)(unsigned int)v3) * 16.0;
  else
    v4 = 256.0;
  FIELD_F32(a1, 7064) = v4;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  FIELD_U32(a1, 164) = 0;
  memset(&info, 0, 16);
  info.points = (Vec2 *)&v40;
  info.rotation = 0;
  v5 = (float)(v4 * 0.5) + 4.0;
  v40 = 16.0 - (float)(v5 + 15.229);
  v41 = 0;
  v42 = 16.0 - v5;
  v43 = 1090519040;
  v44 = v5 + -16.0;
  v45 = 1090519040;
  v46 = (float)(v5 + 15.229) + -16.0;
  v47 = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6408), (StageActor *)a1, &info);
  FIELD_U32(a1, 6580) = 0;
  FIELD_U32(a1, 6584) = 0;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6408));
  FIELD_F32(a1, 7024) = (float)(v4 * 0.5) + -4.0;
  FIELD_U32(a1, 7028) = 1090519040;
  FIELD_F32(a1, 7032) = -(float)((float)(v4 * 0.5) + -4.0);
  FIELD_U32(a1, 7036) = 1090519040;
  FIELD_U32(a1, 6652) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB6858);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 516) = 0;
  FIELD_U32(a1, 520) = 0;
  FIELD_U32(a1, 524) = 1119879168;
  FIELD_U32(a1, 528) = 1119879168;
  FIELD_U32(a1, 508) = 1138753536;
  FIELD_U32(a1, 512) = 1124073472;
  ProfileId = Actor__getProfileId((Actor *)a1);
  FIELD_U32(a1, 6332) = (int)(float)(v4 * 0.0625);
  FIELD_U32(a1, 6272) = 0;
  FIELD_U32(a1, 6276) = 0;
  FIELD_U32(a1, 6280) = 0;
  v7 = (_DWORD *)(a1 + 6336);
  if ( ProfileId != 221 )
  {
    *v7 = 6;
    FIELD_U32(a1, 6308) = 0;
    FIELD_U32(a1, 6312) = 0;
    FIELD_U32(a1, 6316) = 0;
    goto LABEL_29;
  }
  *v7 = 11;
  FIELD_U32(a1, 6308) = 0;
  FIELD_U32(a1, 6312) = 0;
  FIELD_U32(a1, 6316) = 0;
  v8 = (FIELD_U32(a1, 20) >> 12) & 7;
  if ( v8 == 1 )
  {
    v9 = a1;
    v10 = 1;
LABEL_11:
    v12 = FIELD_U32(v9, 6760);
    v11 = v9 + 6760;
    FIELD_U8(v12, 29) = v10;
    v13 = *(_QWORD *)(*(_DWORD *)v11 + 24);
    HIDWORD(v13) &= 0xFFFFFF0F;
    *(_QWORD *)(*(_DWORD *)v11 + 24) = v13;
    v14 = (_DWORD *)(a1 + 6756);
    v15 = *(_DWORD *)v11;
    if ( FIELD_U32(a1, 6756) > 1u )
      v15 += 32;
    FIELD_U8(v15, 29) = v10;
    v16 = *(_DWORD *)v11;
    if ( *v14 > 1u )
      v16 += 32;
    v17 = FIELD_U32(v16, 28) & 0xFFFFFF0F;
    FIELD_U32(v16, 24) = FIELD_U32(v16, 24);
    FIELD_U32(v16, 28) = v17;
    v18 = *(_DWORD *)v11;
    if ( *v14 > 2u )
      v18 += 64;
    FIELD_U8(v18, 29) = v10;
    v19 = *(_DWORD *)v11;
    if ( *v14 > 2u )
      v19 += 64;
    v20 = FIELD_U64(v19, 24);
    HIDWORD(v20) &= 0xFFFFFF0F;
    FIELD_U64(v19, 24) = v20;
    goto LABEL_29;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
      goto LABEL_29;
    v9 = a1;
    v10 = 2;
    goto LABEL_11;
  }
  v21 = (int *)(a1 + 6760);
  *(_BYTE *)(FIELD_U32(a1, 6760) + 29) = 1;
  v22 = FIELD_U32(a1, 6760);
  v23 = FIELD_U64(v22, 24);
  HIDWORD(v23) = HIDWORD(v23) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v22, 24) = v23;
  v24 = (_DWORD *)(a1 + 6756);
  v25 = FIELD_U32(a1, 6760);
  if ( FIELD_U32(a1, 6756) > 1u )
    v25 += 32;
  FIELD_U8(v25, 29) = 1;
  v26 = *v21;
  if ( *v24 > 1u )
    v26 += 32;
  v27 = FIELD_U32(v26, 28) & 0xFFFFFF0F | 0x10;
  FIELD_U32(v26, 24) = FIELD_U32(v26, 24);
  FIELD_U32(v26, 28) = v27;
  v28 = *v21;
  if ( *v24 > 2u )
    v28 += 64;
  FIELD_U8(v28, 29) = 1;
  v29 = *v21;
  if ( *v24 > 2u )
    v29 += 64;
  v30 = FIELD_U64(v29, 24);
  HIDWORD(v30) = HIDWORD(v30) & 0xFFFFFF0F | 0x10;
  FIELD_U64(v29, 24) = v30;
LABEL_29:
  ((void (__fastcall *)(int))loc_60645374)(a1 + 6112);
  v31 = FIELD_U32(a1, 112);
  v32 = FIELD_F32(a1, 116);
  v40 = FIELD_F32(a1, 108);
  v41 = v31;
  v42 = v32;
  v40 = v40 - (float)(v4 * 0.5);
  sub_60645448(a1 + 6112, (int)&v40, v4);
  v33 = FIELD_U32(a1, 24);
  FIELD_U32(a1, 7012) = 1065353216;
  FIELD_U32(a1, 7016) = 1065353216;
  FIELD_U32(a1, 7020) = 1065353216;
  FIELD_U32(a1, 7000) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 7004) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 7008) = -985546752;
  FIELD_F32(a1, 7056) = (float)((float)(((2 * v33) & 0x1Eu) + 2) * 16.0) + -32.0;
  sub_6065F0DC(a1);
  v34 = FIELD_F32(a1, 7056);
  FIELD_F32(a1, 7004) = (float)(FIELD_F32(a1, 112) + -40.0) + (float)(v34 * -0.5);
  FIELD_F32(a1, 7016) = v34 * 0.03125;
  v35 = (void (__fastcall ***)(_DWORD, _DWORD, SolidOnTopColliderInfo *, int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6104) + 132))(
                                                                                         **(_DWORD **)(a1 + 6104),
                                                                                         0);
  v36 = FIELD_U32(a1, 7016);
  info.field_0 = 1.0;
  info.field_4 = v36;
  v37 = **v35;
  v48 = 0;
  v37(v35, 0, &info, &v48, &dword_60B3B944);
  sub_6065F29C(a1);
  return 1;
}

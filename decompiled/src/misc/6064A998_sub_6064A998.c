/* sub_6064A998
 * address: 0x6064A998   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064A998(int a1)
{
  _WORD *v2; // r0
  __int16 v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  _DWORD **v10; // r7
  void (__fastcall ***v11)(_DWORD, _DWORD, float32x2_t *, unsigned int *, int *); // r0
  unsigned __int32 v12; // r1
  void (__fastcall *v13)(_DWORD, _DWORD, float32x2_t *, unsigned int *, int *); // r6
  int v14; // r0
  int v15; // r1
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  float v21; // s6
  float v22; // s2
  unsigned int v24[3]; // [sp+8h] [bp-60h] BYREF
  float32x2_t v25; // [sp+14h] [bp-54h] BYREF
  float v26; // [sp+1Ch] [bp-4Ch]
  int v27; // [sp+20h] [bp-48h]
  float v28; // [sp+24h] [bp-44h]
  float v29; // [sp+28h] [bp-40h]
  float v30; // [sp+2Ch] [bp-3Ch]
  int v31; // [sp+30h] [bp-38h]
  float v32; // [sp+34h] [bp-34h]
  float v33; // [sp+38h] [bp-30h]
  float v34; // [sp+3Ch] [bp-2Ch]
  int v35; // [sp+40h] [bp-28h]

  v4 = FIELD_U16(a1, 7432);
  v2 = (_WORD *)(a1 + 7432);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  v5 = FIELD_U32(a1, 7412);
  if ( v5 )
    FIELD_U32(a1, 7412) = v5 - 1;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6064AD08(a1);
  sub_6064AF30(a1);
  FIELD_U32(a1, 7308) = 0x800000;
  FIELD_U32(a1, 7288) = 16;
  FIELD_U32(a1, 7292) = 0x10000;
  FIELD_U32(a1, 7300) = 0x200000;
  FIELD_U32(a1, 7304) = 0x100000;
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 164);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6104));
  FIELD_U32(a1, 6836) = FIELD_U32(a1, 164);
  ShapedCollider_execute((ColliderBase *)(a1 + 6592));
  v6 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7316));
  v7 = FIELD_F32(a1, 112);
  if ( v6 )
    v8 = fabsf(v7 - FIELD_F32(v6, 112));
  else
    v8 = 128.0;
  FIELD_U32(a1, 7332) = FIELD_U32(a1, 108);
  v9 = FIELD_F32(a1, 116);
  FIELD_F32(a1, 7336) = v7 + (float)(v8 * 0.5);
  FIELD_F32(a1, 7340) = v9 + -16.0;
  FIELD_F32(a1, 7388) = v8 * 0.0625;
  v10 = (_DWORD **)(a1 + 7268);
  v11 = (void (__fastcall ***)(_DWORD, _DWORD, float32x2_t *, unsigned int *, int *))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 7268) + 132))(
                                                                                       **(_DWORD **)(a1 + 7268),
                                                                                       0);
  v12 = FIELD_U32(a1, 7388);
  v25.n64_u32[0] = 1065353216;
  v25.n64_u32[1] = v12;
  v13 = **v11;
  v24[0] = 0;
  v13(v11, 0, &v25, v24, &dword_60B3B944);
  v14 = FIELD_U32(a1, 108);
  v15 = FIELD_U32(a1, 112);
  v16 = FIELD_U32(a1, 116);
  v25.n64_u64[0] = 1065353216;
  v26 = 0.0;
  v28 = 0.0;
  v29 = 1.0;
  v30 = 0.0;
  v32 = 0.0;
  v33 = 0.0;
  v34 = 1.0;
  v27 = v14;
  v31 = v15;
  v35 = v16;
  v24[0] = FIELD_U32(a1, 7416) + sub_608337E0(a1 + 7280);
  Mtx34_rotateX(&v25, v24);
  Mtx34_rotateZ(&v25, (unsigned int *)(a1 + 164));
  sub_6064B450(a1, &v25);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)a1 + 212))(a1, &v25);
  sub_6064A7C4((_DWORD *)a1);
  v17 = FIELD_U32(a1, 7388);
  v18 = FIELD_U32(a1, 7340);
  v19 = FIELD_U32(a1, 7336);
  v20 = FIELD_U32(a1, 7332);
  v24[0] = 1065353216;
  v24[1] = v17;
  v24[2] = 1065353216;
  v21 = (float)(-0.00030118 * 0.0) + 1.0;
  v22 = (float)(0.024541 * 0.0) + 0.0;
  v25.n64_f32[0] = (float)(v21 * v21) + (float)(v22 * (float)(v22 * v22));
  v28 = v22 * v21;
  v32 = (float)(v22 * v28) - v28;
  v25.n64_f32[1] = v32;
  v29 = v21 * v21;
  v33 = (float)(v22 * v22) + (float)(v22 * (float)(v21 * v21));
  v26 = v22 * v21;
  v30 = -v22;
  v34 = v21 * v21;
  v27 = v20;
  v31 = v19;
  v35 = v18;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v10 + 60))(**v10, &v25);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(*(_DWORD *)**v10 + 68))(**v10, v24);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 7268));
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 7268));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 200))(a1);
  return 1;
}

/* sub_604223C4
 * address: 0x604223C4   size: 1924   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604223C4(int a1)
{
  int v2; // r7
  int v3; // r0
  int v4; // r6
  int v5; // r0
  int v6; // r8
  _DWORD *v7; // r6
  int v8; // r6
  _DWORD *v9; // r7
  _DWORD *v10; // r6
  _DWORD *v11; // r6
  _DWORD *v12; // r6
  _DWORD *v13; // r6
  _DWORD *v14; // r6
  _DWORD *v15; // r6
  int v16; // r5
  float v17; // s0
  float v18; // s0
  int v19; // r7
  int v20; // r6
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  sead_IDisposer *v29; // r5
  sead_IDisposer *v30; // r0
  _DWORD v32[2]; // [sp+10h] [bp-80h] BYREF
  _DWORD v33[2]; // [sp+18h] [bp-78h] BYREF
  int (**v34)(); // [sp+20h] [bp-70h] BYREF
  const char *v35; // [sp+24h] [bp-6Ch]
  int v36; // [sp+44h] [bp-4Ch]
  int v37; // [sp+48h] [bp-48h]
  int v38; // [sp+64h] [bp-2Ch]

  v2 = 0;
  sub_60956CA4(0);
  sub_60956DE8(&v34);
  v33[0] = 1920;
  v36 = 1;
  v33[1] = 1080;
  v32[0] = 1280;
  v32[1] = 720;
  sub_60956E64(&v34, 0, v33, v32);
  v3 = sub_608EF75C(a1);
  v38 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 32))(v3, 3);
  v37 = 21;
  v4 = dword_60CD0B40;
  Icon_DRAW_ref(dword_60CD0B40, &v34, 0, 0);
  FIELD_U8(v4, 252) = 1;
  v5 = FIELD_U32(v4, 248);
  if ( (v5 & 8) != 0 )
    FIELD_U32(v4, 248) = v5 & 0xFFFFFFE7 | 0x10;
  if ( FIELD_U32(dword_60CCF448, 212) )
    v2 = **(_DWORD **)(dword_60CCF448 + 220);
  FIELD_U32(v4, 844) = v2;
  v6 = dword_60CD0B40;
  v34 = &sead__SafeStringBase__vtable;
  v35 = "Gather";
  v7 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v7, 0, 420);
  sub_60441A3C(v7);
  *v7 = off_60BFA0BC;
  v7[4] = &off_60BFA114;
  sub_60958220(v6, v7, 0, &v34, 0, 0);
  v8 = operator_new(0x390u);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "Capture";
  sub_60443FE0(v8, &v34);
  sub_604448AC(v8, 1, 432, 3, 216, 216, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = (const char *)&unk_60AC7B79;
  v9 = (_DWORD *)operator_new_8DE25C(0x1FCu, 0, 4);
  memset(v9, 0, 508);
  sub_6044364C(v9);
  *v9 = off_60BFA124;
  v9[4] = &off_60BFA180;
  sub_60958220(v6, v9, 1, &v34, 0, 0);
  sub_60443628(v9, v8);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "ReflectionLightMap";
  v10 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v10, 0, 420);
  sub_60441A3C(v10);
  *v10 = off_60BFA1A8;
  v10[4] = &off_60BFA200;
  sub_60958220(v6, v10, 2, &v34, 0, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "LightMap";
  v11 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v11, 0, 420);
  sub_60441A3C(v11);
  *v11 = off_60BFA1A8;
  v11[4] = &off_60BFA200;
  sub_60958220(v6, v11, 4, &v34, 0, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = (const char *)&unk_60AC7BA8;
  v12 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v12, 0, 420);
  sub_60441A3C(v12);
  *v12 = off_60BF9FE4;
  v12[4] = &off_60BFA03C;
  sub_60958220(v6, v12, 14, &v34, 0, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = (const char *)&unk_60AC7BB2;
  v13 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v13, 0, 420);
  sub_60441A3C(v13);
  *v13 = off_60BF9FE4;
  v13[4] = &off_60BFA03C;
  sub_60958220(v6, v13, 17, &v34, 0, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = (const char *)&unk_60AC7BC6;
  v14 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v14, 0, 420);
  sub_60441A3C(v14);
  *v14 = off_60BFA218;
  v14[4] = &off_60BFA270;
  sub_60958220(v6, v14, 18, &v34, 0, 0);
  v34 = &sead__SafeStringBase__vtable;
  v35 = (const char *)&unk_60AC7BD6;
  v15 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v15, 0, 420);
  sub_60441A3C(v15);
  *v15 = off_60BFA280;
  v15[4] = &off_60BFA2D8;
  sub_60958220(v6, v15, 20, &v34, 0, 0);
  ((void (__fastcall *)(int (***)(), float, float, float, float))loc_6090E3D4)(&v34, 0.0, 0.0, 1280.0, 720.0);
  v16 = a1 + 368;
  FIELD_U32(a1, 516) = -998637568;
  FIELD_U32(a1, 520) = 1184645120;
  FIELD_U8(a1, 372) = 1;
  sub_6090C954(a1 + 368, &v34);
  FIELD_U32(a1, 592) = 0;
  FIELD_U32(a1, 596) = 0;
  FIELD_U32(a1, 600) = 0;
  FIELD_F32(a1, 604) = -0.0;
  FIELD_F32(a1, 608) = -0.0;
  FIELD_F32(a1, 612) = -1.0;
  FIELD_U32(a1, 616) = 0;
  FIELD_U32(a1, 620) = 1065353216;
  FIELD_U32(a1, 624) = 0;
  v17 = sqrtf((float)((float)(1.0 * 1.0) + (float)(0.0 * 0.0)) + (float)(0.0 * 0.0));
  if ( v17 > 0.0 )
  {
    v18 = 1.0 / v17;
    FIELD_F32(a1, 616) = v18 * FIELD_F32(a1, 616);
    FIELD_F32(a1, 620) = v18 * FIELD_F32(a1, 620);
    FIELD_F32(a1, 624) = v18 * FIELD_F32(a1, 624);
  }
  v19 = a1 + 540;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 540) + 16))(a1 + 540, a1 + 544);
  v20 = dword_60CD0B40;
  v21 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0xEu )
    v21 += 56;
  *(_DWORD *)(*(_DWORD *)v21 + 76) = v16;
  v22 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0xEu )
    v22 += 56;
  *(_DWORD *)(*(_DWORD *)v22 + 72) = v19;
  v23 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x11u )
    v23 += 68;
  *(_DWORD *)(*(_DWORD *)v23 + 76) = v16;
  v24 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x11u )
    v24 += 68;
  *(_DWORD *)(*(_DWORD *)v24 + 72) = v19;
  v25 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x12u )
    v25 += 72;
  *(_DWORD *)(*(_DWORD *)v25 + 76) = v16;
  v26 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x12u )
    v26 += 72;
  *(_DWORD *)(*(_DWORD *)v26 + 72) = v19;
  v27 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x14u )
    v27 += 80;
  *(_DWORD *)(*(_DWORD *)v27 + 76) = v16;
  v28 = FIELD_U32(v20, 36);
  if ( FIELD_U32(v20, 32) > 0x14u )
    v28 += 80;
  *(_DWORD *)(*(_DWORD *)v28 + 72) = v19;
  FIELD_U32(v20, 240) = 29;
  FIELD_U32(v20, 248) |= 0x10u;
  *(_DWORD *)(**(_DWORD **)(v20 + 28) + 2376) = 2;
  v29 = (sead_IDisposer *)operator_new(0x44u);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "Perf";
  v30 = sead_IDisposer_ctor(v29);
  FIELD_U32(v30 + (1) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v29 + (1) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(v29, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(v29 + (1) * 16, 0x8) = 0;
  FIELD_U32(v29 + (1) * 16, 0xC) = 0;
  FIELD_U32(v29 + (2) * 16, 0x0) = 1;
  FIELD_U32(v29 + (2) * 16, 0x8) = a1;
  FIELD_U32(v29 + (2) * 16, 0xC) = (int)nullsub_3680;
  FIELD_U32(v29 + (3) * 16, 0x0) = 0;
  FIELD_U32(v29 + (2) * 16, 0x4) = (int)off_60BFA2E8;
  sead__SafeStringBase__operator_assign((int)&v30[1], (int)&v34);
  FIELD_U32(v29 + (1) * 16, 0x8) = 1;
  sub_6095802C(v20, 0, v29);
  sub_6095802C(v20, 2, v29);
  sub_60416E4C(0);
  sub_60416EF0(dword_60C9BAA4, 0);
  RenderObjParallelExecuterThread_ref(a1 + 704, 0);
  return sub_608EF6A8(a1);
}

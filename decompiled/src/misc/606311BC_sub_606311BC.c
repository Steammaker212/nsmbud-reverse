/* sub_606311BC
 * address: 0x606311BC   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606311BC(int a1, int a2, int a3, float a4, float a5)
{
  float v7; // s0
  float v8; // s20
  float v9; // s18
  void (__fastcall ***v10)(_DWORD, _DWORD, float32x2_t *, float *, int *); // r0
  int v11; // r10
  void (__fastcall *v12)(_DWORD, _DWORD, float32x2_t *, float *, int *); // r7
  float v13; // s16
  int v14; // r11
  int v15; // r2
  unsigned __int32 v16; // r2
  int v17; // r3
  int v18; // r5
  int v19; // r6
  int v20; // r7
  int v21; // r2
  int v22; // r3
  int v23; // r5
  int v24; // r6
  int v25; // r7
  float v26; // s20
  int v27; // r4
  int v28; // r5
  int v29; // r9
  unsigned __int32 v30; // r2
  int v31; // r3
  int v32; // r4
  int v33; // r5
  int v34; // r6
  int v35; // r2
  int v36; // r3
  int v37; // r4
  int v38; // r5
  int v39; // r6
  int v40; // r0
  int v41; // r1
  unsigned __int32 v42; // r2
  int v43; // r3
  int v44; // r5
  int v45; // r6
  int v46; // r7
  int v47; // r2
  int v48; // r3
  int v49; // r5
  int v50; // r6
  int v51; // r7
  int v52; // r0
  int v53; // r1
  int v55; // [sp+4h] [bp-94h]
  int v57; // [sp+Ch] [bp-8Ch]
  float32x2_t v58; // [sp+10h] [bp-88h] BYREF
  int v59; // [sp+18h] [bp-80h]
  int v60; // [sp+1Ch] [bp-7Ch]
  int v61; // [sp+20h] [bp-78h]
  int v62; // [sp+24h] [bp-74h]
  int v63; // [sp+28h] [bp-70h]
  int v64; // [sp+2Ch] [bp-6Ch]
  int v65; // [sp+30h] [bp-68h]
  int v66; // [sp+34h] [bp-64h]
  int v67; // [sp+38h] [bp-60h]
  int v68; // [sp+3Ch] [bp-5Ch]
  int v69; // [sp+40h] [bp-58h] BYREF
  float v70; // [sp+44h] [bp-54h] BYREF
  int v71; // [sp+48h] [bp-50h]
  int v72; // [sp+4Ch] [bp-4Ch]

  v7 = *(float *)(*(_DWORD *)a1 + 36);
  v8 = *(float *)(*(_DWORD *)a1 + 32);
  v69 = a3 / 9;
  v58.n64_u32[0] = 1065353216;
  v9 = (float)(1.0 / v7) * a5;
  v58.n64_f32[1] = v9;
  v10 = (void (__fastcall ***)(_DWORD, _DWORD, float32x2_t *, float *, int *))(*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 132))(
                                                                                a2,
                                                                                FIELD_U32(a1, 12));
  v11 = 0;
  v12 = **v10;
  v70 = 0.0;
  v12(v10, 0, &v58, &v70, &dword_60B3B944);
  v57 = a1;
  v55 = FIELD_U8(a1, 720);
  v13 = (float)(1.0 / v8) * a4;
  do
  {
    v14 = v57 + v11;
    v15 = v55;
    if ( v55 )
      v15 = 1;
    sub_60699BB4(v57 + v11 + 16, a2, v15);
    v16 = *(_DWORD *)(v57 + v11 + 20);
    v17 = *(_DWORD *)(v57 + v11 + 24);
    v18 = *(_DWORD *)(v57 + v11 + 28);
    v19 = *(_DWORD *)(v57 + v11 + 32);
    v20 = *(_DWORD *)(v57 + v11 + 36);
    v58.n64_u32[0] = *(_DWORD *)(v57 + v11 + 16);
    v58.n64_u32[1] = v16;
    v59 = v17;
    v60 = v18;
    v61 = v19;
    v62 = v20;
    v21 = *(_DWORD *)(v57 + v11 + 44);
    v22 = *(_DWORD *)(v57 + v11 + 48);
    v23 = *(_DWORD *)(v57 + v11 + 52);
    v24 = *(_DWORD *)(v57 + v11 + 56);
    v25 = *(_DWORD *)(v57 + v11 + 60);
    v63 = *(_DWORD *)(v57 + v11 + 40);
    v64 = v21;
    v65 = v22;
    v66 = v23;
    v67 = v24;
    v68 = v25;
    v26 = FIELD_F32(v14, 64);
    v27 = FIELD_U32(v14, 68);
    v28 = FIELD_U32(v14, 72);
    Mtx34_rotateZ(&v58, (unsigned int *)&v69);
    v70 = v13 * v26;
    v71 = v27;
    v72 = v28;
    (*(void (__fastcall **)(int, _DWORD, float32x2_t *, float *))(*(_DWORD *)a2 + 96))(
      a2,
      FIELD_U32(v14, 76),
      &v58,
      &v70);
    v11 += 64;
  }
  while ( v11 != 576 );
  v29 = v55;
  if ( v55 )
    v29 = 1;
  sub_60699BB4(v57 + 592, a2, v29);
  v30 = FIELD_U32(v57, 596);
  v31 = FIELD_U32(v57, 600);
  v32 = FIELD_U32(v57, 604);
  v33 = FIELD_U32(v57, 608);
  v34 = FIELD_U32(v57, 612);
  v58.n64_u32[0] = FIELD_U32(v57, 592);
  v58.n64_u32[1] = v30;
  v59 = v31;
  v60 = v32;
  v61 = v33;
  v62 = v34;
  v35 = FIELD_U32(v57, 620);
  v36 = FIELD_U32(v57, 624);
  v37 = FIELD_U32(v57, 628);
  v38 = FIELD_U32(v57, 632);
  v39 = FIELD_U32(v57, 636);
  v63 = FIELD_U32(v57, 616);
  v64 = v35;
  v65 = v36;
  v66 = v37;
  v67 = v38;
  v68 = v39;
  v40 = FIELD_U32(v57, 648);
  v41 = FIELD_U32(v57, 644);
  v70 = v9 * FIELD_F32(v57, 640);
  v71 = v41;
  v72 = v40;
  (*(void (__fastcall **)(int, _DWORD, float32x2_t *, float *))(*(_DWORD *)a2 + 96))(
    a2,
    FIELD_U32(v57, 652),
    &v58,
    &v70);
  sub_60699BB4(v57 + 656, a2, v29);
  v42 = FIELD_U32(v57, 660);
  v43 = FIELD_U32(v57, 664);
  v44 = FIELD_U32(v57, 668);
  v45 = FIELD_U32(v57, 672);
  v46 = FIELD_U32(v57, 676);
  v58.n64_u32[0] = FIELD_U32(v57, 656);
  v58.n64_u32[1] = v42;
  v59 = v43;
  v60 = v44;
  v61 = v45;
  v62 = v46;
  v47 = FIELD_U32(v57, 684);
  v48 = FIELD_U32(v57, 688);
  v49 = FIELD_U32(v57, 692);
  v50 = FIELD_U32(v57, 696);
  v51 = FIELD_U32(v57, 700);
  v63 = FIELD_U32(v57, 680);
  v64 = v47;
  v65 = v48;
  v66 = v49;
  v67 = v50;
  v68 = v51;
  v52 = FIELD_U32(v57, 712);
  v53 = FIELD_U32(v57, 708);
  v70 = v9 * FIELD_F32(v57, 704);
  v71 = v53;
  v72 = v52;
  (*(void (__fastcall **)(int, _DWORD, float32x2_t *, float *))(*(_DWORD *)a2 + 96))(
    a2,
    FIELD_U32(v57, 716),
    &v58,
    &v70);
  FIELD_U8(v57, 720) = 1;
  return 1;
}

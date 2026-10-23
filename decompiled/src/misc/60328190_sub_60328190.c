/* sub_60328190
 * address: 0x60328190   size: 2608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60328190(int a1)
{
  float *v2; // r6
  float v3; // r0
  float v4; // r1
  float v5; // r2
  char v6; // r12
  unsigned __int64 *v7; // r7
  unsigned int v8; // r10
  int v9; // r8
  __guard *v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r0
  float *v14; // r3
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s6
  int v19; // s8
  float *v20; // r3
  float *v21; // r1
  float v22; // s12
  float v23; // s14
  float v24; // s1
  float v25; // s3
  float v26; // s5
  float v27; // s11
  float v28; // s13
  float v29; // s7
  float v30; // s9
  float v31; // s10
  float v32; // s4
  float v33; // s0
  float v34; // s6
  float v35; // s3
  float v36; // s14
  float v37; // s11
  float v38; // s7
  float v39; // s2
  float v40; // s0
  float v41; // s4
  float v42; // s0
  float *v43; // r11
  float v44; // r9
  float v45; // lr
  float v46; // r12
  float v47; // s2
  float v48; // s4
  float v49; // s0
  float v50; // s0
  float v51; // s2
  float v52; // s12
  float v53; // s6
  int v54; // r0
  int (__fastcall *v55)(int, float *); // r2
  int v56; // r0
  float v57; // s2
  float v58; // s6
  float v59; // s4
  float v60; // s10
  float v61; // s12
  float result; // s0
  float v63; // [sp+20h] [bp-130h] BYREF
  float v64; // [sp+24h] [bp-12Ch]
  float v65; // [sp+28h] [bp-128h]
  float v66; // [sp+2Ch] [bp-124h]
  float v67; // [sp+30h] [bp-120h]
  float v68; // [sp+34h] [bp-11Ch]
  float v69; // [sp+38h] [bp-118h]
  float v70; // [sp+3Ch] [bp-114h]
  float v71; // [sp+40h] [bp-110h]
  float v72; // [sp+44h] [bp-10Ch]
  float v73; // [sp+48h] [bp-108h]
  float v74; // [sp+4Ch] [bp-104h]
  unsigned __int64 v75; // [sp+50h] [bp-100h] BYREF
  __int64 v76; // [sp+58h] [bp-F8h]
  __int64 v77; // [sp+60h] [bp-F0h]
  float v78; // [sp+68h] [bp-E8h]
  float v79; // [sp+6Ch] [bp-E4h]
  __int64 v80; // [sp+70h] [bp-E0h]
  float v81[3]; // [sp+78h] [bp-D8h]
  unsigned int v82; // [sp+84h] [bp-CCh] BYREF
  float32x2_t v83; // [sp+88h] [bp-C8h] BYREF
  __int64 v84; // [sp+90h] [bp-C0h]
  __int64 v85; // [sp+98h] [bp-B8h]
  float v86; // [sp+A0h] [bp-B0h]
  float v87; // [sp+A4h] [bp-ACh]
  __int64 v88; // [sp+A8h] [bp-A8h]
  __int64 v89; // [sp+B0h] [bp-A0h]
  _DWORD v90[2]; // [sp+B8h] [bp-98h]
  float32x2_t v91; // [sp+C0h] [bp-90h] BYREF
  float v92; // [sp+C8h] [bp-88h]
  float v93; // [sp+CCh] [bp-84h]
  float v94; // [sp+D0h] [bp-80h]
  float v95; // [sp+D4h] [bp-7Ch]
  float v96; // [sp+D8h] [bp-78h]
  float v97; // [sp+DCh] [bp-74h]
  float v98; // [sp+E0h] [bp-70h]
  float v99; // [sp+E4h] [bp-6Ch]
  float v100; // [sp+E8h] [bp-68h]
  float v101; // [sp+ECh] [bp-64h]
  unsigned int v102; // [sp+F0h] [bp-60h] BYREF
  unsigned int v103; // [sp+F4h] [bp-5Ch] BYREF
  unsigned int v104; // [sp+F8h] [bp-58h] BYREF

  v2 = (float *)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 6300) + 52))(**(_DWORD **)(a1 + 6300));
  v3 = *(v2 - 1546);
  v4 = *(v2 - 1547);
  v5 = *(v2 - 1548);
  v104 = *((_DWORD *)v2 - 1534);
  v103 = *((_DWORD *)v2 - 1535);
  v102 = *((_DWORD *)v2 - 1536);
  v91.n64_u64[0] = 1065353216;
  v92 = 0.0;
  v94 = 0.0;
  v95 = 1.0;
  v96 = 0.0;
  v98 = 0.0;
  v99 = 0.0;
  v100 = 1.0;
  v93 = v5;
  v97 = v4;
  v101 = v3;
  Mtx34_rotateY(&v91, &v103);
  v93 = v93 + (float)((float)((float)(v91.n64_f32[1] * 40.0) + (float)(v91.n64_f32[0] * 0.0)) + (float)(v92 * 0.0));
  v97 = v97 + (float)((float)((float)(v95 * 40.0) + (float)(v94 * 0.0)) + (float)(v96 * 0.0));
  v101 = v101 + (float)((float)((float)(v99 * 40.0) + (float)(v98 * 0.0)) + (float)(v100 * 0.0));
  Mtx34_rotateX(&v91, &v102);
  v93 = v93 + (float)((float)((float)(v91.n64_f32[0] * 0.0) - (float)(v91.n64_f32[1] * 40.0)) + (float)(v92 * 0.0));
  v97 = v97 + (float)((float)((float)(v94 * 0.0) - (float)(v95 * 40.0)) + (float)(v96 * 0.0));
  v101 = v101 + (float)((float)((float)(v98 * 0.0) - (float)(v99 * 40.0)) + (float)(v100 * 0.0));
  Mtx34_rotateZ(&v91, &v104);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v2 + 68))(**(_DWORD **)v2, v2 + 20424);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)v2 + 60))(**(_DWORD **)v2, &v91);
  if ( ((unsigned int)dword_60C93C00 & ~(1613923232 << v6) & 1) == 0 && _cxa_guard_acquire(dword_60C93C00) )
  {
    unk_60C93C0C = (int)(float)((float)(2147500000.0 * -10.0) / 180.0);
    unk_60C93C10 = (int)(float)((float)(2147500000.0 * -45.0) / 180.0);
    unk_60C93C14 = (int)(float)((float)(2147500000.0 * 15.0) / 180.0);
    _cxa_guard_release(dword_60C93C00);
  }
  if ( ((unsigned int)&dword_60C93C00[1] & ~(1613923404 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C93C00[1]) )
  {
    unk_60C93C18 = (int)(float)((float)(2147500000.0 * -170.0) / 180.0);
    unk_60C93C1C = (int)(float)((float)(2147500000.0 * -45.0) / 180.0);
    unk_60C93C20 = (int)(float)((float)(2147500000.0 * 165.0) / 180.0);
    _cxa_guard_release(&dword_60C93C00[1]);
  }
  if ( ((unsigned int)&dword_60C93C00[2] & ~(1613923560 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C93C00[2]) )
  {
    unk_60C93C24 = unk_60C93C0C;
    unk_60C93C28 = unk_60C93C10;
    unk_60C93C2C = unk_60C93C14;
    unk_60C93C30 = unk_60C93C18;
    unk_60C93C34 = unk_60C93C1C;
    unk_60C93C38 = unk_60C93C20;
    _cxa_guard_release(&dword_60C93C00[2]);
  }
  v7 = &v75;
  v8 = 0;
  LODWORD(v75) = &sead__SafeStringBase__vtable;
  HIDWORD(v75) = "eye_left";
  LODWORD(v76) = &sead__SafeStringBase__vtable;
  HIDWORD(v76) = "eye_right";
  v90[0] = FIELD_U32(a1, 86944);
  v90[1] = FIELD_U32(a1, 86948);
  do
  {
    v9 = (*(int (__fastcall **)(_DWORD, unsigned __int64 *))(***(_DWORD ***)v2 + 84))(**(_DWORD **)v2, v7);
    v63 = 1.0;
    v64 = 1.0;
    v65 = 1.0;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(***(_DWORD ***)v2 + 100))(
      **(_DWORD **)v2,
      v9,
      &v83,
      &v63);
    v10 = &dword_60C93C00[3 * v8 / 4];
    v11 = v10[9];
    v12 = v10[10];
    v13 = v10[11];
    v14 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
    v15 = *v14;
    v16 = v14[1];
    v17 = v14[2];
    v18 = v14[3];
    v19 = v11 & 0xFFFFFF;
    v20 = (float *)((char *)sinLutTable + ((v11 >> 20) & 0xFF0));
    v21 = (float *)((char *)sinLutTable + ((v12 >> 20) & 0xFF0));
    v22 = (float)(v13 & 0xFFFFFF) * 0.000000059605;
    v23 = *v21;
    v24 = v21[1];
    v25 = v21[2];
    v26 = v21[3];
    v27 = v20[2];
    v28 = v20[3];
    v29 = *v20;
    v30 = v20[1];
    v82 = v90[v8 / 4];
    v31 = (float)(v12 & 0xFFFFFF) * 0.000000059605;
    v32 = v17 + (float)(v22 * v18);
    v33 = v15 + (float)(v22 * v16);
    v34 = (float)(unsigned int)v19 * 0.000000059605;
    v35 = v25 + (float)(v31 * v26);
    v36 = v23 + (float)(v31 * v24);
    v37 = v27 + (float)(v34 * v28);
    v38 = v29 + (float)(v34 * v30);
    v83.n64_f32[0] = v35 * v32;
    *(float *)&v85 = v35 * v33;
    *(float *)&v88 = -v36;
    v83.n64_f32[1] = (float)((float)(v38 * v36) * v32) - (float)(v37 * v33);
    *((float *)&v85 + 1) = (float)(v37 * v32) + (float)((float)(v38 * v36) * v33);
    *((float *)&v88 + 1) = v38 * v35;
    *(float *)&v84 = (float)(v36 * (float)(v37 * v32)) + (float)(v38 * v33);
    v86 = (float)(v36 * (float)(v37 * v33)) - (float)(v38 * v32);
    *(float *)&v89 = v37 * v35;
    Mtx34_rotateZ(&v83, &v82);
    v39 = FIELD_F32(a1, 88004);
    v40 = 1.0 - v2[20424];
    v41 = FIELD_F32(a1, 88000);
    v63 = 1.0;
    v42 = (float)(v40 / 0.04) * 0.5;
    v64 = v41 + v42;
    v65 = v39 + v42;
    (*(void (__fastcall **)(_DWORD, int, float32x2_t *, float *))(***(_DWORD ***)v2 + 96))(
      **(_DWORD **)v2,
      v9,
      &v83,
      &v63);
    v8 += 4;
    ++v7;
  }
  while ( v8 != 8 );
  v43 = v2;
  ModelWrapper_updateModel(*(ModelWrapper **)v2);
  (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(***(_DWORD ***)v43 + 108))(**(_DWORD **)v43, 0, &v83);
  v44 = *((float *)&v84 + 1);
  FIELD_U32(a1, 86916) = HIDWORD(v84);
  v45 = v87;
  FIELD_F32(a1, 86920) = v87;
  v46 = *((float *)&v89 + 1);
  FIELD_U32(a1, 86924) = HIDWORD(v89);
  v75 = v83.n64_u64[0];
  v76 = v84;
  v77 = v85;
  v78 = v86;
  v79 = v87;
  v80 = v88;
  *(_QWORD *)v81 = v89;
  *((float *)&v84 + 1) = v44
                       + (float)((float)((float)(v83.n64_f32[1] * 0.0) + (float)(v83.n64_f32[0] * 0.0))
                               + (float)(*(float *)&v84 * 18.0));
  v47 = v45
      + (float)((float)((float)(*((float *)&v85 + 1) * 0.0) + (float)(*(float *)&v85 * 0.0)) + (float)(v86 * 18.0));
  v87 = v47;
  *((float *)&v89 + 1) = v46
                       + (float)((float)((float)(*((float *)&v88 + 1) * 0.0) + (float)(*(float *)&v88 * 0.0))
                               + (float)(*(float *)&v89 * 18.0));
  v48 = FIELD_F32(a1, 108);
  FIELD_F32(a1, 87268) = *((float *)&v84 + 1) - v48;
  v49 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 87272) = v47 - v49;
  v83.n64_u64[0] = v75;
  LODWORD(v84) = v76;
  v85 = v77;
  v86 = v78;
  v88 = v80;
  *(float *)&v89 = v81[0];
  *((float *)&v84 + 1) = *((float *)&v76 + 1)
                       + (float)((float)((float)(*((float *)&v75 + 1) * 0.0) + (float)(*(float *)&v75 * 0.0))
                               - (float)(*(float *)&v76 * 50.0));
  v87 = v79
      + (float)((float)((float)(*((float *)&v77 + 1) * 0.0) + (float)(*(float *)&v77 * 0.0)) - (float)(v78 * 50.0));
  v50 = v87 - v49;
  *((float *)&v89 + 1) = v81[1]
                       + (float)((float)((float)(*((float *)&v80 + 1) * 0.0) + (float)(*(float *)&v80 * 0.0))
                               - (float)(v81[0] * 50.0));
  FIELD_F32(a1, 87284) = *((float *)&v84 + 1) - v48;
  FIELD_F32(a1, 87288) = v50;
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v43 + 108))(**(_DWORD **)v43, 1, &v83);
  FIELD_U32(a1, 86880) = HIDWORD(v84);
  FIELD_F32(a1, 86884) = v87;
  FIELD_U32(a1, 86888) = HIDWORD(v89);
  (*(void (__fastcall **)(_DWORD, int, float32x2_t *))(***(_DWORD ***)v43 + 108))(**(_DWORD **)v43, 2, &v83);
  FIELD_U32(a1, 86892) = HIDWORD(v84);
  FIELD_F32(a1, 86896) = v87;
  FIELD_U32(a1, 86900) = HIDWORD(v89);
  v83.n64_u64[0] = v75;
  LODWORD(v84) = v76;
  v85 = v77;
  v86 = v78;
  v88 = v80;
  *(float *)&v89 = v81[0];
  *((float *)&v84 + 1) = *((float *)&v76 + 1)
                       + (float)((float)((float)(*((float *)&v75 + 1) * 0.0) + (float)(*(float *)&v75 * 0.0))
                               - (float)(*(float *)&v76 * 118.0));
  v87 = v79
      + (float)((float)((float)(*((float *)&v77 + 1) * 0.0) + (float)(*(float *)&v77 * 0.0)) - (float)(v78 * 118.0));
  v51 = v87;
  v52 = v81[1];
  v53 = (float)((float)(*((float *)&v80 + 1) * 0.0) + (float)(*(float *)&v80 * 0.0)) - (float)(v81[0] * 118.0);
  *((float *)&v89 + 1) = v81[1] + v53;
  FIELD_U32(a1, 86904) = HIDWORD(v84);
  FIELD_F32(a1, 86908) = v51;
  FIELD_F32(a1, 86912) = v52 + v53;
  v54 = **(_DWORD **)v2;
  v55 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v54 + 84);
  v63 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v64 = COERCE_FLOAT("skl_root");
  v56 = v55(v54, &v63);
  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)v43 + 108))(**(_DWORD **)v43, v56, &v63);
  v66 = v66 + (float)((float)((float)(v64 * 0.0) + (float)(v63 * 0.0)) - (float)(v65 * 32.0));
  v70 = v70 + (float)((float)((float)(v68 * 0.0) + (float)(v67 * 0.0)) - (float)(v69 * 32.0));
  v57 = v70;
  v58 = v72;
  v59 = v71;
  v60 = v73;
  v61 = v74;
  FIELD_F32(a1, 87300) = v66;
  FIELD_F32(a1, 87304) = v57;
  result = v61 + (float)((float)((float)(v58 * 0.0) + (float)(v59 * 0.0)) - (float)(v60 * 32.0));
  FIELD_F32(a1, 87308) = result;
  return result;
}

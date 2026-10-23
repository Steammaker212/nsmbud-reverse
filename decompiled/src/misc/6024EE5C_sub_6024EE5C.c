/* sub_6024EE5C
 * address: 0x6024EE5C   size: 904   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6024EE5C(int a1)
{
  unsigned int *v2; // r3
  float v3; // r9
  float v4; // r0
  float v5; // r8
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r3
  int **v9; // r4
  StateBase *CurrentState; // r0
  int v11; // r6
  int result; // r0
  int v13; // r0
  int (__fastcall *v14)(int, float32x2_t *); // r2
  int v15; // r6
  StateBase *v16; // r0
  int v17; // r5
  _DWORD **v18; // r7
  _DWORD *v19; // t1
  unsigned int v20; // [sp+4h] [bp-A4h] BYREF
  float32x2_t v21; // [sp+8h] [bp-A0h] BYREF
  int v22; // [sp+10h] [bp-98h]
  float v23; // [sp+14h] [bp-94h]
  int v24; // [sp+18h] [bp-90h]
  int v25; // [sp+1Ch] [bp-8Ch]
  int v26; // [sp+20h] [bp-88h]
  float v27; // [sp+24h] [bp-84h]
  int v28; // [sp+28h] [bp-80h]
  int v29; // [sp+2Ch] [bp-7Ch]
  int v30; // [sp+30h] [bp-78h]
  int v31; // [sp+34h] [bp-74h]
  unsigned int v32; // [sp+38h] [bp-70h] BYREF
  unsigned int v33; // [sp+3Ch] [bp-6Ch] BYREF
  unsigned int v34; // [sp+40h] [bp-68h] BYREF
  float32x2_t v35; // [sp+48h] [bp-60h] BYREF
  float v36; // [sp+50h] [bp-58h]
  float v37; // [sp+54h] [bp-54h]
  float v38; // [sp+58h] [bp-50h]
  float v39; // [sp+5Ch] [bp-4Ch]
  float v40; // [sp+60h] [bp-48h]
  float v41; // [sp+64h] [bp-44h]
  float v42; // [sp+68h] [bp-40h]
  float v43; // [sp+6Ch] [bp-3Ch]
  float v44; // [sp+70h] [bp-38h]
  float v45; // [sp+74h] [bp-34h]

  v2 = (unsigned int *)(a1 + 156);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 116);
  v5 = FIELD_F32(a1, 108);
  v6 = *v2;
  v7 = v2[1];
  v8 = v2[2];
  v32 = v6;
  v33 = v7;
  v34 = v8;
  v35.n64_u64[0] = 1065353216;
  v36 = 0.0;
  v38 = 0.0;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 1.0;
  v37 = v5;
  v39 = 1.0;
  v40 = 0.0;
  v41 = v3;
  v45 = v4;
  Mtx34_rotateY(&v35, &v33);
  v37 = v37 + (float)((float)((float)(v35.n64_f32[1] * 8.0) + (float)(v35.n64_f32[0] * 0.0)) + (float)(v36 * 0.0));
  v41 = v41 + (float)((float)((float)(v39 * 8.0) + (float)(v38 * 0.0)) + (float)(v40 * 0.0));
  v45 = v45 + (float)((float)((float)(v43 * 8.0) + (float)(v42 * 0.0)) + (float)(v44 * 0.0));
  Mtx34_rotateX(&v35, &v32);
  v37 = v37 + (float)((float)((float)(v35.n64_f32[0] * 0.0) - (float)(v35.n64_f32[1] * 8.0)) + (float)(v36 * 0.0));
  v41 = v41 + (float)((float)((float)(v38 * 0.0) - (float)(v39 * 8.0)) + (float)(v40 * 0.0));
  v45 = v45 + (float)((float)((float)(v42 * 0.0) - (float)(v43 * 8.0)) + (float)(v44 * 0.0));
  Mtx34_rotateZ(&v35, &v34);
  v9 = (int **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v35);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)**v9 + 68))(**v9, a1 + 12144);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v11 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v11 != (*(int (**)(void))(dword_60C8DDF8 + 8))() )
    j_ModelWrapper_updateAnims(*v9);
  sub_604218E0(*v9);
  sub_60421880(*v9);
  result = FIELD_U32(a1, 6336);
  if ( result )
  {
    result = FIELD_U8(a1, 536);
    if ( !FIELD_U8(a1, 536) )
    {
      v13 = **v9;
      v14 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v13 + 84);
      v21.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
      v21.n64_u32[1] = (unsigned __int32)"head";
      v15 = v14(v13, &v21);
      v16 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v17 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v16, 0x0) + 2))(v16);
      if ( v17 == (*(int (**)(void))(dword_60C8DDF8 + 8))() )
      {
        (*(void (__fastcall **)(int, int, float32x2_t *))(*(_DWORD *)**v9 + 108))(**v9, v15, &v21);
        v31 = 1172475904;
      }
      else
      {
        v21.n64_u64[0] = 1065353216;
        v22 = 0;
        v24 = 0;
        v25 = 1065353216;
        v26 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 1065353216;
        v23 = v5;
        v27 = v3 + 16.0;
        v31 = 1172475904;
        v20 = v33 ^ 0x80000000;
        Mtx34_rotateY(&v21, &v20);
        v20 = 0x80000000;
        Mtx34_rotateZ(&v21, &v20);
      }
      v19 = *(_DWORD **)(a1 + 6308);
      v18 = (_DWORD **)(a1 + 6308);
      (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v19 + 60))(*v19, &v21);
      j_ModelWrapper_updateAnims(*v18);
      sub_604218E0(*v18);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v18 + 52))(**v18);
      return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v18 + 56))(**v18);
    }
  }
  return result;
}

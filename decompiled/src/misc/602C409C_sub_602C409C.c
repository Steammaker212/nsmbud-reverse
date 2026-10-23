/* sub_602C409C
 * address: 0x602C409C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C409C(int a1)
{
  int result; // r0
  unsigned int v3; // r3
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r1
  int v7; // r2
  float *v8; // r4
  _DWORD *v9; // t1
  float v10; // r1
  float v11; // r2
  float v12; // s10
  float v13; // s8
  StateBase *CurrentState; // r0
  int v15; // r5
  float v16; // [sp+0h] [bp-60h] BYREF
  float v17; // [sp+4h] [bp-5Ch]
  float v18; // [sp+8h] [bp-58h]
  float32x2_t v19; // [sp+10h] [bp-50h] BYREF
  int v20; // [sp+18h] [bp-48h]
  int v21; // [sp+1Ch] [bp-44h]
  int v22; // [sp+20h] [bp-40h]
  int v23; // [sp+24h] [bp-3Ch]
  int v24; // [sp+28h] [bp-38h]
  int v25; // [sp+2Ch] [bp-34h]
  int v26; // [sp+30h] [bp-30h]
  int v27; // [sp+34h] [bp-2Ch]
  int v28; // [sp+38h] [bp-28h]
  int v29; // [sp+3Ch] [bp-24h]
  unsigned int v30; // [sp+40h] [bp-20h] BYREF
  unsigned int v31; // [sp+44h] [bp-1Ch] BYREF
  unsigned int v32; // [sp+48h] [bp-18h] BYREF

  result = FIELD_U8(a1, 6325);
  if ( result )
  {
    v3 = FIELD_U32(a1, 156);
    v4 = FIELD_U32(a1, 160);
    v5 = FIELD_U32(a1, 112);
    v6 = FIELD_U32(a1, 116);
    v7 = FIELD_U32(a1, 108);
    v32 = FIELD_U32(a1, 164);
    v31 = v4;
    v30 = v3;
    v19.n64_u64[0] = 1065353216;
    v20 = 0;
    v22 = 0;
    v23 = 1065353216;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 1065353216;
    v21 = v7;
    v25 = v5;
    v29 = v6;
    Mtx34_rotateZ(&v19, &v32);
    Mtx34_rotateY(&v19, &v31);
    Mtx34_rotateX(&v19, &v30);
    v9 = *(_DWORD **)(a1 + 6304);
    v8 = (float *)(a1 + 6304);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v9 + 60))(*v9, &v19);
    v10 = v8[11];
    v11 = v8[12];
    v16 = v8[10];
    v17 = v10;
    v18 = v11;
    v12 = *(v8 - 1538);
    v13 = *(v8 - 1539);
    v16 = (float)((float)(v16 - *(v8 - 1540)) + (float)(v16 - *(v8 - 1540))) + *(v8 - 1540);
    v17 = (float)((float)(v10 - v13) + (float)(v10 - v13)) + v13;
    v18 = (float)((float)(v11 - v12) + (float)(v11 - v12)) + v12;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)v8 + 68))(**(_DWORD **)v8, &v16);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v8 - 55));
    v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v15 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
      j_ModelWrapper_updateAnims(*(_DWORD *)v8);
    return sub_60421880(*(_DWORD *)v8);
  }
  return result;
}

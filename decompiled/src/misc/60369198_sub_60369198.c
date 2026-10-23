/* sub_60369198
 * address: 0x60369198   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60369198(int a1)
{
  float v2; // s18
  float v3; // s16
  float v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r5
  _DWORD **v7; // r4
  _DWORD *v8; // t1
  float32x2_t v10; // [sp+0h] [bp-60h] BYREF
  float v11; // [sp+8h] [bp-58h]
  float v12; // [sp+Ch] [bp-54h]
  float v13; // [sp+10h] [bp-50h]
  float v14; // [sp+14h] [bp-4Ch]
  float v15; // [sp+18h] [bp-48h]
  float v16; // [sp+1Ch] [bp-44h]
  float v17; // [sp+20h] [bp-40h]
  float v18; // [sp+24h] [bp-3Ch]
  float v19; // [sp+28h] [bp-38h]
  float v20; // [sp+2Ch] [bp-34h]

  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 112);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 == (*(int (**)(void))(dword_60C95D98 + 8))() )
    v4 = v4 + 1.5;
  v10.n64_u64[0] = 1065353216;
  v11 = 0.0;
  v13 = 0.0;
  v14 = 1.0;
  v15 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 1.0;
  v12 = v2 + 0.0;
  v16 = v4 + 8.0;
  v20 = v3 + 0.0;
  Mtx34_rotateZ(&v10, (unsigned int *)(a1 + 164));
  Mtx34_rotateX(&v10, (unsigned int *)(a1 + 156));
  Mtx34_rotateY(&v10, (unsigned int *)(a1 + 160));
  v12 = v12 + (float)((float)((float)(v10.n64_f32[0] * 0.0) - (float)(v10.n64_f32[1] * 8.0)) + (float)(v11 * 0.0));
  v16 = v16 + (float)((float)((float)(v13 * 0.0) - (float)(v14 * 8.0)) + (float)(v15 * 0.0));
  v20 = v20 + (float)((float)((float)(v17 * 0.0) - (float)(v18 * 8.0)) + (float)(v19 * 0.0));
  v8 = *(_DWORD **)(a1 + 6300);
  v7 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v10);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v7 + 68))(**v7, v7 + 60);
  return sub_60421880(*v7);
}

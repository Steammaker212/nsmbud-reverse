/* sub_602FFAD8
 * address: 0x602FFAD8   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FFAD8(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  float v4; // s18
  float v5; // s4
  float v6; // s6
  float v7; // s2
  float32x2_t v9; // [sp+0h] [bp-50h] BYREF
  float v10; // [sp+8h] [bp-48h]
  float v11; // [sp+Ch] [bp-44h]
  float v12; // [sp+10h] [bp-40h]
  float v13; // [sp+14h] [bp-3Ch]
  float v14; // [sp+18h] [bp-38h]
  float v15; // [sp+1Ch] [bp-34h]
  float v16; // [sp+20h] [bp-30h]
  float v17; // [sp+24h] [bp-2Ch]
  float v18; // [sp+28h] [bp-28h]
  float v19; // [sp+2Ch] [bp-24h]

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  v4 = 0.0;
  if ( v3 == (*(int (**)(void))(dword_60C92CA8 + 8))() )
  {
    if ( Actor__getProfileId((Actor *)a1) == 497 || Actor__getProfileId((Actor *)a1) == 498 )
      v4 = 32.0;
    else
      v4 = 8.0;
  }
  v9.n64_u64[0] = 1065353216;
  v10 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  v14 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 1.0;
  v5 = FIELD_F32(a1, 116);
  v6 = (float)(v4 * 0.0) + 0.0;
  v7 = FIELD_F32(a1, 112) + (float)(v4 + 0.0);
  v11 = FIELD_F32(a1, 108) + v6;
  v15 = v7;
  v19 = v5 + v6;
  Mtx34_rotateZ(&v9, (unsigned int *)(a1 + 164));
  v11 = v11 + (float)((float)((float)(v9.n64_f32[0] * 0.0) - (float)(v9.n64_f32[1] * v4)) + (float)(v10 * 0.0));
  v15 = v15 + (float)((float)((float)(v12 * 0.0) - (float)(v13 * v4)) + (float)(v14 * 0.0));
  v19 = v19 + (float)((float)((float)(v16 * 0.0) - (float)(v17 * v4)) + (float)(v18 * 0.0));
  Mtx34_rotateY(&v9, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v9, (unsigned int *)(a1 + 156));
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v9);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6300) + 68))(**(_DWORD **)(a1 + 6300), a1 + 8520);
  sub_60421880(FIELD_U32(a1, 6300));
  return sub_60300044(a1);
}

/* sub_60234B78
 * address: 0x60234B78   size: 592   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60234B78(int a1, int a2, int a3, int a4, float32x2_t *a5, int a6)
{
  float v10; // s4
  unsigned __int64 v11; // d17
  unsigned __int64 v12; // d17
  unsigned __int64 v13; // d17
  int v14; // r6
  float v15; // s18
  float v16; // s20
  float v17; // s16
  float32x2_t v19[6]; // [sp+10h] [bp-A0h] BYREF
  int v20; // [sp+40h] [bp-70h] BYREF
  unsigned int v21; // [sp+44h] [bp-6Ch] BYREF
  float32x2_t v22; // [sp+48h] [bp-68h] BYREF
  int v23; // [sp+54h] [bp-5Ch]
  float v24; // [sp+5Ch] [bp-54h]
  int v25; // [sp+64h] [bp-4Ch]
  float v26; // [sp+6Ch] [bp-44h]
  float x; // [sp+74h] [bp-3Ch]

  if ( a2 == 1 )
  {
    LODWORD(v10) = (sead__Random__getU32((void *)sead__GlobalRandom__sInstance) >> 9) | 0x3F800000;
    ((void (__fastcall *)(int, bool))loc_60234958)(a1, (float)(v10 + -1.0) < 0.2);
  }
  else
  {
    sub_60234DE0(a1);
  }
  v20 = sub_602338CC((int *)(a1 + 60), a2, a3, a4, a5, a6, FIELD_U32(a1, 40) != 4, FIELD_U32(a1, 40) == 0);
  v11 = FIELD_U64(a5 + (1) * 8, 0x0)[0];
  v19[0] = (float32x2_t)FIELD_U64(a5, 0x0)[0];
  v19[1].n64_u64[0] = v11;
  v12 = FIELD_U64(a5 + (3) * 8, 0x0)[0];
  v19[2] = a5[2];
  v19[3].n64_u64[0] = v12;
  v13 = FIELD_U64(a5 + (5) * 8, 0x0)[0];
  v19[4] = a5[4];
  v19[5].n64_u64[0] = v13;
  Mtx34_rotateY(v19, (unsigned int *)&v20);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 60))(**(_DWORD **)(a1 + 4), v19);
  if ( a2 != 1 )
  {
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 4));
    sub_604218E0(*(_DWORD **)(a1 + 4));
    sub_6042FCB0(dword_60C9C2D0, FIELD_U32(a1, 12));
  }
  sub_60421880(FIELD_U32(a1, 4));
  (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 4) + 108))(
    **(_DWORD **)(a1 + 4),
    FIELD_U32(a1, 16),
    &v22);
  v21 = -1073741824;
  Mtx34_rotateX(&v22, &v21);
  v21 = -1073741824;
  Mtx34_rotateZ(&v22, &v21);
  v14 = FIELD_U32(a1, 12);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v14 + 60))(v14, &v22);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)v14 + 68))(v14, &dword_60C8D968);
  sub_604373E4(v14);
  FIELD_U32(a1, 20) = v23;
  FIELD_U32(a1, 24) = v25;
  FIELD_F32(a1, 28) = x;
  v15 = v24 * *(float *)&dword_60C8D96C;
  v16 = v22.n64_f32[1] * *(float *)&dword_60C8D96C;
  v17 = v26 * *(float *)&dword_60C8D96C;
  FIELD_F32(a1, 32) = sqrtf(
                          (float)((float)((float)(v24 * *(float *)&dword_60C8D96C)
                                        * (float)(v24 * *(float *)&dword_60C8D96C))
                                + (float)((float)(v22.n64_f32[1] * *(float *)&dword_60C8D96C)
                                        * (float)(v22.n64_f32[1] * *(float *)&dword_60C8D96C)))
                        + (float)((float)(v26 * *(float *)&dword_60C8D96C) * (float)(v26 * *(float *)&dword_60C8D96C)))
                      * 200.0;
  FIELD_F32(a1, 20) = FIELD_F32(a1, 20) + (float)(v16 * 40.0);
  FIELD_F32(a1, 24) = FIELD_F32(a1, 24) + (float)(v15 * 40.0);
  FIELD_F32(a1, 28) = FIELD_F32(a1, 28) + (float)(v17 * 40.0);
  return 40.0;
}

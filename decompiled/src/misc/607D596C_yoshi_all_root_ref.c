/* yoshi_all_root_ref
 * address: 0x607D596C   size: 560   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall yoshi_all_root_ref(int a1)
{
  int v1; // r7
  float v2; // s0
  float v3; // s2
  int result; // r0
  float v5; // s0
  float v6; // s16
  float v7; // s18
  int v8; // r5
  float *v9; // r4
  float v10; // s6
  float *v11; // r10
  int v12; // r11
  int v13; // r9
  float32x2_t *v14; // r8
  int v15; // r12
  unsigned __int32 v16; // r3
  __int64 v17; // r4
  __int64 v18; // r6
  float v19; // r3
  __int64 v20; // r4
  __int64 v21; // r6
  float v22; // s2
  __int64 v23; // d17
  __int64 v24; // d17
  __int64 v25; // d17
  float32x2_t v26; // [sp+8h] [bp-A8h] BYREF
  __int64 v27; // [sp+10h] [bp-A0h]
  __int64 v28; // [sp+18h] [bp-98h]
  __int64 v29; // [sp+20h] [bp-90h]
  __int64 v30; // [sp+28h] [bp-88h]
  __int64 v31; // [sp+30h] [bp-80h]
  unsigned int v32; // [sp+3Ch] [bp-74h] BYREF
  _BYTE v33[24]; // [sp+44h] [bp-6Ch] BYREF
  int v34; // [sp+5Ch] [bp-54h] BYREF
  float v35; // [sp+60h] [bp-50h]

  v1 = a1;
  if ( FIELD_U32(a1, 324) == 1 )
  {
    v26.n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v26.n64_u32[1] = (unsigned __int32)"yoshi_all_root";
    sub_60793F04(a1, &v34);
    if ( FIELD_U8(v1, 340) )
    {
      v2 = v35;
      v3 = FIELD_F32(v1, 336);
    }
    else
    {
      FIELD_U8(v1, 340) = 1;
      v2 = v35;
      FIELD_F32(v1, 336) = v35;
      v3 = v2;
    }
    v5 = v3 - v2;
    v6 = -30.0;
    if ( v5 >= -30.0 )
    {
      v6 = v5;
      if ( v5 > 30.0 )
        v6 = 30.0;
    }
    v7 = 0.0;
    v8 = 0;
    v9 = (float *)v33;
    do
    {
      v10 = *(float *)(v1 + v8 + 408) - *(float *)(v1 + v8 + 360);
      v7 = v7
         + sqrtf(
             (float)((float)((float)(*(float *)(v1 + v8 + 424) - *(float *)(v1 + v8 + 376))
                           * (float)(*(float *)(v1 + v8 + 424) - *(float *)(v1 + v8 + 376)))
                   + (float)(v10 * v10))
           + (float)((float)(*(float *)(v1 + v8 + 440) - *(float *)(v1 + v8 + 392))
                   * (float)(*(float *)(v1 + v8 + 440) - *(float *)(v1 + v8 + 392))));
      v8 += 48;
      *v9++ = (float)(v6 * (float)((float)(v7 / 10.0) * (float)((float)(v7 / 10.0) * (float)(v7 / 10.0)))) / 1000.0;
    }
    while ( v8 != 288 );
    v11 = (float *)v33;
    v12 = 0;
    do
    {
      v13 = v1 + v12;
      v32 = sub_6000F7B8(
              *(float *)(v1 + v12 + 424) - *(float *)(v1 + v12 + 376),
              *(float *)(v1 + v12 + 440) - *(float *)(v1 + v12 + 392));
      v14 = (float32x2_t *)(v1 + v12 + 396);
      v15 = v1;
      v16 = *(_DWORD *)(v1 + v12 + 400);
      v17 = *(_QWORD *)(v1 + v12 + 404);
      v18 = *(_QWORD *)(v1 + v12 + 412);
      v26.n64_u32[0] = FIELD_U32(v13, 396);
      v26.n64_u32[1] = v16;
      v27 = v17;
      v28 = v18;
      v19 = FIELD_F32(v13, 424);
      v20 = FIELD_U64(v13, 428);
      v21 = FIELD_U64(v13, 436);
      LODWORD(v29) = FIELD_U32(v13, 420);
      *((float *)&v29 + 1) = v19;
      v30 = v20;
      v31 = v21;
      v1 = v15;
      v22 = *v11;
      *((float *)&v27 + 1) = *((float *)&v27 + 1) + 0.0;
      *((float *)&v29 + 1) = v22 + v19;
      *((float *)&v31 + 1) = *((float *)&v31 + 1) + 0.0;
      Mtx34_rotateY(&v26, &v32);
      v23 = v27;
      v12 += 48;
      ++v11;
      FIELD_U64(v14, 0x0)[0] = v26.n64_u64[0];
      FIELD_U64(v13, 404) = v23;
      v24 = v29;
      FIELD_U64(v13, 412) = v28;
      FIELD_U64(v13, 420) = v24;
      v25 = v31;
      result = v13 + 428;
      FIELD_U64(v13, 428) = v30;
      FIELD_U64(v13, 436) = v25;
    }
    while ( v12 != 288 );
  }
  else
  {
    FIELD_U8(a1, 340) = 0;
    return 0;
  }
  return result;
}

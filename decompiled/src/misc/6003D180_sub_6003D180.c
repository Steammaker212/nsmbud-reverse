/* sub_6003D180
 * address: 0x6003D180   size: 1580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6003D180(int a1)
{
  int v2; // r5
  _BYTE *v3; // r9
  int v4; // r10
  char v5; // r12
  int *v6; // r8
  int v7; // r0
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r6
  int v10; // r0
  float *v11; // r2
  float *v12; // r5
  float *v13; // r11
  float v14; // s2
  float *v15; // r6
  float *v16; // r5
  float v17; // s2
  float v18; // s0
  int *v19; // r1
  int v20; // r0
  bool v21; // zf
  int *v22; // r1
  int v23; // r0
  float *v24; // r0
  float *v25; // r1
  float *v26; // r2
  float *v27; // r3
  float v28; // s2
  float v29; // s0
  int v30; // r7
  float v31; // s22
  float v32; // s0
  _DWORD *v33; // r5
  int v34; // r0
  int v35; // r1
  int v36; // r0
  float v37; // s0
  ColliderBase *v38; // r4

  v2 = 0;
  FIELD_U32(a1, 11468) = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108)) ^ 1;
  ++FIELD_U32(a1, 11512);
  FIELD_U32(a1, 11484) = 0;
  FIELD_U8(a1, 11685) = 0;
  v3 = (_BYTE *)(a1 + 11685);
  FIELD_U32(a1, 11460) = 0;
  v4 = a1 + 11460;
  ((void (__fastcall *)(int))loc_600476D0)(a1);
  sub_600D17F4(a1);
  v6 = (int *)(a1 + 11468);
  v7 = FIELD_U32(a1, 6960);
  if ( v7 < 0 )
  {
    v15 = (float *)(a1 + 11176);
    v13 = (float *)(a1 + 11172);
  }
  else
  {
    if ( (unsigned int)v7 < 4 )
      v2 = FIELD_U32(a1, 6960);
    v8 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v2 + 32);
    if ( ((unsigned int)&dword_60C7B364 & ~(1610863148 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v9 = (int)(v8 + 27);
    v10 = (**v8)(v8, &StageActor_RTTI);
    v11 = (float *)(a1 + 11292);
    v12 = (float *)(a1 + 11288);
    if ( !*v6 )
    {
      v11 = (float *)(a1 + 11184);
      v12 = (float *)(a1 + 11180);
    }
    if ( !v10 )
      v9 = 108;
    v13 = (float *)(a1 + 11172);
    v14 = FIELD_F32(a1, 11584) - *v11;
    FIELD_F32(a1, 11168) = *(float *)v9 - *v12;
    FIELD_F32(a1, 11172) = v14;
    FIELD_U32(a1, 11176) = 0;
    v15 = (float *)(a1 + 11176);
  }
  v16 = (float *)(a1 + 11168);
  sub_6004798C(a1, a1 + 11168);
  sub_60047D84(a1, (float *)(a1 + 11168));
  v17 = (float)((float)((float)(FIELD_F32(a1, 11168) * 0.0) - *v13) + (float)(*v15 * 0.0))
      / sqrtf((float)((float)(*v13 * *v13) + (float)(*v16 * *v16)) + (float)(*v15 * *v15));
  v18 = 1.0;
  if ( v17 <= 1.0 )
  {
    v18 = v17;
    if ( v17 < -1.0 )
      v18 = -1.0;
  }
  if ( (float)(acosf(v18) * 57.296) < 25.0 )
  {
    if ( *(_DWORD *)v4 )
    {
      *(_BYTE *)(*(_DWORD *)v4 + 6796) = 0;
      *v3 = 0;
    }
    v19 = dword_6003D7CC;
    if ( !*v6 )
      v19 = &dword_6003D7CC[1];
    *v6 ^= 1u;
    *(_DWORD *)v16 = *v19;
    *v13 = -0.86603;
    *v15 = 0.0;
    sub_6004798C(a1, a1 + 11168);
    sub_60047D84(a1, (float *)(a1 + 11168));
    v20 = *v6;
    if ( *v6 )
    {
      if ( v20 != 1 || *v16 >= 0.0 )
        goto LABEL_31;
    }
    else if ( *v16 <= 0.0 )
    {
      goto LABEL_31;
    }
    if ( *(_DWORD *)v4 )
    {
      *(_BYTE *)(*(_DWORD *)v4 + 6796) = 0;
      *v3 = 0;
      v20 = *v6;
    }
    v21 = v20 == 0;
    v22 = dword_6003D7CC;
    v23 = v20 ^ 1;
    if ( v21 )
      v22 = &dword_6003D7CC[1];
    *v6 = v23;
    *(_DWORD *)v16 = *v22;
    *v13 = -0.86603;
    *v15 = 0.0;
    sub_6004798C(a1, a1 + 11168);
    sub_60047D84(a1, (float *)(a1 + 11168));
  }
LABEL_31:
  if ( *v6 )
  {
    v24 = (float *)(a1 + 11336);
    v25 = (float *)(a1 + 11300);
    v26 = (float *)(a1 + 11340);
    v27 = (float *)(a1 + 11304);
    v28 = FIELD_F32(a1, 11344);
    v29 = FIELD_F32(a1, 11308);
    v30 = 11348;
  }
  else
  {
    v29 = FIELD_F32(a1, 11200);
    v24 = (float *)(a1 + 11228);
    v25 = (float *)(a1 + 11192);
    v26 = (float *)(a1 + 11232);
    v27 = (float *)(a1 + 11196);
    v28 = FIELD_F32(a1, 11236);
    v30 = 11240;
  }
  v31 = *(float *)(a1 + v30 + 4) - *v26;
  v32 = sqrtf(
          (float)((float)((float)(*v26 - *v27) * (float)(*v26 - *v27))
                + (float)((float)(*v24 - *v25) * (float)(*v24 - *v25)))
        + (float)((float)(v28 - v29) * (float)(v28 - v29)))
      + sqrtf(
          (float)((float)(v31 * v31)
                + (float)((float)(*(float *)(a1 + v30) - *v24) * (float)(*(float *)(a1 + v30) - *v24)))
        + (float)((float)(*(float *)(a1 + v30 + 8) - v28) * (float)(*(float *)(a1 + v30 + 8) - v28)));
  FIELD_F32(a1, 11620) = v32;
  FIELD_U32(a1, 11628) = 1065353216;
  if ( v32 != 0.0 )
    FIELD_F32(a1, 11632) = FIELD_F32(a1, 11624) / v32;
  v33 = (_DWORD *)(a1 + 11456);
  v34 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 11456) + 716))(FIELD_U32(a1, 11456));
  v35 = 25;
  if ( !v34 )
  {
    v36 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v33 + 720))(*v33);
    v35 = 20;
    if ( v36 )
      v35 = 25;
  }
  FIELD_U32(a1, 11536) = v35;
  v37 = fabsf(FIELD_F32(a1, 11632) - FIELD_F32(a1, 11628)) / (float)v35;
  FIELD_F32(a1, 11640) = v37;
  FIELD_F32(a1, 11636) = v37;
  FIELD_U32(a1, 11616) = 0;
  FIELD_U8(a1, 11682) = 0;
  FIELD_U8(a1, 11679) = 0;
  FIELD_U8(a1, 11681) = 0;
  FIELD_U8(a1, 11684) = 0;
  FIELD_U8(a1, 11688) = 0;
  FIELD_U8(a1, 11686) = 0;
  FIELD_U32(a1, 11612) = 0;
  if ( *v6 )
  {
    sub_60045DB4(a1, 21, 0, 1, 0.0, 0.0);
    v38 = (ColliderBase *)(a1 + 8856);
    if ( !sub_601536B0(ColliderMgr_instance, v38) )
      goto LABEL_43;
  }
  else
  {
    sub_60045DB4(a1, 15, 0, 1, 0.0, 0.0);
    v38 = (ColliderBase *)(a1 + 8336);
    if ( !sub_601536B0(ColliderMgr_instance, v38) )
    {
LABEL_43:
      sub_60160948(v38);
      ColliderMgr_add(ColliderMgr_instance, v38);
    }
  }
  return (*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)*v33 + 192))(*v33, &unk_60C7FEBC);
}

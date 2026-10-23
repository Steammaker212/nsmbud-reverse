/* IceActor_setScale
 * address: 0x602EE238   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall IceActor_setScale(int a1, float *a2)
{
  float *v4; // r8
  float *v5; // r0
  float v6; // s2
  float v7; // s0
  float v8; // s0
  float v9; // s18
  float v10; // s0
  float v11; // s20
  int v12; // r0
  float v13; // s22
  float v14; // s24
  int v15; // r2
  float v16; // s0
  float v17; // s2
  float v18; // s6
  float v19; // s4
  int v20; // r0
  int v21; // r2
  StateBase *CurrentState; // r0
  int v23; // r5
  float v25[2]; // [sp+0h] [bp-58h] BYREF
  float v26; // [sp+8h] [bp-50h] BYREF
  float v27; // [sp+Ch] [bp-4Ch]
  int v28; // [sp+10h] [bp-48h]
  int v29; // [sp+14h] [bp-44h] BYREF

  IceActor_setScale_helper_2F2A44(a1 + 7348);
  v4 = (float *)(a1 + 7404);
  v5 = (float *)((char *)&unk_60AFEDFC + 12 * FIELD_U8(a1, 7533));
  v6 = *a2 * *v5;
  FIELD_F32(a1, 7400) = v6;
  v7 = a2[1] * v5[1];
  FIELD_F32(a1, 7404) = v7;
  v8 = v7 * 0.5;
  FIELD_F32(a1, 0x1CF0) = a2[2] * v5[2];
  FIELD_F32(a1, 7412) = (float)(v6 * 0.5) + 2.0;
  FIELD_F32(a1, 7416) = v8 + 2.0;
  if ( FIELD_U8(a1, 7534) != 8 )
  {
    FIELD_U32(a1, 572) = 0;
    FIELD_F32(a1, 576) = v8;
    FIELD_U32(a1, 580) = 0;
  }
  IceActor_setScale_helper(a1);
  IceActor_setScale_helper_2F47C0(a1 + 7444);
  IceActor_setScale_helper_2EE580(a1);
  ((void (__fastcall *)(int, _DWORD, float *))loc_602F2F3C)(a1 + 6784, FIELD_U8(a1, 7533), a2);
  v9 = FIELD_F32(a1, 112);
  v10 = *v4;
  v11 = FIELD_F32(a1, 108);
  v12 = FIELD_U32(a1, 116);
  v13 = FIELD_F32(a1, 572);
  v14 = FIELD_F32(a1, 576);
  v26 = v11;
  v27 = v9 + (float)(v10 * 0.7);
  v28 = v12;
  ((void (__fastcall *)(float *, _DWORD, float *, _DWORD))checkLiquidCollisions)(
    v25,
    0,
    &v26,
    FIELD_U8(a1, 86));
  if ( LODWORD(v25[0]) != 1 )
    v15 = 0;
  v26 = v11 + v13;
  v27 = v9 + v14;
  if ( LODWORD(v25[0]) == 1 )
    v15 = 1;
  sub_602F322C(a1 + 6784, &v26, v15, 0);
  v16 = FIELD_F32(a1, 108);
  v17 = FIELD_F32(a1, 112);
  v18 = v17 + FIELD_F32(a1, 576);
  v25[0] = v16 + FIELD_F32(a1, 572);
  v25[1] = v18;
  v19 = *v4;
  v20 = FIELD_U32(a1, 116);
  v26 = v16;
  v27 = v17 + (float)(v19 * 0.7);
  v28 = v20;
  ((void (__fastcall *)(int *, _DWORD, float *, _DWORD, _DWORD, _DWORD))checkLiquidCollisions)(
    &v29,
    0,
    &v26,
    FIELD_U8(a1, 86),
    LODWORD(v25[0]),
    LODWORD(v18));
  v21 = v29;
  if ( v29 != 1 )
    v21 = 0;
  sub_602F31A0(a1 + 6784, v25, v21);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v23 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v23 == (*(int (**)(void))(dword_60C92404 + 8))() )
    sub_602EDD20(a1, (float *)(a1 + 7384), (unsigned int *)(a1 + 7396));
  else
    FIELD_U32(a1, 7396) = FIELD_U32(a1, 164);
  return sub_602EDE70(a1);
}

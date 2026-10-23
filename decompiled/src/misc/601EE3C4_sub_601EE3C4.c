/* sub_601EE3C4
 * address: 0x601EE3C4   size: 1412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EE3C4(int a1)
{
  float v2; // r0
  int v3; // r0
  StateMethodExecuter *result; // r0
  _DWORD *v5; // r6
  int v6; // r5
  int v7; // r1
  int i; // r2
  int v9; // r6
  int v10; // r7
  int v11; // r0
  bool v12; // zf
  int v13; // r8
  int v14; // r0
  int v15; // r9
  int v16; // r0
  int v17; // r0
  Vec3 *v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  int v21; // r2
  _DWORD *v22; // r0
  float *v23; // r0
  float v24; // r1
  float v25; // r2
  float v26; // r0
  unsigned int v27; // r3
  int v28; // r3
  float v29; // s4
  float v30; // s2
  _DWORD *v31; // r6
  char *v32; // r0
  int j; // r1
  float v34; // r0
  int v35; // [sp+Ch] [bp-4Ch]
  int v36; // [sp+10h] [bp-48h]
  int v37; // [sp+14h] [bp-44h]
  int v38; // [sp+18h] [bp-40h]
  _DWORD v39[3]; // [sp+1Ch] [bp-3Ch] BYREF
  Vec3 speed[4]; // [sp+28h] [bp-30h] BYREF

  if ( FIELD_S32(a1, 360) < 0 )
    FIELD_U32(a1, 360) = sub_601E4EA4(dword_60C8B13C, 121, 0, a1 + 80, 1);
  if ( FIELD_U32(a1, 428) == 7 )
  {
    if ( sub_601860F8(a1) == 1 )
    {
      v2 = FIELD_F32(a1, 84);
      speed[0].z = FIELD_F32(a1, 88);
      speed[0].y = v2;
      speed[0].x = FIELD_F32(a1, 80);
      v39[0] = 1065353216;
      v39[1] = 1065353216;
      v39[2] = 1065353216;
      EffectData_create(889, speed, 0, (int)v39);
      FIELD_U32(a1, 428) = 2;
      sub_601E4C88((_DWORD *)dword_60C8B13C, 208, (_DWORD *)(a1 + 80));
      sub_601ECD14(a1, 2);
    }
  }
  else
  {
    v3 = FIELD_U32(a1, 180);
    if ( v3 != FIELD_U32(a1, 412) )
    {
      speed[0].x = 2.5244e-29;
      moveValueTo((int *)(a1 + 180), (int *)(a1 + 412), (int *)speed);
      v3 = FIELD_U32(a1, 180);
    }
    FIELD_U32(a1, 192) = v3;
    FIELD_U32(a1, 200) = 1091567616;
    ((void (__fastcall *)(int))loc_60168DF8)(a1);
    sub_60169030(a1, (float *)(a1 + 316), (float *)(a1 + 328), FIELD_U32(a1, 424));
  }
  result = (StateMethodExecuter *)sub_601687F4((float *)a1, (float *)(a1 + 316), (float *)(a1 + 328));
  if ( result != (StateMethodExecuter *)1 )
    return result;
  sub_6019EC34((_DWORD *)(a1 + 388), (_DWORD *)(a1 + 400));
  FIELD_U32(a1, 316) = FIELD_U32(a1, 328);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 332);
  FIELD_U32(a1, 324) = FIELD_U32(a1, 336);
  v5 = (_DWORD *)sub_601E0010(a1 + 388);
  LODWORD(speed[0].x) = &sead__SafeStringBase__vtable;
  LODWORD(speed[0].y) = "W101";
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  (*(void (__fastcall **)(_DWORD *))(*v5 + 12))(v5);
  v6 = v5[1];
  (*(void (__fastcall **)(Vec3 *))(LODWORD(speed[0].x) + 12))(speed);
  if ( v6 == LODWORD(speed[0].y) )
    return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B380);
  v7 = v5[1];
  for ( i = 1; *(unsigned __int8 *)(v7 + i - 1) == *(unsigned __int8 *)(LODWORD(speed[0].y) + i - 1); i += 2 )
  {
    if ( !*(_BYTE *)(v7 + i - 1) )
      return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B380);
    if ( i >= 524289 || *(unsigned __int8 *)(v7 + i) != *(unsigned __int8 *)(LODWORD(speed[0].y) + i) )
      break;
    if ( !*(_BYTE *)(v7 + i) )
      return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B380);
  }
  v38 = a1 + 400;
  v9 = 0;
  v10 = sub_601DFFE4(a1 + 388);
  LOBYTE(speed[0].x) = 0;
  v12 = sub_60178694(v10, 0) == 0;
  v11 = 0;
  if ( !v12 )
  {
    v11 = 1;
    LOBYTE(speed[0].x) = 1;
  }
  v37 = v11;
  BYTE1(speed[0].x) = 0;
  v12 = sub_60178694(v10, 1u) == 0;
  if ( !v12 )
    BYTE1(speed[0].x) = 1;
  v13 = 0;
  if ( !v12 )
    v9 = 1;
  BYTE2(speed[0].x) = 0;
  v12 = sub_60178694(v10, 2u) == 0;
  v14 = 0;
  if ( !v12 )
  {
    v14 = 1;
    BYTE2(speed[0].x) = 1;
  }
  v36 = v14;
  HIBYTE(speed[0].x) = 0;
  v15 = 0;
  if ( sub_60178694(v10, 3u) )
  {
    v13 = 1;
    HIBYTE(speed[0].x) = 1;
  }
  LOBYTE(speed[0].y) = 0;
  v12 = sub_60178694(v10, 4u) == 0;
  v16 = 0;
  if ( !v12 )
  {
    v16 = 1;
    LOBYTE(speed[0].y) = 1;
  }
  v35 = v16;
  BYTE1(speed[0].y) = 0;
  v17 = sub_60178694(v10, 5u);
  v18 = speed;
  if ( v17 )
  {
    v15 = 1;
    BYTE1(speed[0].y) = 1;
  }
  v19 = FIELD_U32(a1, 424);
  if ( v19 < 6 )
    v18 = (Vec3 *)((char *)speed + v19);
  if ( LOBYTE(FIELD_F32(v18, 0x0)) )
  {
    v20 = FIELD_U32(a1, 424);
    goto LABEL_51;
  }
  if ( v19 == 1 )
    goto LABEL_39;
  v21 = 0;
  if ( v37 )
    goto LABEL_50;
  if ( v19 )
  {
LABEL_39:
    v21 = 1;
    if ( v9 )
      goto LABEL_50;
    if ( v19 == 3 )
      goto LABEL_45;
  }
  v21 = 2;
  if ( v36 )
    goto LABEL_50;
  if ( v19 != 2 )
  {
LABEL_45:
    v21 = 3;
    if ( v13 )
      goto LABEL_50;
    if ( v19 == 5 )
      goto LABEL_49;
  }
  v21 = 4;
  if ( !v35 )
  {
    v20 = 4;
    if ( v19 == 4 )
      goto LABEL_51;
LABEL_49:
    v21 = 5;
    v20 = FIELD_U32(a1, 424);
    if ( !v15 )
      goto LABEL_51;
  }
LABEL_50:
  v20 = v21;
  FIELD_U32(a1, 424) = v21;
LABEL_51:
  v22 = (_DWORD *)sub_60178694(v10, v20);
  FIELD_U32(a1, 400) = v22[21];
  FIELD_U32(a1, 404) = v22[22];
  FIELD_U32(a1, 408) = v22[24];
  v23 = (float *)sub_601E0040(v38);
  v24 = *v23;
  FIELD_F32(a1, 328) = *v23;
  v25 = v23[1];
  FIELD_F32(a1, 332) = v25;
  v26 = v23[2];
  FIELD_F32(a1, 336) = v26;
  v27 = FIELD_U32(a1, 424);
  if ( v27 >= 6 )
    v27 = 0;
  v28 = *(_DWORD *)(v10 + 4 * v27 + 48);
  FIELD_U32(a1, 428) = v28;
  if ( v28 == 7 )
  {
    v29 = FIELD_F32(a1, 88);
    v30 = v25 - FIELD_F32(a1, 84);
    speed[0].x = v24 - FIELD_F32(a1, 80);
    speed[0].y = v30;
    speed[0].z = v26 - v29;
    ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
      a1,
      a1 + 328,
      0,
      20,
      15.0,
      2.3,
      2.3,
      20,
      speed);
    return (StateMethodExecuter *)sub_601ECD14(a1, 3);
  }
  else
  {
    v31 = (_DWORD *)sub_601E0010(v38);
    (*(void (__fastcall **)(_DWORD *))(*v31 + 12))(v31);
    (*(void (__fastcall **)(_DWORD *))(*v31 + 12))(v31);
    v32 = (char *)v31[1];
    if ( v32 == "W101" )
    {
LABEL_61:
      v34 = FIELD_F32(a1, 328);
      FIELD_F32(a1, 340) = v34;
      FIELD_U32(a1, 344) = FIELD_U32(a1, 332);
      FIELD_U32(a1, 348) = FIELD_U32(a1, 336);
      FIELD_F32(a1, 328) = v34 + 80.0;
    }
    else
    {
      for ( j = 0; j < 524289; ++j )
      {
        if ( v32[j] != aW101[j] )
          break;
        if ( !v32[j] )
          goto LABEL_61;
      }
    }
    result = (StateMethodExecuter *)sub_608332B0(a1 + 80, a1 + 328);
    FIELD_U32(a1, 412) = result;
  }
  return result;
}

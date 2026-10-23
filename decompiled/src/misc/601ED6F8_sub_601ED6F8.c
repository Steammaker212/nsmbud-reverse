/* sub_601ED6F8
 * address: 0x601ED6F8   size: 1952   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601ED6F8(int a1)
{
  float v2; // r0
  int v3; // r0
  StateMethodExecuter *result; // r0
  int v5; // r7
  int v6; // r0
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // r7
  int v10; // r9
  int v11; // r1
  int i; // r2
  int v13; // r7
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  float *v16; // r0
  float v17; // r1
  float v18; // r2
  float v19; // r0
  unsigned int v20; // r3
  int v21; // r3
  float v22; // s4
  float v23; // s2
  _DWORD *v24; // r0
  int v25; // r5
  int v26; // r7
  int v27; // r9
  int v28; // r11
  bool v29; // zf
  int v30; // r0
  int v31; // r6
  int v32; // r0
  int v33; // r0
  Vec3 *v34; // r1
  unsigned int v35; // r0
  unsigned int v36; // r1
  int v37; // r2
  _DWORD *v38; // r0
  float *v39; // r0
  float v40; // r1
  float v41; // r2
  float v42; // r0
  unsigned int v43; // r3
  int v44; // r3
  float v45; // s4
  float v46; // s2
  _DWORD *v47; // r6
  char *v48; // r0
  int j; // r2
  float v50; // r0
  int v51; // [sp+8h] [bp-48h]
  int v52; // [sp+Ch] [bp-44h]
  int v53; // [sp+10h] [bp-40h]
  int v54; // [sp+10h] [bp-40h]
  _DWORD v55[3]; // [sp+14h] [bp-3Ch] BYREF
  Vec3 speed[4]; // [sp+20h] [bp-30h] BYREF

  if ( FIELD_S32(a1, 360) < 0 )
    FIELD_U32(a1, 360) = sub_601E4EA4(dword_60C8B13C, 121, 0, a1 + 80, 1);
  if ( FIELD_U32(a1, 428) == 7 )
  {
    if ( sub_601860F8(a1) == 1 )
    {
      speed[0].x = FIELD_F32(a1, 80);
      v2 = FIELD_F32(a1, 84);
      speed[0].z = FIELD_F32(a1, 88);
      speed[0].y = v2;
      v55[0] = 1065353216;
      v55[1] = 1065353216;
      v55[2] = 1065353216;
      EffectData_create(889, speed, 0, (int)v55);
      sub_601E4C88((_DWORD *)dword_60C8B13C, 208, (_DWORD *)(a1 + 80));
      FIELD_U32(a1, 428) = 2;
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
  v5 = a1 + 388;
  sub_6019EC34((_DWORD *)(a1 + 388), (_DWORD *)(a1 + 400));
  FIELD_U32(a1, 316) = FIELD_U32(a1, 328);
  FIELD_U32(a1, 320) = FIELD_U32(a1, 332);
  FIELD_U32(a1, 324) = FIELD_U32(a1, 336);
  if ( sub_601DAE4C(a1 + 388, 8) )
  {
    v53 = a1 + 328;
    while ( 1 )
    {
      v6 = sub_601DFFE4(v5);
      v7 = (_DWORD *)sub_60178694(v6, FIELD_U32(a1, 424));
      FIELD_U32(a1, 400) = v7[21];
      FIELD_U32(a1, 404) = v7[22];
      FIELD_U32(a1, 408) = v7[24];
      v8 = sub_601E0010(a1 + 400);
      LODWORD(speed[0].x) = &sead__SafeStringBase__vtable;
      v9 = (_DWORD *)v8;
      LODWORD(speed[0].y) = "W201";
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
      v10 = v9[1];
      (*(void (__fastcall **)(Vec3 *))(LODWORD(speed[0].x) + 12))(speed);
      if ( v10 == LODWORD(speed[0].y) )
        break;
      v11 = v9[1];
      for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(LODWORD(speed[0].y) + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v11 + i - 1) )
          goto LABEL_21;
        if ( i >= 524289 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(LODWORD(speed[0].y) + i) )
          break;
        if ( !*(_BYTE *)(v11 + i) )
          goto LABEL_21;
      }
      v5 = a1 + 400;
    }
LABEL_21:
    FIELD_U32(a1, 424) = 2;
    v13 = sub_601DFFE4(a1 + 400);
    v14 = (_DWORD *)sub_60178694(v13, FIELD_U32(a1, 424));
    FIELD_U32(a1, 400) = v14[21];
    FIELD_U32(a1, 404) = v14[22];
    for ( FIELD_U32(a1, 408) = v14[24]; !sub_601DAE4C(a1 + 400, 16); FIELD_U32(a1, 408) = v15[24] )
    {
      sub_601DFFE4(a1 + 400);
      v13 = sub_601DFFE4(a1 + 400);
      v15 = (_DWORD *)sub_60178694(v13, FIELD_U32(a1, 424));
      FIELD_U32(a1, 400) = v15[21];
      FIELD_U32(a1, 404) = v15[22];
    }
    v16 = (float *)sub_601E0040(a1 + 400);
    v17 = *v16;
    FIELD_F32(a1, 328) = *v16;
    v18 = v16[1];
    FIELD_F32(a1, 332) = v18;
    v19 = v16[2];
    FIELD_F32(a1, 336) = v19;
    v20 = FIELD_U32(a1, 424);
    if ( v20 >= 6 )
      v20 = 0;
    v21 = *(_DWORD *)(v13 + 4 * v20 + 48);
    FIELD_U32(a1, 428) = v21;
    if ( v21 == 7 )
    {
      v22 = FIELD_F32(a1, 88);
      v23 = v18 - FIELD_F32(a1, 84);
      speed[0].x = v17 - FIELD_F32(a1, 80);
      speed[0].y = v23;
      speed[0].z = v19 - v22;
      ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
        a1,
        v53,
        0,
        20,
        15.0,
        2.3,
        2.3,
        20,
        speed);
      sub_601ECD14(a1, 3);
    }
    FIELD_U32(a1, 412) = sub_608332B0(a1 + 80, v53);
    speed[0].x = 2.5244e-29;
    moveValueTo((int *)(a1 + 180), (int *)(a1 + 412), (int *)speed);
    FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
    v24 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
    sub_601B5110(v24, 2, 0, 0);
    return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
  if ( (FIELD_U8(a1, 216) & 8) != 0 )
  {
    EffectData_init((EffectData *)(a1 + 432));
    return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&dword_60C8B2F0);
  }
  v54 = a1 + 328;
  v25 = 0;
  v26 = sub_601DFFE4(a1 + 388);
  LOBYTE(speed[0].x) = 0;
  v27 = 0;
  if ( sub_60178694(v26, 0) )
  {
    v27 = 1;
    LOBYTE(speed[0].x) = 1;
  }
  BYTE1(speed[0].x) = 0;
  v28 = 0;
  if ( sub_60178694(v26, 1u) )
  {
    BYTE1(speed[0].x) = 1;
    v25 = 1;
  }
  BYTE2(speed[0].x) = 0;
  v29 = sub_60178694(v26, 2u) == 0;
  v30 = 0;
  if ( !v29 )
  {
    v30 = 1;
    BYTE2(speed[0].x) = 1;
  }
  v52 = v30;
  HIBYTE(speed[0].x) = 0;
  v31 = 0;
  if ( sub_60178694(v26, 3u) )
  {
    v28 = 1;
    HIBYTE(speed[0].x) = 1;
  }
  LOBYTE(speed[0].y) = 0;
  v29 = sub_60178694(v26, 4u) == 0;
  v32 = 0;
  if ( !v29 )
  {
    v32 = 1;
    LOBYTE(speed[0].y) = 1;
  }
  v51 = v32;
  BYTE1(speed[0].y) = 0;
  v33 = sub_60178694(v26, 5u);
  if ( v33 )
    v31 = 1;
  v34 = speed;
  if ( v33 )
    BYTE1(speed[0].y) = v31;
  v35 = FIELD_U32(a1, 424);
  if ( v35 < 6 )
    v34 = (Vec3 *)((char *)speed + v35);
  if ( LOBYTE(FIELD_F32(v34, 0x0)) )
  {
    v36 = FIELD_U32(a1, 424);
    goto LABEL_62;
  }
  if ( v35 == 1 )
    goto LABEL_50;
  v37 = 0;
  if ( v27 )
    goto LABEL_61;
  if ( v35 )
  {
LABEL_50:
    v37 = 1;
    if ( v25 )
      goto LABEL_61;
    if ( v35 == 3 )
      goto LABEL_56;
  }
  v37 = 2;
  if ( v52 )
    goto LABEL_61;
  if ( v35 != 2 )
  {
LABEL_56:
    v37 = 3;
    if ( v28 )
      goto LABEL_61;
    if ( v35 == 5 )
      goto LABEL_60;
  }
  v37 = 4;
  if ( !v51 )
  {
    v36 = 4;
    if ( v35 == 4 )
      goto LABEL_62;
LABEL_60:
    v37 = 5;
    v36 = FIELD_U32(a1, 424);
    if ( !v31 )
      goto LABEL_62;
  }
LABEL_61:
  v36 = v37;
  FIELD_U32(a1, 424) = v37;
LABEL_62:
  v38 = (_DWORD *)sub_60178694(v26, v36);
  FIELD_U32(a1, 400) = v38[21];
  FIELD_U32(a1, 404) = v38[22];
  FIELD_U32(a1, 408) = v38[24];
  v39 = (float *)sub_601E0040(a1 + 400);
  v40 = *v39;
  FIELD_F32(a1, 328) = *v39;
  v41 = v39[1];
  FIELD_F32(a1, 332) = v41;
  v42 = v39[2];
  FIELD_F32(a1, 336) = v42;
  v43 = FIELD_U32(a1, 424);
  if ( v43 >= 6 )
    v43 = 0;
  v44 = *(_DWORD *)(v26 + 4 * v43 + 48);
  FIELD_U32(a1, 428) = v44;
  if ( v44 == 7 )
  {
    v45 = FIELD_F32(a1, 88);
    v46 = v41 - FIELD_F32(a1, 84);
    speed[0].x = v40 - FIELD_F32(a1, 80);
    speed[0].y = v46;
    speed[0].z = v42 - v45;
    ((void (__fastcall *)(int, int, _DWORD, int, float, float, float, int, Vec3 *))loc_60185F9C)(
      a1,
      v54,
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
    v47 = (_DWORD *)sub_601E0010(a1 + 400);
    (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
    (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
    v48 = (char *)v47[1];
    if ( v48 == "W101" )
    {
LABEL_72:
      v50 = FIELD_F32(a1, 328);
      FIELD_F32(a1, 340) = v50;
      FIELD_U32(a1, 344) = FIELD_U32(a1, 332);
      FIELD_U32(a1, 348) = FIELD_U32(a1, 336);
      FIELD_F32(a1, 328) = v50 + 80.0;
    }
    else
    {
      for ( j = 0; j < 524289; ++j )
      {
        if ( v48[j] != aW101[j] )
          break;
        if ( !v48[j] )
          goto LABEL_72;
      }
    }
    result = (StateMethodExecuter *)sub_608332B0(a1 + 80, v54);
    FIELD_U32(a1, 412) = result;
  }
  return result;
}

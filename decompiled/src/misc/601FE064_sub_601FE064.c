/* sub_601FE064
 * address: 0x601FE064   size: 2212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FE064(int a1)
{
  int v2; // r9
  int v3; // r7
  _DWORD *v4; // r1
  _DWORD *v5; // r1
  _DWORD *v6; // r1
  _DWORD *v7; // r1
  _DWORD *v8; // r1
  char v9; // r12
  int *v10; // r1
  int v11; // r6
  int *v12; // r1
  int v13; // r6
  int v14; // r1
  char v15; // r12
  int *v16; // r1
  int v17; // r5
  char v18; // r12
  int *v19; // r1
  int v20; // r6
  int v21; // r5
  int *v22; // r1
  int v23; // r6
  int v24; // r1
  int v25; // r5
  int v26; // r6
  char v27; // r12
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1
  int v36; // r8
  int (__fastcall ***v37)(_DWORD, int *); // r7
  char v38; // r12
  int v39; // r6
  int (__fastcall ***v40)(_DWORD, int *); // r4
  char v41; // r12
  int v42; // r6
  int v43; // r0
  int result; // r0
  int (**v45)(); // [sp+8h] [bp-28h] BYREF
  const char *v46; // [sp+Ch] [bp-24h]

  v2 = 0;
  FIELD_U8(dword_60C9CFB8, 20) = 1;
  sub_6045BF58(a1 + 1172, 0);
  sub_6045BF58(a1 + 1576, 1);
  sub_6045BF58(a1 + 1980, 2);
  sub_6045BF58(a1 + 2384, 3);
  sub_6045BF58(a1 + 2788, 4);
  v3 = dword_60CD0B40;
  v45 = &sead__SafeStringBase__vtable;
  v46 = "CourseSelect";
  FIELD_U32(a1, 284) = a1;
  FIELD_U32(a1, 288) = sub_601FEA2C;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 280) = off_60BD8444;
  sead__SafeStringBase__operator_assign(a1 + 260, (int)&v45);
  FIELD_U32(a1, 268) = 2;
  sub_609553AC(**(_DWORD **)(v3 + 36), a1 + 244);
  v45 = &sead__SafeStringBase__vtable;
  v46 = "3D";
  FIELD_U32(a1, 420) = a1;
  FIELD_U32(a1, 424) = sub_601FEC64;
  FIELD_U32(a1, 428) = 0;
  FIELD_U32(a1, 416) = off_60BD846C;
  sead__SafeStringBase__operator_assign(a1 + 396, (int)&v45);
  FIELD_U32(a1, 404) = 1;
  v4 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 7u )
    v4 += 7;
  sub_609553AC(*v4, a1 + 380);
  v45 = &sead__SafeStringBase__vtable;
  v46 = "2D";
  FIELD_U32(a1, 352) = a1;
  FIELD_U32(a1, 356) = sub_601FEC8C;
  FIELD_U32(a1, 360) = 0;
  FIELD_U32(a1, 348) = off_60BD846C;
  sead__SafeStringBase__operator_assign(a1 + 328, (int)&v45);
  FIELD_U32(a1, 336) = 1;
  v5 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v5 += 8;
  sub_609553AC(*v5, a1 + 312);
  v45 = &sead__SafeStringBase__vtable;
  v46 = "3D_World";
  FIELD_U32(a1, 488) = a1;
  FIELD_U32(a1, 492) = sub_601FEDB4;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 484) = off_60BD846C;
  sead__SafeStringBase__operator_assign(a1 + 464, (int)&v45);
  FIELD_U32(a1, 472) = 1;
  v6 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 9u )
    v6 += 9;
  sub_609553AC(*v6, a1 + 448);
  v45 = &sead__SafeStringBase__vtable;
  v46 = "2D_Menu";
  FIELD_U32(a1, 556) = a1;
  FIELD_U32(a1, 560) = sub_601FEDE8;
  FIELD_U32(a1, 564) = 0;
  FIELD_U32(a1, 552) = off_60BD846C;
  sead__SafeStringBase__operator_assign(a1 + 532, (int)&v45);
  FIELD_U32(a1, 540) = 1;
  v7 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 0xAu )
    v7 += 10;
  sub_609553AC(*v7, a1 + 516);
  v45 = &sead__SafeStringBase__vtable;
  v46 = "2D_Pre3D";
  FIELD_U32(a1, 624) = a1;
  FIELD_U32(a1, 628) = sub_601FEE08;
  FIELD_U32(a1, 632) = 0;
  FIELD_U32(a1, 620) = off_60BD846C;
  sead__SafeStringBase__operator_assign(a1 + 600, (int)&v45);
  FIELD_U32(a1, 608) = 1;
  v8 = *(_DWORD **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v8 += 6;
  sub_609553AC(*v8, a1 + 584);
  v10 = *(int **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 5u )
    v10 += 5;
  v11 = *v10;
  if ( ((unsigned int)&dword_60C8C214 & ~(1612702488 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C214) )
  {
    dword_60C8C210 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C214);
  }
  if ( v11 )
  {
    v2 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v11 + 8))(v11, &dword_60C8C210);
    if ( v2 )
      v2 = v11;
  }
  v12 = *(int **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 7u )
    v12 += 7;
  v13 = *v12;
  if ( ((unsigned int)&dword_60C81740 & ~(1612702628 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v13 )
  {
    v14 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 8))(v13, &dword_60C8173C);
    if ( v14 )
      v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  sub_60446A98(v2, v14);
  v16 = *(int **)(v3 + 36);
  if ( FIELD_U32(v3, 32) > 3u )
    v16 += 3;
  v17 = *v16;
  if ( ((unsigned int)&dword_60C8C21C & ~(1612702784 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C21C) )
  {
    dword_60C8C218 = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C8C21C);
  }
  if ( v17 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v17 + 8))(v17, &dword_60C8C218) == 1 )
  {
    v19 = *(int **)(v3 + 36);
    if ( FIELD_U32(v3, 32) > 3u )
      v19 += 3;
    v20 = *v19;
    if ( ((unsigned int)&dword_60C8C21C & ~(1612702920 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C21C) )
    {
      dword_60C8C218 = (int)&off_60BC6E70;
      _cxa_guard_release(&dword_60C8C21C);
    }
    if ( v20 )
    {
      v21 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v20 + 8))(v20, &dword_60C8C218);
      if ( v21 )
        v21 = v20;
    }
    else
    {
      v21 = 0;
    }
    v22 = *(int **)(v3 + 36);
    if ( FIELD_U32(v3, 32) > 7u )
      v22 += 7;
    v23 = *v22;
    if ( ((unsigned int)&dword_60C81740 & ~(1612703068 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
    {
      dword_60C8173C = (int)&off_60BC6E70;
      _cxa_guard_release(&dword_60C81740);
    }
    if ( v23 )
    {
      v24 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v23 + 8))(v23, &dword_60C8173C);
      if ( v24 )
        v24 = v23;
    }
    else
    {
      v24 = 0;
    }
    sub_60442864(v21, v24);
  }
  v25 = a1 + 740;
  sub_6090C9A0(a1 + 740);
  v26 = a1 + 652;
  FIELD_U32(a1, 888) = 0;
  FIELD_U32(a1, 892) = 1184645120;
  FIELD_U8(a1, 744) = 1;
  sub_6090A7D4(a1 + 652, (float *)(a1 + 740));
  if ( ((unsigned int)&dword_60C8C238 & ~(1612703276 << v27) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C238) )
  {
    dword_60C8C23C = 0;
    dword_60C8C240 = 0;
    dword_60C8C244 = 1167867904;
    _cxa_guard_release(&dword_60C8C238);
  }
  FIELD_U32(a1, 704) = dword_60C8C23C;
  FIELD_U32(a1, 708) = dword_60C8C240;
  FIELD_U32(a1, 712) = dword_60C8C244;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 652) + 16))(a1 + 652, a1 + 656);
  v28 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v28 += 32;
  *(_DWORD *)(*(_DWORD *)v28 + 72) = v26;
  v29 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 8u )
    v29 += 32;
  *(_DWORD *)(*(_DWORD *)v29 + 76) = v25;
  v30 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 9u )
    v30 += 36;
  *(_DWORD *)(*(_DWORD *)v30 + 72) = v26;
  v31 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 9u )
    v31 += 36;
  *(_DWORD *)(*(_DWORD *)v31 + 76) = v25;
  v32 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 0xAu )
    v32 += 40;
  *(_DWORD *)(*(_DWORD *)v32 + 72) = v26;
  v33 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 0xAu )
    v33 += 40;
  *(_DWORD *)(*(_DWORD *)v33 + 76) = v25;
  v34 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v34 += 24;
  *(_DWORD *)(*(_DWORD *)v34 + 72) = v26;
  v35 = FIELD_U32(v3, 36);
  if ( FIELD_U32(v3, 32) > 6u )
    v35 += 24;
  *(_DWORD *)(*(_DWORD *)v35 + 76) = v25;
  nullsub_11(dword_60C8D408);
  StateMgr__changeState((StateMgr *)(a1 + 228), (StateBase *)&dword_60C8C18C);
  v36 = dword_60C9BBD4;
  v37 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3192));
  if ( ((unsigned int)dword_60C88AE0 & ~(1612703676 << v38) & 1) == 0 && _cxa_guard_acquire(dword_60C88AE0) )
  {
    dword_60C88ADC = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C88AE0);
  }
  if ( v37 )
  {
    v39 = (**v37)(v37, &dword_60C88ADC);
    if ( v39 )
      v39 = (int)v37;
  }
  else
  {
    v39 = 0;
  }
  v40 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 3192));
  if ( ((unsigned int)dword_60C88AE0 & ~(1612703836 << v41) & 1) == 0 && _cxa_guard_acquire(dword_60C88AE0) )
  {
    dword_60C88ADC = (int)&off_60BD4BA4;
    _cxa_guard_release(dword_60C88AE0);
  }
  v42 = v39 + 264;
  if ( v40 )
  {
    v43 = (**v40)(v40, &dword_60C88ADC);
    if ( v43 )
      v43 = (int)v40;
  }
  else
  {
    v43 = 0;
  }
  sub_60427258(v36, v42, v43 + 352);
  result = dword_60CC6C2C;
  FIELD_U8(dword_60CC6C2C, 286) |= 1u;
  return result;
}

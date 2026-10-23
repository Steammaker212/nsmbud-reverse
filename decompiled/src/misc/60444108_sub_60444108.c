/* sub_60444108
 * address: 0x60444108   size: 1816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60444108(_DWORD *a1, int a2, int a3, signed int a4, signed int a5, int a6)
{
  char v9; // r12
  unsigned __int16 *v10; // r0
  unsigned int v11; // r2
  int v12; // r6
  int v13; // r7
  int v14; // r0
  char v15; // r12
  unsigned __int16 *v16; // r0
  unsigned int v17; // r2
  int v18; // r6
  int v19; // r0
  unsigned __int16 *v20; // r0
  unsigned int v21; // r2
  _DWORD *v22; // r7
  int v23; // r0
  char v24; // r12
  unsigned __int16 *v25; // r0
  unsigned int v26; // r2
  _DWORD *v27; // r6
  unsigned __int64 v28; // r0
  int v29; // r0
  int v30; // r1
  int v31; // r1
  int i; // r3
  _DWORD *v33; // r9
  _QWORD *v34; // r7
  _QWORD *v35; // r7
  _QWORD *v36; // r7
  _QWORD *v37; // r7
  _QWORD *v38; // r7
  _QWORD *v39; // r7
  _QWORD *v40; // r7
  int v41; // r0
  bool v42; // zf
  unsigned int v43; // r0
  void *v44; // r0
  void *v45; // r6
  int v46; // r4
  int v47; // r6
  int v48; // r0
  unsigned int v49; // r0
  void *v50; // r0
  void *v51; // r6
  int v52; // r4
  int v53; // r6
  _DWORD *v56; // [sp+18h] [bp-2B8h]
  __int64 v57; // [sp+20h] [bp-2B0h]
  __int64 v58; // [sp+28h] [bp-2A8h]
  __int64 v59; // [sp+30h] [bp-2A0h]
  __int64 v60; // [sp+38h] [bp-298h]
  __int64 v61; // [sp+40h] [bp-290h]
  __int64 v62; // [sp+48h] [bp-288h]
  __int64 v63; // [sp+50h] [bp-280h]
  __int64 v64; // [sp+58h] [bp-278h]
  __int64 v65; // [sp+60h] [bp-270h]
  __int64 v66; // [sp+68h] [bp-268h]
  __int64 v67; // [sp+70h] [bp-260h]
  __int64 v68; // [sp+78h] [bp-258h]
  __int64 v69; // [sp+80h] [bp-250h]
  __int64 v70; // [sp+88h] [bp-248h]
  _BYTE v71[524]; // [sp+9Ch] [bp-234h] BYREF
  int v72; // [sp+2A8h] [bp-28h]

  sub_6092424C(v71);
  sub_60923B60(v71, *(__int16 *)dword_60CD09BC, 3);
  sub_60923B60(v71, *(__int16 *)dword_60CD09E4, 1);
  v72 = a2;
  sub_609244C0(a1 + 17, v71, a6);
  sub_60421050(dword_60C9BAFC, (int)(a1 + 39));
  v10 = (unsigned __int16 *)a1[21];
  v11 = *(__int16 *)dword_60CD09BC;
  if ( a1[20] > v11 )
    v10 += 2 * v11;
  if ( v10[1] )
    v12 = *(_DWORD *)(a1[23] + 4 * *v10);
  else
    v12 = 0;
  if ( ((unsigned int)dword_60C9C284 & ~(1615086040 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  v13 = 0;
  v14 = 0;
  if ( v12 )
  {
    v14 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v12 + 36))(v12, &dword_60C9C280);
    if ( v14 )
      v14 = v12;
  }
  sub_6092318C(v14, 0);
  v16 = (unsigned __int16 *)a1[21];
  v17 = *(__int16 *)dword_60CD09BC;
  if ( a1[20] > v17 )
    v16 += 2 * v17;
  if ( v16[1] >= 2u )
    v13 = *(_DWORD *)(a1[23] + 4 * *v16 + 4);
  if ( ((unsigned int)dword_60C9C284 & ~(1615086232 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  v18 = 0;
  v19 = 0;
  if ( v13 )
  {
    v19 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 36))(v13, &dword_60C9C280);
    if ( v19 )
      v19 = v13;
  }
  FIELD_U32(v19, 184) = 1157234688;
  FIELD_U32(v19, 200) = 1209810944;
  v20 = (unsigned __int16 *)a1[21];
  v21 = *(__int16 *)dword_60CD09BC;
  if ( a1[20] > v21 )
    v20 += 2 * v21;
  if ( v20[1] >= 3u )
    v18 = *(_DWORD *)(a1[23] + 4 * *v20 + 8);
  if ( ((unsigned int)dword_60C9C284 & ~(1615086444 << v15) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  v22 = 0;
  v23 = 0;
  if ( v18 )
  {
    v23 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v18 + 36))(v18, &dword_60C9C280);
    if ( v23 )
      v23 = v18;
  }
  FIELD_U32(v23, 184) = 1157234688;
  FIELD_U32(v23, 200) = 1209810944;
  FIELD_F32(v23, 260) = -0.0;
  FIELD_F32(v23, 264) = -1.0;
  FIELD_F32(v23, 268) = -0.0;
  sub_6092318C(v23, 0);
  v25 = (unsigned __int16 *)a1[21];
  v26 = *(__int16 *)dword_60CD09E4;
  if ( a1[20] > v26 )
    v25 += 2 * v26;
  if ( v25[1] )
    v22 = *(_DWORD **)(a1[23] + 4 * *v25);
  if ( ((unsigned int)&dword_60C9CA2C & ~(1615086684 << v24) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CA2C) )
  {
    dword_60C9CA28 = (int)&off_60BFA424;
    _cxa_guard_release(&dword_60C9CA2C);
  }
  v27 = 0;
  if ( v22 )
  {
    v27 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*v22 + 36))(v22, &dword_60C9CA28);
    if ( v27 )
      v27 = v22;
  }
  sub_6092318C(v27, 1);
  v27[50] = 0;
  v27[51] = 1150681088;
  v27[52] = -968318976;
  v27[56] = 0;
  v27[57] = 1142456320;
  v27[58] = 0;
  v27[62] = 0;
  v27[63] = -1082130432;
  v27[64] = 0;
  v27[46] = 1;
  v27[68] = 0;
  v27[72] = 1232348160;
  v27[76] = 0x40000000;
  v27[84] = 1145569280;
  sub_60430614(a1 + 217, a2, a6);
  if ( a2 >= 1 )
  {
    v28 = (unsigned __int64)(unsigned int)a2 << 7;
    if ( !is_mul_ok(0x80u, a2) )
      HIDWORD(v28) = 1;
    if ( HIDWORD(v28) )
      LODWORD(v28) = -1;
    v29 = sub_608DE334(v28, a6, 4);
    if ( v29 )
    {
      a1[224] = a2;
      a1[225] = v29;
    }
  }
  v56 = a1;
  v30 = a1[224];
  if ( v30 >= 1 )
  {
    v31 = v30 - 1;
    for ( i = 116; ; i += 128 )
    {
      v33 = (_DWORD *)(a1[225] + i);
      *(v33 - 29) = 0;
      v34 = v33 - 28;
      *v34 = v57;
      v34[1] = v58;
      v35 = v33 - 24;
      *v35 = v59;
      v35[1] = v60;
      v36 = v33 - 20;
      *v36 = v61;
      v36[1] = v62;
      v37 = v33 - 16;
      *v37 = v63;
      v37[1] = v64;
      v38 = v33 - 12;
      *v38 = v65;
      v38[1] = v66;
      v39 = v33 - 8;
      *v39 = v67;
      v39[1] = v68;
      v40 = v33 - 4;
      *v40 = v69;
      v40[1] = v70;
      *v33 = 0;
      v33[1] = 0;
      v33[2] = 0;
      if ( !v31 )
        break;
      --v31;
    }
  }
  sead__PtrArrayImpl__allocBuffer(a1 + 7, a3);
  if ( a4 >= 1 )
  {
    v41 = (12 * (unsigned __int64)(unsigned int)a4) >> 32;
    if ( !is_mul_ok(0xCu, a4) )
      v41 = 1;
    v42 = v41 == 0;
    v43 = 12 * a4;
    if ( !v42 )
      v43 = -1;
    v44 = (void *)sub_608DE334(v43, a6, 4);
    v45 = v44;
    if ( v44 )
    {
      memset(v44, 0, 12 * ((12 * a4 - 12) / 0xCu) + 12);
      a1[10] = a4;
      a1[11] = v45;
    }
  }
  v46 = a1[10];
  if ( v46 )
  {
    v47 = v56[11];
    do
    {
      sead__PtrArrayImpl__allocBuffer(v47, a3);
      v47 += 12;
      --v46;
    }
    while ( v46 );
  }
  if ( a5 >= 1 )
  {
    v48 = (12 * (unsigned __int64)(unsigned int)a5) >> 32;
    if ( !is_mul_ok(0xCu, a5) )
      v48 = 1;
    v42 = v48 == 0;
    v49 = 12 * a5;
    if ( !v42 )
      v49 = -1;
    v50 = (void *)sub_608DE334(v49, a6, 4);
    v51 = v50;
    if ( v50 )
    {
      memset(v50, 0, 12 * ((12 * a5 - 12) / 0xCu) + 12);
      v56[12] = a5;
      v56[13] = v51;
    }
  }
  v52 = v56[12];
  if ( v52 )
  {
    v53 = v56[13];
    do
    {
      sead__PtrArrayImpl__allocBuffer(v53, a3);
      v53 += 12;
      --v52;
    }
    while ( v52 );
  }
  sead__PtrArrayImpl__allocBuffer(v56 + 14, a3);
  return sub_60422EFC((sead_ListNode *)dword_60C9BB38, (int)v56);
}

/* sub_604448AC
 * address: 0x604448AC   size: 1220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604448AC(_DWORD *a1, int a2, int a3, int a4, signed int a5, signed int a6, int a7)
{
  char v11; // r12
  unsigned __int16 *v12; // r0
  unsigned int v13; // r2
  int v14; // r5
  int v15; // r10
  int v16; // r0
  char v17; // r12
  unsigned __int16 *v18; // r0
  unsigned int v19; // r2
  int v20; // r0
  unsigned __int64 v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int i; // r3
  _DWORD *v26; // r8
  _QWORD *v27; // r5
  _QWORD *v28; // r5
  _QWORD *v29; // r5
  _QWORD *v30; // r5
  _QWORD *v31; // r5
  _QWORD *v32; // r5
  _QWORD *v33; // r5
  int v34; // r0
  bool v35; // zf
  unsigned int v36; // r0
  void *v37; // r0
  void *v38; // r5
  int v39; // r6
  int v40; // r5
  int v41; // r0
  unsigned int v42; // r0
  void *v43; // r0
  void *v44; // r5
  int v45; // r4
  int v46; // r5
  int v48; // [sp+Ch] [bp-2C4h]
  __int64 v49; // [sp+20h] [bp-2B0h]
  __int64 v50; // [sp+28h] [bp-2A8h]
  __int64 v51; // [sp+30h] [bp-2A0h]
  __int64 v52; // [sp+38h] [bp-298h]
  __int64 v53; // [sp+40h] [bp-290h]
  __int64 v54; // [sp+48h] [bp-288h]
  __int64 v55; // [sp+50h] [bp-280h]
  __int64 v56; // [sp+58h] [bp-278h]
  __int64 v57; // [sp+60h] [bp-270h]
  __int64 v58; // [sp+68h] [bp-268h]
  __int64 v59; // [sp+70h] [bp-260h]
  __int64 v60; // [sp+78h] [bp-258h]
  __int64 v61; // [sp+80h] [bp-250h]
  __int64 v62; // [sp+88h] [bp-248h]
  int v63; // [sp+90h] [bp-240h]
  int v64; // [sp+94h] [bp-23Ch]
  int v65; // [sp+98h] [bp-238h]
  _BYTE v66[524]; // [sp+9Ch] [bp-234h] BYREF
  int v67; // [sp+2A8h] [bp-28h]

  sub_6092424C(v66);
  sub_60923B60(v66, *(__int16 *)dword_60CD09BC, 2);
  v67 = a2;
  sub_609244C0(a1 + 17, v66, a7);
  v12 = (unsigned __int16 *)a1[21];
  v13 = *(__int16 *)dword_60CD09BC;
  if ( a1[20] > v13 )
    v12 += 2 * v13;
  if ( v12[1] )
    v14 = *(_DWORD *)(a1[23] + 4 * *v12);
  else
    v14 = 0;
  if ( ((unsigned int)dword_60C9C284 & ~(1615087948 << v11) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  v15 = 0;
  v16 = 0;
  if ( v14 )
  {
    v16 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v14 + 36))(v14, &dword_60C9C280);
    if ( v16 )
      v16 = v14;
  }
  sub_6092318C(v16, 0);
  v18 = (unsigned __int16 *)a1[21];
  v19 = *(__int16 *)dword_60CD09BC;
  if ( a1[20] > v19 )
    v18 += 2 * v19;
  if ( v18[1] >= 2u )
    v15 = *(_DWORD *)(a1[23] + 4 * *v18 + 4);
  if ( ((unsigned int)dword_60C9C284 & ~(1615088140 << v17) & 1) == 0 && _cxa_guard_acquire(dword_60C9C284) )
  {
    dword_60C9C280 = (int)&off_60BFA424;
    _cxa_guard_release(dword_60C9C284);
  }
  v48 = a3;
  if ( v15 )
  {
    v20 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v15 + 36))(v15, &dword_60C9C280);
    if ( v20 )
      v20 = v15;
  }
  else
  {
    v20 = 0;
  }
  FIELD_U32(v20, 184) = 1157234688;
  FIELD_U32(v20, 200) = 1209810944;
  sub_60430614(a1 + 217, a2, a7);
  if ( a2 >= 1 )
  {
    v21 = (unsigned __int64)(unsigned int)a2 << 7;
    if ( !is_mul_ok(0x80u, a2) )
      HIDWORD(v21) = 1;
    if ( HIDWORD(v21) )
      LODWORD(v21) = -1;
    v22 = sub_608DE334(v21, a7, 4);
    if ( v22 )
    {
      a1[224] = a2;
      a1[225] = v22;
    }
  }
  v23 = a1[224];
  if ( v23 >= 1 )
  {
    v24 = v23 - 1;
    for ( i = 116; ; i += 128 )
    {
      v26 = (_DWORD *)(a1[225] + i);
      *(v26 - 29) = 0;
      v27 = v26 - 28;
      *v27 = v49;
      v27[1] = v50;
      v28 = v26 - 24;
      *v28 = v51;
      v28[1] = v52;
      v29 = v26 - 20;
      *v29 = v53;
      v29[1] = v54;
      v30 = v26 - 16;
      *v30 = v55;
      v30[1] = v56;
      v31 = v26 - 12;
      *v31 = v57;
      v31[1] = v58;
      v32 = v26 - 8;
      *v32 = v59;
      v32[1] = v60;
      v33 = v26 - 4;
      *v33 = v61;
      v33[1] = v62;
      *v26 = v63;
      v26[1] = v64;
      v26[2] = v65;
      if ( !v24 )
        break;
      --v24;
    }
  }
  sead__PtrArrayImpl__allocBuffer(a1 + 7, v48);
  if ( a5 >= 1 )
  {
    v34 = (12 * (unsigned __int64)(unsigned int)a5) >> 32;
    if ( !is_mul_ok(0xCu, a5) )
      v34 = 1;
    v35 = v34 == 0;
    v36 = 12 * a5;
    if ( !v35 )
      v36 = -1;
    v37 = (void *)sub_608DE334(v36, a7, 4);
    v38 = v37;
    if ( v37 )
    {
      memset(v37, 0, 12 * ((12 * a5 - 12) / 0xCu) + 12);
      a1[10] = a5;
      a1[11] = v38;
    }
  }
  v39 = a1[10];
  if ( v39 )
  {
    v40 = a1[11];
    do
    {
      sead__PtrArrayImpl__allocBuffer(v40, a4);
      v40 += 12;
      --v39;
    }
    while ( v39 );
  }
  if ( a6 >= 1 )
  {
    v41 = (12 * (unsigned __int64)(unsigned int)a6) >> 32;
    if ( !is_mul_ok(0xCu, a6) )
      v41 = 1;
    v35 = v41 == 0;
    v42 = 12 * a6;
    if ( !v35 )
      v42 = -1;
    v43 = (void *)sub_608DE334(v42, a7, 4);
    v44 = v43;
    if ( v43 )
    {
      memset(v43, 0, 12 * ((12 * a6 - 12) / 0xCu) + 12);
      a1[12] = a6;
      a1[13] = v44;
    }
  }
  v45 = a1[12];
  if ( v45 )
  {
    v46 = a1[13];
    do
    {
      sead__PtrArrayImpl__allocBuffer(v46, a4);
      v46 += 12;
      --v45;
    }
    while ( v45 );
  }
  sead__PtrArrayImpl__allocBuffer(a1 + 14, v48);
  return sub_60422EFC((sead_ListNode *)dword_60C9BB38, (int)a1);
}

/* system_ref
 * address: 0x60425974   size: 2748   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall system_ref(int a1)
{
  int v2; // r6
  char v3; // r12
  unsigned __int16 **v4; // r10
  int *v5; // r5
  unsigned __int16 *v6; // r0
  int v7; // r10
  int v8; // r7
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r6
  int *v12; // r5
  unsigned __int16 *v13; // r0
  int v14; // r10
  int v15; // r7
  unsigned int v16; // r1
  int v17; // r0
  unsigned int v18; // r4
  char v19; // r12
  _DWORD *v20; // r8
  int v21; // r7
  unsigned __int16 *v22; // r0
  unsigned int v23; // r1
  int v24; // r5
  int v25; // r4
  int v26; // r6
  int v27; // r1
  char v28; // r12
  unsigned __int16 *v29; // r0
  unsigned int v30; // r1
  int v31; // r4
  int v32; // r1
  char v33; // r12
  unsigned __int16 *v34; // r0
  unsigned int v35; // r1
  int v36; // r1
  char v37; // r12
  unsigned __int16 *v38; // r0
  int v39; // r4
  unsigned int v40; // r1
  int v41; // r1
  int v42; // r6
  unsigned int v43; // r5
  int v44; // r0
  int v45; // r4
  unsigned int v46; // r2
  unsigned __int16 *v47; // r1
  int v48; // r1
  void *v49; // r4
  int *v50; // r5
  const void *v51; // r10
  int v52; // r0
  signed int v53; // r8
  bool v54; // cc
  signed int v55; // r0
  int v56; // r0
  int v57; // r2
  int v58; // r0
  _DWORD *v60; // [sp+Ch] [bp-504h]
  _DWORD *v61; // [sp+8Ch] [bp-484h]
  unsigned __int16 **v62; // [sp+90h] [bp-480h]
  int v63; // [sp+94h] [bp-47Ch]
  int v64; // [sp+A0h] [bp-470h]
  unsigned int *v65; // [sp+B0h] [bp-460h]
  char v66[4]; // [sp+B4h] [bp-45Ch] BYREF
  int v67; // [sp+B8h] [bp-458h]
  int v68; // [sp+C4h] [bp-44Ch]
  _BYTE v69[520]; // [sp+CCh] [bp-444h] BYREF
  _BYTE v70[300]; // [sp+2D4h] [bp-23Ch] BYREF
  int v71; // [sp+4E0h] [bp-30h]
  int (**v72)(); // [sp+4E4h] [bp-2Ch] BYREF
  const char *v73; // [sp+4E8h] [bp-28h]

  sub_6092424C(v70);
  sub_60923B60(v70, *(__int16 *)dword_60CD09C0, 11);
  sub_60923B60(v70, *(__int16 *)dword_60CD09C4, 2);
  sub_60923B60(v70, *(__int16 *)dword_60CD09C8, 56);
  v2 = 0;
  v71 = 4;
  v64 = a1 + 17144;
  sub_609244C0();
  sub_60421050(dword_60C9BAFC, a1 + 17232);
  v60 = (_DWORD *)a1;
  v61 = (_DWORD *)(a1 + 17168);
  v4 = (unsigned __int16 **)(a1 + 17160);
  v62 = (unsigned __int16 **)(a1 + 17160);
  v65 = (unsigned int *)(a1 + 17156);
  v5 = &dword_60C9BBD8;
  do
  {
    v6 = *v4;
    v7 = 0;
    v8 = 0;
    v9 = *(__int16 *)dword_60CD09C8;
    if ( *v65 > v9 )
      v6 += 2 * v9;
    if ( v6[1] > v2 )
    {
      v7 = *(_DWORD *)(*v61 + 4 * (v2 + *v6));
      v8 = v7;
    }
    if ( ((unsigned int)&dword_60C9BEE4 & ~(1614961384 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
    {
      dword_60C9BEE0 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEE4);
    }
    if ( v8 )
    {
      v10 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 36))(v8, &dword_60C9BEE0);
      if ( v10 )
        v10 = v8;
    }
    else
    {
      v10 = 0;
    }
    v4 = v62;
    sub_609231B8(v10, v5);
    ++v2;
    v5 += 2;
  }
  while ( v2 != 56 );
  v11 = 0;
  v12 = &dword_60C9BF40;
  do
  {
    v13 = *v4;
    v14 = 0;
    v15 = 0;
    v16 = *(__int16 *)dword_60CD09C0;
    if ( *v65 > v16 )
      v13 += 2 * v16;
    if ( v13[1] > v11 )
    {
      v14 = *(_DWORD *)(*v61 + 4 * (v11 + *v13));
      v15 = v14;
    }
    if ( ((unsigned int)&dword_60C9BEF4 & ~(1614961660 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEF4) )
    {
      dword_60C9BEF0 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEF4);
    }
    if ( v15 )
    {
      v17 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v14 + 36))(v15, &dword_60C9BEF0);
      if ( v17 )
        v17 = v15;
    }
    else
    {
      v17 = 0;
    }
    v4 = v62;
    sub_609231B8(v17, v12);
    ++v11;
    v12 += 2;
  }
  while ( v11 != 11 );
  sub_60923B30(v69);
  sub_60923B60(v69, *(__int16 *)dword_60CD09C0, 1);
  sub_60923B60(v69, *(__int16 *)dword_60CD09C4, 2);
  sub_60923B60(v69, *(__int16 *)dword_60CD09C8, 4);
  sub_60959C78(v66);
  v18 = 0;
  v68 = 40;
  v67 = 4;
  sub_6095A404(v60 + 1724, v69, v66, v64, 0);
  sub_60421050(dword_60C9BAFC, (int)(v60 + 1724));
  v60[4285] = v60 + 1724;
  v20 = v61;
  do
  {
    v63 = v18;
    v21 = v60[1825];
    if ( v60[1824] > v18 )
      v21 += 2088 * v18;
    FIELD_U32(v21, 1764) = 3;
    FIELD_U8(v21, 840) |= 4u;
    v22 = *v4;
    v23 = *(__int16 *)dword_60CD09C0;
    if ( *v65 > v23 )
      v22 += 2 * v23;
    if ( v22[1] )
    {
      v24 = *(_DWORD *)(*v20 + 4 * *v22);
      v25 = v24;
    }
    else
    {
      v24 = 0;
      v25 = 0;
    }
    if ( ((unsigned int)&dword_60C9BEF4 & ~(1614962588 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEF4) )
    {
      dword_60C9BEF0 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEF4);
    }
    v26 = 0;
    v27 = 0;
    if ( v25 )
    {
      v27 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v24 + 36))(v25, &dword_60C9BEF0);
      if ( v27 )
        v27 = v25;
    }
    sub_60926F90(v21, v27);
    v29 = *v4;
    v30 = *(__int16 *)dword_60CD09C4;
    if ( *v65 > v30 )
      v29 += 2 * v30;
    if ( v29[1] )
      v26 = *(_DWORD *)(*v20 + 4 * *v29);
    if ( ((unsigned int)&dword_60C9BEFC & ~(1614962756 << v28) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEFC) )
    {
      dword_60C9BEF8 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEFC);
    }
    v31 = 0;
    v32 = 0;
    if ( v26 )
    {
      v32 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v26 + 36))(v26, &dword_60C9BEF8);
      if ( v32 )
        v32 = v26;
    }
    sub_60926F90(v21, v32);
    v34 = *v4;
    v35 = *(__int16 *)dword_60CD09C4;
    if ( *v65 > v35 )
      v34 += 2 * v35;
    if ( v34[1] >= 2u )
      v31 = *(_DWORD *)(*v20 + 4 * *v34 + 4);
    if ( ((unsigned int)&dword_60C9BEFC & ~(1614962924 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEFC) )
    {
      dword_60C9BEF8 = (int)&off_60BFA424;
      _cxa_guard_release(&dword_60C9BEFC);
    }
    if ( v31 )
    {
      v36 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v31 + 36))(v31, &dword_60C9BEF8);
      if ( v36 )
        v36 = v31;
    }
    else
    {
      v36 = 0;
    }
    sub_60926F90(v21, v36);
    if ( v63 <= 13 )
    {
      v42 = 0;
      v43 = (2 * (v63 + ((unsigned int)v63 >> 31))) & 0xFFFFFFFC;
      do
      {
        v44 = v43 + v42;
        if ( (int)(v43 + v42) < 0 )
        {
          v45 = 0;
        }
        else
        {
          v45 = 0;
          v46 = *(__int16 *)dword_60CD09C8;
          v47 = *v4;
          if ( *v65 > v46 )
            v47 += 2 * v46;
          if ( v47[1] > v44 )
            v45 = *(_DWORD *)(*v20 + 4 * (v44 + *v47));
        }
        if ( ((unsigned int)&dword_60C9BEE4 & ~(1614963300 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
        {
          dword_60C9BEE0 = (int)&off_60BFA424;
          _cxa_guard_release(&dword_60C9BEE4);
        }
        if ( v45 )
        {
          v48 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v45 + 36))(v45, &dword_60C9BEE0);
          if ( v48 )
            v48 = v45;
        }
        else
        {
          v48 = 0;
        }
        sub_60926F90(v21, v48);
        ++v42;
      }
      while ( v42 != 4 );
    }
    else
    {
      v38 = *v4;
      v39 = 0;
      v40 = *(__int16 *)dword_60CD09C8;
      if ( *v65 > v40 )
        v38 += 2 * v40;
      if ( v38[1] > v63 + 42 )
        v39 = *(_DWORD *)(*v20 + 4 * (*v38 + v63 + 42));
      if ( ((unsigned int)&dword_60C9BEE4 & ~(1614963108 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BEE4) )
      {
        dword_60C9BEE0 = (int)&off_60BFA424;
        _cxa_guard_release(&dword_60C9BEE4);
      }
      if ( v39 )
      {
        v41 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v39 + 36))(v39, &dword_60C9BEE0);
        if ( v41 )
          v41 = v39;
      }
      else
      {
        v41 = 0;
      }
      sub_60926F90(v21, v41);
    }
    v49 = *(void **)(v21 + 88);
    v50 = &dword_60C9BD98[2 * v63];
    (*(void (__fastcall **)(int *))(*v50 + 12))(v50);
    v51 = (const void *)v50[1];
    if ( v49 != v51 )
    {
      (*(void (__fastcall **)(int *))(*v50 + 12))(v50);
      v52 = v50[1];
      v53 = 0;
      while ( *(_BYTE *)(v52 + v53) )
      {
        if ( !*(_BYTE *)(v52 + v53 + 1) )
        {
          ++v53;
          break;
        }
        if ( !*(_BYTE *)(v52 + v53 + 2) )
        {
          v53 += 2;
          break;
        }
        v54 = v53 + 2 < 0x80000;
        v53 += 3;
        if ( !v54 )
        {
          v53 = 0;
          break;
        }
      }
      v55 = FIELD_U32(v21, 92);
      if ( v53 >= v55 )
        v53 = v55 - 1;
      qmemcpy(v49, v51, v53);
      *((_BYTE *)v49 + v53) = 0;
      v20 = v61;
    }
    v4 = v62;
    v18 = v63 + 1;
  }
  while ( v63 != 39 );
  v72 = &sead__SafeStringBase__vtable;
  v73 = "system";
  v56 = s_baglenv_ref(dword_60C9BAFC, (int *)&v72);
  sub_60426C24(v60, v56, v57);
  v72 = &sead__SafeStringBase__vtable;
  v73 = "system";
  v58 = s_bagllmap_ref(dword_60C9BAFC, (int *)&v72);
  sub_60426E38(v60, v58);
  return sub_604265B4((int)v60);
}

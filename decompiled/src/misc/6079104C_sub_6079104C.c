/* sub_6079104C
 * address: 0x6079104C   size: 1352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079104C(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  char v13; // r12
  int v14; // r6
  int v15; // r0
  int v16; // r7
  void *v17; // r9
  int *v18; // r6
  int *v19; // r5
  int *v20; // r6
  const void *v21; // r10
  const void *v22; // t1
  int v23; // r4
  signed int v24; // r5
  int v25; // r0
  bool v26; // cc
  int *v27; // r5
  int *v28; // r6
  int v29; // r0
  int *v30; // r7
  void *v31; // r6
  int *v32; // r5
  int *v33; // r7
  const void *v34; // r10
  const void *v35; // t1
  signed int v36; // r5
  int v37; // r0
  void *v38; // r9
  int *v39; // r5
  int *v40; // r6
  const void *v41; // r10
  int v42; // r4
  signed int v43; // r5
  int v44; // r0
  int *v45; // r6
  int *v46; // r5
  int *v47; // r6
  const void *v48; // t1
  int v49; // r0
  signed int v50; // r0
  signed int v51; // r0
  int v52; // r1
  signed int v53; // r0
  int v54; // [sp+0h] [bp-28h]

  result = 0;
  if ( (a4 | 1) != 0x89 )
    return result;
  if ( (FIELD_U8(a1, 210) & 4) != 0 )
  {
    v10 = FIELD_U32(a1, 164);
    v11 = v10 == 6;
    if ( v10 != 6 )
      v11 = FIELD_U32(a1, 300) == 3;
    if ( v11 )
    {
      v12 = sub_60793198(a1);
      *a2 = 1084227584;
      goto LABEL_9;
    }
  }
  v12 = sub_60793198(a1);
  if ( a4 == 137 )
  {
LABEL_9:
    v14 = 1;
    if ( v12 )
      v14 = 3;
    goto LABEL_15;
  }
  if ( v12 )
    v12 = 2;
  v14 = v12;
LABEL_15:
  v15 = FIELD_U32(a1, 300);
  v16 = a5;
  if ( v15 == 2 )
  {
    v27 = &dword_60CC4840[2 * v14];
    v54 = a3;
    v17 = *(void **)(a3 + 4);
    (*(void (__fastcall **)(int *))(*v27 + 12))(v27);
    v23 = 0x1000000;
    v28 = v27 + 1;
    v21 = (const void *)v27[1];
    if ( v17 != v21 )
    {
      (*(void (__fastcall **)(int *))(*v27 + 12))(v27);
      v24 = 0;
      v29 = *v28;
      while ( *(_BYTE *)(v29 + v24) )
      {
        if ( !*(_BYTE *)(v29 + v24 + 1) )
        {
LABEL_59:
          ++v24;
          break;
        }
        if ( !*(_BYTE *)(v29 + v24 + 2) )
        {
LABEL_60:
          v24 += 2;
          break;
        }
        v26 = v24 + 2 <= 0x7FFFF;
        v24 += 3;
        if ( !v26 )
        {
          v24 = 0;
          break;
        }
      }
LABEL_61:
      v50 = FIELD_U32(v54, 8);
      if ( v24 >= v50 )
        v24 = v50 - 1;
      qmemcpy(v17, v21, v24);
      *((_BYTE *)v17 + v24) = 0;
      v16 = a5;
      if ( a5 )
        goto LABEL_72;
      goto LABEL_71;
    }
  }
  else if ( v15 == 4 )
  {
    v30 = &dword_60CC4840[2 * v14];
    v31 = *(void **)(a3 + 4);
    v32 = v30 + 16;
    (*(void (__fastcall **)(int *))(v30[16] + 12))(v30 + 16);
    v35 = (const void *)v30[17];
    v33 = v30 + 17;
    v34 = v35;
    if ( v31 == v35 )
    {
      v16 = a5;
      v23 = 0x400000;
      if ( a5 )
        goto LABEL_72;
      goto LABEL_71;
    }
    (*(void (__fastcall **)(int *))(*v32 + 12))(v32);
    v36 = 0;
    v37 = *v33;
    while ( *(_BYTE *)(v37 + v36) )
    {
      if ( !*(_BYTE *)(v37 + v36 + 1) )
      {
        ++v36;
        break;
      }
      if ( !*(_BYTE *)(v37 + v36 + 2) )
      {
        v36 += 2;
        break;
      }
      v26 = v36 + 2 <= 0x7FFFF;
      v36 += 3;
      if ( !v26 )
      {
        v36 = 0;
        break;
      }
    }
    v51 = FIELD_U32(a3, 8);
    v16 = a5;
    if ( v36 >= v51 )
      v36 = v51 - 1;
    qmemcpy(v31, v34, v36);
    *((_BYTE *)v31 + v36) = 0;
    v23 = 0x400000;
  }
  else
  {
    v54 = a3;
    if ( v15 != 3 )
    {
      if ( ((unsigned int)&dword_60CBF2AC & ~(1618547428 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CBF2AC) )
      {
        dword_60CBF2A8 = (int)&off_60C23E4C;
        _cxa_guard_release(&dword_60CBF2AC);
      }
      if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 8))(a1, &dword_60CBF2A8) == 1 )
      {
        v38 = *(void **)(a3 + 4);
        v39 = &dword_60CC4840[2 * v14];
        (*(void (__fastcall **)(int *))(*v39 + 12))(v39);
        v40 = v39 + 1;
        v41 = (const void *)v39[1];
        if ( v38 == v41 )
          goto LABEL_73;
        v42 = a5;
        (*(void (__fastcall **)(int *))(*v39 + 12))(v39);
        v43 = 0;
        v44 = *v40;
        while ( *(_BYTE *)(v44 + v43) )
        {
          if ( !*(_BYTE *)(v44 + v43 + 1) )
            goto LABEL_78;
          if ( !*(_BYTE *)(v44 + v43 + 2) )
            goto LABEL_79;
          v26 = v43 + 2 <= 0x7FFFF;
          v43 += 3;
          if ( !v26 )
          {
            v43 = 0;
            break;
          }
        }
      }
      else
      {
        v38 = *(void **)(a3 + 4);
        v45 = &dword_60CC47D0[2 * v14];
        v46 = v45 + 19;
        (*(void (__fastcall **)(int *))(v45[19] + 12))(v45 + 19);
        v48 = (const void *)v45[20];
        v47 = v45 + 20;
        v41 = v48;
        if ( v38 == v48 )
          goto LABEL_73;
        v42 = a5;
        (*(void (__fastcall **)(int *))(*v46 + 12))(v46);
        v43 = 0;
        v49 = *v47;
        while ( *(_BYTE *)(v49 + v43) )
        {
          if ( !*(_BYTE *)(v49 + v43 + 1) )
          {
LABEL_78:
            ++v43;
            break;
          }
          if ( !*(_BYTE *)(v49 + v43 + 2) )
          {
LABEL_79:
            v43 += 2;
            break;
          }
          v26 = v43 + 2 <= 0x7FFFF;
          v43 += 3;
          if ( !v26 )
          {
            v43 = 0;
            break;
          }
        }
      }
      v53 = FIELD_U32(v54, 8);
      if ( v43 >= v53 )
        v43 = v53 - 1;
      qmemcpy(v38, v41, v43);
      *((_BYTE *)v38 + v43) = 0;
      v16 = v42;
      goto LABEL_73;
    }
    v17 = *(void **)(a3 + 4);
    v18 = &dword_60CC4840[2 * v14];
    v19 = v18 + 8;
    (*(void (__fastcall **)(int *))(v18[8] + 12))(v18 + 8);
    v22 = (const void *)v18[9];
    v20 = v18 + 9;
    v21 = v22;
    v23 = 0x800000;
    if ( v17 != v22 )
    {
      (*(void (__fastcall **)(int *))(*v19 + 12))(v19);
      v24 = 0;
      v25 = *v20;
      while ( *(_BYTE *)(v25 + v24) )
      {
        if ( !*(_BYTE *)(v25 + v24 + 1) )
          goto LABEL_59;
        if ( !*(_BYTE *)(v25 + v24 + 2) )
          goto LABEL_60;
        v26 = v24 + 2 <= 0x7FFFF;
        v24 += 3;
        if ( !v26 )
        {
          v24 = 0;
          goto LABEL_61;
        }
      }
      goto LABEL_61;
    }
  }
  if ( !v16 )
LABEL_71:
    FIELD_U32(a1, 196) |= v23;
LABEL_72:
  FIELD_U32(a1, 200) |= v23;
LABEL_73:
  v52 = sub_60793198(a1);
  result = 1;
  if ( v52 == 1 )
  {
    if ( !v16 )
      FIELD_U32(a1, 196) |= 2u;
    FIELD_U32(a1, 200) |= 2u;
  }
  return result;
}

/* sub_60233B8C
 * address: 0x60233B8C   size: 1616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_60233B8C(sead_IDisposer *a1, int a2, int a3)
{
  int *v6; // r9
  int v7; // r0
  unsigned int v8; // r11
  __int64 v9; // r0
  int v10; // r5
  int v11; // r7
  int v12; // r6
  bool v13; // cc
  int *v14; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r8
  int v18; // r6
  int v19; // r7
  int v20; // r1
  int v21; // r2
  int v22; // r11
  int v23; // r2
  int v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // r3
  bool v28; // vf
  int v29; // r2
  int v30; // r5
  int v31; // r0
  int containingHeap; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r2
  int v36; // r1
  int v37; // r5
  int v38; // r7
  int v39; // r1
  int v40; // r2
  int v41; // r2
  int v42; // r3
  int v43; // r0
  int v44; // r3
  int v45; // r2
  int Resource; // r8
  int v47; // r0
  int vtable; // r9
  int v49; // r7
  int v50; // r5
  int v51; // r1
  int v52; // r2
  unsigned int v54; // [sp+18h] [bp-38h]
  int v55; // [sp+20h] [bp-30h]
  int (**v56)(); // [sp+24h] [bp-2Ch] BYREF
  int v57; // [sp+28h] [bp-28h]

  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)off_60BD9540;
  FIELD_U32(a1 + (1) * 16, 0x0) = a3;
  sub_60235850(&FIELD_U32(a1 + (1) * 16, 0x4));
  FIELD_U32(a1 + (2) * 16, 0x8) = 0;
  v6 = &FIELD_U32(a1 + (2) * 16, 0x8);
  FIELD_U32(a1 + (2) * 16, 0xC) = 0;
  FIELD_U32(a1 + (3) * 16, 0x0) = 0;
  sub_608DEB0C(&FIELD_U32(a1 + (2) * 16, 0x8), 15, (int)&a1[3].containingHeap);
  FIELD_U32(a1 + (7) * 16, 0x0) = 0;
  FIELD_U32(a1 + (7) * 16, 0x4) = 0;
  FIELD_U32(a1 + (7) * 16, 0x8) = 0;
  FIELD_U32(a1 + (7) * 16, 0xC) = 0;
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 92))(FIELD_U32(a1 + (1) * 16, 0x0));
  v8 = v7;
  if ( v7 <= 0 )
  {
    v14 = &FIELD_U32(a1 + (7) * 16, 0xC);
  }
  else
  {
    v9 = 72LL * (unsigned int)v7;
    if ( !is_mul_ok(0x48u, v8) )
      HIDWORD(v9) = 1;
    if ( HIDWORD(v9) )
      LODWORD(v9) = -1;
    v10 = sub_608DE334(v9, a2, 4);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        sub_602346C0(v10 + v11);
        v11 += 72;
      }
      while ( 72 * v8 != v11 );
      FIELD_U32(a1 + (7) * 16, 0x0) = v10;
      FIELD_U32(a1 + (7) * 16, 0x4) = v8;
      FIELD_U32(a1 + (7) * 16, 0x8) = 0;
      FIELD_U32(a1 + (7) * 16, 0xC) = 0;
    }
    (*(void (__fastcall **)(int *))(dword_60C8D920[0] + 12))(dword_60C8D920);
    v12 = 0;
    while ( *(_BYTE *)(dword_60C8D924 + v12) )
    {
      if ( !*(_BYTE *)(dword_60C8D924 + v12 + 1) )
      {
        ++v12;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D924 + v12 + 2) )
      {
        v12 += 2;
        break;
      }
      v13 = v12 + 2 <= 0x7FFFF;
      v12 += 3;
      if ( !v13 )
      {
        v12 = 0;
        break;
      }
    }
    (*(void (__fastcall **)(int *))(dword_60C8D92C + 12))(&dword_60C8D92C);
    v15 = 0;
    while ( *(_BYTE *)(dword_60C8D930 + v15) )
    {
      if ( !*(_BYTE *)(dword_60C8D930 + v15 + 1) )
      {
        ++v15;
        break;
      }
      if ( !*(_BYTE *)(dword_60C8D930 + v15 + 2) )
      {
        v15 += 2;
        break;
      }
      v13 = v15 + 2 <= 0x7FFFF;
      v15 += 3;
      if ( !v13 )
      {
        v15 = 0;
        break;
      }
    }
    v16 = 0x80000;
    v17 = 0x80000;
    if ( v15 < 0x80000 )
      v16 = v15;
    v55 = v16;
    if ( v12 < 0x80000 )
      v17 = v12;
    if ( v12 <= 0 )
    {
      v30 = 0;
      do
      {
        v31 = (*(int (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v30);
        v56 = &sead__SafeStringBase__vtable;
        v57 = v31;
        (*(void (__fastcall **)(int *))(dword_60C8D920[0] + 12))(dword_60C8D920);
        containingHeap = FIELD_U32(a1 + (7) * 16, 0x4);
        v33 = FIELD_U32(a1 + (7) * 16, 0xC);
        v34 = 0;
        if ( v33 < containingHeap )
        {
          FIELD_U32(a1 + (7) * 16, 0xC) = v33 + 1;
          v35 = FIELD_U32(a1 + (7) * 16, 0x8) + v33;
          v28 = __OFSUB__(v35, containingHeap);
          v36 = v35 - containingHeap;
          if ( v36 < 0 != v28 )
            v36 = v35;
          v34 = FIELD_U32(a1 + (7) * 16, 0x0) + 72 * v36;
        }
        sub_6023473C(v34, v30++, (unsigned __int8)byte_60C8D928, a1);
      }
      while ( v8 != v30 );
    }
    else
    {
      v54 = v8;
      if ( v15 >= 1 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = (*(int (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v18);
          v56 = &sead__SafeStringBase__vtable;
          v57 = v19;
          (*(void (__fastcall **)(int *))(dword_60C8D920[0] + 12))(dword_60C8D920);
          v20 = 0;
          if ( v19 != dword_60C8D924 )
          {
            v21 = 0;
            while ( *(unsigned __int8 *)(v57 + v21) == *(unsigned __int8 *)(dword_60C8D924 + v21) )
            {
              v20 = 0;
              if ( *(_BYTE *)(v57 + v21) )
              {
                if ( ++v21 < v17 )
                  continue;
              }
              goto LABEL_47;
            }
            ((void (__fastcall *)(int (***)()))v56[3])(&v56);
            ((void (__fastcall *)(int (***)()))v56[3])(&v56);
            v22 = v57;
            (*(void (__fastcall **)(int *))(dword_60C8D92C + 12))(&dword_60C8D92C);
            v20 = 1;
            if ( v22 != dword_60C8D930 )
            {
              v8 = v54;
              v23 = 0;
              while ( *(unsigned __int8 *)(v57 + v23) == *(unsigned __int8 *)(dword_60C8D930 + v23) )
              {
                if ( *(_BYTE *)(v57 + v23) )
                {
                  if ( ++v23 < v55 )
                    continue;
                }
                goto LABEL_47;
              }
              goto LABEL_52;
            }
            v8 = v54;
          }
LABEL_47:
          v24 = FIELD_U32(a1 + (7) * 16, 0x4);
          v25 = FIELD_U32(a1 + (7) * 16, 0xC);
          v26 = 0;
          if ( v25 < v24 )
          {
            FIELD_U32(a1 + (7) * 16, 0xC) = v25 + 1;
            v27 = FIELD_U32(a1 + (7) * 16, 0x8) + v25;
            v28 = __OFSUB__(v27, v24);
            v29 = v27 - v24;
            if ( v29 < 0 != v28 )
              v29 = v27;
            v26 = FIELD_U32(a1 + (7) * 16, 0x0) + 72 * v29;
          }
          sub_6023473C(v26, v18, LOBYTE(dword_60C8D920[3 * v20 + 2]), a1);
LABEL_52:
          if ( ++v18 == v8 )
            goto LABEL_74;
        }
      }
      v37 = 0;
      do
      {
        v38 = (*(int (__fastcall **)(int, int))(*(_DWORD *)FIELD_U32(a1 + (1) * 16, 0x0) + 88))(FIELD_U32(a1 + (1) * 16, 0x0), v37);
        v56 = &sead__SafeStringBase__vtable;
        v57 = v38;
        (*(void (__fastcall **)(int *))(dword_60C8D920[0] + 12))(dword_60C8D920);
        v39 = 0;
        if ( v38 != dword_60C8D924 )
        {
          v40 = 0;
          while ( *(unsigned __int8 *)(v57 + v40) == *(unsigned __int8 *)(dword_60C8D924 + v40) )
          {
            v39 = 0;
            if ( *(_BYTE *)(v57 + v40) )
            {
              if ( ++v40 < v17 )
                continue;
            }
            goto LABEL_69;
          }
          ((void (__fastcall *)(int (***)()))v56[3])(&v56);
          ((void (__fastcall *)(int (***)()))v56[3])(&v56);
          (*(void (__fastcall **)(int *))(dword_60C8D92C + 12))(&dword_60C8D92C);
          v39 = 1;
        }
LABEL_69:
        v41 = FIELD_U32(a1 + (7) * 16, 0x4);
        v42 = FIELD_U32(a1 + (7) * 16, 0xC);
        v43 = 0;
        if ( v42 < v41 )
        {
          FIELD_U32(a1 + (7) * 16, 0xC) = v42 + 1;
          v44 = FIELD_U32(a1 + (7) * 16, 0x8) + v42;
          v28 = __OFSUB__(v44, v41);
          v45 = v44 - v41;
          if ( v45 < 0 != v28 )
            v45 = v44;
          v43 = FIELD_U32(a1 + (7) * 16, 0x0) + 72 * v45;
        }
        sub_6023473C(v43, v37++, LOBYTE(dword_60C8D920[3 * v39 + 2]), a1);
      }
      while ( v37 != v8 );
LABEL_74:
      v6 = &FIELD_U32(a1 + (2) * 16, 0x8);
    }
    v14 = &FIELD_U32(a1 + (7) * 16, 0xC);
  }
  if ( *v14 >= 1 )
  {
    Resource = LoadResource(ResourceMgrRelated_instance, &dword_60C8D938);
    sub_6042FDC8(dword_60C9C2D0, v6, *v14);
    v47 = FIELD_U32(a1 + (2) * 16, 0x8);
    if ( v47 )
    {
      vtable = FIELD_U32(a1 + (3) * 16, 0x0);
      v49 = 4 * v47;
      v50 = 0;
      do
      {
        v51 = FIELD_U32(a1 + (7) * 16, 0x4);
        v52 = FIELD_U32(a1 + (7) * 16, 0x8);
        if ( v50 + v52 >= v51 )
          v52 -= v51;
        sub_60234748(FIELD_U32(a1 + (7) * 16, 0x0) + 72 * (v50 + v52), a2, Resource, *(_DWORD *)(vtable + 4 * v50));
        v49 -= 4;
        ++v50;
      }
      while ( v49 );
    }
  }
  return a1;
}

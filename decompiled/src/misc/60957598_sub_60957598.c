/* sub_60957598
 * address: 0x60957598   size: 1480   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60957598(int a1, int a2)
{
  int v4; // r8
  int v5; // r0
  int *v6; // r2
  char v7; // r1
  int v8; // r6
  bool v9; // zf
  __int16 v10; // r5
  unsigned int v11; // r0
  int v12; // r2
  int *v13; // r0
  int v14; // r1
  int v15; // r1
  int *v16; // r5
  int i; // r7
  int v18; // r6
  int v19; // r0
  unsigned int v20; // r2
  int v21; // r0
  int v22; // r5
  int v23; // r1
  _DWORD *v24; // r6
  bool v25; // zf
  int v26; // r8
  int v27; // r7
  unsigned int v28; // r6
  int v29; // r2
  int v30; // r10
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // r5
  int *v36; // r6
  int v37; // r0
  bool v38; // zf
  int v39; // r10
  int v40; // r6
  int v41; // r5
  int v42; // r7
  unsigned int v43; // r1
  int v44; // r0
  int v45; // r9
  int v46; // r0
  int v47; // r8
  _BYTE **v48; // r10
  _BYTE *v49; // r6
  int v50; // r0
  unsigned int v51; // r2
  int v52; // r0
  unsigned int v53; // r7
  unsigned int v54; // r2
  unsigned int v55; // r7
  unsigned int v56; // r7
  unsigned int v57; // r7
  unsigned __int8 v59; // [sp+14h] [bp-34h]
  int v60; // [sp+18h] [bp-30h]
  int v61; // [sp+1Ch] [bp-2Ch]
  int v62; // [sp+20h] [bp-28h]

  v4 = a1 + 800;
  sead__CriticalSection__lock(a1 + 800);
  v5 = FIELD_U32(a1, 32);
  if ( v5 )
  {
    v6 = *(int **)(a1 + 36);
    v7 = 0;
    do
    {
      v8 = *v6;
      v9 = *v6 == 0;
      if ( *v6 )
        v9 = (FIELD_U8(v8, 80) & 0x20) == 0;
      if ( !v9 )
      {
        FIELD_U32(a1, 248) |= 1u;
        v10 = FIELD_U16(v8, 80);
        if ( (v10 & 0x800) != 0 )
        {
          v10 &= ~0x10u;
          v7 = 1;
          FIELD_U16(v8, 80) = v10;
        }
        FIELD_U16(v8, 80) = v10 & 0xFFDF;
      }
      --v5;
      ++v6;
    }
    while ( v5 );
  }
  else
  {
    v7 = 0;
  }
  v11 = FIELD_U32(a1, 248);
  if ( (v11 & 1) != 0 )
  {
    v12 = FIELD_U32(a1, 32);
    if ( v12 && (((unsigned __int8)v7 ^ 1) & 1) == 0 )
    {
      v13 = *(int **)(a1 + 36);
      do
      {
        v14 = *v13;
        if ( *v13 && (FIELD_U16(v14, 80) & 0x800) == 0 )
          FIELD_U16(v14, 80) |= 0x10u;
        --v12;
        ++v13;
      }
      while ( v12 );
      v11 = FIELD_U32(a1, 248);
    }
    v11 &= ~1u;
    FIELD_U32(a1, 248) = v11;
  }
  v15 = FIELD_U32(a1, 24);
  v60 = v4;
  v59 = a2;
  if ( !v15 )
  {
    if ( (v11 & 0x10) == 0 )
      goto LABEL_49;
    goto LABEL_39;
  }
  v16 = *(int **)(a1 + 28);
  for ( i = v15 - 1; ; --i )
  {
    v18 = *v16;
    v9 = (v11 & 4) == 0;
    v19 = *v16;
    v20 = *(_DWORD *)(*v16 + 2352) & 0xFFFFFFBF;
    if ( !v9 )
      v20 = *(_DWORD *)(*v16 + 2352) | 0x40;
    FIELD_U32(v18, 2352) = v20;
    sub_60974F74(v19);
    v21 = FIELD_U32(v18, 2352);
    if ( (v21 & 0x100) != 0 )
    {
      FIELD_U32(v18, 2352) = v21 & 0xFFFFFEFF;
      FIELD_U32(a1, 248) |= 0x10u;
    }
    if ( !i )
      break;
    v11 = FIELD_U32(a1, 248);
    ++v16;
  }
  v22 = FIELD_U32(a1, 24);
  v11 = FIELD_U32(a1, 248);
  v23 = (v11 >> 4) & 1;
  if ( v22 )
  {
    v24 = *(_DWORD **)(a1 + 28);
    do
    {
      if ( (v11 & 0x8000) != 0 && ((v23 ^ 1) & 1) == 0 )
      {
        sub_609749E8(*v24);
        v11 = FIELD_U32(a1, 248);
      }
      --v22;
      ++v24;
      v23 = (v11 >> 4) & 1;
    }
    while ( v22 );
  }
  if ( v23 )
  {
LABEL_39:
    v25 = (v11 & 0x8000) == 0;
    if ( (v11 & 0x8000) != 0 )
    {
      a2 = FIELD_U32(a1, 24);
      v25 = a2 == 0;
    }
    if ( !v25 )
    {
      v26 = FIELD_U32(a1, 28);
      v27 = 0;
      do
      {
        v28 = FIELD_U32(a1, 248);
        v29 = 0;
        if ( v27 )
        {
          v29 = 0;
          if ( (v28 & 8) != 0 )
            v29 = **(_DWORD **)(a1 + 28);
        }
        v30 = -1;
        if ( (v28 & 0x20) != 0 )
          v30 = FIELD_U8(a1, 870);
        sub_609750D0(
          *(_DWORD *)(v26 + 4 * v27++),
          FIELD_U32(a1, 20),
          v29,
          FIELD_U32(a1, 240),
          FIELD_U8(a1, 869),
          FIELD_U32(a1, 244),
          v30,
          (v28 >> 11) & 1,
          (v28 >> 13) & 1);
      }
      while ( a2 != v27 );
    }
  }
LABEL_49:
  v31 = FIELD_U32(a1, 836);
  if ( v31 == 1 )
  {
    v32 = FIELD_U32(a1, 844);
    if ( v32 )
    {
      if ( (FIELD_U8(a1, 253) & 1) != 0 )
      {
        if ( (FIELD_U8(v32, 4) & 0x20) != 0 )
        {
          v33 = FIELD_U32(a1, 840);
          v34 = v33 + 1;
          if ( v33 > 0 )
            v34 = 0;
          FIELD_U32(a1, 840) = v34;
        }
      }
      else
      {
        FIELD_U32(a1, 840) = 0;
      }
    }
  }
  v35 = FIELD_U32(a1, 32);
  if ( v35 )
  {
    v36 = *(int **)(a1 + 36);
    do
    {
      v37 = *v36;
      v38 = *v36 == 0;
      if ( *v36 )
      {
        FIELD_U8(v37, 90) = 0;
        v38 = (FIELD_U8(v37, 80) & 2) == 0;
      }
      if ( !v38 )
        ((void (*)(void))loc_609555AC)();
      --v35;
      ++v36;
    }
    while ( v35 );
    v31 = FIELD_U32(a1, 836);
  }
  if ( !v31 && FIELD_U8(a1, 865) )
    FIELD_U8(a1, 865) = 0;
  v39 = FIELD_U32(a1, 24);
  if ( v39 )
  {
    v40 = FIELD_U32(a1, 28);
    v41 = 0;
    v62 = FIELD_U32(a1, 24);
    v61 = v40;
    do
    {
      v42 = *(_DWORD *)(v40 + 4 * v41);
      v43 = FIELD_U32(v42, 2352) & 0xFFFFFF7F;
      if ( (FIELD_U32(a1, 248) & 0x400) != 0 )
        v43 = FIELD_U32(v42, 2352) | 0x80;
      v44 = *(_DWORD *)(v40 + 4 * v41);
      FIELD_U32(v42, 2352) = v43;
      sub_609757A8(v44);
      FIELD_U32(v42, 2332) = FIELD_U32(v42, 2308);
      FIELD_U32(v42, 2336) = FIELD_U32(v42, 2312);
      FIELD_U32(v42, 2340) = FIELD_U32(v42, 2316);
      FIELD_U32(v42, 2344) = FIELD_U32(v42, 2320);
      FIELD_U32(v42, 2348) = FIELD_U32(v42, 2324);
      v45 = FIELD_U8(v42, 4) == 0;
      if ( FIELD_U8(a1, 864) != 1 )
        v45 = FIELD_U8(v42, 4);
      v46 = FIELD_U32(v42, 2352);
      if ( (v46 & 1) == 0 )
      {
        v47 = FIELD_U32(a1, 32);
        if ( v47 )
        {
          v48 = *(_BYTE ***)(a1 + 36);
          do
          {
            v49 = *v48;
            if ( *v48 && sub_60956514(*v48) )
            {
              v50 = (unsigned __int8)v49[89];
              if ( v50 == 255 )
                LOBYTE(v50) = v49[88];
              if ( (char)v50 == v45 )
              {
                sub_609757C8(v42, v49);
                v49[90] |= 1 << v41;
              }
            }
            --v47;
            ++v48;
          }
          while ( v47 );
          v46 = FIELD_U32(v42, 2352);
          v39 = v62;
          v40 = v61;
        }
      }
      ++v41;
      v51 = v46 & 0xFFFFFFF7;
      if ( (FIELD_U32(a1, 248) & 2) == 0 )
        v51 = v46 | 8;
      FIELD_U32(v42, 2352) = v51;
    }
    while ( v41 != v39 );
  }
  v52 = FIELD_U32(a1, 248);
  v53 = 0;
  v54 = v52 & 0xFFFFBFFF;
  if ( (((v52 & 0x300) == 256) & v59) != 0 )
    v54 = v52 | 0x4000;
  FIELD_U32(a1, 248) = v54;
  sub_60977198(a1 + 64);
  FIELD_U32(a1, 248) = FIELD_U32(a1, 248) & 0xFFFFFEEF | 0x100;
  ++FIELD_U8(a1, 866);
  sub_6099EBC0(a1 + 276);
  if ( dword_60C5D314 )
  {
    do
      sub_6099EB58(a1 + 276, v53++, FIELD_U8(a1, 868));
    while ( v53 < dword_60C5D314 );
  }
  sub_6099EBC0(a1 + 404);
  if ( dword_60C5D314 )
  {
    v55 = 0;
    do
      sub_6099EB58(a1 + 404, v55++, FIELD_U8(a1, 868));
    while ( v55 < dword_60C5D314 );
  }
  sub_6099EBC0(a1 + 532);
  if ( dword_60C5D314 )
  {
    v56 = 0;
    do
      sub_6099EB58(a1 + 532, v56++, FIELD_U8(a1, 868));
    while ( v56 < dword_60C5D314 );
  }
  sub_6099EBC0(a1 + 660);
  if ( dword_60C5D314 )
  {
    v57 = 0;
    do
      sub_6099EB58(a1 + 660, v57++, FIELD_U8(a1, 868));
    while ( v57 < dword_60C5D314 );
  }
  return sead__CriticalSection__unlock(v60);
}

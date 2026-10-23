/* shadow_map_ref
 * address: 0x60965694   size: 1336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int *__fastcall shadow_map_ref(int a1, int a2, int a3, int a4)
{
  int v7; // r11
  int v8; // r3
  int v9; // r12
  bool v10; // zf
  _BYTE *v12; // r5
  int v13; // r6
  int v14; // r1
  int *v15; // r8
  int v16; // r0
  int *v17; // r0
  int **v18; // r8
  bool v19; // zf
  int v20; // r0
  int v21; // r0
  int v23; // r7
  int v24; // r1
  int *v25; // r0
  int v26; // r0
  int *v27; // r0
  bool v28; // zf
  int v29; // r0
  int *v30; // r7
  int v31; // r1
  int v32; // r3
  int v33; // r4
  int v34; // r5
  int v35; // r6
  int v36; // r2
  int v37; // r3
  int v38; // r4
  int v39; // r5
  int v40; // r6
  int v41; // r2
  int v42; // r3
  int v43; // r4
  int v44; // r5
  int v45; // r6
  unsigned int *v46; // r7
  unsigned int v47; // r0
  unsigned int v48; // r1
  unsigned int v49; // r0
  int v50; // r2
  int v51; // r1
  int v52; // r0
  int v53; // r3
  bool v54; // zf
  unsigned int v55; // r0
  bool v56; // zf
  int *v57; // r1
  int v59; // [sp+0h] [bp-60h]
  int v60; // [sp+0h] [bp-60h]
  int v61; // [sp+0h] [bp-60h]
  int v62; // [sp+0h] [bp-60h]
  int v63; // [sp+0h] [bp-60h]
  int v64; // [sp+0h] [bp-60h]
  int v65; // [sp+24h] [bp-3Ch]
  int (**v66)(); // [sp+28h] [bp-38h] BYREF
  const char *v67; // [sp+2Ch] [bp-34h]
  int v68; // [sp+30h] [bp-30h] BYREF
  int v69; // [sp+34h] [bp-2Ch]
  int v70; // [sp+38h] [bp-28h]

  v7 = 20;
  v8 = 60;
  v65 = dword_60CD09F8;
  v68 = 0;
  v69 = 0;
  v70 = 0;
  v9 = FIELD_U8(a1, 172) ^ 1;
  if ( FIELD_U8(a1, 140) )
  {
    v7 = 5;
    v8 = 59;
  }
  v10 = a3 == 1;
  if ( a3 == 1 )
    v10 = FIELD_U8(a1, 124) == 0;
  if ( v10 )
  {
    v12 = (_BYTE *)(a1 + 156);
    v23 = FIELD_U8(a1, 108);
    v24 = FIELD_U32(a1, 76);
    if ( FIELD_U8(a1, 156) )
    {
      v62 = FIELD_U32(a1, 60);
      v66 = &sead__SafeStringBase__vtable;
      v67 = "shadow_map_depth";
      v25 = &v68;
      if ( !v23 )
        v25 = 0;
      v26 = sub_6093E948(dword_60CD09F8, a2, (int)&v66, v8, v62, v24, a4, (int)v25, v9, 1, 0);
    }
    else
    {
      v63 = FIELD_U32(a1, 60);
      v66 = &sead__SafeStringBase__vtable;
      v67 = "shadow_map_depth";
      v27 = &v68;
      if ( !v23 )
        v27 = 0;
      v26 = sub_6093E338(dword_60CD09F8, a2, (int)&v66, v8, v63, v24, a4, (int)v27);
    }
    FIELD_U32(a1, 324) = v26;
    v18 = (int **)(a1 + 324);
    v28 = FIELD_U8(a1, 188) == 0;
    if ( FIELD_U8(a1, 188) )
      v28 = FIELD_U8(a1, 108) == 0;
    if ( !v28 )
    {
      v29 = FIELD_U32(a1, 76);
      v64 = FIELD_U32(a1, 60);
      if ( FIELD_U8(a1, 156) )
      {
        v66 = &sead__SafeStringBase__vtable;
        v67 = "shadow_map_expand_mem2";
        v21 = sub_6093E948(v65, a2, (int)&v66, v7, v64, v29, a4, 0, 1, 1, 0);
      }
      else
      {
        v66 = &sead__SafeStringBase__vtable;
        v67 = "shadow_map_expand_mem2";
        v21 = sub_6093E338(v65, a2, (int)&v66, v7, v64, v29, a4, 0);
      }
      goto LABEL_32;
    }
  }
  else
  {
    v12 = (_BYTE *)(a1 + 156);
    v13 = FIELD_U8(a1, 108);
    v14 = FIELD_U32(a1, 76);
    if ( FIELD_U8(a1, 156) )
    {
      v15 = &v68;
      v59 = FIELD_U32(a1, 60);
      if ( !FIELD_U8(a1, 108) )
        v15 = 0;
      v66 = &sead__SafeStringBase__vtable;
      v67 = "shadow_map_depth";
      v16 = sub_6093E9B0(dword_60CD09F8, a2, (int)&v66, v8, v59, v14, a3, a4, (int)v15, v9, 1, 0);
    }
    else
    {
      v60 = FIELD_U32(a1, 60);
      v66 = &sead__SafeStringBase__vtable;
      v67 = "shadow_map_depth";
      v17 = &v68;
      if ( !v13 )
        v17 = 0;
      v16 = sub_6093E7C0(dword_60CD09F8, a2, (int)&v66, v8, v60, v14, a3, a4, (int)v17, v9, 1, 0);
    }
    FIELD_U32(a1, 324) = v16;
    v18 = (int **)(a1 + 324);
    v19 = FIELD_U8(a1, 188) == 0;
    if ( FIELD_U8(a1, 188) )
      v19 = FIELD_U8(a1, 108) == 0;
    if ( !v19 )
    {
      v20 = FIELD_U32(a1, 76);
      v61 = FIELD_U32(a1, 60);
      if ( FIELD_U8(a1, 156) )
      {
        v66 = &sead__SafeStringBase__vtable;
        v67 = "shadow_map_expand_mwm2";
        v21 = sub_6093E9B0(v65, a2, (int)&v66, v7, v61, v20, a3, a4, 0, 1, 1, 0);
      }
      else
      {
        v66 = &sead__SafeStringBase__vtable;
        v67 = "shadow_map_expand_mem2";
        v21 = sub_6093E7C0(v65, a2, (int)&v66, v7, v61, v20, a3, a4, 0, 1, 1, 0);
      }
LABEL_32:
      FIELD_U32(a1, 328) = v21;
    }
  }
  FIELD_U8(a1, 3664) = *v12;
  v30 = *v18;
  v32 = (*v18)[1];
  v33 = (*v18)[2];
  v34 = (*v18)[3];
  v35 = (*v18)[4];
  v31 = (int)(*v18 + 5);
  FIELD_U32(a1, 1736) = **v18;
  FIELD_U32(a1, 1740) = v32;
  FIELD_U32(a1, 1744) = v33;
  FIELD_U32(a1, 1748) = v34;
  FIELD_U32(a1, 1752) = v35;
  v36 = *(_DWORD *)v31;
  v37 = FIELD_U32(v31, 4);
  v38 = FIELD_U32(v31, 8);
  v39 = FIELD_U32(v31, 12);
  v40 = FIELD_U32(v31, 16);
  v31 += 20;
  FIELD_U32(a1, 1756) = v36;
  FIELD_U32(a1, 1760) = v37;
  FIELD_U32(a1, 1764) = v38;
  FIELD_U32(a1, 1768) = v39;
  FIELD_U32(a1, 1772) = v40;
  v41 = *(_DWORD *)v31;
  v42 = FIELD_U32(v31, 4);
  v43 = FIELD_U32(v31, 8);
  v44 = FIELD_U32(v31, 12);
  v45 = FIELD_U32(v31, 16);
  v31 += 20;
  FIELD_U32(a1, 1776) = v41;
  FIELD_U32(a1, 1780) = v42;
  FIELD_U32(a1, 1784) = v43;
  FIELD_U32(a1, 1788) = v44;
  FIELD_U32(a1, 1792) = v45;
  LOWORD(v41) = *(_WORD *)v31;
  FIELD_U8(a1, 1798) = FIELD_U8(v31, 2);
  FIELD_U16(a1, 1796) = v41;
  sub_60917754(a1 + 1800, (int)(v30 + 16));
  FIELD_U32(a1, 2000) = v30[66];
  v46 = (unsigned int *)(a1 + 2008);
  do
    v47 = __ldrex(v46);
  while ( __strex(v47 | 4, v46) );
  if ( FIELD_U16(a1, 2012) )
  {
    do
      v48 = __ldrex(v46);
    while ( __strex(v48 | 2, v46) );
    FIELD_U16(a1, 2012) = 0;
  }
  if ( FIELD_U8(a1, 2014) )
  {
    do
      v49 = __ldrex(v46);
    while ( __strex(v49 | 1, v46) );
    FIELD_U8(a1, 2014) = 0;
  }
  sub_6091ACB0((_DWORD *)(a1 + 1736));
  if ( FIELD_U8(a1, 108) )
  {
    v50 = v68;
    v51 = v69;
    v52 = v70;
  }
  else
  {
    v52 = 0;
    v51 = 0;
    v50 = 0;
  }
  if ( v50 != FIELD_U32(a1, 2024) )
    goto LABEL_48;
  v53 = FIELD_U32(a1, 2028);
  v54 = v51 == v53;
  if ( v51 == v53 )
    v54 = v52 == FIELD_U32(a1, 2032);
  if ( !v54 )
  {
LABEL_48:
    FIELD_U32(a1, 2024) = v50;
    FIELD_U32(a1, 2028) = v51;
    FIELD_U32(a1, 2032) = v52;
    do
      v55 = __ldrex(v46);
    while ( __strex(v55 | 8, v46) );
  }
  v56 = FIELD_U8(a1, 188) == 0;
  if ( FIELD_U8(a1, 188) )
    v56 = FIELD_U8(a1, 108) == 0;
  if ( v56 )
    v57 = *v18;
  else
    v57 = *(int **)(a1 + 328);
  return sub_60920EC8(a1 + 336, v57);
}

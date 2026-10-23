/* sub_60977A34
 * address: 0x60977A34   size: 6848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60977A34(int a1, signed int a2, int a3, int a4, signed int a5, void *a6)
{
  int v6; // r10
  void *v8; // r7
  int v9; // r11
  unsigned int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  int v13; // r10
  _DWORD *v14; // r7
  int v15; // r6
  int v16; // r5
  int i; // r4
  _QWORD *v18; // r0
  _QWORD *v19; // r5
  int v20; // r4
  int v21; // r9
  int j; // r5
  signed int v23; // r4
  char *v24; // r5
  char *v25; // r9
  bool v26; // cc
  char *v27; // r4
  char *v28; // r5
  signed int v29; // r6
  signed int v30; // r0
  signed int v31; // r4
  char *v32; // r5
  char *v33; // r9
  char *v34; // r5
  char *v35; // r6
  signed int v36; // r7
  signed int v37; // r0
  char *v38; // r4
  char *v39; // r5
  signed int v40; // r6
  char *v41; // r4
  char *v42; // r5
  signed int v43; // r6
  signed int v44; // r0
  int v45; // r6
  signed int v46; // r5
  unsigned int v47; // r0
  _DWORD *v48; // r0
  _DWORD *v49; // r4
  _DWORD *v50; // r1
  unsigned int v51; // r4
  int v52; // r5
  int v53; // r9
  int v54; // r7
  unsigned int v55; // r0
  int v56; // r10
  char *v57; // r4
  bool v58; // zf
  char *v59; // r7
  signed int v60; // r5
  char *v61; // r4
  char *v62; // r7
  signed int v63; // r5
  signed int v64; // r0
  char *v65; // r4
  char *v66; // r7
  signed int v67; // r5
  char *v68; // r4
  char *v69; // r7
  signed int v70; // r5
  signed int v71; // r0
  void *v72; // r9
  int v73; // r7
  const void *v74; // r4
  int v75; // r0
  signed int v76; // r5
  signed int v77; // r0
  void *v78; // r4
  int v79; // r7
  const void *v80; // r9
  int v81; // r0
  signed int v82; // r5
  signed int v83; // r0
  signed int v84; // r4
  _DWORD *v85; // r0
  char *v86; // r5
  char *v87; // r6
  signed int v88; // r0
  _DWORD *v90; // [sp+90h] [bp-470h]
  int v91; // [sp+98h] [bp-468h]
  int v92; // [sp+9Ch] [bp-464h]
  bool v93; // [sp+A8h] [bp-458h]
  unsigned int v94; // [sp+ACh] [bp-454h]
  _DWORD *v95; // [sp+B0h] [bp-450h]
  int v96; // [sp+B0h] [bp-450h]
  _DWORD *v97; // [sp+B4h] [bp-44Ch]
  int (**v98)(); // [sp+B8h] [bp-448h] BYREF
  char *v99; // [sp+BCh] [bp-444h]
  int v100; // [sp+C0h] [bp-440h]
  _BYTE v101[828]; // [sp+C4h] [bp-43Ch] BYREF
  int (**v102)(); // [sp+4C4h] [bp-3Ch] BYREF
  const char *v103; // [sp+4C8h] [bp-38h]
  int (**v104)(); // [sp+4CCh] [bp-34h] BYREF
  const char *v105; // [sp+4D0h] [bp-30h]
  int (**v106)(); // [sp+4D4h] [bp-2Ch] BYREF
  char *v107; // [sp+4D8h] [bp-28h]

  v6 = a1;
  v8 = a6;
  FIELD_U8(a1, 841) = a2;
  FIELD_U32(a1, 204) = a3;
  v9 = a1;
  if ( a2 >= 1 )
    v9 = FIELD_U32(a3, 404);
  sub_60926604((_DWORD *)a1, a4, (int)a6);
  v97 = (_DWORD *)v6;
  if ( a5 >= 1 )
  {
    v10 = 2224 * a5 + 8;
    if ( v10 < 2224 * a5 )
      v10 = -1;
    if ( !is_mul_ok(0x8B0u, a5) )
      v10 = -1;
    v11 = (_DWORD *)sub_608DE334(v10, (int)a6, 4);
    v12 = v11;
    if ( v11 )
    {
      *v11 = 2224;
      v11[1] = a5;
      v13 = 0;
      v14 = v11 + 362;
      v95 = v11 + 2;
      do
      {
        sub_60919E88(&v12[v13 + 2]);
        sub_6091ABEC(&v12[v13 + 18]);
        sub_6091ABEC(&v12[v13 + 104]);
        sub_6091ABEC(&v12[v13 + 190]);
        sub_6091ABEC(&v12[v13 + 276]);
        sub_6091ABEC(&v14[v13]);
        sub_6091ABEC(&v12[v13 + 448]);
        sub_60921340((int)&v14[v13 + 172]);
        v13 += 556;
      }
      while ( 556 * a5 != v13 );
      v6 = (int)v97;
      v8 = a6;
      v97[53] = a5;
      v97[54] = v95;
    }
  }
  v15 = FIELD_U32(v6, 212);
  if ( v15 )
  {
    v16 = FIELD_U32(v6, 216) + 2128;
    if ( v9 == v6 )
    {
      for ( i = 0; i != v15; ++i )
      {
        if ( i )
        {
          sub_6092166C(v16, (_DWORD *)(FIELD_U32(v9, 216) + 2128));
        }
        else
        {
          sub_609214AC(v16, 2u, v8);
          sub_60921540(v16, 6, 1, 0, 1u);
          sub_60921540(v16, 6, 8, 0, 1u);
        }
        sub_609216EC(v16, v8, 2, 1);
        v16 += 2224;
      }
    }
    else
    {
      do
      {
        sub_6092166C(v16, (_DWORD *)(FIELD_U32(v9, 216) + 2128));
        sub_609216EC(v16, v8, 2, 1);
        v16 += 2224;
        --v15;
      }
      while ( v15 );
    }
  }
  if ( a2 )
  {
    sub_6092166C(v6 + 1624, (_DWORD *)(v9 + 1624));
  }
  else
  {
    sub_609214AC(v6 + 1624, 2u, v8);
    sub_60921540(v6 + 1624, 3, 1, 0, 1u);
    sub_60921540(v6 + 1624, 3, 1, 0, 1u);
  }
  sub_609216EC(v6 + 1624, v8, 2, 1);
  v18 = (_QWORD *)sub_608DE334(0x1E8u, (int)v8, 4);
  v19 = v18;
  if ( !v18 )
  {
    v21 = FIELD_U32(v6, 1720);
    if ( !v21 )
      goto LABEL_36;
    v20 = FIELD_U32(v6, 1724);
    if ( v9 == v6 )
      goto LABEL_31;
    do
    {
LABEL_29:
      sub_6092166C(v20, *(_DWORD **)(v9 + 1724));
      sub_609216EC(v20, v8, 2, 1);
      --v21;
      v20 += 96;
    }
    while ( v21 );
    goto LABEL_36;
  }
  v20 = (int)(v18 + 1);
  v21 = 5;
  *v18 = 0x500000060LL;
  sub_60921340((int)(v18 + 1));
  sub_60921340((int)(v19 + 13));
  sub_60921340((int)(v19 + 25));
  sub_60921340((int)(v19 + 37));
  sub_60921340((int)(v19 + 49));
  FIELD_U32(v6, 1720) = 5;
  FIELD_U32(v6, 1724) = v20;
  if ( v9 != v6 )
    goto LABEL_29;
LABEL_31:
  for ( j = 0; j != v21; ++j )
  {
    if ( j )
    {
      sub_6092166C(v20, *(_DWORD **)(v9 + 1724));
    }
    else
    {
      sub_609214AC(v20, 3u, v8);
      sub_60921540(v20, 3, 8, 0, 1u);
      sub_60921540(v20, 3, 8, 0, 1u);
      sub_60921540(v20, 6, 16, 0, 1u);
    }
    sub_609216EC(v20, v8, 2, 1);
    v20 += 96;
  }
LABEL_36:
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v107 = "lighting_hint";
  v105 = (const char *)&unk_60AEB0B8;
  v99 = &byte_60ABC94D;
  sub_60941A08(v6 + 1752, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  v23 = 0;
  FIELD_U32(v6, 1764) = 0;
  v106 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "hdr_enable";
  v105 = "HDR";
  sub_60941A08(v6 + 1768, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U8(v6, 1780) = 0;
  v99 = v101;
  v98 = &BufferedSafeStringBase_char_vtable_probably;
  v100 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v98);
  v98 = &off_60BD4C38;
  v24 = v99;
  off_60C5CB30[3]();
  v25 = off_60C5CB34;
  if ( v24 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    while ( off_60C5CB34[v23] )
    {
      if ( !off_60C5CB34[v23 + 1] )
      {
        ++v23;
        break;
      }
      if ( !off_60C5CB34[v23 + 2] )
      {
        v23 += 2;
        break;
      }
      v26 = v23 + 2 <= 0x7FFFF;
      v23 += 3;
      if ( !v26 )
      {
        v23 = 0;
        break;
      }
    }
    if ( v23 >= v100 )
      v23 = v100 - 1;
    qmemcpy(v24, v25, v23);
    v24[v23] = 0;
  }
  v98 = &off_60BD4C20;
  v104 = &sead__SafeStringBase__vtable;
  v105 = "rim_light_ref";
  v102 = &sead__SafeStringBase__vtable;
  v106 = &sead__SafeStringBase__vtable;
  v103 = (const char *)&unk_60AF0F32;
  v107 = &byte_60ABC94D;
  sub_60941A08(v6 + 1864, (int *)&v104, (int)&v102, (int)&v106, v6 + 168);
  v27 = *(char **)(v6 + 1880);
  ((void (__fastcall *)(int (***)()))v98[3])(&v98);
  v28 = v99;
  if ( v27 != v99 )
  {
    ((void (__fastcall *)(int (***)()))v98[3])(&v98);
    v29 = 0;
    while ( v99[v29] )
    {
      if ( !v99[v29 + 1] )
      {
        ++v29;
        break;
      }
      if ( !v99[v29 + 2] )
      {
        v29 += 2;
        break;
      }
      v26 = v29 + 2 <= 0x7FFFF;
      v29 += 3;
      if ( !v26 )
      {
        v29 = 0;
        break;
      }
    }
    v30 = FIELD_U32(v6, 1884);
    if ( v29 >= v30 )
      v29 = v30 - 1;
    qmemcpy(v27, v28, v29);
    v27[v29] = 0;
  }
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v107 = "rim_enable";
  v105 = (const char *)&unk_60AEAF58;
  v99 = &byte_60ABC94D;
  sub_60941A08(v6 + 1784, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  v31 = 0;
  FIELD_U8(v6, 1796) = 0;
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "rim_effect";
  v105 = (const char *)&unk_60AF0F4F;
  sub_60941A08(v6 + 1800, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 1812) = 1065353216;
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "rim_width";
  v105 = (const char *)&unk_60AF0F75;
  sub_60941A08(v6 + 1816, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 1828) = 1065353216;
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "rim_angle";
  v105 = (const char *)&unk_60AF0F86;
  sub_60941A08(v6 + 1848, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 1860) = 1065353216;
  v106 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "rim_pow";
  v105 = (const char *)&unk_60AF0F98;
  sub_60941A08(v6 + 1832, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 1844) = 0x40000000;
  v99 = v101;
  v98 = &BufferedSafeStringBase_char_vtable_probably;
  v100 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v98);
  v98 = &off_60BD4C38;
  v32 = v99;
  off_60C5CB30[3]();
  v33 = off_60C5CB34;
  if ( v32 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    while ( off_60C5CB34[v31] )
    {
      if ( !off_60C5CB34[v31 + 1] )
      {
        ++v31;
        break;
      }
      if ( !off_60C5CB34[v31 + 2] )
      {
        v31 += 2;
        break;
      }
      v26 = v31 + 2 <= 0x7FFFF;
      v31 += 3;
      if ( !v26 )
      {
        v31 = 0;
        break;
      }
    }
    if ( v31 >= v100 )
      v31 = v100 - 1;
    qmemcpy(v32, v33, v31);
    v32[v31] = 0;
  }
  v98 = &off_60BD4C20;
  v104 = &sead__SafeStringBase__vtable;
  v105 = "parent_map";
  v102 = &sead__SafeStringBase__vtable;
  v106 = &sead__SafeStringBase__vtable;
  v103 = (const char *)&unk_60AF0FAA;
  v107 = &byte_60ABC94D;
  sub_60941A08(v6 + 1960, (int *)&v104, (int)&v102, (int)&v106, v6 + 168);
  v34 = *(char **)(v6 + 1976);
  ((void (__fastcall *)(int (***)()))v98[3])(&v98);
  v35 = v99;
  if ( v34 != v99 )
  {
    ((void (__fastcall *)(int (***)()))v98[3])(&v98);
    v36 = 0;
    while ( v99[v36] )
    {
      if ( !v99[v36 + 1] )
      {
        ++v36;
        break;
      }
      if ( !v99[v36 + 2] )
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
    v37 = FIELD_U32(v6, 1980);
    if ( v36 >= v37 )
      v36 = v37 - 1;
    qmemcpy(v34, v35, v36);
    v34[v36] = 0;
  }
  v99 = v101;
  v98 = &BufferedSafeStringBase_char_vtable_probably;
  v100 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v98);
  v98 = &off_60BD4C38;
  v38 = v99;
  off_60C5CB30[3]();
  v39 = off_60C5CB34;
  if ( v38 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    v40 = 0;
    while ( off_60C5CB34[v40] )
    {
      if ( !off_60C5CB34[v40 + 1] )
      {
        ++v40;
        break;
      }
      if ( !off_60C5CB34[v40 + 2] )
      {
        v40 += 2;
        break;
      }
      v26 = v40 + 2 <= 0x7FFFF;
      v40 += 3;
      if ( !v26 )
      {
        v40 = 0;
        break;
      }
    }
    if ( v40 >= v100 )
      v40 = v100 - 1;
    qmemcpy(v38, v39, v40);
    v38[v40] = 0;
  }
  v98 = &off_60BD4C20;
  v104 = &sead__SafeStringBase__vtable;
  v105 = "copy_map";
  v102 = &sead__SafeStringBase__vtable;
  v106 = &sead__SafeStringBase__vtable;
  v103 = (const char *)&unk_60AF0FC9;
  v107 = &byte_60ABC94D;
  sub_60941A08(v6 + 2016, (int *)&v104, (int)&v102, (int)&v106, v6 + 168);
  v41 = *(char **)(v6 + 2032);
  ((void (__fastcall *)(int (***)()))v98[3])(&v98);
  v42 = v99;
  if ( v41 != v99 )
  {
    ((void (__fastcall *)(int (***)()))v98[3])(&v98);
    v43 = 0;
    while ( v99[v43] )
    {
      if ( !v99[v43 + 1] )
      {
        ++v43;
        break;
      }
      if ( !v99[v43 + 2] )
      {
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
    v44 = FIELD_U32(v6, 2036);
    if ( v43 >= v44 )
      v43 = v44 - 1;
    qmemcpy(v41, v42, v43);
    v41[v43] = 0;
  }
  v106 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v107 = "mapping_type";
  v105 = (const char *)&unk_60AF0FF2;
  v99 = &byte_60ABC94D;
  sub_60941A08(v6 + 1944, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 1956) = 0;
  v45 = FIELD_U8(v6, 841);
  v106 = &sead__SafeStringBase__vtable;
  v98 = &sead__SafeStringBase__vtable;
  v104 = &sead__SafeStringBase__vtable;
  v99 = &byte_60ABC94D;
  v107 = "priority";
  v105 = (const char *)&unk_60AF100B;
  sub_60941A08(v6 + 2072, (int *)&v106, (int)&v104, (int)&v98, v6 + 168);
  FIELD_U32(v6, 2084) = v45;
  v46 = FIELD_U32(v6, 20);
  if ( v46 >= 1 )
  {
    v47 = 216 * v46 + 8;
    if ( v47 < 216 * v46 )
      v47 = -1;
    if ( !is_mul_ok(0xD8u, v46) )
      v47 = -1;
    v48 = (_DWORD *)sub_608DE334(v47, (int)a6, 4);
    if ( v48 )
    {
      *v48 = 216;
      v48[1] = v46;
      v90 = v48 + 2;
      v49 = v48 + 52;
      v96 = (int)&v48[54 * v46 + 2];
      do
      {
        default_ref_9419C8(v49 - 50);
        *(v49 - 50) = &off_60C5E01C;
        default_ref_9419C8(v49 - 46);
        *(v49 - 46) = &off_60C5DC9C;
        default_ref_9419C8(v49 - 42);
        *(v49 - 42) = &off_60C5DC9C;
        default_ref_9419C8(v49 - 38);
        *(v49 - 38) = &off_60C5DC9C;
        default_ref_9419C8(v49 - 34);
        *(v49 - 34) = &off_60C5D898;
        *(v49 - 30) = v49 - 28;
        *(v49 - 31) = &BufferedSafeStringBase_char_vtable_probably;
        *(v49 - 29) = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v49 - 31));
        *(_BYTE *)*(v49 - 30) = 0;
        *(v49 - 31) = &off_60BD4C20;
        default_ref_9419C8(v49 - 19);
        *(v49 - 19) = &off_60C5D898;
        *(v49 - 15) = v49 - 13;
        *(v49 - 16) = &BufferedSafeStringBase_char_vtable_probably;
        *(v49 - 14) = 32;
        sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v49 - 16));
        *(_BYTE *)*(v49 - 15) = 0;
        *(v49 - 16) = &off_60BD4C20;
        default_ref_9419C8(v49 - 4);
        *(v49 - 4) = &off_60C5D848;
        default_ref_9419C8(v49);
        *v49 = &off_60C5D848;
        v50 = v49 + 4;
        v49 += 54;
      }
      while ( v50 != (_DWORD *)v96 );
      v6 = (int)v97;
      v97[403] = v46;
      v97[404] = v90;
    }
  }
  v92 = FIELD_U32(v6, 1612);
  if ( v92 )
  {
    v51 = 0;
    v91 = FIELD_U32(v6, 1616);
    do
    {
      v52 = sub_60923F24(v6, v51);
      v53 = FIELD_U32(v6, 200);
      v54 = *(__int16 *)dword_60CD09C8;
      v55 = FIELD_U32(v6, 196);
      v106 = &sead__SafeStringBase__vtable;
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v107 = "calc_type";
      v94 = v51;
      v99 = &byte_60ABC94D;
      v105 = (const char *)&unk_60AF102B;
      if ( v55 > v51 )
        v53 += 164 * v51;
      v56 = v91 + 216 * v51;
      sub_60941A08(v56, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U32(v56, 12) = 0;
      v99 = v101;
      v98 = &BufferedSafeStringBase_char_vtable_probably;
      v100 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v98);
      v98 = &off_60BD4C38;
      v57 = v99;
      ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
      v58 = v52 == v54;
      v59 = off_60C5CB34;
      v93 = !v58;
      if ( v57 != off_60C5CB34 )
      {
        ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
        v60 = 0;
        while ( off_60C5CB34[v60] )
        {
          if ( !off_60C5CB34[v60 + 1] )
          {
            ++v60;
            break;
          }
          if ( !off_60C5CB34[v60 + 2] )
          {
            v60 += 2;
            break;
          }
          v26 = v60 + 2 <= 0x7FFFF;
          v60 += 3;
          if ( !v26 )
          {
            v60 = 0;
            break;
          }
        }
        if ( v60 >= v100 )
          v60 = v100 - 1;
        qmemcpy(v57, v59, v60);
        v57[v60] = 0;
      }
      v98 = &off_60BD4C20;
      v104 = &sead__SafeStringBase__vtable;
      v105 = "lut_name";
      v102 = &sead__SafeStringBase__vtable;
      v106 = &sead__SafeStringBase__vtable;
      v103 = "LUT";
      v107 = &byte_60ABC94D;
      sub_60941A08(v56 + 64, (int *)&v104, (int)&v102, (int)&v106, v53);
      v61 = *(char **)(v56 + 80);
      ((void (__fastcall *)(int (***)()))v98[3])(&v98);
      v62 = v99;
      if ( v61 != v99 )
      {
        ((void (__fastcall *)(int (***)()))v98[3])(&v98);
        v63 = 0;
        while ( v99[v63] )
        {
          if ( !v99[v63 + 1] )
          {
            ++v63;
            break;
          }
          if ( !v99[v63 + 2] )
          {
            v63 += 2;
            break;
          }
          v26 = v63 + 2 <= 0x7FFFF;
          v63 += 3;
          if ( !v26 )
          {
            v63 = 0;
            break;
          }
        }
        v64 = FIELD_U32(v56, 84);
        if ( v63 >= v64 )
          v63 = v64 - 1;
        qmemcpy(v61, v62, v63);
        v61[v63] = 0;
      }
      v99 = v101;
      v98 = &BufferedSafeStringBase_char_vtable_probably;
      v100 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v98);
      v98 = &off_60BD4C38;
      v65 = v99;
      ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
      v66 = off_60C5CB34;
      if ( v65 != off_60C5CB34 )
      {
        ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
        v67 = 0;
        while ( off_60C5CB34[v67] )
        {
          if ( !off_60C5CB34[v67 + 1] )
          {
            ++v67;
            break;
          }
          if ( !off_60C5CB34[v67 + 2] )
          {
            v67 += 2;
            break;
          }
          v26 = v67 + 2 <= 0x7FFFF;
          v67 += 3;
          if ( !v26 )
          {
            v67 = 0;
            break;
          }
        }
        if ( v67 >= v100 )
          v67 = v100 - 1;
        qmemcpy(v65, v66, v67);
        v65[v67] = 0;
      }
      v98 = &off_60BD4C20;
      v104 = &sead__SafeStringBase__vtable;
      v105 = "lut_name_mip1";
      v102 = &sead__SafeStringBase__vtable;
      v106 = &sead__SafeStringBase__vtable;
      v103 = "LUT_MIP1";
      v107 = &byte_60ABC94D;
      sub_60941A08(v56 + 124, (int *)&v104, (int)&v102, (int)&v106, v53);
      v68 = *(char **)(v56 + 140);
      ((void (__fastcall *)(int (***)()))v98[3])(&v98);
      v69 = v99;
      if ( v68 != v99 )
      {
        ((void (__fastcall *)(int (***)()))v98[3])(&v98);
        v70 = 0;
        while ( v99[v70] )
        {
          if ( !v99[v70 + 1] )
          {
            ++v70;
            break;
          }
          if ( !v99[v70 + 2] )
          {
            v70 += 2;
            break;
          }
          v26 = v70 + 2 <= 0x7FFFF;
          v70 += 3;
          if ( !v26 )
          {
            v70 = 0;
            break;
          }
        }
        v71 = FIELD_U32(v56, 144);
        if ( v70 >= v71 )
          v70 = v71 - 1;
        qmemcpy(v68, v69, v70);
        v68[v70] = 0;
      }
      v106 = &sead__SafeStringBase__vtable;
      v107 = "effect";
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v99 = &byte_60ABC94D;
      v105 = (const char *)&unk_60AF0F4F;
      sub_60941A08(v56 + 16, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U32(v56, 28) = 1065353216;
      v106 = &sead__SafeStringBase__vtable;
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v99 = &byte_60ABC94D;
      v107 = "pow";
      v105 = (const char *)&unk_60AF0F98;
      sub_60941A08(v56 + 32, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U32(v56, 44) = 1112014848;
      v106 = &sead__SafeStringBase__vtable;
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v99 = &byte_60ABC94D;
      v107 = "pow_mip_max";
      v105 = (const char *)&unk_60AF106F;
      sub_60941A08(v56 + 48, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U32(v56, 60) = 0x40000000;
      v106 = &sead__SafeStringBase__vtable;
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v99 = &byte_60ABC94D;
      v107 = "enable_mip0";
      v105 = (const char *)&unk_60AF1096;
      sub_60941A08(v56 + 184, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U8(v56, 196) = 1;
      v106 = &sead__SafeStringBase__vtable;
      v104 = &sead__SafeStringBase__vtable;
      v98 = &sead__SafeStringBase__vtable;
      v99 = &byte_60ABC94D;
      v107 = "enable_mip1";
      v105 = (const char *)&unk_60AF10B2;
      sub_60941A08(v56 + 200, (int *)&v106, (int)&v104, (int)&v98, v53);
      FIELD_U8(v56, 212) = v93;
      v72 = *(void **)(v56 + 80);
      v73 = v97[51];
      (*(void (__fastcall **)(int))(FIELD_U32(v73, 2348) + 12))(v73 + 2348);
      v74 = *(const void **)(v73 + 2352);
      if ( v72 != v74 )
      {
        (*(void (__fastcall **)(int))(FIELD_U32(v73, 2348) + 12))(v73 + 2348);
        v75 = FIELD_U32(v73, 2352);
        v76 = 0;
        while ( *(_BYTE *)(v75 + v76) )
        {
          if ( !*(_BYTE *)(v75 + v76 + 1) )
          {
            ++v76;
            break;
          }
          if ( !*(_BYTE *)(v75 + v76 + 2) )
          {
            v76 += 2;
            break;
          }
          v26 = v76 + 2 <= 0x7FFFF;
          v76 += 3;
          if ( !v26 )
          {
            v76 = 0;
            break;
          }
        }
        v77 = FIELD_U32(v56, 84);
        if ( v76 >= v77 )
          v76 = v77 - 1;
        qmemcpy(v72, v74, v76);
        *((_BYTE *)v72 + v76) = 0;
      }
      v78 = *(void **)(v56 + 140);
      v79 = v97[51];
      (*(void (__fastcall **)(int))(FIELD_U32(v79, 2348) + 12))(v79 + 2348);
      v80 = *(const void **)(v79 + 2352);
      if ( v78 != v80 )
      {
        (*(void (__fastcall **)(int))(FIELD_U32(v79, 2348) + 12))(v79 + 2348);
        v81 = FIELD_U32(v79, 2352);
        v82 = 0;
        while ( *(_BYTE *)(v81 + v82) )
        {
          if ( !*(_BYTE *)(v81 + v82 + 1) )
          {
            ++v82;
            break;
          }
          if ( !*(_BYTE *)(v81 + v82 + 2) )
          {
            v82 += 2;
            break;
          }
          v26 = v82 + 2 <= 0x7FFFF;
          v82 += 3;
          if ( !v26 )
          {
            v82 = 0;
            break;
          }
        }
        v83 = FIELD_U32(v56, 144);
        if ( v82 >= v83 )
          v82 = v83 - 1;
        qmemcpy(v78, v80, v82);
        *((_BYTE *)v78 + v82) = 0;
      }
      v6 = (int)v97;
      sub_609795F8(v97, v94);
      v51 = v94 + 1;
    }
    while ( v94 + 1 != v92 );
  }
  sead__PtrArrayImpl__allocBuffer(v6 + 1728, *(_DWORD *)(FIELD_U32(v6, 204) + 400), (int)a6, 4);
  v84 = 0;
  FIELD_U32(v6, 1728) = 0;
  v85 = sub_604209A4(&v98, "LightMap%d", FIELD_U8(v6, 841));
  v86 = *(char **)(v6 + 88);
  ((void (__fastcall *)(_DWORD *))v98[3])(v85);
  v87 = v99;
  if ( v86 != v99 )
  {
    ((void (__fastcall *)(int (***)()))v98[3])(&v98);
    while ( v99[v84] )
    {
      if ( !v99[v84 + 1] )
      {
        ++v84;
        break;
      }
      if ( !v99[v84 + 2] )
      {
        v84 += 2;
        break;
      }
      v26 = v84 + 2 <= 0x7FFFF;
      v84 += 3;
      if ( !v26 )
      {
        v84 = 0;
        break;
      }
    }
    v88 = FIELD_U32(v6, 92);
    if ( v84 >= v88 )
      v84 = v88 - 1;
    qmemcpy(v86, v87, v84);
    v86[v84] = 0;
  }
  v98 = &sead__SafeStringBase__vtable;
  v99 = "Icon=TEXTURE";
  sub_60969510(v6 + 68, &v98);
  v98 = &sead__SafeStringBase__vtable;
  v99 = "Icon=FOLDER_BLUE";
  return sub_60969510(v6 + 1740, &v98);
}

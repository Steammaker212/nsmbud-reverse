/* sub_60926604
 * address: 0x60926604   size: 2304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60926604(_DWORD *a1, int a2, int a3)
{
  int v6; // lr
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r2
  unsigned int v10; // r7
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r4
  unsigned int v15; // r5
  int v16; // r4
  char *v17; // r5
  const char *v18; // r8
  signed int v19; // r7
  bool v20; // cc
  _DWORD *v21; // r9
  char *v22; // r5
  const char *v23; // r8
  signed int v24; // r6
  signed int v25; // r0
  int v26; // r4
  const char *v27; // r9
  int v28; // r0
  const char *v29; // r0
  char *v30; // r7
  const char *v31; // r6
  signed int v32; // r5
  const char *v33; // r7
  _DWORD *v34; // r8
  char *v35; // r9
  const char *v36; // r6
  signed int v37; // r5
  signed int v38; // r0
  char *v39; // r7
  char *v40; // r6
  signed int v41; // r5
  char *v42; // r7
  const char *v43; // r6
  signed int v44; // r5
  signed int v45; // r0
  _DWORD *v46; // r6
  int v48; // [sp+5Ch] [bp-45Ch]
  int v49; // [sp+64h] [bp-454h]
  int (**v50)(); // [sp+68h] [bp-450h] BYREF
  const char *v51; // [sp+6Ch] [bp-44Ch]
  int v52; // [sp+70h] [bp-448h]
  _BYTE v53[908]; // [sp+74h] [bp-444h] BYREF
  int (**v54)(); // [sp+474h] [bp-44h] BYREF
  void *v55; // [sp+478h] [bp-40h]
  int (**v56)(); // [sp+47Ch] [bp-3Ch] BYREF
  const char *v57; // [sp+480h] [bp-38h]
  int (**v58)(); // [sp+484h] [bp-34h] BYREF
  const char *v59; // [sp+488h] [bp-30h]
  int (**v60)(); // [sp+48Ch] [bp-2Ch] BYREF
  char *v61; // [sp+490h] [bp-28h]

  sub_60923C70((int)a1, a2, a3);
  sub_60927968(a1 + 49, FIELD_U32(a2, 516), a3, 4);
  v6 = dword_60CCFCA4;
  if ( dword_60CCFCA4 >= 1 )
  {
    v7 = a1[3];
    v8 = a1[4];
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = v8;
      if ( v7 > v10 )
        v11 = v8 + 4 * v10;
      if ( FIELD_U16(v11, 2) )
      {
        v12 = 164 * v9;
        v13 = 0;
        do
        {
          v14 = a1[50];
          v15 = v9 + v13++;
          if ( a1[49] > v15 )
            v14 += v12;
          v12 += 164;
          FIELD_U32(v14, 104) = v10;
          FIELD_U32(v14, 96) = a1 + 7;
          v7 = a1[3];
          v8 = a1[4];
          v16 = v8;
          if ( v7 > v10 )
            v16 = v8 + 4 * v10;
        }
        while ( v13 < FIELD_U16(v16, 2) );
        v9 += v13;
      }
      ++v10;
    }
    while ( v10 != v6 );
  }
  v58 = &sead__SafeStringBase__vtable;
  v59 = "EnvSet";
  v51 = v53;
  v50 = &BufferedSafeStringBase_char_vtable_probably;
  v52 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v50);
  v50 = &off_60BD4C38;
  v17 = (char *)v51;
  ((void (__fastcall *)(int (***)()))v58[3])(&v58);
  v18 = v59;
  if ( v17 != v59 )
  {
    ((void (__fastcall *)(int (***)()))v58[3])(&v58);
    v19 = 0;
    while ( v59[v19] )
    {
      if ( !v59[v19 + 1] )
      {
        ++v19;
        break;
      }
      if ( !v59[v19 + 2] )
      {
        v19 += 2;
        break;
      }
      v20 = v19 + 2 <= 0x7FFFF;
      v19 += 3;
      if ( !v20 )
      {
        v19 = 0;
        break;
      }
    }
    if ( v19 >= v52 )
      v19 = v52 - 1;
    qmemcpy(v17, v18, v19);
    v17[v19] = 0;
  }
  v21 = a1 + 42;
  v50 = &off_60BD4C20;
  v56 = &sead__SafeStringBase__vtable;
  v57 = "name";
  v54 = &sead__SafeStringBase__vtable;
  v60 = &sead__SafeStringBase__vtable;
  v55 = &unk_60AEB0AC;
  v61 = &byte_60ABC94D;
  sub_60941A08(a1 + 18, &v56, &v54, &v60, a1 + 42);
  v22 = (char *)a1[22];
  ((void (__fastcall *)(int (***)()))v50[3])(&v50);
  v23 = v51;
  if ( v22 != v51 )
  {
    ((void (__fastcall *)(int (***)()))v50[3])(&v50);
    v24 = 0;
    while ( v51[v24] )
    {
      if ( !v51[v24 + 1] )
      {
        ++v24;
        break;
      }
      if ( !v51[v24 + 2] )
      {
        v24 += 2;
        break;
      }
      v20 = v24 + 2 <= 0x7FFFF;
      v24 += 3;
      if ( !v20 )
      {
        v24 = 0;
        break;
      }
    }
    v25 = a1[23];
    if ( v24 >= v25 )
      v24 = v25 - 1;
    qmemcpy(v22, v23, v24);
    v22[v24] = 0;
  }
  v49 = a1[49];
  if ( v49 )
  {
    v26 = 0;
    v27 = v53;
    v48 = a1[50];
    do
    {
      v28 = sub_60923F24((int)a1, v26);
      v51 = v27;
      v29 = (const char *)dword_60CCFCA8[6 * v28];
      v58 = &sead__SafeStringBase__vtable;
      v59 = v29;
      v50 = &BufferedSafeStringBase_char_vtable_probably;
      v52 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v50);
      v50 = &off_60BD4C38;
      v30 = (char *)v51;
      ((void (__fastcall *)(int (***)()))v58[3])(&v58);
      v31 = v59;
      if ( v30 != v59 )
      {
        ((void (__fastcall *)(int (***)()))v58[3])(&v58);
        v32 = 0;
        while ( v59[v32] )
        {
          if ( !v59[v32 + 1] )
          {
            ++v32;
            break;
          }
          if ( !v59[v32 + 2] )
          {
            v32 += 2;
            break;
          }
          v20 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v20 )
          {
            v32 = 0;
            break;
          }
        }
        if ( v32 >= v52 )
          v32 = v52 - 1;
        qmemcpy(v30, v31, v32);
        v30[v32] = 0;
      }
      v33 = v27;
      v50 = &off_60BD4C20;
      v56 = &sead__SafeStringBase__vtable;
      v54 = &sead__SafeStringBase__vtable;
      v60 = &sead__SafeStringBase__vtable;
      v57 = "type";
      v61 = &byte_60ABC94D;
      v55 = &unk_60AEB0B8;
      v34 = (_DWORD *)(v48 + 164 * v26);
      sub_60941A08(v34 + 27, &v56, &v54, &v60, v34);
      v35 = (char *)v34[31];
      ((void (__fastcall *)(int (***)()))v50[3])(&v50);
      v36 = v51;
      if ( v35 != v51 )
      {
        ((void (__fastcall *)(int (***)()))v50[3])(&v50);
        v37 = 0;
        while ( v51[v37] )
        {
          if ( !v51[v37 + 1] )
          {
            ++v37;
            break;
          }
          if ( !v51[v37 + 2] )
          {
            v37 += 2;
            break;
          }
          v20 = v37 + 2 <= 0x7FFFF;
          v37 += 3;
          if ( !v20 )
          {
            v37 = 0;
            break;
          }
        }
        v38 = v34[32];
        if ( v37 >= v38 )
          v37 = v38 - 1;
        qmemcpy(v35, v36, v37);
        v35[v37] = 0;
      }
      v27 = v33;
      v51 = v33;
      v50 = &BufferedSafeStringBase_char_vtable_probably;
      v52 = 32;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v50);
      v50 = &off_60BD4C38;
      v39 = (char *)v51;
      ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
      v40 = off_60C5CB34;
      if ( v39 != off_60C5CB34 )
      {
        ((void (__fastcall *)(int (***)()))off_60C5CB30[3])(&off_60C5CB30);
        v41 = 0;
        while ( off_60C5CB34[v41] )
        {
          if ( !off_60C5CB34[v41 + 1] )
          {
            ++v41;
            break;
          }
          if ( !off_60C5CB34[v41 + 2] )
          {
            v41 += 2;
            break;
          }
          v20 = v41 + 2 <= 0x7FFFF;
          v41 += 3;
          if ( !v20 )
          {
            v41 = 0;
            break;
          }
        }
        if ( v41 >= v52 )
          v41 = v52 - 1;
        qmemcpy(v39, v40, v41);
        v39[v41] = 0;
      }
      v50 = &off_60BD4C20;
      v58 = &sead__SafeStringBase__vtable;
      v59 = "name";
      v56 = &sead__SafeStringBase__vtable;
      v60 = &sead__SafeStringBase__vtable;
      v57 = (const char *)&unk_60AEB0AC;
      v61 = &byte_60ABC94D;
      sub_60941A08(v34 + 7, &v58, &v56, &v60, v34);
      v42 = (char *)v34[11];
      ((void (__fastcall *)(int (***)()))v50[3])(&v50);
      v43 = v51;
      if ( v42 != v51 )
      {
        ((void (__fastcall *)(int (***)()))v50[3])(&v50);
        v44 = 0;
        while ( v51[v44] )
        {
          if ( !v51[v44 + 1] )
          {
            ++v44;
            break;
          }
          if ( !v51[v44 + 2] )
          {
            v44 += 2;
            break;
          }
          v20 = v44 + 2 <= 0x7FFFF;
          v44 += 3;
          if ( !v20 )
          {
            v44 = 0;
            break;
          }
        }
        v45 = v34[12];
        if ( v44 >= v45 )
          v44 = v45 - 1;
        qmemcpy(v42, v43, v44);
        v42[v44] = 0;
      }
      sub_604209A4(&v50, "%d", v26);
      v46 = a1 + 32;
      sub_60947360(a1 + 32, v34, &v50);
      ++v26;
    }
    while ( v26 != v49 );
    v21 = a1 + 42;
  }
  else
  {
    v46 = a1 + 32;
  }
  v50 = &sead__SafeStringBase__vtable;
  v51 = "setting";
  sub_60947360(a1 + 8, v21, &v50);
  v50 = &sead__SafeStringBase__vtable;
  v51 = "env_obj_ref_array";
  return sub_60947328(a1 + 8, v46, &v50);
}

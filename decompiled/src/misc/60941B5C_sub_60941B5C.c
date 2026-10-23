/* sub_60941B5C
 * address: 0x60941B5C   size: 1920   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60941B5C(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r0
  char *v7; // r7
  char *v8; // r5
  signed int v9; // r6
  bool v10; // cc
  const void **v11; // r7
  int v12; // r6
  int v13; // r5
  const char *v14; // r8
  int v15; // r7
  const char *v16; // r1
  float *v17; // r0
  int v18; // r2
  float *v19; // r0
  float *v20; // r0
  float *v21; // r0
  unsigned int v22; // r2
  int v23; // r2
  int result; // r0
  int v25; // r5
  int v26; // r0
  _BYTE *v27; // r0
  int v28; // r8
  signed int v29; // r5
  int v30; // r6
  signed int v31; // r5
  const char *v32; // [sp+20h] [bp-140h]
  int v33; // [sp+24h] [bp-13Ch]
  int (**v34)(); // [sp+28h] [bp-138h] BYREF
  const char *v35; // [sp+2Ch] [bp-134h]
  int v36; // [sp+30h] [bp-130h]
  int v37; // [sp+34h] [bp-12Ch] BYREF
  int (**v38)(); // [sp+134h] [bp-2Ch] BYREF
  char *v39; // [sp+138h] [bp-28h]

  v34 = &sead__SafeStringBase__vtable;
  v38 = &sead__SafeStringBase__vtable;
  v35 = "param";
  v39 = &byte_60ABC94D;
  v5 = sub_609A66E8(a2, &v34, &v38, a3);
  sub_609A5D84(v5, 3, a3);
  v34 = &sead__SafeStringBase__vtable;
  v38 = &sead__SafeStringBase__vtable;
  v35 = "name";
  v39 = off_60C5CB34;
  sub_609A6388(v5, &v34, &v38, a3);
  v34 = &sead__SafeStringBase__vtable;
  v35 = "type";
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1);
  v38 = &sead__SafeStringBase__vtable;
  v33 = v5;
  v39 = off_60C5E454[v6];
  sub_609A6388(v5, &v34, &v38, a3);
  v35 = (const char *)&v37;
  v34 = &BufferedSafeStringBase_char_vtable_probably;
  v36 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v34);
  *v35 = 0;
  v34 = &off_60BD94BC;
  v7 = (char *)v35;
  off_60C5CB30[3]();
  v8 = off_60C5CB34;
  if ( v7 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    v9 = 0;
    while ( off_60C5CB34[v9] )
    {
      if ( !off_60C5CB34[v9 + 1] )
      {
        ++v9;
        break;
      }
      if ( !off_60C5CB34[v9 + 2] )
      {
        v9 += 2;
        break;
      }
      v10 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v10 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v36 )
      v9 = v36 - 1;
    qmemcpy(v7, v8, v9);
    v7[v9] = 0;
  }
  switch ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) )
  {
    case 0:
      v13 = *(unsigned __int8 *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      v14 = v35;
      ((void (__fastcall *)(int (***)()))v34[3])(&v34);
      v15 = 0;
      v16 = "false";
      if ( v13 )
        v16 = "true";
      while ( v35[v15] )
      {
        if ( !v35[v15 + 1] )
        {
          ++v15;
          break;
        }
        if ( !v35[v15 + 2] )
        {
          v15 += 2;
          break;
        }
        v10 = v15 + 2 <= 0x7FFFF;
        v15 += 3;
        if ( !v10 )
        {
          v15 = 0;
          break;
        }
      }
      v30 = 0;
      v31 = 0;
      if ( v15 > 0 )
        v30 = v15;
      while ( v16[v31] )
      {
        if ( !v16[v31 + 1] )
        {
          ++v31;
          break;
        }
        if ( !v16[v31 + 2] )
        {
          v31 += 2;
          break;
        }
        v10 = v31 + 2 <= 0x7FFFF;
        v31 += 3;
        if ( !v10 )
        {
          v31 = 0;
          break;
        }
      }
      if ( v31 >= v36 - v30 )
        v31 = v36 - v30 - 1;
      if ( v31 >= 1 )
      {
        qmemcpy((void *)&v14[v30], v16, v31);
        if ( v31 + v30 > v15 )
          v14[v31 + v30] = 0;
      }
      break;
    case 1:
      v17 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      sub_608FDDF4((int)&v34, "%f", *v17);
      break;
    case 2:
    case 17:
      v18 = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      sub_608FDDF4((int)&v34, "%d", v18);
      break;
    case 3:
      v19 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      sub_608FDDF4((int)&v34, "%f %f", *v19, v19[1]);
      break;
    case 4:
      v20 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      sub_608FDDF4((int)&v34, "%f %f %f", *v20, v20[1], v20[2]);
      break;
    case 5:
    case 6:
    case 16:
      v21 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
      sub_608FDDF4((int)&v34, "%f %f %f %f", *v21, v21[1], v21[2], v21[3]);
      break;
    case 7:
    case 8:
    case 15:
    case 20:
      v11 = (const void **)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
      v32 = v35;
      ((void (__fastcall *)(int (***)()))v34[3])(&v34);
      v12 = 0;
      while ( v35[v12] )
      {
        if ( !v35[v12 + 1] )
        {
          ++v12;
          break;
        }
        if ( !v35[v12 + 2] )
        {
          v12 += 2;
          break;
        }
        v10 = v12 + 2 <= 0x7FFFF;
        v12 += 3;
        if ( !v10 )
        {
          v12 = 0;
          break;
        }
      }
      (*((void (__fastcall **)(const void **))*v11 + 3))(v11);
      v27 = v11[1];
      v28 = 0;
      v29 = 0;
      if ( v12 > 0 )
        v28 = v12;
      while ( v27[v29] )
      {
        if ( !v27[v29 + 1] )
        {
          ++v29;
          break;
        }
        if ( !v27[v29 + 2] )
        {
          v29 += 2;
          break;
        }
        v10 = v29 + 2 <= 0x7FFFF;
        v29 += 3;
        if ( !v10 )
        {
          v29 = 0;
          break;
        }
      }
      if ( v29 >= v36 - v28 )
        v29 = v36 - v28 - 1;
      if ( v29 >= 1 )
      {
        (*((void (__fastcall **)(const void **))*v11 + 3))(v11);
        qmemcpy((void *)&v32[v28], v11[1], v29);
        if ( v29 + v28 > v12 )
          v32[v29 + v28] = 0;
      }
      break;
    case 13:
    case 14:
    case 18:
      v22 = (unsigned int)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1) >> 2;
      sub_608FDDF4((int)&v34, "%d", v22);
      break;
    case 19:
      v23 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
      sub_608FDDF4((int)&v34, "%d", v23);
      break;
    default:
      break;
  }
  v38 = &sead__SafeStringBase__vtable;
  v39 = "value";
  sub_609A6388(v33, &v38, &v34, a3);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
  if ( result == 1 )
  {
    v25 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
    FIELD_U32(v33, 108) = 2;
    v26 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
    return sub_609A5C1C(v33, v25, v26, 0);
  }
  return result;
}

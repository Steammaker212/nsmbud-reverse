/* sub_608F7CF0
 * address: 0x608F7CF0   size: 1624   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F7CF0(int a1, int a2, int a3)
{
  int v6; // r9
  char *v7; // r5
  char *v8; // r6
  signed int v9; // r7
  bool v10; // cc
  int v11; // r4
  char *v12; // r7
  int v13; // r9
  signed int v14; // r5
  int v15; // r0
  int v16; // r5
  char *v17; // r7
  int v18; // r4
  const char *v19; // r2
  char *v20; // r0
  signed int v21; // r5
  const char *v22; // r2
  char *v23; // r7
  int v24; // r4
  signed int v25; // r5
  int v26; // r0
  unsigned int v27; // r0
  char **v28; // r4
  char *v29; // r7
  int v30; // r4
  char *v31; // r0
  signed int v32; // r5
  char *v33; // r5
  int v34; // r4
  int result; // r0
  int v36; // [sp+0h] [bp-C0h]
  int v37; // [sp+4h] [bp-BCh]
  int (**v38)(); // [sp+8h] [bp-B8h] BYREF
  char *v39; // [sp+Ch] [bp-B4h]
  int (**v40)(); // [sp+10h] [bp-B0h] BYREF
  char *v41; // [sp+14h] [bp-ACh]
  int v42; // [sp+18h] [bp-A8h]
  int v43; // [sp+1Ch] [bp-A4h] BYREF

  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v37 = a1;
  sub_608F9B64(a1, a2, a3);
  v38 = &sead__SafeStringBase__vtable;
  v39 = &byte_60ABC94D;
  v41 = (char *)&v43;
  v40 = &BufferedSafeStringBase_char_vtable_probably;
  v42 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
  v40 = &off_60C5C94C;
  v7 = v41;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v38);
  v8 = v39;
  v36 = a2;
  if ( v7 != v39 )
  {
    ((void (__fastcall *)(int (***)()))v38[3])(&v38);
    v9 = 0;
    while ( v39[v9] )
    {
      if ( !v39[v9 + 1] )
      {
        ++v9;
        break;
      }
      if ( !v39[v9 + 2] )
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
    if ( v9 >= v42 )
      v9 = v42 - 1;
    qmemcpy(v7, v8, v9);
    v7[v9] = 0;
    a2 = v36;
  }
  v40 = &off_60BD95A8;
  if ( a3 > 0 )
  {
    v11 = v6;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
    v12 = v41;
    v13 = 0;
    while ( v41[v13] )
    {
      if ( !v41[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v41[v13 + 2] )
      {
        v13 += 2;
        break;
      }
      v10 = v13 + 2 <= 0x7FFFF;
      v13 += 3;
      if ( !v10 )
      {
        v13 = 0;
        break;
      }
    }
    v14 = a3;
    if ( v42 - v13 <= a3 )
      v14 = v42 - v13 - 1;
    if ( v14 >= 1 )
      memset(&v41[v13], 32, v14);
    v15 = v14 + v13;
    v6 = v11;
    v12[v15] = 0;
    a2 = v36;
  }
  v16 = v37;
  sub_608FDE40((int)&v40, "  heap_type: ExpHeap\n");
  sub_609056D4(a2, &v40);
  *v41 = 0;
  if ( a3 < 1 )
  {
    v19 = "Best Fit";
    if ( !FIELD_U8(v37, 124) )
      v19 = "First Fit";
    sub_608FDE40((int)&v40, "  alloc_mode: %s\n", v19);
    sub_609056D4(a2, &v40);
    v20 = v41;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v40[3])(&v40);
    v17 = v41;
    v18 = 0;
    while ( v41[v18] )
    {
      if ( !v41[v18 + 1] )
      {
        ++v18;
        break;
      }
      if ( !v41[v18 + 2] )
      {
        v18 += 2;
        break;
      }
      v10 = v18 + 2 <= 0x7FFFF;
      v18 += 3;
      if ( !v10 )
      {
        v18 = 0;
        break;
      }
    }
    v21 = a3;
    if ( v42 - v18 <= a3 )
      v21 = v42 - v18 - 1;
    if ( v21 >= 1 )
      memset(&v41[v18], 32, v21);
    v17[v21 + v18] = 0;
    v22 = "Best Fit";
    if ( !FIELD_U8(v37, 124) )
      v22 = "First Fit";
    sub_608FDE40((int)&v40, "  alloc_mode: %s\n", v22);
    sub_609056D4(v36, &v40);
    *v41 = 0;
    ((void (__fastcall *)(int (***)()))v40[3])(&v40);
    v23 = v41;
    v24 = 0;
    while ( v41[v24] )
    {
      if ( !v41[v24 + 1] )
      {
        ++v24;
        break;
      }
      if ( !v41[v24 + 2] )
      {
        v24 += 2;
        break;
      }
      v10 = v24 + 2 <= 0x7FFFF;
      v24 += 3;
      if ( !v10 )
      {
        v24 = 0;
        break;
      }
    }
    v25 = a3;
    if ( v42 - v24 <= a3 )
      v25 = v42 - v24 - 1;
    if ( v25 >= 1 )
      memset(&v41[v24], 32, v25);
    v26 = v25 + v24;
    v16 = v37;
    v20 = &v23[v26];
    a2 = v36;
  }
  *v20 = 0;
  v27 = FIELD_U8(v16, 125);
  if ( v27 >= 3 )
  {
    v28 = &off_60C5CB34;
    off_60C5CB30[3]();
  }
  else
  {
    v28 = &off_60C5C95C[v27];
  }
  sub_608FDE40((int)&v40, "  find_free_block_mode: %s\n", *v28);
  sub_609056D4(a2, &v40);
  *v41 = 0;
  if ( a3 < 1 )
  {
    sub_608FDE40((int)&v40, "  use_list_size: %d\n", FIELD_U32(v16, 152));
    sub_609056D4(a2, &v40);
    v31 = v41;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v40[3])(&v40);
    v29 = v41;
    v30 = 0;
    while ( v41[v30] )
    {
      if ( !v41[v30 + 1] )
      {
        ++v30;
        break;
      }
      if ( !v41[v30 + 2] )
      {
        v30 += 2;
        break;
      }
      v10 = v30 + 2 <= 0x7FFFF;
      v30 += 3;
      if ( !v10 )
      {
        v30 = 0;
        break;
      }
    }
    v32 = a3;
    if ( v42 - v30 <= a3 )
      v32 = v42 - v30 - 1;
    if ( v32 >= 1 )
      memset(&v41[v30], 32, v32);
    v29[v32 + v30] = 0;
    sub_608FDE40((int)&v40, "  use_list_size: %d\n", FIELD_U32(v37, 152));
    a2 = v36;
    sub_609056D4(v36, &v40);
    *v41 = 0;
    ((void (__fastcall *)(int (***)()))v40[3])(&v40);
    v33 = v41;
    v34 = 0;
    while ( v41[v34] )
    {
      if ( !v41[v34 + 1] )
      {
        ++v34;
        break;
      }
      if ( !v41[v34 + 2] )
      {
        v34 += 2;
        break;
      }
      v10 = v34 + 2 <= 0x7FFFF;
      v34 += 3;
      if ( !v10 )
      {
        v34 = 0;
        break;
      }
    }
    if ( v42 - v34 <= a3 )
      a3 = v42 - v34 - 1;
    if ( a3 >= 1 )
      memset(&v41[v34], 32, a3);
    v31 = &v33[a3 + v34];
    v16 = v37;
  }
  *v31 = 0;
  sub_608FDE40((int)&v40, "  free_list_size: %d\n", FIELD_U32(v16, 136));
  result = sub_609056D4(a2, &v40);
  if ( v6 )
    return sead__CriticalSection__unlock(v6);
  return result;
}

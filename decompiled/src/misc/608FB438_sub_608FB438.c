/* sub_608FB438
 * address: 0x608FB438   size: 1280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608FB438(int a1, int a2, int a3)
{
  int v6; // r9
  char *v7; // r5
  char *v8; // r6
  signed int v9; // r4
  bool v10; // cc
  int v11; // r7
  char *v12; // r6
  int v13; // r9
  signed int v14; // r4
  int v15; // r0
  char *v16; // r6
  int v17; // r7
  int v18; // r4
  char *v19; // r0
  signed int v20; // r4
  char *v21; // r6
  int v22; // r7
  signed int v23; // r4
  int v24; // r0
  char *v25; // r4
  int v26; // r6
  int result; // r0
  int v28; // [sp+0h] [bp-C0h]
  int v29; // [sp+4h] [bp-BCh]
  int (**v30)(); // [sp+8h] [bp-B8h] BYREF
  char *v31; // [sp+Ch] [bp-B4h]
  int (**v32)(); // [sp+10h] [bp-B0h] BYREF
  char *v33; // [sp+14h] [bp-ACh]
  int v34; // [sp+18h] [bp-A8h]
  int v35; // [sp+1Ch] [bp-A4h] BYREF

  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v28 = a1;
  sub_608F9B64(a1, a2, a3);
  v30 = &sead__SafeStringBase__vtable;
  v31 = &byte_60ABC94D;
  v33 = (char *)&v35;
  v32 = &BufferedSafeStringBase_char_vtable_probably;
  v34 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v32);
  v32 = &off_60C5C94C;
  v7 = v33;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v30);
  v8 = v31;
  v29 = a2;
  if ( v7 != v31 )
  {
    ((void (__fastcall *)(int (***)()))v30[3])(&v30);
    v9 = 0;
    while ( v31[v9] )
    {
      if ( !v31[v9 + 1] )
      {
        ++v9;
        break;
      }
      if ( !v31[v9 + 2] )
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
    if ( v9 >= v34 )
      v9 = v34 - 1;
    qmemcpy(v7, v8, v9);
    v7[v9] = 0;
  }
  v32 = &off_60BD95A8;
  if ( a3 > 0 )
  {
    v11 = v6;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v32);
    v12 = v33;
    v13 = 0;
    while ( v33[v13] )
    {
      if ( !v33[v13 + 1] )
      {
        ++v13;
        break;
      }
      if ( !v33[v13 + 2] )
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
    if ( v34 - v13 <= a3 )
      v14 = v34 - v13 - 1;
    if ( v14 >= 1 )
      memset(&v33[v13], 32, v14);
    v15 = v14 + v13;
    v6 = v11;
    v12[v15] = 0;
    a2 = v29;
  }
  sub_608FDE40((int)&v32, "  heap_type: UnitHeap\n");
  sub_609056D4(a2, &v32);
  *v33 = 0;
  if ( a3 < 1 )
  {
    v18 = v28;
    sub_608FDE40((int)&v32, "  block_size: %u\n", FIELD_U32(v28, 124));
    sub_609056D4(a2, &v32);
    v19 = v33;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v32[3])(&v32);
    v16 = v33;
    v17 = 0;
    while ( v33[v17] )
    {
      if ( !v33[v17 + 1] )
      {
        ++v17;
        break;
      }
      if ( !v33[v17 + 2] )
      {
        v17 += 2;
        break;
      }
      v10 = v17 + 2 <= 0x7FFFF;
      v17 += 3;
      if ( !v10 )
      {
        v17 = 0;
        break;
      }
    }
    v20 = a3;
    if ( v34 - v17 <= a3 )
      v20 = v34 - v17 - 1;
    if ( v20 >= 1 )
      memset(&v33[v17], 32, v20);
    v16[v20 + v17] = 0;
    sub_608FDE40((int)&v32, "  block_size: %u\n", FIELD_U32(v28, 124));
    sub_609056D4(v29, &v32);
    *v33 = 0;
    ((void (__fastcall *)(int (***)()))v32[3])(&v32);
    v21 = v33;
    v22 = 0;
    while ( v33[v22] )
    {
      if ( !v33[v22 + 1] )
      {
        ++v22;
        break;
      }
      if ( !v33[v22 + 2] )
      {
        v22 += 2;
        break;
      }
      v10 = v22 + 2 <= 0x7FFFF;
      v22 += 3;
      if ( !v10 )
      {
        v22 = 0;
        break;
      }
    }
    v23 = a3;
    if ( v34 - v22 <= a3 )
      v23 = v34 - v22 - 1;
    if ( v23 >= 1 )
      memset(&v33[v22], 32, v23);
    v24 = v23 + v22;
    v18 = v28;
    a2 = v29;
    v19 = &v21[v24];
  }
  *v19 = 0;
  sub_608FDE40((int)&v32, "  area_start: %u\n", FIELD_U32(v18, 128));
  sub_609056D4(a2, &v32);
  *v33 = 0;
  if ( a3 >= 1 )
  {
    ((void (__fastcall *)(int (***)()))v32[3])(&v32);
    v25 = v33;
    v26 = 0;
    while ( v33[v26] )
    {
      if ( !v33[v26 + 1] )
      {
        ++v26;
        break;
      }
      if ( !v33[v26 + 2] )
      {
        v26 += 2;
        break;
      }
      v10 = v26 + 2 <= 0x7FFFF;
      v26 += 3;
      if ( !v10 )
      {
        v26 = 0;
        break;
      }
    }
    if ( v34 - v26 <= a3 )
      a3 = v34 - v26 - 1;
    if ( a3 >= 1 )
      memset(&v33[v26], 32, a3);
    v25[a3 + v26] = 0;
    v18 = v28;
  }
  sub_608FDE40((int)&v32, "  area_size: %u\n", FIELD_U32(v18, 132));
  result = sub_609056D4(a2, &v32);
  if ( v6 )
    return sead__CriticalSection__unlock(v6);
  return result;
}

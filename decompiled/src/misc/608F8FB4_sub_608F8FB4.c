/* sub_608F8FB4
 * address: 0x608F8FB4   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F8FB4(int a1, int a2, int a3)
{
  int v6; // r5
  char *v7; // r5
  size_t v8; // r6
  char *v9; // r8
  int v10; // r4
  bool v11; // cc
  signed int v12; // r5
  int v13; // r8
  char *v14; // r4
  int v15; // r7
  int v16; // r8
  char *v17; // r0
  int v18; // r10
  signed int v19; // r5
  char *v20; // r4
  int v21; // r5
  int result; // r0
  int v23; // [sp+0h] [bp-B8h]
  int v24; // [sp+4h] [bp-B4h]
  int (**v25)(); // [sp+8h] [bp-B0h] BYREF
  char *v26; // [sp+Ch] [bp-ACh]
  int v27; // [sp+10h] [bp-A8h]
  int v28; // [sp+14h] [bp-A4h] BYREF

  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v23 = v6;
  v24 = a1;
  sub_608F9B64(a1, a2, a3);
  v26 = (char *)&v28;
  v25 = &BufferedSafeStringBase_char_vtable_probably;
  v27 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
  v25 = &off_60C5C94C;
  v7 = v26;
  if ( v26 != &byte_60ABC94D )
  {
    v8 = v27 - 1;
    if ( v27 > 0 )
      v8 = 0;
    memset(v26, 0, v8);
    v7[v8] = 0;
  }
  v25 = &off_60BD95A8;
  if ( a3 > 0 )
  {
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
    v9 = v26;
    v10 = 0;
    while ( v26[v10] )
    {
      if ( !v26[v10 + 1] )
      {
        ++v10;
        break;
      }
      if ( !v26[v10 + 2] )
      {
        v10 += 2;
        break;
      }
      v11 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v11 )
      {
        v10 = 0;
        break;
      }
    }
    v12 = a3;
    if ( v27 - v10 <= a3 )
      v12 = v27 - v10 - 1;
    if ( v12 >= 1 )
      memset(&v26[v10], 32, v12);
    v9[v12 + v10] = 0;
  }
  sub_608FDE40((int)&v25, "  heap_type: FrameHeap\n");
  sub_609056D4(a2, &v25);
  *v26 = 0;
  if ( a3 < 1 )
  {
    v16 = v24;
    sub_608FDE40((int)&v25, "  head_ptr: 0x%08X\n", FIELD_U32(v24, 124));
    sub_609056D4(a2, &v25);
    v17 = v26;
    v18 = v23;
  }
  else
  {
    v13 = a2;
    ((void (__fastcall *)(int (***)()))v25[3])(&v25);
    v14 = v26;
    v15 = 0;
    while ( v26[v15] )
    {
      if ( !v26[v15 + 1] )
      {
        ++v15;
        break;
      }
      if ( !v26[v15 + 2] )
      {
        v15 += 2;
        break;
      }
      v11 = v15 + 2 <= 0x7FFFF;
      v15 += 3;
      if ( !v11 )
      {
        v15 = 0;
        break;
      }
    }
    v19 = a3;
    if ( v27 - v15 <= a3 )
      v19 = v27 - v15 - 1;
    if ( v19 >= 1 )
      memset(&v26[v15], 32, v19);
    v14[v19 + v15] = 0;
    sub_608FDE40((int)&v25, "  head_ptr: 0x%08X\n", FIELD_U32(v24, 124));
    sub_609056D4(v13, &v25);
    *v26 = 0;
    ((void (__fastcall *)(int (***)()))v25[3])(&v25);
    v20 = v26;
    v21 = 0;
    while ( v26[v21] )
    {
      if ( !v26[v21 + 1] )
      {
        ++v21;
        break;
      }
      if ( !v26[v21 + 2] )
      {
        v21 += 2;
        break;
      }
      v11 = v21 + 2 <= 0x7FFFF;
      v21 += 3;
      if ( !v11 )
      {
        v21 = 0;
        break;
      }
    }
    a2 = v13;
    v16 = v24;
    v18 = v23;
    if ( v27 - v21 <= a3 )
      a3 = v27 - v21 - 1;
    if ( a3 >= 1 )
      memset(&v26[v21], 32, a3);
    v17 = &v20[a3 + v21];
  }
  *v17 = 0;
  sub_608FDE40((int)&v25, "  tail_ptr: 0x%08X\n", FIELD_U32(v16, 128));
  result = sub_609056D4(a2, &v25);
  if ( v18 )
    return sead__CriticalSection__unlock(v18);
  return result;
}

/* sub_6099CD0C
 * address: 0x6099CD0C   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099CD0C(int a1, int a2, int a3)
{
  int v6; // r4
  char *v7; // r5
  size_t v8; // r6
  char *v9; // r8
  int v10; // r9
  bool v11; // cc
  signed int v12; // r5
  int v13; // r8
  char *v14; // r5
  int v15; // r4
  int v16; // r0
  int result; // r0
  int v18; // [sp+0h] [bp-B8h]
  int v19; // [sp+4h] [bp-B4h]
  int (**v20)(); // [sp+8h] [bp-B0h] BYREF
  char *v21; // [sp+Ch] [bp-ACh]
  int v22; // [sp+10h] [bp-A8h]
  int v23; // [sp+14h] [bp-A4h] BYREF

  v6 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    v6 = a1 + 84;
    sead__CriticalSection__lock(a1 + 84);
  }
  v19 = a1;
  sub_608F9B64(a1, a2, a3);
  v21 = (char *)&v23;
  v20 = &BufferedSafeStringBase_char_vtable_probably;
  v22 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
  v20 = &off_60C5C94C;
  v7 = v21;
  if ( v21 != &byte_60ABC94D )
  {
    v8 = v22 - 1;
    if ( v22 > 0 )
      v8 = 0;
    memset(v21, 0, v8);
    v7[v8] = 0;
  }
  v20 = &off_60BD95A8;
  if ( a3 > 0 )
  {
    v18 = a2;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
    v9 = v21;
    v10 = 0;
    while ( v21[v10] )
    {
      if ( !v21[v10 + 1] )
      {
        ++v10;
        break;
      }
      if ( !v21[v10 + 2] )
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
    if ( v22 - v10 <= a3 )
      v12 = v22 - v10 - 1;
    if ( v12 >= 1 )
      memset(&v21[v10], 32, v12);
    v9[v12 + v10] = 0;
    a2 = v18;
  }
  sub_608FDE40(&v20, "  heap_type: SeparateHeap\n");
  sub_609056D4(a2, (int)&v20);
  *v21 = 0;
  if ( a3 >= 1 )
  {
    v13 = v6;
    ((void (__fastcall *)(int (***)()))v20[3])(&v20);
    v14 = v21;
    v15 = 0;
    while ( v21[v15] )
    {
      if ( !v21[v15 + 1] )
      {
        ++v15;
        break;
      }
      if ( !v21[v15 + 2] )
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
    if ( v22 - v15 <= a3 )
      a3 = v22 - v15 - 1;
    if ( a3 >= 1 )
      memset(&v21[v15], 32, a3);
    v16 = a3 + v15;
    v6 = v13;
    v14[v16] = 0;
  }
  sub_608FDE40(&v20, "  block_list_size: %d\n", FIELD_U32(v19, 132));
  result = sub_609056D4(a2, (int)&v20);
  if ( v6 )
    return sead__CriticalSection__unlock(v6);
  return result;
}

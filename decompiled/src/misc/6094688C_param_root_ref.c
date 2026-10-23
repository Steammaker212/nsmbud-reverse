/* param_root_ref
 * address: 0x6094688C   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall param_root_ref(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  signed int v6; // r7
  char *v7; // r10
  char *v8; // r9
  bool v9; // cc
  signed int v10; // r0
  signed int v11; // r7
  void *v12; // r5
  const void *v13; // r9
  int v14; // r0
  signed int v15; // r0
  _DWORD v18[11]; // [sp+4h] [bp-2Ch] BYREF

  sub_609472C0(a1);
  *a1 = &off_60C5E820;
  a1[10] = a1 + 12;
  a1[9] = &BufferedSafeStringBase_char_vtable_probably;
  a1[11] = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 9));
  v6 = 0;
  *(_BYTE *)a1[10] = 0;
  a1[9] = &off_60BD4BF0;
  a1[29] = 0;
  a1[31] = a1 + 33;
  a1[30] = &BufferedSafeStringBase_char_vtable_probably;
  a1[32] = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(a1 + 30));
  a1[30] = &off_60BD94D4;
  v7 = (char *)a1[31];
  off_60C5CB30[3]();
  v8 = off_60C5CB34;
  if ( v7 != off_60C5CB34 )
  {
    off_60C5CB30[3]();
    while ( off_60C5CB34[v6] )
    {
      if ( !off_60C5CB34[v6 + 1] )
      {
        ++v6;
        break;
      }
      if ( !off_60C5CB34[v6 + 2] )
      {
        v6 += 2;
        break;
      }
      v9 = v6 + 2 <= 0x7FFFF;
      v6 += 3;
      if ( !v9 )
      {
        v6 = 0;
        break;
      }
    }
    v10 = a1[32];
    if ( v6 >= v10 )
      v6 = v10 - 1;
    qmemcpy(v7, v8, v6);
    v7[v6] = 0;
  }
  v11 = 0;
  a1[30] = &off_60BD94BC;
  a1[97] = 0;
  a1[98] = 0;
  v12 = (void *)a1[10];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v13 = (const void *)a2[1];
  if ( v12 != v13 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v14 = a2[1];
    while ( *(_BYTE *)(v14 + v11) )
    {
      if ( !*(_BYTE *)(v14 + v11 + 1) )
      {
        ++v11;
        break;
      }
      if ( !*(_BYTE *)(v14 + v11 + 2) )
      {
        v11 += 2;
        break;
      }
      v9 = v11 + 2 <= 0x7FFFF;
      v11 += 3;
      if ( !v9 )
      {
        v11 = 0;
        break;
      }
    }
    v15 = a1[11];
    if ( v11 >= v15 )
      v11 = v15 - 1;
    qmemcpy(v12, v13, v11);
    *((_BYTE *)v12 + v11) = 0;
  }
  a1[28] = a3;
  v18[0] = &sead__SafeStringBase__vtable;
  v18[1] = "param_root";
  sub_60947310(a1, v18);
  return a1;
}

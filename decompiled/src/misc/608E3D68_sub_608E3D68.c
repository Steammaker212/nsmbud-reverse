/* sub_608E3D68
 * address: 0x608E3D68   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E3D68(_DWORD *a1, int a2, const void **a3)
{
  int *v5; // r4
  int *v6; // r5
  int v7; // r0
  signed int v8; // r6
  bool v9; // cc
  int v10; // r6
  _BYTE *v11; // r0
  int v12; // r9
  signed int v13; // r4
  int *v15; // [sp+Ch] [bp-23Ch]
  int (**v16)(); // [sp+18h] [bp-230h] BYREF
  int *v17; // [sp+1Ch] [bp-22Ch]
  int v18; // [sp+20h] [bp-228h]
  int v19; // [sp+24h] [bp-224h] BYREF

  v17 = &v19;
  v16 = &BufferedSafeStringBase_char_vtable_probably;
  v18 = 512;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v16);
  *(_BYTE *)v17 = 0;
  v16 = &off_60BF9F58;
  v5 = v17;
  (*(void (__fastcall **)(_DWORD *))(a1[21] + 12))(a1 + 21);
  v6 = (int *)a1[22];
  if ( v5 != v6 )
  {
    (*(void (__fastcall **)(_DWORD *))(a1[21] + 12))(a1 + 21);
    v7 = a1[22];
    v8 = 0;
    while ( *(_BYTE *)(v7 + v8) )
    {
      if ( !*(_BYTE *)(v7 + v8 + 1) )
      {
        ++v8;
        break;
      }
      if ( !*(_BYTE *)(v7 + v8 + 2) )
      {
        v8 += 2;
        break;
      }
      v9 = v8 + 2 <= 0x7FFFF;
      v8 += 3;
      if ( !v9 )
      {
        v8 = 0;
        break;
      }
    }
    if ( v8 >= v18 )
      v8 = v18 - 1;
    qmemcpy(v5, v6, v8);
    *((_BYTE *)v5 + v8) = 0;
  }
  v15 = v17;
  ((void (__fastcall *)(int (***)()))v16[3])(&v16);
  v10 = 0;
  while ( *((_BYTE *)v17 + v10) )
  {
    if ( !*((_BYTE *)v17 + v10 + 1) )
    {
      ++v10;
      break;
    }
    if ( !*((_BYTE *)v17 + v10 + 2) )
    {
      v10 += 2;
      break;
    }
    v9 = v10 + 2 <= 0x7FFFF;
    v10 += 3;
    if ( !v9 )
    {
      v10 = 0;
      break;
    }
  }
  (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
  v11 = a3[1];
  v12 = 0;
  v13 = 0;
  if ( v10 > 0 )
    v12 = v10;
  while ( v11[v13] )
  {
    if ( !v11[v13 + 1] )
    {
      ++v13;
      break;
    }
    if ( !v11[v13 + 2] )
    {
      v13 += 2;
      break;
    }
    v9 = v13 + 2 <= 0x7FFFF;
    v13 += 3;
    if ( !v9 )
    {
      v13 = 0;
      break;
    }
  }
  if ( v13 >= v18 - v12 )
    v13 = v18 - v12 - 1;
  if ( v13 >= 1 )
  {
    (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
    qmemcpy((char *)v15 + v12, a3[1], v13);
    if ( v13 + v12 > v10 )
      *((_BYTE *)v15 + v13 + v12) = 0;
  }
  return sub_608E6578(a1[20]);
}

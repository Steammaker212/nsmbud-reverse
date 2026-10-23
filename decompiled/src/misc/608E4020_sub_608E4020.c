/* sub_608E4020
 * address: 0x608E4020   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E4020(_DWORD *a1, int a2, const void **a3)
{
  int *v5; // r7
  int *v6; // r11
  int v7; // r0
  signed int v8; // r5
  bool v9; // cc
  int *v10; // r11
  int v11; // r5
  _BYTE *v12; // r0
  int v13; // r8
  signed int v14; // r7
  int (**v17)(); // [sp+8h] [bp-230h] BYREF
  int *v18; // [sp+Ch] [bp-22Ch]
  int v19; // [sp+10h] [bp-228h]
  int v20; // [sp+14h] [bp-224h] BYREF

  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 512;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BF9F58;
  v5 = v18;
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
    if ( v8 >= v19 )
      v8 = v19 - 1;
    qmemcpy(v5, v6, v8);
    *((_BYTE *)v5 + v8) = 0;
  }
  v10 = v18;
  ((void (__fastcall *)(int (***)()))v17[3])(&v17);
  v11 = 0;
  while ( *((_BYTE *)v18 + v11) )
  {
    if ( !*((_BYTE *)v18 + v11 + 1) )
    {
      ++v11;
      break;
    }
    if ( !*((_BYTE *)v18 + v11 + 2) )
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
  (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
  v12 = a3[1];
  v13 = 0;
  v14 = 0;
  if ( v11 > 0 )
    v13 = v11;
  while ( v12[v14] )
  {
    if ( !v12[v14 + 1] )
    {
      ++v14;
      break;
    }
    if ( !v12[v14 + 2] )
    {
      v14 += 2;
      break;
    }
    v9 = v14 + 2 <= 0x7FFFF;
    v14 += 3;
    if ( !v9 )
    {
      v14 = 0;
      break;
    }
  }
  if ( v14 >= v19 - v13 )
    v14 = v19 - v13 - 1;
  if ( v14 >= 1 )
  {
    (*((void (__fastcall **)(const void **))*a3 + 3))(a3);
    qmemcpy((char *)v10 + v13, a3[1], v14);
    if ( v14 + v13 > v11 )
      *((_BYTE *)v10 + v14 + v13) = 0;
  }
  return sub_608E6B28(a1[20], a2, &v17);
}

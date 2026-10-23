/* sub_6097114C
 * address: 0x6097114C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6097114C(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v8; // r1
  int v9; // r0
  bool v10; // cc
  size_t v11; // r7
  void *v12; // r8
  int v13; // r1
  int v14; // r0
  void *v15; // r7
  const void *v16; // r8
  int v17; // r0
  signed int v18; // r5
  signed int v19; // r0

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v8 = a3[1];
  v9 = 0;
  while ( *(_BYTE *)(v8 + v9) )
  {
    if ( !*(_BYTE *)(v8 + v9 + 1) )
    {
      ++v9;
      break;
    }
    if ( !*(_BYTE *)(v8 + v9 + 2) )
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
  v11 = v9 + 1;
  v12 = (void *)operator_new_8DE2C8(v9 + 1, a2, a4);
  memset(v12, 0, v11);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v13 = a3[1];
  v14 = 0;
  while ( *(_BYTE *)(v13 + v14) )
  {
    if ( !*(_BYTE *)(v13 + v14 + 1) )
    {
      ++v14;
      break;
    }
    if ( !*(_BYTE *)(v13 + v14 + 2) )
    {
      v14 += 2;
      break;
    }
    v10 = v14 + 2 <= 0x7FFFF;
    v14 += 3;
    if ( !v10 )
    {
      v14 = 0;
      break;
    }
  }
  a1[1] = v12;
  *a1 = &BufferedSafeStringBase_char_vtable_probably;
  a1[2] = v14 + 1;
  if ( v14 < 0 )
  {
    v15 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)a1);
    v15 = (void *)a1[1];
  }
  *a1 = &off_60BFA9C4;
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v16 = (const void *)a3[1];
  if ( v15 != v16 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    v17 = a3[1];
    v18 = 0;
    while ( *(_BYTE *)(v17 + v18) )
    {
      if ( !*(_BYTE *)(v17 + v18 + 1) )
      {
        ++v18;
        break;
      }
      if ( !*(_BYTE *)(v17 + v18 + 2) )
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
    v19 = a1[2];
    if ( v18 >= v19 )
      v18 = v19 - 1;
    qmemcpy(v15, v16, v18);
    *((_BYTE *)v15 + v18) = 0;
  }
  return a1;
}

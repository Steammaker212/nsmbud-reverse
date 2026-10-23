/* sub_60983BE4
 * address: 0x60983BE4   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60983BE4(_DWORD *a1, const void *a2)
{
  int v3; // r7
  bool v4; // cc
  int v5; // r0
  int (**v6)(); // r0
  void *v7; // r5
  const void *v8; // r8
  signed int v9; // r7
  int (**v11)(); // [sp+4h] [bp-34h] BYREF
  void *v12; // [sp+8h] [bp-30h]
  signed int v13; // [sp+Ch] [bp-2Ch]
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const void *v15; // [sp+14h] [bp-24h]

  v3 = 0;
  *a1 = a1;
  a1[1] = a1;
  a1[5] = -1;
  a1[4] = -1;
  a1[2] = off_60C5A514;
  a1[6] = 0;
  a1[8] = 0;
  v14 = &sead__SafeStringBase__vtable;
  v15 = a2;
  while ( *((_BYTE *)a2 + v3) )
  {
    if ( !*((_BYTE *)a2 + v3 + 1) )
    {
      ++v3;
      break;
    }
    if ( !*((_BYTE *)a2 + v3 + 2) )
    {
      v3 += 2;
      break;
    }
    v4 = v3 + 2 <= 0x7FFFF;
    v3 += 3;
    if ( !v4 )
    {
      v3 = 0;
      break;
    }
  }
  v5 = sub_60855BC8(v3 + 1);
  a1[8] = v5;
  v12 = (void *)v5;
  v11 = &BufferedSafeStringBase_char_vtable_probably;
  v13 = v3 + 1;
  if ( v3 < 0 )
  {
    v7 = 0;
    v12 = 0;
    v13 = 0;
    v6 = &sead__SafeStringBase__vtable;
  }
  else
  {
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v11);
    v6 = v14;
    v7 = v12;
  }
  v6[3]();
  v8 = v15;
  if ( v7 != v15 )
  {
    ((void (__fastcall *)(int (***)()))v14[3])(&v14);
    v9 = 0;
    while ( *((_BYTE *)v15 + v9) )
    {
      if ( !*((_BYTE *)v15 + v9 + 1) )
      {
        ++v9;
        break;
      }
      if ( !*((_BYTE *)v15 + v9 + 2) )
      {
        v9 += 2;
        break;
      }
      v4 = v9 + 2 <= 0x7FFFF;
      v9 += 3;
      if ( !v4 )
      {
        v9 = 0;
        break;
      }
    }
    if ( v9 >= v13 )
      v9 = v13 - 1;
    qmemcpy(v7, v8, v9);
    *((_BYTE *)v7 + v9) = 0;
  }
  return a1;
}

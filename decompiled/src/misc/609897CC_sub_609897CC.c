/* sub_609897CC
 * address: 0x609897CC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609897CC(int a1, _DWORD *a2, _BYTE *a3, int a4, int a5)
{
  int result; // r0
  int v8; // r0
  bool v9; // zf
  _DWORD v10[2]; // [sp+4h] [bp-124h] BYREF
  char *v11; // [sp+Ch] [bp-11Ch] BYREF
  int v12; // [sp+10h] [bp-118h]
  int v13; // [sp+14h] [bp-114h]
  char v14; // [sp+18h] [bp-110h] BYREF

  result = FIELD_U32(a1, 4);
  if ( result )
  {
    v11 = &v14;
    v12 = 0;
    v13 = 256;
    v14 = 0;
    if ( a3 )
    {
      v8 = (unsigned __int8)*a3;
      v9 = v8 == 45;
      if ( v8 != 45 )
        v9 = v8 == 64;
      if ( !v9 )
      {
        if ( v8 == 61 )
          sub_609903D4(&v11, a3 + 1, a4);
        else
          sub_608FDFB8((int)&v11, a3, -1);
      }
    }
    else
    {
      sub_609902D8(&v11, a5 + 136, a4);
    }
    if ( v12 )
    {
      sub_60987688((int)v10, FIELD_U32(a1, 4), (int)v11);
      if ( v10[0] )
      {
        *a2 = v10[0];
        a2[1] = v10[1];
      }
    }
    result = a2[3];
    if ( result != -1 )
      a2[2] = result;
  }
  return result;
}

/* sub_60008BC8
 * address: 0x60008BC8   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60008BC8(unsigned int *a1, int a2)
{
  _DWORD *v3; // r2
  unsigned int v4; // r3
  _DWORD *v5; // r6
  unsigned int v6; // r2
  _DWORD *v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r0
  unsigned int result; // r0
  int v13; // r1
  int (**v14)(); // [sp+0h] [bp-20h] BYREF
  unsigned int i; // [sp+4h] [bp-1Ch]

  v3 = (_DWORD *)a1[1];
  v4 = a1[2];
  if ( *a1 > v4 )
    v3 += v4;
  *v3 = a2;
  v5 = (_DWORD *)a1[1];
  v6 = a1[2];
  v7 = v5;
  v8 = &v5[*a1];
  if ( *a1 > v6 )
    v7 = &v5[v6];
  if ( v7 != v8 )
  {
    v9 = v6 + 1;
    while ( *v7 )
    {
      ++v7;
      a1[2] = v9++;
      if ( v8 == v7 )
      {
        v7 = v8;
        break;
      }
    }
  }
  v10 = a1[3];
  if ( v10 < (unsigned int)v7 )
  {
    a1[3] = (unsigned int)v7;
    v10 = (unsigned int)v7;
  }
  v11 = a1[4];
  if ( v11 == 0x3FFFFF )
  {
    result = 1;
    a1[4] = 1;
    *((_BYTE *)a1 + 20) = 1;
  }
  else
  {
    result = v11 + 1;
    a1[4] = result;
    if ( !*((_BYTE *)a1 + 20) )
      return result;
  }
  v14 = &off_60BC021C;
  for ( i = result; v10 > (unsigned int)v5; i = result )
  {
    while ( 1 )
    {
      v13 = *v5;
      if ( *v5 )
      {
        result = FIELD_U8(v13, 19);
        if ( !FIELD_U8(v13, 19) )
        {
          result = ((int (__fastcall *)(int (***)()))*v14)(&v14);
          v10 = a1[3];
          if ( result )
            break;
        }
      }
      if ( ++v5 == (_DWORD *)v10 )
        return result;
    }
    if ( v5 == (_DWORD *)v10 )
      break;
    result = a1[4] + 1;
    a1[4] = result;
    if ( result == 0x3FFFFF )
    {
      a1[4] = 1;
      return 1;
    }
    v5 = (_DWORD *)a1[1];
  }
  return result;
}

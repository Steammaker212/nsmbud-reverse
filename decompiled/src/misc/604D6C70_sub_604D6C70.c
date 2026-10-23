/* sub_604D6C70
 * address: 0x604D6C70   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604D6C70(_DWORD *result)
{
  int v1; // r1
  int *v2; // r12
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r1
  char *v6; // r1
  int v7; // r1
  char *v8; // r1
  bool v9; // cc
  int v10; // r1
  signed int v11; // r2
  int v12; // r3
  char *v13; // r3
  _DWORD *v14; // [sp+0h] [bp-4h]

  v2 = result + 1232;
  v1 = result[1232];
  if ( v1 != 12 )
  {
    v3 = result[13049];
    if ( v1 )
    {
      v4 = v1 - 1;
      while ( v3 != v4 )
      {
        v5 = v4;
        if ( v4 >= 0xD )
          v5 = 0;
        if ( (*(_BYTE *)(result[v5 + 962] + 64) & 1) != 0 )
        {
          v6 = (char *)result;
          if ( v4 < 0xC )
            v6 = (char *)result + v4;
          if ( v6[45] )
          {
            v14 = (_DWORD *)v4;
            goto LABEL_36;
          }
        }
        if ( --v4 == -1 )
          goto LABEL_12;
      }
      v10 = result[13050];
      if ( v10 > v3 )
      {
        v11 = v4 + 1;
        while ( 1 )
        {
          v12 = v10;
          if ( (unsigned int)v10 >= 0xD )
            v12 = 0;
          if ( (*(_BYTE *)(result[v12 + 962] + 64) & 1) != 0 )
          {
            v13 = (char *)result;
            if ( (unsigned int)v10 < 0xC )
              v13 = (char *)result + v10;
            if ( v13[45] )
              break;
          }
          v9 = v10-- <= v11;
          if ( v9 )
            return result;
        }
        result = (_DWORD *)v10;
        *v2 = v10;
        if ( v10 >= 0 )
        {
          v14 = (_DWORD *)v10;
          goto LABEL_36;
        }
      }
    }
    else
    {
LABEL_12:
      if ( v3 >= 0 )
      {
        while ( 1 )
        {
          v7 = v3;
          if ( (unsigned int)v3 >= 0xD )
            v7 = 0;
          if ( (*(_BYTE *)(result[v7 + 962] + 64) & 1) != 0 )
          {
            v8 = (char *)result;
            if ( (unsigned int)v3 < 0xC )
              v8 = (char *)result + v3;
            if ( v8[45] )
              break;
          }
          v9 = v3-- <= 0;
          if ( v9 )
            return result;
        }
        result = (_DWORD *)v3;
        *v2 = v3;
        if ( v3 >= 0 )
        {
          v14 = (_DWORD *)v3;
LABEL_36:
          result = v14;
          *v2 = (int)v14;
        }
      }
    }
  }
  return result;
}

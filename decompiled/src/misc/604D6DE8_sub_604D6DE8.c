/* sub_604D6DE8
 * address: 0x604D6DE8   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604D6DE8(_DWORD *result)
{
  int v1; // r2
  int *v2; // r12
  int v3; // r3
  int v4; // lr
  unsigned int v5; // r1
  int v6; // r4
  char *v7; // r4
  int v8; // r1
  int v9; // r3
  char *v10; // r3
  unsigned int v12; // r2
  int v13; // r1
  char *v14; // r1
  _DWORD *v15; // [sp+0h] [bp-Ch]

  v2 = result + 1232;
  v1 = result[1232];
  if ( v1 != 12 )
  {
    v3 = result[13049];
    if ( v1 == v3 )
    {
LABEL_13:
      if ( v1 >= 0 )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = 0;
          if ( (unsigned int)v8 < 0xD )
            v9 = v8;
          if ( (*(_BYTE *)(result[v9 + 962] + 64) & 1) != 0 )
          {
            v10 = (char *)result;
            if ( (unsigned int)v8 < 0xC )
              v10 = (char *)result + v8;
            if ( v10[45] )
              break;
          }
          if ( v8++ >= v1 )
            return result;
        }
        result = (_DWORD *)v8;
        *v2 = v8;
        if ( v8 >= 0 )
        {
          v15 = (_DWORD *)v8;
LABEL_36:
          result = v15;
          *v2 = (int)v15;
        }
      }
    }
    else
    {
      v4 = result[13050];
      while ( v4 != v1 )
      {
        v5 = v1 + 1;
        v6 = v1 + 1;
        if ( (unsigned int)(v1 + 1) >= 0xD )
          v6 = 0;
        if ( (*(_BYTE *)(result[v6 + 962] + 64) & 1) != 0 )
        {
          v7 = (char *)result;
          if ( v5 < 0xC )
            v7 = (char *)result + v5;
          if ( v7[45] )
          {
            result = (_DWORD *)(v1 + 1);
LABEL_35:
            v15 = result;
            goto LABEL_36;
          }
        }
        ++v1;
        if ( v3 == v5 )
        {
          v1 = result[13049];
          goto LABEL_13;
        }
      }
      if ( v3 < v4 )
      {
        while ( 1 )
        {
          v12 = v3 + 1;
          v13 = v3 + 1;
          if ( (unsigned int)(v3 + 1) >= 0xD )
            v13 = 0;
          if ( (*(_BYTE *)(result[v13 + 962] + 64) & 1) != 0 )
          {
            v14 = (char *)result;
            if ( v12 < 0xC )
              v14 = (char *)result + v12;
            if ( v14[45] )
              break;
          }
          ++v3;
          if ( (int)v12 >= v4 )
            return result;
        }
        result = (_DWORD *)(v3 + 1);
        *v2 = v3 + 1;
        if ( v3 >= -1 )
          goto LABEL_35;
      }
    }
  }
  return result;
}

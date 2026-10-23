/* sub_6015AF40
 * address: 0x6015AF40   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6015AF40(_DWORD *result)
{
  int *v1; // r2
  _DWORD *v2; // lr
  _DWORD *v3; // r4
  _DWORD *v4; // r6
  int v5; // r1
  int v6; // r4
  int v7; // r5
  int v8; // r4
  int v9; // r5
  int v10; // r4
  int v11; // r6
  int v12; // r5

  v2 = result + 8;
  v1 = (int *)result[8];
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = *v1;
      v1 = (int *)v1[1];
      if ( FIELD_U32(v5, 136) != 12 && !FIELD_U32(v5, 20) && !FIELD_U32(v5, 24) )
      {
        v8 = v5 + 16;
        if ( result[5] != v5 + 16
          && ((FIELD_U8(v5, 145) & 8) == 0 || !FIELD_U32(v5, 56) && !FIELD_U32(v5, 60) && result[14] != v5 + 52) )
        {
          v9 = result[6];
          if ( v9 )
          {
            FIELD_U32(v9, 4) = v8;
            FIELD_U32(v5, 24) = result[6];
          }
          else
          {
            result[5] = v8;
          }
          result[6] = v8;
        }
      }
      if ( (FIELD_U8(v5, 145) & 8) != 0 && !FIELD_U32(v5, 56) && !FIELD_U32(v5, 60) )
      {
        v6 = v5 + 52;
        if ( result[14] != v5 + 52 )
        {
          v7 = result[15];
          if ( v7 )
          {
            FIELD_U32(v7, 4) = v6;
            FIELD_U32(v5, 60) = result[15];
          }
          else
          {
            result[14] = v6;
          }
          result[15] = v6;
        }
      }
      v10 = FIELD_U32(v5, 32);
      v11 = FIELD_U32(v5, 36);
      v12 = v5 + 28;
      if ( v10 )
        break;
      if ( v11 )
        goto LABEL_33;
      v4 = result + 8;
      if ( *v2 == v12 )
        goto LABEL_34;
LABEL_38:
      if ( !v1 )
        return result;
    }
    if ( v11 )
    {
LABEL_33:
      v4 = (_DWORD *)(v11 + 4);
    }
    else
    {
      v4 = result + 8;
      if ( *v2 != v12 )
        goto LABEL_35;
    }
LABEL_34:
    *v4 = v10;
    v10 = FIELD_U32(v5, 32);
    if ( !v10 )
    {
      v3 = result + 9;
      if ( result[9] != v12 )
      {
LABEL_37:
        FIELD_U32(v5, 32) = 0;
        FIELD_U32(v5, 36) = 0;
        goto LABEL_38;
      }
LABEL_36:
      *v3 = FIELD_U32(v5, 36);
      goto LABEL_37;
    }
LABEL_35:
    v3 = (_DWORD *)(v10 + 8);
    goto LABEL_36;
  }
  return result;
}

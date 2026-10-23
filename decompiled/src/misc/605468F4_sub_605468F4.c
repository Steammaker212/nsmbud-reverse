/* sub_605468F4
 * address: 0x605468F4   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605468F4(_DWORD *result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r3
  int v8; // r12
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r2
  _DWORD *v13; // r3

  v1 = result + 1165;
  v2 = result[1165];
  switch ( v2 )
  {
    case 22:
      v4 = result[7863];
      if ( (v4 & 0x20) == 0 )
      {
        if ( (v4 & 0x40) == 0 )
          return result;
LABEL_9:
        v5 = 21;
LABEL_51:
        *v1 = v5;
        goto LABEL_52;
      }
      result[7855] = 22;
LABEL_25:
      result[7857] = 25;
      *v1 = 25;
LABEL_52:
      result[8372] = result[8373];
      return result;
    case 21:
      v6 = result[7863];
      if ( (v6 & 0x20) == 0 )
      {
        if ( (v6 & 0x40) != 0 )
        {
          v5 = 20;
        }
        else
        {
          if ( (v6 & 0x80) == 0 )
            return result;
          v5 = 22;
        }
        goto LABEL_51;
      }
      result[7855] = 21;
      if ( result[7857] != 25 )
      {
        v8 = result[8373];
        if ( (*(_BYTE *)(result[7858] + 64) & 1) != 0 )
          v10 = 23;
        else
          v10 = 24;
        result[7857] = v10;
        *v1 = v10;
        goto LABEL_31;
      }
      goto LABEL_46;
    case 20:
      v3 = result[7863];
      if ( (v3 & 0x20) == 0 )
      {
        if ( (v3 & 0x80) == 0 )
          return result;
        goto LABEL_9;
      }
      result[7855] = 20;
      goto LABEL_20;
  }
  if ( (unsigned int)(v2 - 23) > 1 )
  {
    if ( v2 != 1 )
    {
      if ( v2 != 25 )
        return result;
      v11 = result[7863];
      if ( (v11 & 0x20) == 0 )
      {
        if ( (v11 & 0x10) != 0 )
        {
          v13 = result + 7855;
          v5 = result[7855];
          if ( v5 != 20 )
            goto LABEL_51;
LABEL_50:
          v5 = 21;
          *v13 = 21;
          goto LABEL_51;
        }
        if ( (v11 & 0x40) != 0 )
        {
LABEL_20:
          v8 = result[8373];
          if ( (*(_BYTE *)(result[7858] + 64) & 1) != 0 )
            v9 = 23;
          else
            v9 = 24;
          result[7857] = v9;
          *v1 = v9;
LABEL_31:
          result[8372] = v8;
          return result;
        }
        if ( (v11 & 0x80) == 0 )
          return result;
      }
      result[7857] = 25;
      v5 = 1;
      goto LABEL_51;
    }
    v12 = result[7863];
    if ( (v12 & 0x40) == 0 )
    {
      if ( (v12 & 0x10) == 0 )
        return result;
      v5 = result[7857];
      if ( (unsigned int)(v5 - 20) <= 2 )
      {
        v5 = 25;
        result[7857] = 25;
      }
      goto LABEL_51;
    }
LABEL_46:
    v5 = 25;
    goto LABEL_51;
  }
  v7 = result[7863];
  if ( (v7 & 0x20) != 0 )
  {
    result[7857] = v2;
    v5 = 1;
    goto LABEL_51;
  }
  if ( (v7 & 0x10) != 0 )
  {
    v13 = result + 7855;
    v5 = result[7855];
    if ( v5 != 22 )
      goto LABEL_51;
    goto LABEL_50;
  }
  if ( (v7 & 0x80) != 0 )
    goto LABEL_25;
  return result;
}

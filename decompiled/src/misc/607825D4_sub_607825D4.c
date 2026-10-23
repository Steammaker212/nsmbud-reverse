/* sub_607825D4
 * address: 0x607825D4   size: 636   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_607825D4()
{
  int *result; // r0
  int v1; // r1
  _DWORD *v2; // r2
  _DWORD *v3; // r2
  int v4; // s2

  result = (int *)dword_60C9CF04;
  if ( dword_60C9CF04 )
  {
    if ( byte_60CC2C51 )
    {
      FIELD_U8(dword_60C9CF04, 16) = 1;
      v1 = dword_60CC2C58;
      if ( dword_60CC2C58 == 15 )
      {
        v2 = result + 18;
      }
      else
      {
        if ( dword_60CC2C58 )
          goto LABEL_12;
        v2 = result + 6;
      }
      *v2 = -1;
LABEL_12:
      *((_BYTE *)result + 512) = 1;
      if ( v1 == 15 )
        goto LABEL_25;
      goto LABEL_21;
    }
    if ( !byte_60CC2C52 )
    {
      if ( byte_60CC2C53 )
      {
        FIELD_U8(dword_60C9CF04, 16) = 1;
        v1 = dword_60CC2C58;
        if ( dword_60CC2C58 == 15 )
        {
          result[12] = 1;
          *((_BYTE *)result + 512) = 1;
          result[136] = 1;
          goto LABEL_26;
        }
        if ( !dword_60CC2C58 )
        {
          result[6] = -1;
          *((_BYTE *)result + 512) = 1;
LABEL_22:
          result[130] = -1;
LABEL_23:
          v1 = 0;
          goto LABEL_27;
        }
      }
      else
      {
        if ( !byte_60CC2C54 )
        {
          if ( !byte_60CC2C55 )
          {
            v1 = dword_60CC2C58;
            goto LABEL_27;
          }
          FIELD_U8(dword_60C9CF04, 16) = 1;
          v1 = dword_60CC2C58;
          if ( dword_60CC2C58 )
          {
            *((_BYTE *)result + 512) = 1;
            goto LABEL_27;
          }
          v4 = (int)unk_60C249CC;
          result[6] = (int)unk_60C249CC;
          *((_BYTE *)result + 512) = 1;
          result[130] = v4;
          goto LABEL_23;
        }
        FIELD_U8(dword_60C9CF04, 16) = 1;
        v1 = dword_60CC2C58;
        switch ( dword_60CC2C58 )
        {
          case 75:
            result[12] = 1;
            *((_BYTE *)result + 512) = 1;
            result[136] = 1;
            v1 = 75;
            goto LABEL_27;
          case 45:
            result[6] = -1;
            *((_BYTE *)result + 512) = 1;
            result[130] = -1;
            v1 = 45;
            goto LABEL_27;
          case 0:
            result[8] = -1;
            result[17] = -1;
            *((_BYTE *)result + 512) = 1;
            result[132] = -1;
            result[141] = -1;
            goto LABEL_23;
        }
      }
      *((_BYTE *)result + 512) = 1;
      goto LABEL_27;
    }
    FIELD_U8(dword_60C9CF04, 16) = 1;
    v1 = dword_60CC2C58;
    if ( dword_60CC2C58 == 15 )
    {
      result[8] = -1;
      v3 = result + 18;
    }
    else
    {
      if ( dword_60CC2C58 )
        goto LABEL_20;
      v3 = result + 6;
    }
    *v3 = -1;
LABEL_20:
    *((_BYTE *)result + 512) = 1;
    if ( v1 == 15 )
    {
      result[132] = -1;
LABEL_25:
      result[142] = -1;
LABEL_26:
      v1 = 15;
      goto LABEL_27;
    }
LABEL_21:
    if ( v1 )
    {
LABEL_27:
      dword_60CC2C58 = v1 + 1;
      return &dword_60CC2C58;
    }
    goto LABEL_22;
  }
  return result;
}

/* sub_605464D4
 * address: 0x605464D4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_605464D4(_DWORD *result)
{
  int *v1; // r1
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r3

  v1 = result + 1165;
  switch ( result[1165] )
  {
    case 0:
      v2 = result[7863];
      if ( (v2 & 0x40) != 0 )
      {
        *v1 = 13;
        goto LABEL_33;
      }
      if ( (v2 & 0x10) != 0 )
      {
        v3 = result[7857];
        if ( (v3 & 0xFFFFFFFE) == 0xA )
        {
          v3 = 13;
          result[7857] = 13;
        }
        goto LABEL_32;
      }
      return result;
    case 0xA:
      v4 = result[7863];
      if ( (v4 & 0x20) != 0 )
        goto LABEL_24;
      if ( (v4 & 0x80) != 0 )
      {
        *v1 = 11;
        goto LABEL_33;
      }
      return result;
    case 0xB:
      v5 = result[7863];
      if ( (v5 & 0x20) != 0 )
        goto LABEL_29;
      if ( (v5 & 0x40) != 0 && (int)result[8370] >= 3 )
        goto LABEL_18;
      return result;
    case 0xC:
      v6 = result[7863];
      if ( (v6 & 0x20) != 0 )
      {
        v8 = 12;
        goto LABEL_27;
      }
      if ( (v6 & 0x10) != 0 && (int)result[8370] >= 3 )
      {
        result[7857] = 11;
LABEL_18:
        *v1 = 10;
        goto LABEL_33;
      }
      if ( (v6 & 0x80) != 0 )
      {
LABEL_29:
        v3 = 13;
        goto LABEL_31;
      }
      return result;
    case 0xD:
      v7 = result[7863];
      if ( (v7 & 0x20) != 0 )
        goto LABEL_23;
      if ( (v7 & 0x10) != 0 )
      {
        v3 = 11;
      }
      else
      {
        if ( (v7 & 0x40) == 0 )
        {
          if ( (v7 & 0x80) == 0 )
            return result;
LABEL_23:
          v8 = 13;
LABEL_27:
          result[7857] = v8;
          *v1 = 0;
LABEL_33:
          result[8372] = result[8373];
          return result;
        }
LABEL_24:
        v3 = 12;
      }
LABEL_31:
      result[7857] = v3;
LABEL_32:
      *v1 = v3;
      goto LABEL_33;
    default:
      return result;
  }
}

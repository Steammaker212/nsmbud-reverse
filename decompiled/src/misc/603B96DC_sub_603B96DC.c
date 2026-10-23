/* sub_603B96DC
 * address: 0x603B96DC   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B96DC(int a1, int a2)
{
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r0
  int result; // r0
  int v7; // r0

  v3 = 0;
  switch ( FIELD_U32(a1, 22544) )
  {
    case 0:
      if ( (FIELD_U8(a2, 2224) & 1) == 0 )
        goto LABEL_13;
      v4 = sub_6014C4A4(a2);
      goto LABEL_9;
    case 1:
      v5 = FIELD_U32(a2, 2224);
      if ( (v5 & 0x440000) == 0 || (v5 & 0x10000000) != 0 )
        goto LABEL_13;
      v4 = sub_6014C658(a2, 0);
      goto LABEL_9;
    case 2:
      if ( (FIELD_U32(a2, 2224) & 0x10400) != 0x400 )
        goto LABEL_13;
      v4 = sub_6014C5E8(a2);
LABEL_9:
      FIELD_U32(a1, 6464) = v4;
      result = 1;
      break;
    case 3:
      v7 = FIELD_U32(a2, 2224);
      if ( (v7 & 0x880000) != 0 && (v7 & 0x20000000) == 0 )
      {
        v3 = 1;
        FIELD_U32(a1, 6464) = sub_6014C658(a2, 1);
      }
      goto LABEL_13;
    default:
LABEL_13:
      result = v3;
      break;
  }
  return result;
}

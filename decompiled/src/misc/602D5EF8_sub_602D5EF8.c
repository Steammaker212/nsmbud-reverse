/* sub_602D5EF8
 * address: 0x602D5EF8   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D5EF8(int a1)
{
  int result; // r0
  int v3; // r1
  bool v4; // zf
  int v5; // r1

  result = sub_60003AE0((StageActor *)a1);
  if ( result == 1 )
  {
    v3 = FIELD_U32(a1, 2872);
    if ( (v3 & 0x10400) == 0x400 && (FIELD_U8(a1, 2984) & 4) != 0 )
      goto LABEL_7;
    v4 = (FIELD_U32(a1, 2872) & 1) == 0;
    result = 0;
    if ( (v3 & 1) != 0 )
      v4 = (FIELD_U8(a1, 2984) & 8) == 0;
    if ( !v4 )
    {
LABEL_7:
      result = 0;
      if ( FIELD_U16(a1, 5952) == 0x1F )
        result = sub_6014B69C(a1 + 648);
      if ( FIELD_U16(a1, 5944) == 0x1F )
        result = sub_6014B6F8(a1 + 648);
    }
    v5 = FIELD_U32(a1, 2872);
    if ( (v5 & 0x440000) != 0 && (v5 & 0x10000000) == 0 && (FIELD_U8(a1, 2984) & 1) != 0
      || (v5 & 0x880000) != 0 && (v5 & 0x20000000) == 0 && (FIELD_U8(a1, 2984) & 2) != 0 )
    {
      if ( FIELD_U16(a1, 5928) == 0x1F )
        result = sub_6014B758(a1 + 648, 0);
      if ( FIELD_U16(a1, 5936) == 0x1F )
        result = sub_6014B758(a1 + 648, 1);
    }
    if ( !result )
      return SE_EMY_DOWN_ref_2A7624(a1);
  }
  return result;
}

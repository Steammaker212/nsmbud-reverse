/* sub_6062C150
 * address: 0x6062C150   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062C150(int a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r2

  v2 = FIELD_U8(a1, 6138);
  switch ( FIELD_U8(a1, 6137) )
  {
    case 0:
      v3 = sub_606D4BD4(FIELD_U8(a1, 6138));
      goto LABEL_4;
    case 1:
      v3 = sub_606D4ABC(FIELD_U8(a1, 6138));
LABEL_4:
      v4 = v3;
      v5 = 0;
      if ( !v3 )
        return 0;
      goto LABEL_11;
    case 2:
      v4 = sub_606D41DC(FIELD_U8(a1, 6138));
      if ( v4 )
        goto LABEL_10;
      v4 = sub_606D42F4(v2);
      if ( !v4 )
        return 0;
      v5 = 1;
      goto LABEL_11;
    case 3:
      v4 = sub_606D4150(FIELD_U8(a1, 6138));
      if ( v4 )
      {
LABEL_10:
        v5 = 0;
      }
      else
      {
        v4 = sub_606D4268(v2);
        if ( !v4 )
          return 0;
        v5 = 1;
      }
LABEL_11:
      sub_6062C6D4(a1, v4, v5);
      sub_6062C818(a1, v4);
      return v4;
    default:
      return 0;
  }
}

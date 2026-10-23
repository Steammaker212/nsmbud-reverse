/* sub_603B992C
 * address: 0x603B992C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B992C(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r1
  int v4; // r0
  int v5; // r0
  int result; // r0

  switch ( a1[5636] )
  {
    case 0:
      if ( !sub_60150BDC(a1 + 1622, 3u) )
        goto LABEL_13;
      v2 = a1 + 1622;
      v3 = 3;
      goto LABEL_10;
    case 1:
      if ( !sub_60150BDC(a1 + 1622, 0) )
        goto LABEL_13;
      v2 = a1 + 1622;
      v3 = 0;
      goto LABEL_10;
    case 2:
      if ( !sub_60150BDC(a1 + 1622, 2u) )
        goto LABEL_13;
      v2 = a1 + 1622;
      v3 = 2;
      goto LABEL_10;
    case 3:
      if ( !sub_60150BDC(a1 + 1622, 1u) )
        goto LABEL_13;
      v2 = a1 + 1622;
      v3 = 1;
LABEL_10:
      v4 = sub_60150BDC(v2, v3);
      v5 = sub_6014A2B8(v4);
      a1[5643] = v5;
      if ( v5 )
      {
        result = FIELD_U32(v5, 144);
        if ( !result )
          return result;
      }
      else
      {
        result = 0;
      }
LABEL_15:
      a1[4848] = result;
      return result;
    default:
LABEL_13:
      result = 0;
      a1[5643] = 0;
      goto LABEL_15;
  }
}

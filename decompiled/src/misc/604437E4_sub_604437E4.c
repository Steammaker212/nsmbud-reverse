/* sub_604437E4
 * address: 0x604437E4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604437E4(int result, _DWORD *a2)
{
  int v3; // r12
  int v4; // r2
  bool v5; // zf
  int v6; // r2
  bool v7; // zf

  switch ( *a2 )
  {
    case 0:
      v3 = FIELD_U32(result, 420);
      if ( v3 )
        result = sub_60444EDC(v3, FIELD_U32(result, 424), a2[6], a2[7], result + 432, FIELD_U32(result, 428), 0);
      break;
    case 1:
      if ( FIELD_U32(result, 420) )
        result = sub_60445044(FIELD_U32(result, 420), FIELD_U32(result, 424));
      break;
    case 2:
      v4 = FIELD_U32(result, 420);
      v5 = v4 == 0;
      if ( v4 )
        v5 = FIELD_U8(result, 496) == 0;
      if ( !v5 )
      {
        sub_60445120(FIELD_U32(result, 420), FIELD_U32(result, 424), a2);
        goto LABEL_14;
      }
      break;
    case 3:
      v6 = FIELD_U32(result, 420);
      v7 = v6 == 0;
      if ( v6 )
        v7 = FIELD_U8(result, 496) == 0;
      if ( !v7 )
      {
        sub_60445224(FIELD_U32(result, 420), FIELD_U32(result, 424), a2);
LABEL_14:
        result = dword_60CC78FC(*(_DWORD *)(a2[10] + 192), 0.0, 0.0, 0.0);
      }
      break;
    default:
      return result;
  }
  return result;
}

/* sub_60321D0C
 * address: 0x60321D0C   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321D0C(int result, int a2)
{
  int v2; // r3

  FIELD_U8(result, 7324) = FIELD_U8(result, 6320);
  v2 = FIELD_U32(result, 6328);
  switch ( v2 )
  {
    case 3:
      result += 7312;
      if ( FIELD_S32(result, 4) > 0 )
        return result;
LABEL_8:
      *(_QWORD *)result = 0;
      return result;
    case 2:
      result += 7312;
      if ( FIELD_S32(result, 4) >= 1 )
        return result;
      goto LABEL_8;
    case 0:
      FIELD_U32(result, 6328) = a2;
      FIELD_U32(result, 7316) = 0;
      FIELD_U32(result, 7312) = 0;
      FIELD_U32(result, 7320) = FIELD_U32(result, 164);
      break;
  }
  return result;
}

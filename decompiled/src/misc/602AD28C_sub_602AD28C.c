/* sub_602AD28C
 * address: 0x602AD28C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602AD28C(int a1)
{
  int *v2; // r5
  int v3; // r0

  v2 = (int *)(a1 + 7244);
  switch ( FIELD_U32(a1, 7244) )
  {
    case 1:
      if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 7240, 2.2, 0.5, 1.0, 0.01) < 0.01 )
      {
        FIELD_U16(a1, 6278) = 0;
        v3 = 2;
        goto LABEL_12;
      }
      break;
    case 2:
      if ( !FIELD_U16(a1, 6278) )
      {
        v3 = 3;
        goto LABEL_12;
      }
      break;
    case 3:
    case 6:
      if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 7240, 1.0, 0.1, 0.1, 0.01) < 0.01 )
      {
        v3 = 0;
        goto LABEL_12;
      }
      break;
    case 4:
      if ( ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 7240, 0.25, 0.5, 1.0, 0.01) < 0.01 )
      {
        FIELD_U16(a1, 6278) = 10;
        v3 = 5;
        goto LABEL_12;
      }
      break;
    case 5:
      if ( !FIELD_U16(a1, 6278) )
      {
        v3 = 6;
LABEL_12:
        *v2 = v3;
      }
      break;
    default:
      return;
  }
}

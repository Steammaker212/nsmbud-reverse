/* sub_6053A6A4
 * address: 0x6053A6A4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053A6A4(int a1)
{
  float *v2; // r6
  _BYTE *v3; // r7

  v2 = (float *)(a1 + 83528);
  v3 = (_BYTE *)(a1 + 83570);
  if ( FIELD_U32(a1, 4048) == 1 )
  {
    nullsub_4391();
    *v3 = 1;
    *v2 = sub_60532710(a1 + 56);
  }
  if ( FIELD_U32(a1, 8060) == 1 )
  {
    nullsub_4391();
    *v3 = 1;
    *v2 = sub_60532710(a1 + 4068);
  }
  if ( FIELD_U32(a1, 12072) == 1 )
  {
    nullsub_4391();
    *v3 = 1;
    *v2 = sub_60532710(a1 + 8080);
  }
  FIELD_U8(a1, 83565) = 0;
  FIELD_U32(a1, 83512) = 0;
  FIELD_U32(a1, 16708) = 0;
  FIELD_U32(a1, 83508) = 1;
  return 83508;
}

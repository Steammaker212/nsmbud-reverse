/* sub_60670D9C
 * address: 0x60670D9C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60670D9C(int a1, int a2)
{
  int v2; // r4

  v2 = FIELD_U32(a2, 144);
  if ( !FIELD_U8(v2, 8266) )
  {
    FIELD_U8(v2, 8266) = 40;
    sub_606702FC(v2);
    sub_60670C2C(v2);
  }
  return 1;
}

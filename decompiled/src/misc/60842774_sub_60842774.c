/* sub_60842774
 * address: 0x60842774   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60842774(int a1)
{
  if ( FIELD_U8(a1, 368) )
    sub_6083D59C(a1 + 8);
  sub_60835494(a1 + 80);
  sub_60835494(a1 + 152);
  sub_60835494(a1 + 224);
  sub_60835494(a1 + 296);
  if ( FIELD_U8(a1, 440) )
    sub_6083CF58(a1 + 376);
  FIELD_U32(a1, 448) = 0;
  return 0;
}

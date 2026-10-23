/* sub_607B0DD4
 * address: 0x607B0DD4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607B0DD4(int a1)
{
  if ( FIELD_U32(a1, 9976) )
  {
    if ( FIELD_U32(a1, 9940) == 1 )
      sub_6076F140(a1);
    else
      nullsub_2142(a1);
  }
  JUMPOUT(0x60774E08);
}

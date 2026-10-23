/* sub_608DA388
 * address: 0x608DA388   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA388(int a1, int a2)
{
  int result; // r0

  result = FIELD_U16(a2, 152);
  if ( (result & 1) != 0 )
  {
    sub_6099C210(a2 + 16);
    result = FIELD_U16(a2, 152);
  }
  if ( (result & 2) != 0 )
  {
    sub_6099C218(a2 + 16);
    result = FIELD_U16(a2, 152);
  }
  if ( (result & 4) != 0 )
  {
    sub_6099C220(a2 + 16);
    result = FIELD_U16(a2, 152);
  }
  if ( (result & 8) != 0 )
  {
    sub_6099C228(a2 + 16);
    result = FIELD_U16(a2, 152);
  }
  if ( (result & 0x10) != 0 )
  {
    sub_6099C230(a2 + 16);
    result = FIELD_U16(a2, 152);
  }
  if ( (result & 0x20) != 0 )
    FIELD_U32(a2, 124) = FIELD_U32(a1, 20);
  if ( (result & 0x40) != 0 )
  {
    result = FIELD_U32(a1, 32);
    FIELD_U32(a2, 136) = result;
  }
  return result;
}

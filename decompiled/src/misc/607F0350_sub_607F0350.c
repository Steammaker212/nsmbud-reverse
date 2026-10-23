/* sub_607F0350
 * address: 0x607F0350   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0350(int a1)
{
  int v1; // r4

  v1 = 0;
  if ( !FIELD_U32(a1, 496) )
  {
    v1 = 1;
    FIELD_U32(a1, 112) = 5;
    FIELD_U32(a1, 472) = 0;
    FIELD_U32(a1, 496) = 1;
    FIELD_U8(a1, 492) = 1;
    FIELD_U32(a1, 488) = 0;
    sub_608EF560();
  }
  return v1;
}

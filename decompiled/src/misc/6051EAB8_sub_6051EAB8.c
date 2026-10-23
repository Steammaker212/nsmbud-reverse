/* sub_6051EAB8
 * address: 0x6051EAB8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051EAB8(int a1)
{
  *(_BYTE *)(FIELD_U32(a1, 15036) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 15040) + 64) &= ~1u;
  FIELD_U8(a1, 15044) = 1;
  FIELD_U32(a1, 4736) = FIELD_U8(a1, 15028);
  return sub_60502694(a1 + 3708);
}

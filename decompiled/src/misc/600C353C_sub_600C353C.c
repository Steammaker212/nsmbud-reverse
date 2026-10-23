/* sub_600C353C
 * address: 0x600C353C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600C353C(int a1)
{
  FIELD_U32(a1, 7108) &= ~4u;
  JUMPOUT(0x600C7160);
}

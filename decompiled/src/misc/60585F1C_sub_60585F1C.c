/* sub_60585F1C
 * address: 0x60585F1C   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60585F1C(int a1)
{
  if ( (FIELD_U8(a1, 20) & 1) != 0 )
    sub_60585D84((ModelWrapper **)a1);
  return 1;
}

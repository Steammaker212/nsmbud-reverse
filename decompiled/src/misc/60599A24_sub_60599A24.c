/* sub_60599A24
 * address: 0x60599A24   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_60599A24(int a1)
{
  if ( (FIELD_U8(a1, 6262) & 2) != 0 )
    return &unk_60B04D60;
  else
    return (void *)sub_605DA7BC();
}

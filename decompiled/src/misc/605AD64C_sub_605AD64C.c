/* sub_605AD64C
 * address: 0x605AD64C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_605AD64C(int a1, unsigned int a2)
{
  return 256.0 - (float)((float)a2 * (float)(256.0 / (float)FIELD_U32(a1, 6804)));
}

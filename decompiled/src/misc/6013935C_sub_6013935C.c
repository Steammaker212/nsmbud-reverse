/* sub_6013935C
 * address: 0x6013935C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013935C(int result)
{
  if ( FIELD_U8(result, 6148) )
    return EffectData_create(545, (Vec3 *)(result + 108), 0, 0);
  return result;
}

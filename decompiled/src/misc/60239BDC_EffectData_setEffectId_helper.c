/* EffectData_setEffectId_helper
 * address: 0x60239BDC   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EffectData_setEffectId_helper(int a1, unsigned int a2)
{
  if ( a2 <= 0x4D6 )
    return sub_6023B10C(FIELD_U32(a1, 220));
  else
    return 0;
}

/* sub_6034BF04
 * address: 0x6034BF04   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6034BF04(int a1, int a2, int a3)
{
  if ( FIELD_U32(a1, 6820) != 1 )
    return CarryableEnemy__collisionIceball(a1, a2, a3);
  SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0(a3);
  return 0;
}

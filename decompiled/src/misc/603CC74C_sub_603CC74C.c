/* sub_603CC74C
 * address: 0x603CC74C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603CC74C(int a1, int a2, int a3)
{
  if ( FIELD_U32(a1, 6300) == 1 )
  {
    SE_OBJ_PNGN_ICEBALL_DISAPP_ref_2A2DA0(a3);
    return 0;
  }
  else
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    return Enemy__collisionIceball((Enemy *)a1, a2, a3);
  }
}

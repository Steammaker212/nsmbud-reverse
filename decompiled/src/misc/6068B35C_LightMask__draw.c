/* LightMask__draw
 * address: 0x6068B35C   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall LightMask__draw(RevealMaskRelated *a1)
{
  if ( sub_6068C438(MaskMgr_instance) == 1 )
    sub_6068AD50(FIELD_U32(a1, 0x18));
  return 1;
}

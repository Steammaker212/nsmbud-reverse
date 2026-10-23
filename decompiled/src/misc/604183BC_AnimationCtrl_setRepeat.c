/* AnimationCtrl_setRepeat
 * address: 0x604183BC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall AnimationCtrl_setRepeat(ModelAnimation *this, int repeat)
{
  if ( repeat == 1 )
  {
    FIELD_U32(this, 0x18) |= 1u;
  }
  else if ( !repeat )
  {
    FIELD_U32(this, 0x18) &= ~1u;
  }
}

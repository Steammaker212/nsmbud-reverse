/* sub_60365138
 * address: 0x60365138   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60365138(int a1)
{
  KoopaTroopa_onDraw(a1);
  if ( FIELD_U32(a1, 6352) == 2 )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7504));
  return 1;
}

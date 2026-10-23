/* sub_60650864
 * address: 0x60650864   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60650864(int a1)
{
  __int16 v1; // r1

  if ( !FIELD_U8(a1, 7565) || (v1 = FIELD_U16(a1, 7562), v1 > 127) || (v1 & 4) == 0 )
    DrawMgr_drawModel(DrawMgr_instance, **(void ***)(a1 + 7256));
  return 1;
}

/* sub_600DACD8
 * address: 0x600DACD8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DACD8(int a1)
{
  if ( FIELD_U8(dword_60C9A1F0, 6559) != 1 )
    return KoopalingBase__vf678(a1);
  FIELD_U16(a1, 6276) = 5;
  return a1;
}

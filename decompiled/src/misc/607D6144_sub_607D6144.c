/* sub_607D6144
 * address: 0x607D6144   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607D6144(int a1, _DWORD *a2)
{
  if ( !a2 )
    return 0;
  *a2 = FIELD_U32(a1, 688);
  a2[1] = FIELD_U32(a1, 692);
  return FIELD_U8(a1, 684) != 0;
}

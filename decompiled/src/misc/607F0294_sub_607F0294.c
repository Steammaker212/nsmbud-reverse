/* sub_607F0294
 * address: 0x607F0294   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F0294(int a1)
{
  _DWORD *v1; // r1

  v1 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0x12u )
    v1 += 18;
  return sub_60955444(*v1, a1 + 500);
}

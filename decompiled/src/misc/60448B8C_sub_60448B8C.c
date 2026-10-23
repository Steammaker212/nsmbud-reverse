/* sub_60448B8C
 * address: 0x60448B8C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60448B8C(int result, int a2)
{
  int v3; // r1

  v3 = FIELD_U32(result, 128);
  if ( v3 )
    return sub_608785CC(result + 32, **(_DWORD **)(v3 + 68), a2, 0);
  return result;
}

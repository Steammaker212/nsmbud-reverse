/* BanzaiBill_vf42
 * address: 0x60320F00   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BanzaiBill_vf42(int a1, float *a2)
{
  if ( sub_602A588C(a1) )
    return 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  return Enemy__vfA8(a1, a2);
}

/* KoopalingBase__vf4EC
 * address: 0x600B360C   size: 72   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
signed int __fastcall KoopalingBase__vf4EC(signed int result)
{
  int v1; // r1

  v1 = **(_DWORD **)(result + 7800);
  if ( v1 >= 0 )
    return EffectWrapper_update((EffectWrapper *)(result + 7804), v1, (Vec3 *)(result + 108), 0, 0);
  return result;
}

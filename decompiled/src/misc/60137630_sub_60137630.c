/* sub_60137630
 * address: 0x60137630   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60137630(int a1)
{
  unsigned int v2; // r0

  v2 = 0;
  if ( FIELD_F32(a1, 120) > 0.0 )
    v2 = 0x80000000;
  FIELD_U32(a1, 6252) = v2;
  EffectWrapper_update((EffectWrapper *)(a1 + 6260), 3, (Vec3 *)(a1 + 108), (Vec3i *)(a1 + 6248), 0);
  return LightSource_update1((LightSource *)(a1 + 6364), 0, (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
}

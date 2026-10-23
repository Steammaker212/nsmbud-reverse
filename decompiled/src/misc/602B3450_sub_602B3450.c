/* sub_602B3450
 * address: 0x602B3450   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B3450(int a1)
{
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1071644672;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 6312) = 1033476506;
  if ( !sub_602B4874(a1) && FIELD_F32(a1, 112) <= (float)(FIELD_F32(a1, 6332) + 96.0) )
    EffectWrapper_update((EffectWrapper *)(a1 + 6344), 343, (Vec3 *)(a1 + 108), 0, 0);
  FIELD_U32(a1, 6304) = 5;
  return 6304;
}

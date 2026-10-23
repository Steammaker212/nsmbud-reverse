/* sub_602BB404
 * address: 0x602BB404   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602BB404(int a1)
{
  int v1; // r1
  EffectData *v3; // r0
  int v4; // r1
  Vec3 v5[2]; // [sp+8h] [bp-18h] BYREF

  v5[0] = *(Vec3 *)(a1 + 6312);
  v1 = FIELD_U32(a1, 5956);
  switch ( BYTE1(v1) )
  {
    case 1u:
      return sub_602375C4((EffectData *)(a1 + 6564), 685, v5, 0, 0);
    case 2u:
      return sub_602375C4((EffectData *)(a1 + 6564), 684, v5, 0, 0);
    case 4u:
      return sub_602375C4((EffectData *)(a1 + 6564), 683, v5, 0, 0);
  }
  v3 = (EffectData *)(a1 + 6564);
  if ( BYTE1(v1) != 0xB )
    v4 = 682;
  else
    v4 = 686;
  return sub_602375C4(v3, v4, v5, 0, 0);
}

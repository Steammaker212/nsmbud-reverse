/* sub_602BB4E0
 * address: 0x602BB4E0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_602BB4E0(int a1)
{
  int v1; // r1
  EffectData *v3; // r0
  int v4; // r1
  Vec3 v5; // [sp+4h] [bp-24h] BYREF
  Vec3 v6[2]; // [sp+10h] [bp-18h] BYREF

  v6[0] = *(Vec3 *)(a1 + 6324);
  v5.x = 0.5;
  v5.y = 0.5;
  v5.z = 0.5;
  v1 = FIELD_U32(a1, 5956);
  switch ( BYTE1(v1) )
  {
    case 1u:
      return sub_602375C4((EffectData *)(a1 + 6436), 685, v6, 0, &v5);
    case 2u:
      return sub_602375C4((EffectData *)(a1 + 6436), 684, v6, 0, &v5);
    case 4u:
      return sub_602375C4((EffectData *)(a1 + 6436), 683, v6, 0, &v5);
  }
  v3 = (EffectData *)(a1 + 6436);
  if ( BYTE1(v1) != 0xB )
    v4 = 682;
  else
    v4 = 686;
  return sub_602375C4(v3, v4, v6, 0, &v5);
}

/* sub_6046E1CC
 * address: 0x6046E1CC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046E1CC(int a1)
{
  int v2; // r0
  int v3; // r1

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6292) = v2;
  FIELD_U32(a1, 6296) = v3;
  FIELD_U32(a1, 6268) = v2;
  FIELD_U32(a1, 6272) = v3;
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6100));
  sub_6046DF74(a1);
  if ( FIELD_U32(a1, 6140) == 1 )
    EffectWrapper_update((EffectWrapper *)(a1 + 6144), 89, (Vec3 *)(a1 + 6128), 0, (Vec3 *)(a1 + 144));
  return 1;
}

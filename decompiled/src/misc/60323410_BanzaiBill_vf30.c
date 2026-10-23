/* BanzaiBill_vf30
 * address: 0x60323410   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BanzaiBill_vf30(StageActor *a1, Vec2 *a2)
{
  Vec2 *v4; // r1
  int v5; // r2
  int v6; // r3

  if ( Actor__getProfileId(&FIELD_U32(a1, 0x0)) == 630 || Actor__getProfileId(&FIELD_U32(a1, 0x0)) == 632 )
  {
    v4 = a2;
    v5 = 558;
    v6 = 4;
  }
  else
  {
    v4 = a2;
    v5 = 551;
    v6 = 6;
  }
  return StageActor__createWaterSplash(a1, v4, v5, v6, "SE_OBJ_CMN_SPLASH_POISON");
}

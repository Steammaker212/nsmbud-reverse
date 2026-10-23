/* sub_6000B1CC
 * address: 0x6000B1CC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6000B1CC(int a1, Actor *a2)
{
  int ProfileId; // r0

  ProfileId = Actor__getProfileId(a2);
  return ProfileId == 275 || ProfileId == 276 || ProfileId == 277 || ProfileId == 278;
}

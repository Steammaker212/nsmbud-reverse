/* Actor_ice_Lift_reru_build
 * address: 0x6061C324   size: 376   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_Lift_reru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1B08u);
  sub_6061BC30(v2, a1);
  *(_DWORD *)v2 = off_60C10CEC;
  memset((void *)(v2 + 6808), 0, 40);
  FIELD_U8(v2, 6848) = 1;
  FIELD_U8(v2, 6873) = 0;
  FIELD_U8(v2, 6870) = 0;
  FIELD_U8(v2, 6866) = 0;
  FIELD_U8(v2, 6862) = 0;
  FIELD_U8(v2, 6858) = 0;
  FIELD_U8(v2, 6854) = 0;
  FIELD_U8(v2, 6850) = 0;
  FIELD_U8(v2, 6875) = 0;
  FIELD_U8(v2, 6874) = 0;
  FIELD_U8(v2, 6869) = 0;
  FIELD_U8(v2, 6872) = 0;
  FIELD_U8(v2, 6871) = 0;
  FIELD_U8(v2, 6865) = 0;
  FIELD_U8(v2, 6868) = 0;
  FIELD_U8(v2, 6867) = 0;
  FIELD_U8(v2, 6861) = 0;
  FIELD_U8(v2, 6864) = 0;
  FIELD_U8(v2, 6863) = 0;
  FIELD_U8(v2, 6857) = 0;
  FIELD_U8(v2, 6860) = 0;
  FIELD_U8(v2, 6859) = 0;
  FIELD_U8(v2, 6853) = 0;
  FIELD_U8(v2, 6856) = 0;
  FIELD_U8(v2, 6855) = 0;
  FIELD_U8(v2, 6849) = 0;
  FIELD_U8(v2, 6852) = 0;
  FIELD_U8(v2, 6851) = 0;
  FIELD_U32(v2, 6876) = 45875200;
  FIELD_U32(v2, 6880) = 0x4000000;
  FIELD_U32(v2, 6884) = 0x1000000;
  FIELD_U32(v2, 6888) = 0x2000000;
  FIELD_U32(v2, 6892) = 0x4000000;
  FIELD_U32(v2, 6896) = 0x2000000;
  FIELD_U16(v2, 6912) = 0;
  FIELD_U32(v2, 6908) = 0;
  FIELD_U32(v2, 6904) = 0;
  FIELD_U32(v2, 6900) = 0;
  return v2;
}

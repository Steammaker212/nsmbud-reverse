/* Actor_jugemuakuta_build
 * address: 0x6030A078   size: 160   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_jugemuakuta_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A10u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE94CC;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U8(v2, 6308) = 0;
  FIELD_U8(v2, 6309) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U8(v2, 6316) = 0;
  FIELD_U32(v2, 6320) = 0;
  FIELD_U32(v2, 6324) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6328));
  FIELD_U32(v2, 6632) = off_60BE9770;
  sub_602A40A0((_DWORD *)(v2 + 6636), FIELD_U32(v2, 8));
  return v2;
}

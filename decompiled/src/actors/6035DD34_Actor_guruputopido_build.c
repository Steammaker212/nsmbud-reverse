/* Actor_guruputopido_build
 * address: 0x6035DD34   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_guruputopido_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x3150u);
  sub_603BECA4(v2, a1);
  *(_DWORD *)v2 = off_60BEF384;
  FIELD_U32(v2, 6928) = 0;
  FIELD_U32(v2, 6924) = 0;
  FIELD_U32(v2, 6920) = 0;
  FIELD_U32(v2, 6912) = 0;
  FIELD_U32(v2, 6916) = 0;
  sub_601531B4((CollisionMgr *)(v2 + 6936));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 12288));
  FIELD_U32(v2, 12592) = &ActorScaler_vtable;
  FIELD_U32(v2, 12596) = 1065353216;
  FIELD_U32(v2, 12600) = 1065353216;
  FIELD_U32(v2, 12604) = 1065353216;
  FIELD_U32(v2, 12608) = 1065353216;
  FIELD_U32(v2, 12612) = 0;
  FIELD_U32(v2, 12616) = 0;
  FIELD_U32(v2, 12620) = v2;
  return v2;
}

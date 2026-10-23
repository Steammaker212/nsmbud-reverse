/* Actor_editokoinakutarange_Tag_build
 * address: 0x605FBF1C   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_editokoinakutarange_Tag_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x17D8u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0E664;
  Actor_editokoinakutarange_Tag_build_helper(dword_60C7B3F8, FIELD_U8(v2, 20));
  FIELD_U8(v2, 19) = 1;
  return v2;
}

/* Actor_yoshitama_build
 * address: 0x6070E938   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_yoshitama_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1830u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C21778;
  sub_602A8564((_DWORD *)(v2 + 6112), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6168) = 0;
  FIELD_U32(v2, 6164) = 0;
  FIELD_U32(v2, 6160) = 0;
  FIELD_U32(v2, 6156) = 0;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6148) = 0;
  FIELD_U32(v2, 6172) = 21;
  FIELD_U32(v2, 6176) = 0;
  FIELD_U8(v2, 6180) = 0;
  FIELD_U32(v2, 6184) = 0;
  FIELD_U8(v2, 6188) = 0;
  return v2;
}

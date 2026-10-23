/* Actor_rutokuokeobujeBG_build
 * address: 0x6069CC68   size: 200   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rutokuokeobujeBG_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1EC0u);
  sub_6069C8B8(v2, a1);
  *(_DWORD *)v2 = off_60C1869C;
  memset((void *)(v2 + 6768), 0, 145);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6916));
  FIELD_U32(v2, 6916) = off_60BC6E38;
  FIELD_U32(v2, 6932) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6936));
  FIELD_U32(v2, 6936) = off_60BC6E38;
  FIELD_U32(v2, 6952) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6956));
  FIELD_U32(v2, 6956) = off_60BC6E38;
  FIELD_U32(v2, 6972) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6976));
  FIELD_U32(v2, 6976) = off_60BC6E38;
  memset((void *)(v2 + 6992), 0, 870);
  FIELD_U8(v2, 7864) = 0;
  return v2;
}

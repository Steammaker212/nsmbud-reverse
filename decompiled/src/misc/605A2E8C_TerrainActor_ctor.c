/* TerrainActor_ctor
 * address: 0x605A2E8C   size: 208   group: misc
 * sym: # TerrainActor_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall TerrainActor_ctor(int a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor((MultiStateActor *)a1, a2);
  *(_DWORD *)a1 = TerrainActor_vtable;
  FIELD_U32(a1, 0x17F4) = 0;
  FIELD_U32(a1, 0x17F0) = 0;
  FIELD_U32(a1, 0x17EC) = 0;
  FIELD_U32(a1, 0x17E8) = 0;
  FIELD_U32(a1, 0x17E0) = 0;
  FIELD_U32(a1, 0x17E4) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 0x17F8));
  FIELD_U32(a1, 0x17F8) = off_60BC30D8;
  memset((void *)(a1 + 0x1AAC), 0, 72);
  TerrainEffects_ctor(a1 + 6900);
  sead_IDisposer_ctor((sead_IDisposer *)(a1 + 0x11A40));
  FIELD_U32(a1, 0x11A40) = off_60BC6E38;
  FIELD_U32(a1, 0x11A50) = 0;
  memset(a1 + 0x11A58, 0, 44);
  return (sead_IDisposer *)a1;
}

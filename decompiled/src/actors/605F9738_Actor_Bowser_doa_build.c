/* Actor_Bowser_doa_build
 * address: 0x605F9738   size: 132   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Bowser_doa_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x19C0u);
  sub_605F7FA4((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C0D364;
  LightSource__ctor((LightSource *)(v2 + 6376));
  LightSource__ctor((LightSource *)(v2 + 6448));
  LightSource__ctor((LightSource *)(v2 + 6520));
  FIELD_U32(v2, 6316) = 1;
  memset((void *)(v2 + 6340), 0, 36);
  FIELD_U32(v2, 6332) = 84;
  return v2;
}

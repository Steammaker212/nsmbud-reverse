/* Actor_Bowser_doa_RDashfor_build_helper
 * address: 0x605F97C4   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Bowser_doa_RDashfor_build_helper(int a1, ActorBuildInfo *a2)
{
  sub_605F7FA4((Enemy *)a1, a2);
  *(_DWORD *)a1 = off_60C0D364;
  LightSource__ctor((LightSource *)(a1 + 6376));
  LightSource__ctor((LightSource *)(a1 + 6448));
  LightSource__ctor((LightSource *)(a1 + 6520));
  FIELD_U32(a1, 6316) = 1;
  memset((void *)(a1 + 6340), 0, 36);
  FIELD_U32(a1, 6332) = 84;
  return a1;
}

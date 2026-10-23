/* Actor_magunamusachikira_build
 * address: 0x6032D088   size: 68   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_magunamusachikira_build(ActorBuildInfo *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x3310u);
  result = sub_60321050(v2, a1);
  *(_DWORD *)result = off_60BEBFE4;
  FIELD_U32(result, 13060) = 0;
  FIELD_U8(result, 13064) = 0;
  return result;
}

/* Actor_gurupupatapata_build
 * address: 0x603642AC   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gurupupatapata_build(_DWORD *a1)
{
  int v2; // r0
  int result; // r0

  v2 = operator_new(0x1D68u);
  result = Actor_gurupupatapata_build_helper(v2, a1, 2);
  *(_DWORD *)result = off_60BEFCA8;
  FIELD_U16(result, 7512) = 0;
  FIELD_U32(result, 7504) = 0;
  FIELD_U32(result, 7508) = 0;
  FIELD_U32(result, 7516) = 1;
  FIELD_U32(result, 7520) = 0;
  FIELD_U32(result, 7524) = -1;
  return result;
}

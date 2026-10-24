/* ChallengeResCacheMgr_ref
 * address: 0x6081A9D0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall ChallengeResCacheMgr_ref(sead_IDisposer *a1, int a2)
{
  sead_IDisposer *result; // r0

  result = CalculateTask2_ctor(a1, a2, (int)"ChallengeResCacheMgr");
  FIELD_U32(result, 0x0) = (int)off_60C2A3A4;
  LOBYTE(FIELD_U32(result + (12) * 16, 0x0)) = 0;
  LOBYTE(FIELD_U32(result + (12) * 16, 0x8)) = 0;
  return result;
}

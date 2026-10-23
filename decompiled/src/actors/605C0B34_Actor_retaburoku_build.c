/* Actor_retaburoku_build
 * address: 0x605C0B34   size: 76   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_retaburoku_build(ActorBuildInfo *a1)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v2 = (_DWORD *)operator_new(0x1B40u);
  result = BlockCoinBase__ctor(v2, a1);
  *result = off_60C09CEC;
  *((_BYTE *)result + 6974) = 0;
  result[1742] = 0;
  *((_WORD *)result + 3486) = 0;
  return result;
}

/* Actor_gabon_ironball_build
 * address: 0x6013BA54   size: 80   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_gabon_ironball_build(int a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x1B90u);
  result = (_DWORD *)sub_6013D46C(v2, a1);
  *result = off_60BD2BC4;
  result[1760] = 1;
  result[1761] = 0;
  result[1762] = 1;
  return result;
}

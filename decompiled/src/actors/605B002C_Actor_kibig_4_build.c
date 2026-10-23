/* Actor_kibig_4_build
 * address: 0x605B002C   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall Actor_kibig_4_build(int a1)
{
  _DWORD *v1; // r0
  _DWORD *result; // r0

  v1 = (_DWORD *)operator_new(0x1AC0u);
  result = sub_605AD110(v1);
  *result = off_60C08FA4;
  *((_BYTE *)result + 6840) = 0;
  return result;
}

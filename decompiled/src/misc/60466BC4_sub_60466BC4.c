/* sub_60466BC4
 * address: 0x60466BC4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60466BC4(int a1, ActorBuildInfo *a2)
{
  int result; // r0

  result = sub_6045EC8C(a1, a2);
  *(_DWORD *)result = off_60BFB894;
  FIELD_U16(result, 6824) = 0;
  return result;
}

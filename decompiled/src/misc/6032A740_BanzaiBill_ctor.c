/* BanzaiBill_ctor
 * address: 0x6032A740   size: 44   group: misc
 * sym: # BanzaiBill_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall BanzaiBill_ctor(ActorBuildInfo *a1)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = operator_new(0x3308u);
  result = (_DWORD *)sub_60321050(v2, a1);
  *result = BanzaiBill_vtable;
  return result;
}

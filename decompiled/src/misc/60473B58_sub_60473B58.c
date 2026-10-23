/* sub_60473B58
 * address: 0x60473B58   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60473B58(_DWORD *a1, unsigned int a2, __int64 *a3)
{
  int v3; // r3

  v3 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > a2 )
    v3 += 4 * a2;
  return sub_604739E8(a1, (__int64 *)(*(_DWORD *)(*(_DWORD *)v3 + 72) + 4), a3);
}

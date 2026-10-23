/* sub_60248E20
 * address: 0x60248E20   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60248E20(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  if ( FIELD_U32(a1, 6320) == 1 || (FIELD_U8(dword_60C9CF0C, 1404) & (1 << FIELD_U8(a1, 6314))) != 0 )
    return Enemy__vf100((Enemy *)a1, a2, a3);
  else
    return 0;
}

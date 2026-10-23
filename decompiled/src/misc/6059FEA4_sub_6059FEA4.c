/* sub_6059FEA4
 * address: 0x6059FEA4   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059FEA4(int a1)
{
  if ( FIELD_F32(a1, 112) >= FIELD_F32(a1, 6308) )
    CollisionActor__handleGravity((CollisionActor *)a1);
  else
    (*(void (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60CAFD94);
}

/* sub_607F738C
 * address: 0x607F738C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607F738C(int a1, int a2)
{
  int v4; // r0
  __int16 v5; // [sp+0h] [bp-78h] BYREF

  v4 = sub_6090B350(&v5);
  v5 = 0;
  sub_6090B4B0(v4, FIELD_U32(a2, 40));
  if ( FIELD_U32(a1, 84808) <= 4u )
    nullsub_33();
}

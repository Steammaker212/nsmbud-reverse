/* sub_601C6BC0
 * address: 0x601C6BC0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6BC0(int a1, int a2)
{
  void *v2; // r3

  v2 = &unk_60AFC2B0;
  if ( FIELD_U32(a1, 264) == 5 )
    v2 = &unk_60AFC6BC;
  return (int)v2 + 12 * a2 + 488;
}

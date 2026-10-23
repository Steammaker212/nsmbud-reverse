/* sub_608C8078
 * address: 0x608C8078   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8078(int a1, int a2, int a3)
{
  int v4; // r0
  unsigned int v5; // r1

  v4 = sub_608B0CEC(a3);
  v5 = (v4 + 911) & 0xFFFFFFFC;
  if ( !v4 )
    v5 = 896;
  return v5 * a2 + 88;
}

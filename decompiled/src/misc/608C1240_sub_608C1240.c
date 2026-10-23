/* sub_608C1240
 * address: 0x608C1240   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1240(int a1, void *a2, int a3)
{
  int v3; // lr
  int result; // r0
  int v6; // r12
  bool v7; // zf

  result = 0;
  v6 = FIELD_U32(a1, 16);
  v7 = v6 == 0;
  if ( v6 )
  {
    v3 = FIELD_U16(a1, 20);
    v7 = v3 == 0;
  }
  if ( !v7 )
  {
    qmemcpy(a2, (const void *)(FIELD_U32(a1, 4) + v6 + v3 * a3), 0x100u);
    return 1;
  }
  return result;
}

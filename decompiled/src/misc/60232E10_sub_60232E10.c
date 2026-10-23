/* sub_60232E10
 * address: 0x60232E10   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_60232E10(int a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int v4; // r0

  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 420) + 12) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 420) + 20) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 420) + 28) + 4));
  v2 = FIELD_U32(a1, 420);
  v3 = FIELD_U32(v2, 24);
  v4 = FIELD_U32(v2, 28);
  if ( v3 > 1 )
    v4 += 4;
  return sub_6041838C((ModelAnimation *)(*(_DWORD *)v4 + 4));
}

/* sub_607505EC
 * address: 0x607505EC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelAnimation *__fastcall sub_607505EC(int *a1, int *a2)
{
  int v3; // r5
  int v4; // r1
  int v5; // r4
  int v6; // r1

  a1[2] = *a2;
  a1[3] = a2[1];
  a1[4] = a2[2];
  *((_BYTE *)a1 + 20) = 1;
  v3 = *a1;
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(*a1 + 12) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(v3 + 28) + 4));
  v4 = FIELD_U32(v3, 28);
  if ( FIELD_U32(v3, 24) > 1u )
    v4 += 4;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v4 + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(v3 + 36) + 4));
  v5 = a1[1];
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(v5 + 12) + 4));
  sub_6041838C((ModelAnimation *)(**(_DWORD **)(v5 + 28) + 4));
  v6 = FIELD_U32(v5, 28);
  if ( FIELD_U32(v5, 24) > 1u )
    v6 += 4;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v6 + 4));
  return sub_6041838C((ModelAnimation *)(**(_DWORD **)(v5 + 36) + 4));
}

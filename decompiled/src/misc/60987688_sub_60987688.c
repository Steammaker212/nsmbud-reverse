/* sub_60987688
 * address: 0x60987688   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60987688(int a1, int a2, int a3)
{
  int v5; // r6
  unsigned int v6; // r7
  char *v7; // r2

  v5 = sub_60911638(FIELD_U32(a2, 4), a3);
  if ( v5 < 0 )
    return sub_60987708(a1);
  v6 = (unsigned int)sub_609119F8(a2, v5) >> 1;
  v7 = 0;
  if ( FIELD_U32(a2, 8) > (unsigned int)v5 )
    v7 = sub_6091171C(FIELD_U32(a2, 4), v5);
  return sub_60987718(a1, v6, v7);
}

/* sub_6048856C
 * address: 0x6048856C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048856C(int a1)
{
  unsigned int v2; // r1
  unsigned int v3; // r0
  int v4; // r0
  unsigned int v5; // r2
  int v6; // r0

  v2 = 0;
  v3 = FIELD_U32(a1, 14228);
  if ( v3 >= 4 )
    v3 = 0;
  v4 = *(_DWORD *)(a1 + 4 * v3 + 47800);
  v5 = FIELD_U32(v4, 52);
  v6 = FIELD_U32(v4, 68);
  if ( v5 < 0x43 )
    v2 = v5;
  sub_60828EC8(dword_60CC6E04, *(_DWORD *)(v6 + 4 * v2 + 3636));
  return sub_6048DBC0(a1);
}

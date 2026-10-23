/* sub_6048921C
 * address: 0x6048921C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048921C(int a1)
{
  int v2; // r6
  _DWORD *v3; // r5

  v2 = 0;
  v3 = (_DWORD *)(a1 + 3808);
  FIELD_U16(a1, 4820) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3808));
  sub_60502548(a1 + 3768);
  if ( FIELD_U32(a1, 14228) < 4u )
    v2 = FIELD_U32(a1, 14228);
  return sub_6047F01C(v3, *(_DWORD *)(a1 + 4 * v2 + 6260));
}

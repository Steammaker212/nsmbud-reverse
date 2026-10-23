/* sub_602301B8
 * address: 0x602301B8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602301B8(int a1)
{
  int v1; // r1
  unsigned int v2; // r0
  unsigned int v3; // r2
  _DWORD *v4; // r1

  v1 = FIELD_U32(a1, 8);
  v2 = FIELD_U32(a1, 32);
  v3 = FIELD_U32(v1, 8);
  v4 = *(_DWORD **)(v1 + 12);
  if ( v3 > v2 )
    v4 += v2;
  return sub_60418548(*v4 + 4);
}

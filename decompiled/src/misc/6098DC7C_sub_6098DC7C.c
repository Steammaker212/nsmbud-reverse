/* sub_6098DC7C
 * address: 0x6098DC7C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098DC7C(int a1)
{
  int v2; // r5
  int v4; // [sp+4h] [bp-14h] BYREF

  v2 = 0;
  v4 = 0;
  sub_608E6C04((_BYTE *)a1, &v4, a1 + 88, a1 + 132, 1u);
  if ( v4 == 1 )
  {
    v2 = 1;
    ++FIELD_U32(a1, 84);
  }
  return v2;
}

/* sub_60436274
 * address: 0x60436274   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60436274(int a1, unsigned int a2, int a3)
{
  __int64 v6; // r0

  sub_60451D70(a3, a1, a2);
  v6 = FIELD_U64(a1, 160);
  if ( (unsigned int)v6 > a2 )
    HIDWORD(v6) += 4 * a2;
  *(_DWORD *)HIDWORD(v6) = a3;
  return v6;
}

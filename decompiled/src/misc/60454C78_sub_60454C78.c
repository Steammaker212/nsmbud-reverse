/* sub_60454C78
 * address: 0x60454C78   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60454C78(int a1)
{
  unsigned __int8 *v2; // r0
  int v3; // r1
  bool v4; // zf

  if ( FIELD_U32(a1, 1316) != 2 )
    return 0;
  v2 = (unsigned __int8 *)(FIELD_U32(a1, 1388) + 16);
  v3 = v2[4];
  v4 = v3 == 1;
  if ( v3 == 1 )
    v4 = v2[5] == 0;
  return v4 && v2[6] < 2u;
}

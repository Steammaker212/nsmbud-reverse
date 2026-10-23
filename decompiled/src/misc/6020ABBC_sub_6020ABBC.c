/* sub_6020ABBC
 * address: 0x6020ABBC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6020ABBC(int a1)
{
  _BOOL4 result; // r0
  int v3; // r1

  FIELD_U32(a1, 404) = 1;
  result = sub_60185EA8(a1);
  v3 = 4;
  if ( result )
    v3 = 0;
  FIELD_U32(a1, 400) = v3;
  return result;
}

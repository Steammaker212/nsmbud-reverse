/* sub_606ED1F8
 * address: 0x606ED1F8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606ED1F8(int a1, unsigned int a2)
{
  int v2; // r4

  v2 = a2;
  if ( a2 > 1 )
    v2 = 0;
  FIELD_U8(a1, 86) = v2;
  wait_long_ref((ModelWrapper **)a1, v2);
  return *(float *)&off_60C1FDDC[4 * v2 + 2];
}

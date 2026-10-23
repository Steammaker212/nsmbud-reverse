/* sub_603FBA2C
 * address: 0x603FBA2C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FBA2C(int result, int a2, unsigned int a3)
{
  int v3; // lr
  int v4; // r12
  int v5; // r3
  int v6; // r1

  v3 = 999999999;
  v4 = FIELD_U32(result, 728) + a2;
  v5 = 999999999;
  if ( v4 < 999999999 )
    v5 = FIELD_U32(result, 728) + a2;
  if ( v4 < 0 )
    v5 = 0;
  FIELD_U32(result, 728) = v5;
  if ( a3 != -1 )
  {
    if ( a3 >= 6 )
      a3 = 0;
    result += 72 * a3;
    v6 = FIELD_U32(result, 340) + a2;
    if ( v6 < 999999999 )
      v3 = v6;
    if ( v6 < 0 )
      v3 = 0;
    FIELD_U32(result, 340) = v3;
  }
  return result;
}

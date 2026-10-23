/* sub_60610988
 * address: 0x60610988   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60610988(int a1)
{
  int v2; // r4
  int v4; // r0

  v2 = 0;
  if ( StageActor__beforeExecute((StageActor *)a1) == 1 )
  {
    if ( !FIELD_U8(a1, 28) || FIELD_U8(a1, 1068) )
      return 1;
    v4 = sub_606106B0(a1);
    FIELD_U8(a1, 1068) = v4;
    return v4 == 1;
  }
  return v2;
}

/* KoopaTroopa_vf186
 * address: 0x6035D084   size: 60   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall KoopaTroopa_vf186(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( FIELD_U32(a1, 7476) == 1 )
  {
    v1 = 2;
    if ( !FIELD_U32(a1, 6352) )
      v1 = 3;
  }
  return (char *)&unk_60AFFF48 + 36 * v1;
}

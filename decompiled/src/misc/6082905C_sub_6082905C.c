/* sub_6082905C
 * address: 0x6082905C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082905C(int result)
{
  int v1; // r1
  _BYTE *v2; // r1
  int v3; // t1

  v1 = FIELD_U32(result, 40);
  v3 = FIELD_U8(v1, 19580);
  v2 = (_BYTE *)(v1 + 19580);
  if ( v3 )
  {
    *v2 = 0;
    FIELD_U8(result, 46) = 1;
  }
  return result;
}

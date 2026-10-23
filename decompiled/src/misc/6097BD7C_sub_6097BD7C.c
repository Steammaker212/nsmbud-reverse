/* sub_6097BD7C
 * address: 0x6097BD7C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BD7C(int result)
{
  _DWORD *v1; // r4
  int v2; // r6
  unsigned int i; // r5

  v1 = (_DWORD *)result;
  v2 = FIELD_U32(result, 1612);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
      result = sub_609795F8(v1, i);
  }
  return result;
}

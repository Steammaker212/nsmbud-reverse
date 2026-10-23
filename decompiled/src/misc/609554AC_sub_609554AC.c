/* sub_609554AC
 * address: 0x609554AC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_609554AC(int a1)
{
  __int16 v1; // r1
  bool v2; // zf
  int v3; // r1
  int *result; // r0

  v1 = FIELD_U16(a1, 82);
  v2 = (v1 & 2) == 0;
  if ( (v1 & 2) != 0 )
    v2 = (v1 & 0x21) == 0;
  if ( !v2 )
  {
    v3 = FIELD_U32(a1, 412);
    if ( v3 )
      return (int *)(v3 + 4);
  }
  result = *(int **)(a1 + 72);
  if ( !result )
    return &dword_60CD0A2C;
  return result;
}

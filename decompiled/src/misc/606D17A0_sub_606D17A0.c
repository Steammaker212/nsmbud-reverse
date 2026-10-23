/* sub_606D17A0
 * address: 0x606D17A0   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_606D17A0(int a1)
{
  unsigned int v1; // r4
  unsigned int result; // r0
  unsigned int v3; // r5

  v1 = FIELD_U32(a1, 6156);
  result = FIELD_U32(a1, 6152);
  do
  {
    v3 = result + 656;
    (*(void (__fastcall **)(unsigned int))(*(_DWORD *)result + 28))(result);
    result = v3;
  }
  while ( v3 < v1 );
  return result;
}

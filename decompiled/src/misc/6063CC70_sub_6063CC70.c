/* sub_6063CC70
 * address: 0x6063CC70   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063CC70(float *a1, float *a2)
{
  float *v2; // r5
  unsigned int v4; // r6
  int result; // r0

  v2 = a1;
  v4 = (unsigned int)(a1 + 10);
  do
  {
    result = mt_kusari_ref(v2, a2);
    v2 += 5;
  }
  while ( (unsigned int)v2 < v4 );
  return result;
}

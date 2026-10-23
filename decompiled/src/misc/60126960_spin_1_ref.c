/* spin_1_ref
 * address: 0x60126960   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall spin_1_ref(int *a1)
{
  float *v2; // r5
  float result; // s0

  v2 = (float *)(a1 + 1940);
  sub_60421AD4(a1[1774]);
  if ( !(*(int (__fastcall **)(int *))(*a1 + 716))(a1) )
    (*(void (__fastcall **)(int *))(*a1 + 720))(a1);
  *((_WORD *)a1 + 3138) = 32;
  result = *v2 * 40.0;
  *((float *)a1 + 2033) = result;
  return result;
}

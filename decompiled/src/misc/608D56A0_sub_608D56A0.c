/* sub_608D56A0
 * address: 0x608D56A0   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608D56A0(int a1)
{
  int v1; // r0
  unsigned int v2; // r1
  unsigned int v3; // t1

  v3 = FIELD_U32(a1, 4);
  v1 = a1 + 4;
  v2 = v3;
  if ( (v3 & 8) != 0 )
    return *(float *)(v1 + 4 * ((v2 & 1) + ((v2 >> 1) & 1) + ((v2 >> 2) & 1)) + 4);
  else
    return 1.0;
}

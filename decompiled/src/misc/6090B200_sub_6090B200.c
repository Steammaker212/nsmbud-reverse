/* sub_6090B200
 * address: 0x6090B200   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6090B200(float *a1, float *a2)
{
  _BOOL4 result; // r0

  result = 0;
  if ( *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] )
    return a1[3] == a2[3];
  return result;
}

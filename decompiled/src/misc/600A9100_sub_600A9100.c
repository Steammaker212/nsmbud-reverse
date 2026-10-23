/* sub_600A9100
 * address: 0x600A9100   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_600A9100(_DWORD *a1)
{
  int *v1; // r2
  int v2; // r1
  float result; // s0

  v1 = &dword_600A9138;
  LOWORD(v2) = 0;
  if ( a1[20] == 1 )
    v1 = &dword_600A913C;
  HIWORD(v2) = 16656;
  result = *(float *)v1;
  a1[76] = *v1;
  a1[77] = v2;
  a1[78] = 1097859072;
  a1[79] = v2;
  return result;
}

/* ModelWrapper_setup_helper_450DB4
 * address: 0x60450DB4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall ModelWrapper_setup_helper_450DB4(_DWORD *a1)
{
  AnimationBase_ctor((int)a1);
  *a1 = &off_60BFB0E8;
  a1[12] = 0;
  a1[11] = 0;
  a1[10] = 0;
  a1[13] = 1065353216;
  a1[14] = dword_6086A208;
  a1[21] = 0;
  a1[20] = 0;
  a1[19] = 0;
  a1[18] = 0;
  a1[17] = 0;
  a1[16] = 0;
  a1[15] = 0;
  a1[9] = a1 + 10;
  a1[24] = 0;
  a1[23] = 0;
  a1[22] = 0;
  a1[8] = &off_60C5A6E0;
  memset(a1 + 25, 0, 44);
  a1[36] = -1;
  return a1;
}

/* sub_60197320
 * address: 0x60197320   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_60197320(float *result)
{
  float v1; // s0
  StateMgr *v2; // r4

  v1 = result[50];
  if ( v1 <= 0.00000011921 && v1 >= -0.00000011921 )
  {
    v2 = (StateMgr *)(result + 71);
    (*(void (__fastcall **)(float *))(*(_DWORD *)result + 72))(result);
    return (float *)StateMgr__changeState(v2, (StateBase *)&dword_60C89B50);
  }
  return result;
}

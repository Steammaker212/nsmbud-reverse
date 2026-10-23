/* sub_60606BB4
 * address: 0x60606BB4   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60606BB4(StateMethodExecuter *result)
{
  unsigned int v1; // r3
  float *v2; // r1
  float v3; // s2
  float v4; // s10

  v1 = (unsigned int)result[568].vtable + (int)(float)((float)(2147500000.0 * 4.0) / 180.0);
  result[568].vtable = (void *)v1;
  v2 = (float *)((char *)sinLutTable + ((v1 >> 20) & 0xFF0));
  v3 = (float)(v1 & 0xFFFFFF);
  v4 = (float)(*(float *)&result[566].currentState + 0.0)
     + (float)((float)(*v2 + (float)((float)(v3 * v2[1]) * 0.000000059605)) * 4.0);
  *(float *)&result[9].owner = v4 + -24.0;
  if ( result[569].vtable )
  {
    *(float *)&result[567].owner = (float)(v4 + -24.0)
                                 + (float)((float)(*v2 + (float)((float)(v3 * v2[1]) * 0.000000059605)) * -4.0);
    return StateMgr__changeState((StateMgr *)&result[507], &stru_60CB2B34);
  }
  return result;
}

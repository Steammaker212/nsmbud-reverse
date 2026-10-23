/* sub_6086E468
 * address: 0x6086E468   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086E468(int a1, float a2)
{
  return (float)((float)(1.0 - (float)(a2 - (float)(int)a2))
               * (float)*(char *)(FIELD_U32(a1, 8) + (int)a2 - (int)FIELD_F32(a1, 24)))
       + (float)((float)(a2 - (float)(int)a2)
               * (float)*(char *)(FIELD_U32(a1, 8) + (int)a2 - (int)FIELD_F32(a1, 24) + 1));
}

/* sub_6000AED0
 * address: 0x6000AED0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6000AED0(int a1, int a2)
{
  float v2; // s0
  float v3; // s18
  float v4; // s0
  float v5; // s2
  _BOOL4 result; // r0

  if ( !AreaTask_intance )
    return 0;
  if ( (unsigned int)(FIELD_U32(AreaTask_intance, 1828) - 1) > 1 )
    return (float)(FIELD_F32(a2, 108) + FIELD_F32(a2, 572)) < (float)(FIELD_F32(a1, 108) + FIELD_F32(a1, 572));
  AreaTask_getWrappedXPos(AreaTask_intance);
  v3 = v2;
  AreaTask_getWrappedXPos(AreaTask_intance);
  v5 = (float)(FIELD_F32(AreaTask_intance, 1820) - FIELD_F32(AreaTask_intance, 1812)) * 0.5;
  result = (float)(v3 - v4) > v5;
  if ( v3 < v4 )
    return (float)(v4 - v3) <= v5;
  return result;
}

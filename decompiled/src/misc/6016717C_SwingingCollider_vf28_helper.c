/* SwingingCollider_vf28_helper
 * address: 0x6016717C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall SwingingCollider_vf28_helper(float *a1, float *a2)
{
  float v2; // s12
  float v3; // s4
  float v4; // s6
  float v5; // s2
  float v6; // s8
  float v7; // s0
  float v8; // s10
  float v9; // s14
  _BOOL4 result; // r0

  v2 = *a1;
  v3 = a1[2];
  v4 = a1[1];
  v5 = a1[3];
  v6 = *a2;
  v7 = v5 - v4;
  v8 = v3 - *a1;
  if ( (float)((float)(v7 * v7) + (float)(v8 * v8)) > 0.0 )
  {
    v9 = a2[1];
    if ( (float)((float)(v7 * (float)(v9 - v4)) + (float)(v8 * (float)(v6 - v2))) >= 0.0 )
      return (float)((float)-(float)(v7 * (float)(v9 - v5)) - (float)(v8 * (float)(v6 - v3))) >= 0.0;
    return 0;
  }
  if ( v2 != v6 )
    return 0;
  result = 1;
  if ( v4 != a2[1] )
    return 0;
  return result;
}

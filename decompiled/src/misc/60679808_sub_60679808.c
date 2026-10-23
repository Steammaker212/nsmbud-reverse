/* sub_60679808
 * address: 0x60679808   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60679808(int a1, float *a2)
{
  float *v4; // r0
  float v5; // s2
  float v6; // s4
  float v7; // s0
  float v8; // s6
  float v9; // s8
  float v10; // s2
  float result; // s0

  if ( !a2 )
    return sub_605DB894((float *)a1, a2);
  if ( sub_6068C438(MaskMgr_instance) != 1 )
    return sub_605DB894((float *)a1, a2);
  v4 = *(float **)(a1 + 8052);
  if ( !v4 )
    return sub_605DB894((float *)a1, a2);
  v5 = v4[3];
  v6 = v4[4];
  v7 = v4[2] * 0.5;
  v8 = v5 - v7;
  v9 = v6 - v7;
  v10 = v5 + v7;
  result = v6 + v7;
  *a2 = v8;
  a2[1] = v9;
  a2[2] = v10;
  a2[3] = result;
  return result;
}

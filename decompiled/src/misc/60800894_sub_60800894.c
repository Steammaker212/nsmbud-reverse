/* sub_60800894
 * address: 0x60800894   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60800894(int a1, int a2, int a3, float a4, float a5, float a6)
{
  float v11; // s0
  float v13; // [sp+0h] [bp-30h] BYREF
  float v14; // [sp+4h] [bp-2Ch] BYREF

  sub_607FEB90(a1, a2);
  sub_607FEC90(a1, &v14, &v13, a3, a5, a6);
  v11 = v14;
  if ( v14 >= a4 && (v11 = v13, v13 <= a4) )
    return 0.0;
  else
    return a4 - v11;
}

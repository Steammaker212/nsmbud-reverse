/* sub_604684B8
 * address: 0x604684B8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_604684B8(int a1)
{
  int v1; // r1
  float result; // s0

  v1 = FIELD_U32(a1, 548);
  FIELD_U32(a1, 80) = v1;
  FIELD_U32(a1, 120) = dword_60B025FC[v1];
  FIELD_U32(a1, 124) = 1077936128;
  if ( FIELD_U8(a1, 6054) )
  {
    FIELD_F32(a1, 124) = 3.0 * 0.5;
    return 3.0 * 0.5;
  }
  return result;
}

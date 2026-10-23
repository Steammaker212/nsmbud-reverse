/* sub_603A21FC
 * address: 0x603A21FC   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A21FC(int result, int a2, int a3)
{
  int v3; // r12
  float v4; // s0
  float v5; // s4
  float v6; // s0

  v3 = FIELD_U32(result, 80);
  v4 = (float)byte_60AFE3F4[v3];
  if ( a3 )
  {
    FIELD_U32(result, 104) = 1036831949;
    FIELD_F32(result, 120) = v4 * 4.0;
  }
  else
  {
    v5 = FIELD_F32(a2, 120);
    v6 = v4 * 2.5;
    if ( v3 == v5 < 0.0 )
      v6 = v6 + (float)(v5 * 0.5);
    FIELD_F32(result, 0x84) = v6;
    FIELD_F32(result, 0x78) = v6;
  }
  return result;
}

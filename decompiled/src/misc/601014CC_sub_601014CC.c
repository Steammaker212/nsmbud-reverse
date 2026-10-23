/* sub_601014CC
 * address: 0x601014CC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601014CC(int a1)
{
  float v1; // s0
  int result; // r0

  v1 = FIELD_F32(a1, 108);
  result = 0;
  if ( v1 >= (float)(FIELD_F32(dword_60CC6484, 112) + 192.0) )
  {
    result = 4;
    if ( v1 > (float)(FIELD_F32(dword_60CC6484, 120) + -192.0) )
      return 1;
  }
  return result;
}

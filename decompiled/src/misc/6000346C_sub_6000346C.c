/* sub_6000346C
 * address: 0x6000346C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6000346C(int a1)
{
  float v1; // s0
  int v2; // r1
  int v3; // r2
  int v4; // r0
  int result; // r0
  int v6; // r2

  v1 = FIELD_F32(a1, 120);
  v2 = FIELD_U32(a1, 2872);
  v3 = 0x40000;
  if ( v1 < 0.0 )
    v3 = 0x80000;
  if ( (v3 & v2) == 0 )
  {
    v4 = 0x400000;
    if ( v1 < 0.0 )
      v4 = 0x800000;
    if ( (v4 & v2) == 0 )
      return 0;
  }
  v6 = 0x10000000;
  result = 0;
  if ( v1 < 0.0 )
    v6 = 0x20000000;
  if ( (v2 & v6) == 0 )
    return 1;
  return result;
}

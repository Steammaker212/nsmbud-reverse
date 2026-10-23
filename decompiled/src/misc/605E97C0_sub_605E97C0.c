/* sub_605E97C0
 * address: 0x605E97C0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E97C0(int a1, int a2)
{
  float v2; // s0
  float v3; // s2
  int v4; // r1
  int result; // r0

  v2 = FIELD_F32(a2, 108);
  v3 = FIELD_F32(a1, 108);
  v4 = (int)v3 - (int)v2;
  if ( (float)(int)v3 != v3 )
    --v4;
  if ( v3 >= 0.0 )
    v4 = (int)v3 - (int)v2;
  result = v4;
  if ( (float)(int)v2 != v2 )
    result = v4 + 1;
  if ( v2 >= 0.0 )
    return v4;
  return result;
}

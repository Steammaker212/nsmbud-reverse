/* sub_605B13A4
 * address: 0x605B13A4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B13A4(int a1)
{
  float v1; // s0
  float v2; // s2

  if ( !FIELD_U8(a1, 6992) )
  {
    v1 = FIELD_F32(a1, 6972);
    v2 = FIELD_F32(a1, 6968);
    FIELD_U32(a1, 116) = FIELD_U32(a1, 6976);
    FIELD_F32(a1, 108) = v2 + 8.0;
    FIELD_F32(a1, 112) = v1 + -16.0;
    sub_605B1404();
  }
  return 1;
}

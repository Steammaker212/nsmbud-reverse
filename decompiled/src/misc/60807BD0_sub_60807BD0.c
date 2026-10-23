/* sub_60807BD0
 * address: 0x60807BD0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807BD0(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r1
  int result; // r0
  int v6; // r1
  bool v7; // zf

  v2 = FIELD_U32(a1, 76);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 45) == 0;
  if ( v3 || (v4 = ((int (*)(void))sub_608AF468)(), result = 1, v4 == 1) )
  {
    v6 = FIELD_U32(a1, 72);
    result = 0;
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U8(a1, 45) == 0;
    if ( !v7 )
      return sub_608AF468(FIELD_U32(a1, 72)) ^ 1;
  }
  return result;
}

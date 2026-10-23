/* sub_603CD2F4
 * address: 0x603CD2F4   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603CD2F4(int a1, int a2)
{
  Actor *v2; // r5
  int v3; // r4

  v2 = *(Actor **)(FIELD_U32(a2, 32) + 144);
  if ( !v2 || FIELD_U8(v2, 0x13) )
    return 0;
  v3 = 1;
  if ( Actor__getProfileId(*(Actor **)(FIELD_U32(a2, 32) + 144)) == 123 || Actor__getProfileId(v2) == 124 )
    return v3;
  return Actor__getProfileId(v2) == 125;
}

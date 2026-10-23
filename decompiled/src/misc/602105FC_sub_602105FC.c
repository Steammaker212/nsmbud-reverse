/* sub_602105FC
 * address: 0x602105FC   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602105FC(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int result; // r0

  FIELD_U32(a1, 200) = 0;
  FIELD_U32(a1, 416) = 10;
  v2 = (_DWORD *)sub_601CF9C0(dword_60C8AEF0);
  FIELD_U32(a1, 404) = v2[20];
  FIELD_U32(a1, 408) = v2[21];
  v3 = 9;
  FIELD_U32(a1, 412) = v2[22];
  result = FIELD_U8(a1, 468);
  if ( FIELD_U8(a1, 468) )
    v3 = 10;
  FIELD_U32(a1, 420) = v3;
  return result;
}

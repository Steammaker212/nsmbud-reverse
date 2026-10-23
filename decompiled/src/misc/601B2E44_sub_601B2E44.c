/* sub_601B2E44
 * address: 0x601B2E44   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B2E44(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // t1
  int v5; // r6
  int result; // r0

  v2 = -1;
  FIELD_U32(a1, 1112) = 0;
  FIELD_U8(a1, 280) = 0;
  FIELD_U32(a1, 1144) = 4;
  FIELD_U32(a1, 1056) = -1;
  FIELD_U32(a1, 1060) = -1;
  FIELD_U32(a1, 1064) = -1;
  v4 = FIELD_U32(a1, 1032);
  v3 = a1 + 1032;
  v5 = dword_60CC6D78;
  FIELD_U32(dword_60CC6D78, 412) = v4;
  FIELD_U32(v5, 416) = FIELD_U32(v3, 4);
  FIELD_U32(v5, 420) = FIELD_U32(v3, 8);
  if ( sub_601E02C4() >= 2 )
    v2 = sub_601A47DC(dword_60C89E18, FIELD_U32(a1, 1032), FIELD_U32(a1, 1036), FIELD_U32(a1, 1040));
  if ( FIELD_U8(v5, 511) )
    v2 = 34;
  result = dword_60C89E18;
  FIELD_U32(dword_60C89E18, 20) = v2;
  return result;
}

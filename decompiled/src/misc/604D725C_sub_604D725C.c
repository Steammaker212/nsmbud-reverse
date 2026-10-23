/* sub_604D725C
 * address: 0x604D725C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D725C(int a1)
{
  bool v2; // zf
  int v3; // r0
  int v4; // r1

  sub_60502548(a1 + 3640);
  FIELD_U16(a1, 4692) = 0;
  sub_6047EABC((_DWORD *)(a1 + 3680));
  v2 = FIELD_U8(a1, 6133) == 0;
  if ( FIELD_U8(a1, 6133) )
    v2 = FIELD_U8(a1, 6132) == 0;
  if ( v2 )
  {
    v3 = 1;
    v4 = 1;
  }
  else
  {
    v3 = 2;
    v4 = 2;
  }
  FIELD_U32(a1, 4668) = v4;
  FIELD_U32(a1, 6140) = v3;
  FIELD_U8(a1, 4683) = 0;
  FIELD_U8(a1, 4680) = 1;
  FIELD_U8(a1, 4684) = 1;
  *(_BYTE *)(FIELD_U32(a1, 3628) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 3632) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 3636) + 64) |= 1u;
  FIELD_U8(a1, 4694) = 1;
  return 4694;
}

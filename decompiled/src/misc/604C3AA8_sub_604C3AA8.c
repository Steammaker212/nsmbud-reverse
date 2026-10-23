/* sub_604C3AA8
 * address: 0x604C3AA8   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C3AA8(int a1)
{
  int v1; // r4
  int result; // r0
  _BYTE *v3; // r4
  int v4; // t1

  FIELD_U8(a1, 13940) = 0;
  v1 = a1 + 13940;
  FIELD_U8(a1, 13943) = 0;
  FIELD_U8(a1, 13942) = 0;
  FIELD_U8(a1, 13941) = 0;
  FIELD_U8(a1, 14171) = 0;
  FIELD_U16(a1, 5108) = 0;
  sub_6047EABC((_DWORD *)(a1 + 4096));
  v4 = FIELD_U8(v1, 243);
  v3 = (_BYTE *)(v1 + 243);
  result = v4;
  if ( v4 )
    *v3 = 0;
  return result;
}

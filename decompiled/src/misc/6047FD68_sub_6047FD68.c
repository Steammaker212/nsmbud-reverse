/* sub_6047FD68
 * address: 0x6047FD68   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047FD68(int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  int v3; // r3

  FIELD_U32(result, 104) = 0;
  v1 = (_BYTE *)dword_60C99DD4;
  v2 = FIELD_U8(dword_60C99DD4, 292);
  FIELD_U32(result, 104) = v2;
  if ( v1[364] )
  {
    v3 = 2;
    if ( !v2 )
      v3 = 1;
    v2 = v3;
    FIELD_U32(result, 104) = v3;
  }
  if ( v1[436] )
    FIELD_U32(result, 104) = ++v2;
  if ( v1[508] )
    FIELD_U32(result, 104) = v2 + 1;
  return result;
}

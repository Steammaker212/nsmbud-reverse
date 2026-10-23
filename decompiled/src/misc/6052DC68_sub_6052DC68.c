/* sub_6052DC68
 * address: 0x6052DC68   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052DC68(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  bool v4; // zf

  v2 = (_BYTE *)dword_60C9A1E0;
  if ( FIELD_U8(dword_60C9A1E0, 580) && FIELD_U8(dword_60C9A1E0, 568) )
    sub_6052DD08(a1, 0);
  if ( v2[616] && v2[604] )
    sub_6052DD08(a1, 1);
  if ( v2[652] && v2[640] )
    sub_6052DD08(a1, 2);
  result = (unsigned __int8)v2[688];
  v4 = result == 0;
  if ( v2[688] )
  {
    result = (unsigned __int8)v2[676];
    v4 = result == 0;
  }
  if ( !v4 )
    return sub_6052DD08(a1, 3);
  return result;
}

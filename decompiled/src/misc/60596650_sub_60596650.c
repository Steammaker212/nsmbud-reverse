/* sub_60596650
 * address: 0x60596650   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60596650(int result)
{
  int v1; // lr
  int v2; // r2
  int v3; // r4
  int v4; // r1
  _BOOL4 v5; // r7
  char v6; // r1
  int v7; // lr
  int v8; // r2
  int v9; // r4
  _BYTE *v10; // r12
  int v11; // r1
  _BOOL4 v12; // r6

  v1 = FIELD_U32(result, 7744);
  v2 = FIELD_U32(result, 156);
  v3 = FIELD_U8(result, 7748);
  v4 = 0;
  v5 = v2 > -dword_60CAF76C;
  if ( !FIELD_U8(result, 7748) )
    v5 = v2 < dword_60CAF76C;
  if ( v5 )
  {
    v4 = dword_60CAF774;
    if ( v1 + dword_60CAF770 < dword_60CAF774 )
      v4 = v1 + dword_60CAF770;
  }
  else if ( v1 - dword_60CAF770 > 0 )
  {
    v4 = v1 - dword_60CAF770;
  }
  FIELD_U32(result, 7744) = v4;
  if ( v3 )
  {
    FIELD_U32(result, 156) = v2 - v4;
    if ( v4 )
      goto LABEL_15;
    v6 = 0;
  }
  else
  {
    FIELD_U32(result, 156) = v2 + v4;
    if ( v4 )
      goto LABEL_15;
    v6 = 1;
  }
  FIELD_U8(result, 7748) = v6;
LABEL_15:
  v7 = FIELD_U32(result, 7752);
  v8 = FIELD_U32(result, 160);
  v10 = (_BYTE *)(result + 7756);
  v9 = FIELD_U8(result, 7756);
  v11 = 0;
  v12 = v8 > -dword_60CAF778;
  if ( !FIELD_U8(result, 7756) )
    v12 = v8 < dword_60CAF778;
  if ( v12 )
  {
    v11 = dword_60CAF780;
    if ( v7 + dword_60CAF77C < dword_60CAF780 )
      v11 = v7 + dword_60CAF77C;
  }
  else if ( v7 - dword_60CAF77C > 0 )
  {
    v11 = v7 - dword_60CAF77C;
  }
  FIELD_U32(result, 7752) = v11;
  if ( v9 )
  {
    FIELD_U32(result, 160) = v8 - v11;
    if ( v11 )
      return result;
    result = 0;
LABEL_27:
    *v10 = result;
    return result;
  }
  FIELD_U32(result, 160) = v8 + v11;
  if ( !v11 )
  {
    result = 1;
    goto LABEL_27;
  }
  return result;
}

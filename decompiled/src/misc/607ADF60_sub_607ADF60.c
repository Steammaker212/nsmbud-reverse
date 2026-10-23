/* sub_607ADF60
 * address: 0x607ADF60   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607ADF60(int a1)
{
  int v3; // r0
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD *v6; // r5
  int v7; // t1
  int v8; // r0
  bool v9; // zf
  _BOOL4 v10; // r2
  int result; // r0
  unsigned int v12; // r1
  bool v13; // zf

  v4 = (_DWORD *)(a1 + 11944);
  v3 = FIELD_U32(a1, 11944);
  if ( v3 )
    *v4 = v3 - 1;
  v7 = FIELD_U32(a1, 11940);
  v6 = (_DWORD *)(a1 + 11940);
  v5 = v7;
  if ( v7 )
    *v6 = v5 - 1;
  v8 = sub_60766708(a1);
  v9 = v8 == 0;
  if ( !v8 )
    v9 = (FIELD_U8(a1, 1230) & 0x40) == 0;
  if ( v9 && sub_6078A700() && sub_607B920C(a1) == 1 && sub_607B926C(a1) == 1 && !sub_6079DCBC(a1) )
  {
    v10 = *v4 == 0;
  }
  else
  {
    v10 = 0;
    *v4 = 3;
  }
  result = a1 + 11948;
  if ( FIELD_U8(a1, 11948) )
  {
    v12 = FIELD_S8(a1, 84);
    v13 = *v6 == 0;
    if ( *v6 )
      v13 = !v10;
    if ( v13 )
      return sub_603F01A0(dword_60C99D6C, v12, 1, 0);
    else
      return sub_603EFEAC(dword_60C99D6C, v12, 1);
  }
  else if ( v10 )
  {
    *(_BYTE *)result = 1;
    result = 480;
    *v6 = 480;
  }
  return result;
}

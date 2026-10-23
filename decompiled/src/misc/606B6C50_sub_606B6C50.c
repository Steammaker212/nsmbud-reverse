/* sub_606B6C50
 * address: 0x606B6C50   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B6C50(int result, int a2, int a3)
{
  bool v3; // zf
  _BYTE *v4; // r4
  int v5; // r1
  bool v6; // zf
  int v7; // t1

  v3 = a3 == -1;
  v4 = (_BYTE *)result;
  if ( a3 != -1 )
    v3 = a2 == 0;
  if ( !v3 )
  {
    result = dword_60C9A1F0;
    v5 = FIELD_U8(dword_60C9A1F0, 6559);
    v6 = v5 == 1;
    if ( v5 == 1 )
    {
      v7 = (unsigned __int8)v4[6180];
      v4 += 6180;
      v6 = v7 == 0;
    }
    if ( v6 )
    {
      sub_6040B2DC((unsigned __int8 *)dword_60C9A1F0);
      *v4 = 1;
      return 1;
    }
  }
  return result;
}

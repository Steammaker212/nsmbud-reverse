/* sub_602E25E4
 * address: 0x602E25E4   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_602E25E4(int a1)
{
  unsigned int result; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r4

  v3 = (_BYTE *)(a1 + 15384);
  result = FIELD_U8(a1, 15384);
  if ( result <= 3 )
  {
    sub_602E6CD4(a1 + 6300);
    result = (unsigned __int8)*v3;
  }
  if ( FIELD_U8(a1, 15383) < 2u )
  {
    if ( result == 2 )
    {
      *v3 = 0;
      v6 = (_DWORD *)(a1 + 6300);
      j_ibaramushi_ref(v6, 0, 0);
      sub_602E6D20(v6);
      result = 255;
      *v3 = -1;
    }
  }
  else
  {
    if ( result > 3 )
    {
      *v3 = 2;
      v5 = (_DWORD *)(a1 + 6300);
      return j_ibaramushi_ref(v5, 2, 1);
    }
    v4 = (_DWORD *)(a1 + 6300);
    result = sub_602E642C(v4);
    if ( result == 1 )
    {
      *v3 = 2;
      v5 = v4;
      return j_ibaramushi_ref(v5, 2, 1);
    }
  }
  return result;
}

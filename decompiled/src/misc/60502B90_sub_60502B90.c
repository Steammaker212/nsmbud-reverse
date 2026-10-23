/* sub_60502B90
 * address: 0x60502B90   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60502B90(int a1, unsigned int a2)
{
  unsigned int v4; // r0
  int v5; // r6
  int result; // r0
  _BYTE *v7; // r7
  int v8; // r0

  v4 = a2;
  if ( a2 >= 0x100 )
    v4 = 0;
  v5 = a1 + v4;
  v7 = (_BYTE *)(a1 + v4 + 500);
  result = (unsigned __int8)*v7;
  if ( *v7 )
  {
    sub_6047EE74(a1 + 40, a2);
    result = (unsigned __int8)*v7;
    if ( *v7 )
    {
      v8 = sub_608DE61C(a1 + 52, a2);
      result = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)(v8 - FIELD_U32(a1, 64)) + 40))(
                 v8 - FIELD_U32(a1, 64),
                 0);
      *v7 = 0;
      FIELD_U8(v5, 756) = 0;
    }
  }
  return result;
}

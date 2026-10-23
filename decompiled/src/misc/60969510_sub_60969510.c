/* sub_60969510
 * address: 0x60969510   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60969510(int a1, _DWORD *a2)
{
  _DWORD *result; // r0
  const char *v4; // r4
  int v5; // r5
  int v6; // [sp+4h] [bp-41Ch] BYREF

  result = (_DWORD *)dword_60CD0B58;
  if ( dword_60CD0B58 )
  {
    result = *(_DWORD **)(dword_60CD0B50 + 60);
    if ( result )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v4 = (const char *)a2[1];
      v5 = dword_60CD0B58 + 20;
      (*(void (__fastcall **)(int))(FIELD_U32(dword_60CD0B58, 20) + 12))(dword_60CD0B58 + 20);
      return sub_604209A4(&v6, "%s%s", v4, *(const char **)(v5 + 4));
    }
  }
  return result;
}

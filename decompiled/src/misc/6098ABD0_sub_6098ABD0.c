/* sub_6098ABD0
 * address: 0x6098ABD0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6098ABD0(_DWORD *result)
{
  _DWORD *v1; // r5
  int v2; // r6
  char *v3; // r8
  void *v4; // r4

  v1 = (_DWORD *)result[2];
  if ( v1 != result + 1 )
  {
    v2 = result[4];
    v3 = (char *)result - v2 + 4;
    result = (_DWORD *)((char *)v1 - v2);
    do
    {
      v1 = (_DWORD *)v1[1];
      v4 = (void *)result[26];
      (*(void (__fastcall **)(_DWORD *))(*result + 4))(result);
      sub_608E8A3C(dword_60CCEBD0, v4);
      result = (_DWORD *)((char *)v1 - v2);
    }
    while ( (char *)v1 - v2 != v3 );
  }
  return result;
}

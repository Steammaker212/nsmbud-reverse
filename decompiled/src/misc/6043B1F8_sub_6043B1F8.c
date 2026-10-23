/* sub_6043B1F8
 * address: 0x6043B1F8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6043B1F8(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0
  int v4; // r3
  int v5; // r1
  _DWORD *v6; // r4

  result = (_DWORD *)ResourceMgrRelated_instance;
  if ( !ResourceMgrRelated_instance )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x4428u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    v4 = 255;
    *result = off_60BFA9F4;
    dword_60C9CA84 = (int)result;
    v5 = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 256;
    result[5] = result + 9;
    do
    {
      v6 = &result[v5];
      v5 += 51;
      v4 -= 3;
      v6[9] = v6 + 26;
      v6[26] = v6 + 43;
      v6[43] = v6 + 60;
    }
    while ( v4 );
    result[4344] = 0;
    result[6] = result + 9;
    result[4361] = 0;
    ResourceMgrRelated_instance = (int)result;
  }
  return result;
}

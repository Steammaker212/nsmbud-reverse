/* sub_6034FDE4
 * address: 0x6034FDE4   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6034FDE4(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  _BOOL4 result; // r0

  v2 = *(_DWORD **)(a1 + 6304);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = sub_60418548(*v3 + 4);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 652))(a1);
    FIELD_U8(a1, 19) = 1;
    return 1;
  }
  return result;
}

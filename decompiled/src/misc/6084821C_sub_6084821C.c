/* sub_6084821C
 * address: 0x6084821C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084821C(int a1)
{
  int v2; // r0
  int v3; // t1
  _DWORD *v4; // r4
  int v5; // t1
  int result; // r0

  v3 = FIELD_U8(a1, 216);
  v2 = a1 + 216;
  if ( v3 )
    sub_6083D48C(v2);
  if ( *(_BYTE *)a1 )
    sub_6083D2EC(a1);
  v5 = FIELD_U32(a1, 288);
  v4 = (_DWORD *)(a1 + 288);
  result = v5 & v4[1];
  if ( result != -1 )
  {
    *v4 = -1;
    v4[1] = -1;
  }
  return result;
}

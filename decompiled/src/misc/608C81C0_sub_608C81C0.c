/* sub_608C81C0
 * address: 0x608C81C0   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C81C0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r7
  int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r0

  result = FIELD_U8(a1, 20);
  if ( result )
  {
    v3 = FIELD_U32(a1, 16);
    if ( v3 != a1 + 12 )
    {
      do
      {
        v4 = FIELD_U32(v3, 4);
        v5 = v3 - 844;
        sub_608C77DC(v3 - 844);
        sub_608C7D68(v5, 3);
        sub_608C825C(a1, v5);
        v3 = v4;
      }
      while ( v4 != a1 + 12 );
    }
    v6 = *(_DWORD **)(a1 + 28);
    if ( v6 )
    {
      sub_608C666C(v6);
      FIELD_U32(a1, 28) = 0;
    }
    v7 = *(_DWORD **)(a1 + 32);
    if ( v7 )
    {
      sub_608C666C(v7);
      FIELD_U32(a1, 32) = 0;
    }
    sub_608C666C((_DWORD *)a1);
    FIELD_U8(a1, 20) = 0;
    return 0;
  }
  return result;
}

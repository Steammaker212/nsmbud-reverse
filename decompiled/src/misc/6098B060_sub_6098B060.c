/* sub_6098B060
 * address: 0x6098B060   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6098B060(int a1)
{
  int v2; // r5
  int v3; // r0
  const char *v4; // r0
  _DWORD *v5; // r0

  *(_DWORD *)a1 = off_60C5FF88;
  v2 = FIELD_U32(a1, 108);
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 64);
    if ( FIELD_U8(v3, 272) )
    {
      if ( FIELD_U32(v2, 72) == v3 )
        sub_60836614(v3);
      FIELD_U32(v2, 72) = 0;
    }
  }
  v4 = *(const char **)(a1 + 104);
  if ( v4 )
    sub_6098AC78(v4);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 24) + 28))(FIELD_U32(a1, 24), a1);
  v5 = sead__IDisposer__dtor((_DWORD *)a1);
  operator_delete(v5);
}

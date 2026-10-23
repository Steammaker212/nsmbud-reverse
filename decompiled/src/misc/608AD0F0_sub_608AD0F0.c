/* sub_608AD0F0
 * address: 0x608AD0F0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AD0F0(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r0
  bool v10; // zf

  v6 = *a2;
  if ( v6 && FIELD_U32(v6, 220) == a3 )
  {
    sub_608AF450(v6, 1);
    v7 = 0;
    if ( !a5 )
      return v7;
    goto LABEL_9;
  }
  v7 = (*(int (__fastcall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)a1 + 8))(a1, a2, a3, 1, a4, a5);
  if ( !v7 )
  {
    v7 = 0;
    v8 = 0;
    if ( *a2 )
    {
      sub_608AF1FC(*a2);
      v8 = *a2;
    }
    sub_608AF450(v8, 1);
    if ( a5 )
    {
LABEL_9:
      v9 = FIELD_U8(a5, 1);
      v10 = (v9 & 1) == 0;
      if ( (v9 & 1) != 0 )
      {
        v9 = *a2;
        v10 = *a2 == 0;
      }
      if ( !v10 )
        sub_608AF208(v9, FIELD_U32(a5, 256));
    }
  }
  return v7;
}

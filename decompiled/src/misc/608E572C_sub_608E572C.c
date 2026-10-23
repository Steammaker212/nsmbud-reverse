/* sub_608E572C
 * address: 0x608E572C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E572C(int a1, _DWORD *a2, _DWORD *a3)
{
  int v6; // r4
  int v8; // [sp+0h] [bp-20h] BYREF
  int v9; // [sp+4h] [bp-1Ch]

  v6 = 0;
  if ( FIELD_U32(a1, 80) )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    if ( a3[1] )
    {
      v6 = 0;
      v8 = 0;
      v9 = 0;
      if ( (*(int (__fastcall **)(_DWORD, _DWORD *, int *))(**(_DWORD **)(a1 + 80) + 24))(FIELD_U32(a1, 80), a3, &v8) )
      {
        v6 = 1;
        *a2 = v9;
      }
    }
  }
  return v6;
}

/* sub_60822320
 * address: 0x60822320   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60822320(int a1, int a2, _DWORD *a3)
{
  int v3; // r0
  int v5; // r5
  int v6; // r0
  int v8; // [sp+0h] [bp-18h] BYREF
  int v9; // [sp+4h] [bp-14h]

  v3 = FIELD_U32(a1, 16);
  v5 = 0;
  if ( v3 )
  {
    v8 = 0;
    v9 = 0;
    v6 = (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)v3 + 24))(v3, a2, &v8);
    if ( v6 )
    {
      v5 = v6;
      if ( a3 )
        *a3 = v9;
    }
  }
  return v5;
}

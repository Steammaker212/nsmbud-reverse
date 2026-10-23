/* sub_60866FAC
 * address: 0x60866FAC   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60866FAC(int result, _DWORD *a2, _DWORD *a3)
{
  int v5; // r6
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r2
  bool v12; // zf

  v5 = result;
  if ( a2 )
  {
    v6 = *(_DWORD **)(result + 40);
    if ( v6 )
      v7 = *v6 + 560;
    else
      v7 = 560;
    *a2 += sub_6085F830(a3, 16, v7);
    v8 = FIELD_U32(v5, 12);
    if ( (v8 & 0x30000) != 0 )
    {
      v9 = 416;
      if ( (v8 & 0x10000) != 0 )
        v9 = 224;
    }
    else
    {
      v10 = FIELD_U32(v5, 40);
      if ( v10 )
        v9 = FIELD_U32(v10, 4) + 144;
      else
        v9 = 144;
    }
    *a2 += sub_6085F830(a3, 16, v9);
    result = FIELD_U32(v5, 40);
    v12 = result == 0;
    if ( result )
    {
      v11 = FIELD_U32(result, 8);
      v12 = v11 == 0;
    }
    if ( !v12 )
    {
      result = *a2 + sub_6085F830(a3, 16, v11);
      *a2 = result;
    }
  }
  return result;
}

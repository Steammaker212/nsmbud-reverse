/* sub_60478974
 * address: 0x60478974   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478974(int a1)
{
  int result; // r0
  void (__fastcall *v3)(float); // r2
  char v4; // r5
  int v5; // r0
  void (__fastcall *v6)(float); // r2
  char v7; // r5

  if ( FIELD_U8(a1, 160) )
  {
    result = FIELD_U32(a1, 116);
    if ( result )
    {
      v3 = *(void (__fastcall **)(float))(*(_DWORD *)result + 84);
      if ( FIELD_U8(a1, 220) )
      {
        v4 = 0;
        v3(-1.0);
      }
      else
      {
        v3(1.0);
        v4 = 1;
      }
      FIELD_U8(a1, 220) = v4;
      return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 132) + 108))(FIELD_U32(a1, 132));
    }
  }
  else
  {
    sub_60477B30((_DWORD *)a1, 0);
    v5 = FIELD_U32(a1, 132);
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(float))(*(_DWORD *)v5 + 84);
      if ( FIELD_U8(a1, 220) )
      {
        v7 = 0;
        v6(-1.0);
      }
      else
      {
        v6(1.0);
        v7 = 1;
      }
      FIELD_U8(a1, 220) = v7;
    }
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 116) + 108))(FIELD_U32(a1, 116));
  }
  return result;
}

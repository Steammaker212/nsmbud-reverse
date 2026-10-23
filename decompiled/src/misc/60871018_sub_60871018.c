/* sub_60871018
 * address: 0x60871018   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871018(int a1, _DWORD *a2, int a3)
{
  int v5; // r2
  int result; // r0
  int v7; // r2
  int v8; // r2

  if ( !a3 )
  {
    v5 = *(_DWORD *)(FIELD_U32(a1, 24) + dword_60BF9D80[0]);
    if ( v5 )
    {
      if ( !sub_6083B4F8(FIELD_U32(v5, 104), a2, v5) )
      {
        result = FIELD_U16(a1, 44) | 6;
        goto LABEL_12;
      }
    }
  }
  result = FIELD_U32(a1, 24);
  v7 = *(_DWORD *)(result + dword_60BF9D84);
  if ( v7 )
  {
    if ( !sub_6083B4F8(FIELD_U32(v7, 104), a2, v7) )
    {
      result = FIELD_U16(a1, 44) | 0x12;
      goto LABEL_12;
    }
    result = FIELD_U32(a1, 24);
  }
  v8 = *(_DWORD *)(result + dword_60BF9D88);
  if ( v8 )
  {
    result = sub_6083B4F8(FIELD_U32(v8, 104), a2, v8);
    if ( !result )
    {
      result = FIELD_U16(a1, 44) | 0xA;
LABEL_12:
      FIELD_U16(a1, 44) = result;
    }
  }
  return result;
}

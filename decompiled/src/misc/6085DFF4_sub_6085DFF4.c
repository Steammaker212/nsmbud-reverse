/* sub_6085DFF4
 * address: 0x6085DFF4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085DFF4(int a1, int a2, int a3)
{
  int result; // r0
  bool v7; // zf
  int v8; // r7

  result = FIELD_U16(a1, 214);
  if ( result )
  {
    result = FIELD_U32(a1, 188);
    v7 = result == 0;
    if ( result )
    {
      result = FIELD_U32(a1, 256);
      v7 = result == 0;
    }
    if ( !v7 )
    {
      sub_6086A144();
      v8 = *(_DWORD *)(FIELD_U32(a2, 184) + 64);
      sub_6085401C(a2);
      (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v8 + 16))(v8, a3, FIELD_U32(a1, 260));
      FIELD_U8(a2, 212) = 1;
      return 1;
    }
  }
  return result;
}

/* sub_603F62C0
 * address: 0x603F62C0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F62C0(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r0

  StateMgr__execute((StateMgr *)(a1 + 80));
  result = FIELD_U8(a1, 48);
  if ( FIELD_U8(a1, 48) )
  {
    if ( FIELD_U8(a1, 424) )
    {
      v3 = *(_DWORD *)(FIELD_U32(a1, 4) + 4);
      if ( FIELD_U32(v3, 28) == 187 && sub_60793CA8(v3) == 1 )
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 4) + 4) + 84))(
          *(_DWORD *)(FIELD_U32(a1, 4) + 4),
          188,
          1.0,
          0.0,
          0.0);
      v4 = *(_DWORD *)(FIELD_U32(a1, 4) + 4);
      if ( FIELD_U32(v4, 28) == 189 && sub_60793CA8(v4) == 1 )
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 4) + 4) + 84))(
          *(_DWORD *)(FIELD_U32(a1, 4) + 4),
          190,
          1.0,
          0.0,
          0.0);
    }
    (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 4) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 4) + 4));
    return sub_603FDC64(a1);
  }
  return result;
}

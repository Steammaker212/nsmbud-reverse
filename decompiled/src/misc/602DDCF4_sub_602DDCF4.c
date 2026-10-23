/* sub_602DDCF4
 * address: 0x602DDCF4   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602DDCF4(int a1)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v4; // r5

  FIELD_U32(a1, 6116) = 0;
  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v3 != (*(int (**)(void))(dword_60C91F58 + 8))() )
  {
    v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    if ( v4 != (*(int (**)(void))(dword_60C91EF8 + 8))() )
    {
      FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 6156)] * 1.8;
      FIELD_U32(a1, 104) = 1024416809;
    }
  }
  FIELD_U8(a1, 6160) = 0;
  return 6160;
}

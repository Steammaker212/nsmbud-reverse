/* sub_60478080
 * address: 0x60478080   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478080(int a1)
{
  int v2; // r0
  float v3; // s16
  int v4; // r0
  int v5; // r0
  int v6; // r0

  if ( (FIELD_U8(a1, 8) & 0x10) != 0 )
  {
    v2 = FIELD_U32(a1, 128);
    if ( v2 )
    {
      v3 = FIELD_F32(v2, 16);
      if ( v3 == (float)(unsigned int)sub_608502E4(v2)
        || *(_BYTE *)(FIELD_U32(a1, 132) + 20)
        || *(_BYTE *)(FIELD_U32(a1, 116) + 20) )
      {
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 128) + 108))(FIELD_U32(a1, 128));
        sub_608535C4(a1);
      }
      else
      {
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 128) + 104))(FIELD_U32(a1, 128));
        sub_608535AC(a1);
      }
      (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 128) + 16))(FIELD_U32(a1, 128), 1);
    }
    else
    {
      sub_608535AC(a1);
    }
    v4 = FIELD_U32(a1, 132);
    if ( v4 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 132) + 16))(FIELD_U32(a1, 132), 0);
    }
    v5 = FIELD_U32(a1, 112);
    if ( v5 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 104))(v5);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 112) + 16))(FIELD_U32(a1, 112), 0);
    }
    v6 = FIELD_U32(a1, 116);
    if ( v6 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 104))(v6);
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 116) + 16))(FIELD_U32(a1, 116), 0);
    }
  }
  FIELD_U8(a1, 160) = 0;
  return 0;
}

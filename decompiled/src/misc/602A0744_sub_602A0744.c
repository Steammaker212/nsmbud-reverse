/* sub_602A0744
 * address: 0x602A0744   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A0744(int result)
{
  _DWORD *v1; // r1
  int v2; // r2
  int v3; // r2
  float v4; // s14

  v1 = (_DWORD *)(result + 6120);
  v2 = FIELD_U32(result, 6120);
  if ( !v2 || (v3 = v2 - 1, (*v1 = v3) == 0) )
  {
    v4 = FIELD_F32(result, 112);
    if ( v4 <= (float)(FIELD_F32(dword_60CC6484, 84) + 304.0)
      && (float)(FIELD_F32(dword_60CC6484, 72) + -128.0) <= FIELD_F32(result, 108)
      && FIELD_F32(result, 108) <= (float)(FIELD_F32(dword_60CC6484, 80) + 128.0)
      && (float)(FIELD_F32(dword_60CC6484, 76) + -304.0) <= v4 )
    {
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)result + 192))(result, &unk_60C902B8);
    }
    else
    {
      *v1 = 8;
      return 8;
    }
  }
  return result;
}

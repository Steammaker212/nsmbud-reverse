/* sub_608EB330
 * address: 0x608EB330   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608EB330(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r6
  int v5; // r0
  _BYTE v6[24]; // [sp+8h] [bp-120h] BYREF
  _BYTE v7[192]; // [sp+20h] [bp-108h] BYREF
  int v8; // [sp+E0h] [bp-48h]

  result = FIELD_U32(a1, 176);
  v3 = result == 0;
  if ( result )
  {
    result = FIELD_U32(a1, 236);
    v3 = result == 0;
  }
  if ( !v3 )
  {
    sub_608F4A80(v7);
    v8 = FIELD_U32(a1, 236);
    v4 = FIELD_U32(a1, 176);
    v5 = ((int (__fastcall *)(_BYTE *, int))loc_6090E438)(v6, v4);
    sub_6090E95C(v5, v7, v4);
    (*(void (__fastcall **)(int, _BYTE *, int, int, float, _DWORD))(*(_DWORD *)v4 + 20))(v4, v7, 7, a1 + 84, 1.0, 0);
    return sub_608F4AD4(v7);
  }
  return result;
}

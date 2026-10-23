/* sub_601921DC
 * address: 0x601921DC   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601921DC(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // [sp+4h] [bp-4Ch] BYREF
  int v11; // [sp+8h] [bp-48h]
  int v12; // [sp+Ch] [bp-44h]
  _BYTE v13[64]; // [sp+10h] [bp-40h] BYREF

  if ( FIELD_U8(a1, 292) )
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 268) + 12));
    result = FIELD_U8(a1, 216);
    if ( (result & 8) != 0 )
      return result;
    v3 = FIELD_U32(a1, 288);
    FIELD_U32(a1, 128) = v3;
    FIELD_U32(a1, 132) = v3;
    FIELD_U32(a1, 136) = v3;
    v4 = FIELD_U32(a1, 180);
    v5 = FIELD_U32(a1, 184);
    v10 = FIELD_U32(a1, 176);
    v11 = v4;
    v12 = v5;
    sub_601927EC(v13, a1 + 128, &v10, a1 + 80);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 268) + 60))(**(_DWORD **)(a1 + 268), v13);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 268) + 52))(**(_DWORD **)(a1 + 268));
    v6 = *(_DWORD **)(a1 + 268);
  }
  else
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 272) + 12));
    result = FIELD_U8(a1, 216);
    if ( (result & 8) != 0 )
      return result;
    v7 = FIELD_U32(a1, 288);
    FIELD_U32(a1, 128) = v7;
    FIELD_U32(a1, 132) = v7;
    FIELD_U32(a1, 136) = v7;
    v8 = FIELD_U32(a1, 180);
    v9 = FIELD_U32(a1, 184);
    v10 = FIELD_U32(a1, 176);
    v11 = v8;
    v12 = v9;
    sub_601927EC(v13, a1 + 128, &v10, a1 + 80);
    (*(void (__fastcall **)(_DWORD, _BYTE *))(***(_DWORD ***)(a1 + 272) + 60))(**(_DWORD **)(a1 + 272), v13);
    (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 272) + 52))(**(_DWORD **)(a1 + 272));
    v6 = *(_DWORD **)(a1 + 272);
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v6 + 56))(*v6);
}

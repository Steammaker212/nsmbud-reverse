/* sub_60055C04
 * address: 0x60055C04   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60055C04(int a1, int a2)
{
  _DWORD **v4; // r6
  int v5; // r0
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  signed int result; // r0
  signed int *v9; // r6
  int v10; // r4
  _DWORD v11[12]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 v12[2]; // [sp+34h] [bp-1Ch] BYREF

  v4 = (_DWORD **)(a1 + 7204);
  v5 = **(_DWORD **)(a1 + 7204);
  v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "spine";
  v7 = v6(v5, v11);
  (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v4 + 108))(**v4, v7, v11);
  LODWORD(v12[0].x) = v11[3];
  LODWORD(v12[0].y) = v11[7];
  LODWORD(v12[0].z) = v11[11];
  v9 = (signed int *)(a1 + 8632);
  result = FIELD_U32(a1, 8632);
  switch ( result )
  {
    case 2:
      sub_60237208(a1 + 8524, (int)v12, 0, 0);
      v10 = a1 + 8540;
      sub_602368E0(v10);
      result = sub_60235E50(v10);
      if ( !result )
        *v9 = 0;
      break;
    case 1:
      EffectWrapper_update((EffectWrapper *)(a1 + 8524), a2, v12, 0, 0);
      result = FIELD_U8(a1, 8628);
      if ( !FIELD_U8(a1, 8628) )
      {
        sub_60236074(a1 + 8540);
        result = 2;
        goto LABEL_12;
      }
      break;
    case 0:
      result = FIELD_U8(a1, 8628);
      if ( FIELD_U8(a1, 8628) )
      {
        result = 1;
LABEL_12:
        *v9 = result;
      }
      break;
  }
  return result;
}

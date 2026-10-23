/* wing_root_ref_365C94
 * address: 0x60365C94   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wing_root_ref_365C94(int a1)
{
  int v2; // r3
  _BYTE *v3; // r6
  int result; // r0
  int v5; // r5
  int (__fastcall *v6)(int, _DWORD *); // r2
  int v7; // r0
  Vec3 v8; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v9[16]; // [sp+10h] [bp-40h] BYREF

  v3 = (_BYTE *)(a1 + 7496);
  v2 = FIELD_U8(a1, 7496);
  result = 0;
  if ( !v2 )
  {
    if ( FIELD_U32(a1, 6352) == 2 )
    {
      v5 = **(_DWORD **)(a1 + 7504);
      v6 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v5 + 84);
      v9[0] = &sead__SafeStringBase__vtable;
      v9[1] = "wing_root";
      v7 = v6(v5, v9);
      (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 108))(v5, v7, v9);
      LODWORD(v8.x) = v9[3];
      LODWORD(v8.y) = v9[7];
      v8.z = 4500.0;
      EffectData_create(302, &v8, 0, 0);
      FIELD_U32(a1, 124) = 0;
      FIELD_U32(a1, 160) = sub_6035C8A0(a1);
      (*(void (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk);
      *v3 = 1;
      return 3;
    }
    else
    {
      return KoopaTroopa_vf177((_BYTE *)a1);
    }
  }
  return result;
}

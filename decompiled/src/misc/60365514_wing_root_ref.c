/* wing_root_ref
 * address: 0x60365514   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wing_root_ref(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  int (__fastcall *v7)(int, _DWORD *); // r2
  int v8; // r0
  unsigned int v9; // r0
  Vec3 v11; // [sp+4h] [bp-4Ch] BYREF
  _DWORD v12[16]; // [sp+10h] [bp-40h] BYREF

  if ( FIELD_U32(a1, 6352) != 2 )
    return KoopaTroopa_vf176(a1, a2, a3, a4);
  v6 = **(_DWORD **)(a1 + 7504);
  v7 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v6 + 84);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "wing_root";
  v8 = v7(v6, v12);
  (*(void (__fastcall **)(int, int, _DWORD *))(*(_DWORD *)v6 + 108))(v6, v8, v12);
  LODWORD(v11.x) = v12[3];
  LODWORD(v11.y) = v12[7];
  v11.z = 4500.0;
  EffectData_create(302, &v11, 0, 0);
  v9 = *(char *)(FIELD_U32(a4, 64) + 84);
  if ( v9 <= 3 )
    *(_WORD *)(a1 + 2 * v9 + 6140) = 16;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 160) = sub_6035C8A0(a1);
  return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &KoopaTroopa_StateID_Walk);
}

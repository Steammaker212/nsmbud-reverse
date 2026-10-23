/* sub_600DAB98
 * address: 0x600DAB98   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DAB98(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  _DWORD **v5; // r5
  int (*v6)(void); // r2
  const char *v7; // r1
  int v8; // r0
  _DWORD v10[12]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 v11; // [sp+34h] [bp-1Ch] BYREF

  v4 = FIELD_U32(a1, 7092);
  v2 = (_DWORD *)(a1 + 7092);
  v3 = v4;
  if ( v4 == 1 )
  {
    if ( !FIELD_U16(a1, 6276) )
    {
      *v2 = 2;
      v5 = (_DWORD **)(a1 + 7096);
      v6 = *(int (**)(void))(***(_DWORD ***)(a1 + 7096) + 84);
      v10[0] = &sead__SafeStringBase__vtable;
      v7 = "ankle_l1";
      goto LABEL_7;
    }
  }
  else if ( !v3 && !FIELD_U16(a1, 6276) )
  {
    FIELD_U16(a1, 6276) = 20;
    *v2 = 1;
    v5 = (_DWORD **)(a1 + 7096);
    v6 = *(int (**)(void))(***(_DWORD ***)(a1 + 7096) + 84);
    v10[0] = &sead__SafeStringBase__vtable;
    v7 = "ankle_r1";
LABEL_7:
    v10[1] = v7;
    v8 = v6();
    (*(void (__fastcall **)(_DWORD, int, _DWORD *))(*(_DWORD *)**v5 + 108))(**v5, v8, v10);
    LODWORD(v11.x) = v10[3];
    LODWORD(v11.z) = v10[11];
    v11.y = *(float *)&v10[7] + -4.0;
    EffectData_create(759, &v11, 0, 0);
  }
  return KoopalingBase__vf670((CollisionActor *)a1);
}

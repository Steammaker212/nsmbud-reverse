/* sub_6013E748
 * address: 0x6013E748   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6013E748(float *a1, int a2)
{
  float v4; // r1
  unsigned int v5; // r6
  int v6; // r0
  signed int v7; // r0
  Vec3 v9; // [sp+4h] [bp-1Ch] BYREF

  v4 = a1[69];
  v5 = FIELD_U8(a2, 84);
  v9.x = a1[68];
  v9.y = v4;
  v9.z = 4500.0;
  EffectData_create(21, &v9, 0, 0);
  v6 = 0;
  if ( v5 < 4 )
    v6 = (char)v5;
  v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(PlayerMgr_instance + 4 * v6 + 32) + 1192))(*(_DWORD *)(PlayerMgr_instance + 4 * v6 + 32));
  SE_EMY_KAME_HIT_ref(a2, v7, 0);
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
}

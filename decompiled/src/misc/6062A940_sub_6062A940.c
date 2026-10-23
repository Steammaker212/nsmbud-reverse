/* sub_6062A940
 * address: 0x6062A940   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062A940(int a1)
{
  float v2; // r1
  int result; // r0
  int v4; // r0
  Vec3 v5; // [sp+0h] [bp-20h] BYREF

  if ( *(_BYTE *)(FIELD_U32(EnemyCounterMaybe_instance, 24) + 6102) )
  {
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 7268) = 0;
    v2 = FIELD_F32(a1, 112);
    v5.x = FIELD_F32(a1, 108);
    v5.y = v2;
    v5.z = 4500.0;
    EffectData_create(1065, &v5, 0, 0);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6608));
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB3DF4);
  }
  else
  {
    result = sub_605EC644(a1);
    if ( result == 1 )
    {
      sub_605EC190(a1);
      v4 = FIELD_U32(a1, 6556);
      FIELD_U32(v4, 20) = 1065353216;
      FIELD_U32(v4, 28) |= 2u;
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB1D50);
    }
  }
  return result;
}

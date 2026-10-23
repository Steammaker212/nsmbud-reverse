/* sub_605813D0
 * address: 0x605813D0   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605813D0(int a1)
{
  float v2; // s0
  float v3; // s0
  int v4; // r0
  unsigned int v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // [sp+4h] [bp-14h] BYREF

  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1106289623;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 7484) = 1051595899;
  FIELD_U32(a1, 7388) = 0;
  sub_6057A4C4(a1);
  FIELD_U32(a1, 3200) |= 0x40000000u;
  FIELD_U32(a1, 3192) |= 0x40000000u;
  FIELD_U32(a1, 3176) |= 0x40000000u;
  FIELD_U32(a1, 3184) |= 0x40000000u;
  FIELD_U32(a1, 7384) = 0;
  FIELD_U32(a1, 6004) = 1036831949;
  FIELD_U8(a1, 6059) = FIELD_U32(a1, 2872) & 1;
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  v3 = 8.0;
  v4 = FIELD_U32(a1, 5952);
  if ( (unsigned __int16)v4 == 0x10 )
  {
    v5 = BYTE2(v4);
    if ( v5 <= 0x10 && ((1 << v5) & 0x10050) != 0 )
      v3 = 7.0;
  }
  FIELD_F32(a1, 7356) = v3;
  sub_6057AA48((_DWORD *)a1);
  v8 = 0;
  if ( sub_6057AAC0(a1, &v8) == 1 )
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
    v6 = 7512;
  }
  else
  {
    result = FIELD_U32(EnemyCounterMaybe_instance, 32);
    if ( !result )
      return result;
    v6 = 6056;
  }
  *(_BYTE *)(a1 + v6) = 1;
  sub_6057AF70((_DWORD *)a1);
  FIELD_U32(a1, 6040) = 1065353216;
  return 6040;
}

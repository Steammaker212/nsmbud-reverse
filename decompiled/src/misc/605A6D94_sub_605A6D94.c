/* sub_605A6D94
 * address: 0x605A6D94   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A6D94(int a1)
{
  float *v2; // r5
  float v3; // s2
  float v4; // s4
  float v5; // s2
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  float v11[8]; // [sp+0h] [bp-20h] BYREF

  if ( (FIELD_U8(dword_60C9CF0C, 1364) & 1) != 0 )
  {
    v2 = (float *)(a1 + 89768);
    sub_603F4BF4(AreaTask_intance, (float *)(a1 + 89768), (int *)(dword_60C9CF0C + 1368));
    if ( !FIELD_U32(a1, 89736) )
    {
      v3 = FIELD_F32(a1, 89776);
      if ( *v2 > v3 && *v2 < (float)(v3 + FIELD_F32(a1, 6852)) )
      {
        v4 = FIELD_F32(a1, 112);
        v5 = FIELD_F32(a1, 89772);
        if ( v5 > (float)(v4 + -8.0) && v5 < (float)(v4 + 8.0) )
        {
          v11[0] = *v2;
          v11[1] = v5;
          sub_60716054(TileMgr_instance, v11, 0);
          FIELD_U32(a1, 89736) = 20;
          FIELD_U32(a1, 89740) = 1106247680;
          FIELD_F32(a1, 89744) = *v2;
          FIELD_U32(a1, 89748) = FIELD_U32(a1, 89772);
          FIELD_U8(a1, 89756) = 0;
        }
      }
    }
  }
  ShapedCollider_execute((ColliderBase *)(a1 + 72328));
  v6 = FIELD_U32(a1, 89652);
  if ( v6 )
    FIELD_U32(a1, 89652) = v6 - 1;
  else
    FIELD_U32(a1, 89648) = 0;
  v7 = FIELD_U32(a1, 89680);
  if ( v7 )
    FIELD_U32(a1, 89680) = v7 - 1;
  else
    FIELD_U32(a1, 89676) = 0;
  v8 = FIELD_U32(a1, 89708);
  if ( v8 )
    FIELD_U32(a1, 89708) = v8 - 1;
  else
    FIELD_U32(a1, 89704) = 0;
  v9 = FIELD_U32(a1, 89736);
  if ( v9 )
    FIELD_U32(a1, 89736) = v9 - 1;
  else
    FIELD_U32(a1, 89732) = 0;
  TerrainActor_onExecute(a1);
  sub_605C1DA0(a1 + 72992);
  sub_605A6BFC(a1);
  return 1;
}

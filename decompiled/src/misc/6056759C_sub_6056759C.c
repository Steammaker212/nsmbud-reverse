/* sub_6056759C
 * address: 0x6056759C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6056759C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  signed int result; // r0

  a1[1745] = a1[27];
  a1[1746] = a1[28];
  v2 = a1[29];
  a1[1747] = v2;
  a1[1837] = v2;
  v3 = sub_605D00B8(a1);
  result = 2;
  if ( !v3 )
  {
    a1[36] = 1069547520;
    a1[37] = 1069547520;
    a1[38] = 1069547520;
    a1[143] = 0;
    a1[144] = 1094713344;
    a1[145] = 0;
    sub_605B2C10(a1);
    sub_605B5274(a1);
    ShapedCollider_init((ShapedCollider *)(a1 + 1530), (StageActor *)a1, (ShapedColliderInfo *)&dword_60CAE4EC);
    a1[1608] = sub_605B348C;
    a1[1609] = sub_605B3934;
    a1[1610] = sub_605B4110;
    ColliderBase_setType((ColliderBase *)a1 + 18, 7);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)a1 + 18);
    block_cloud_ref(a1);
    block_cloud_model_ref(a1);
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CAE484);
    return 1;
  }
  return result;
}

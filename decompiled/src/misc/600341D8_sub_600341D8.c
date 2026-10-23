/* sub_600341D8
 * address: 0x600341D8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600341D8(int a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD v5[8]; // [sp+10h] [bp-20h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 108);
  v5[1] = FIELD_U32(a1, 112);
  v5[0] = v2;
  v5[2] = 1166843904;
  sub_60237208(a1 + 6488, (int)v5, 0, 0);
  LightSource_update2((LightSource *)(a1 + 6416), (Vec3 *)(a1 + 108), 0, 0, 0, 0, 0, 0);
  StageActor__cullCheck((StageActor *)a1, 0);
  if ( v3 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
  return 1;
}

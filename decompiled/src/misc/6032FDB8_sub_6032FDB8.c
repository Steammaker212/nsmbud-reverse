/* sub_6032FDB8
 * address: 0x6032FDB8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6032FDB8(int a1)
{
  __int64 v3[7]; // [sp+0h] [bp-38h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  ActorScaler_execute((ActorScaler *)(a1 + 7068));
  (*(void (__fastcall **)(_DWORD, int, __int64 *))(***(_DWORD ***)(a1 + 6300) + 108))(**(_DWORD **)(a1 + 6300), 4, v3);
  if ( !FIELD_U8(a1, 6680) )
  {
    EffectData_setEffectId((EffectData *)(a1 + 6592), 693);
    sub_60237454(a1 + 6576, v3, 0);
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_602A33AC((_BYTE *)a1);
  return 1;
}

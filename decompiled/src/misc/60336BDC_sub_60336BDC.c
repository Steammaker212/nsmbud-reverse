/* sub_60336BDC
 * address: 0x60336BDC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60336BDC(int a1)
{
  float v2; // r1
  float v4[5]; // [sp+4h] [bp-14h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( sub_60003AE0((StageActor *)a1) == 1 )
  {
    FIELD_U8(a1, 536) = 1;
    v2 = FIELD_F32(a1, 112);
    v4[0] = FIELD_F32(a1, 108);
    v4[1] = v2;
    v4[2] = 4500.0;
    sub_602A38A4(a1, v4);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9421C);
  }
  ActorScaler_execute((ActorScaler *)(a1 + 6936));
  sub_60336E10(a1);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6300));
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}

/* sub_601EF4E4
 * address: 0x601EF4E4   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601EF4E4(int a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0
  int v4; // r0
  int speed; // [sp+4h] [bp-14h] BYREF

  if ( FIELD_S32(a1, 360) < 0 )
    FIELD_U32(a1, 360) = sub_601E4EA4(dword_60C8B13C, 121, 0, a1 + 80, 1);
  v2 = FIELD_U32(a1, 180);
  if ( v2 != FIELD_U32(a1, 412) )
  {
    speed = 0x10000000;
    moveValueTo((int *)(a1 + 180), (int *)(a1 + 412), &speed);
    v2 = FIELD_U32(a1, 180);
  }
  FIELD_U32(a1, 192) = v2;
  FIELD_U32(a1, 200) = 1092616192;
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  sub_60169030(a1, (float *)(a1 + 316), (float *)(a1 + 328), FIELD_U32(a1, 424));
  result = (StateMethodExecuter *)sub_601687F4((float *)a1, (float *)(a1 + 316), (float *)(a1 + 328));
  if ( result == (StateMethodExecuter *)1 )
  {
    v4 = FIELD_U32(a1, 364);
    FIELD_U32(a1, 364) = v4 + 1;
    if ( FIELD_U32(dword_60CC6D78, 412) == 3 )
      FIELD_U32(a1, 364) = v4 + 2;
    EffectData_init((EffectData *)(a1 + 432));
    return StateMgr__changeState((StateMgr *)(a1 + 300), (StateBase *)&unk_60C8B458);
  }
  return result;
}

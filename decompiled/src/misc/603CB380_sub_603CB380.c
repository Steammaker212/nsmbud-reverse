/* sub_603CB380
 * address: 0x603CB380   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateActor *__fastcall sub_603CB380(StateActor *result, int a2)
{
  StateActor *v2; // r4
  unsigned int v3; // r0
  int v4; // r5
  int v5; // r1
  StateBase *CurrentState; // r0
  unsigned int v7; // r0
  float v8; // s2
  float *v9; // r0
  float v10; // s4
  float v11; // s6
  int *v12; // r0
  float v13; // s0
  int *v14; // r0
  float v15; // s0
  signed int v16; // [sp+4h] [bp-3Ch] BYREF
  int speed; // [sp+8h] [bp-38h] BYREF
  int target; // [sp+Ch] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-30h] BYREF

  v2 = result;
  if ( a2 != 1 )
    return result;
  v3 = StageActor__distanceToPlayer(result, &out);
  v4 = v2[1]._._.aCollider._.field_C;
  v5 = v4;
  if ( v4 )
    v5 = 1;
  if ( v3 <= 3 && !v5 )
  {
    if ( (float)((float)(out.y * out.y) + (float)(out.x * out.x)) <= 22500.0 )
      goto LABEL_10;
LABEL_9:
    target = 0;
    speed = 0x1000000;
    v16 = 0x100000;
    sub_608322C0(&FIELD_U32(v2, 0x0)._.rotation.x, &target, &speed, &v16);
    target = 0;
    speed = 0x1000000;
    v16 = 0x100000;
    return (StateActor *)sub_608322C0(&FIELD_U32(v2, 0x0)._.rotation.y, &target, &speed, &v16);
  }
  if ( v3 > 3 )
    goto LABEL_9;
LABEL_10:
  CurrentState = StateMgr__getCurrentState(&FIELD_U32(v2, 0x17B0).manager);
  (*((void (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  (*(void (**)(void))(dword_60C98A74 + 8))();
  if ( v4 )
  {
    v7 = sub_6000F7B8(out.y, out.x);
    v8 = (float)(v7 & 0xFFFFFF);
    v9 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    v10 = *v9;
    v11 = v9[1];
    *(float *)&v2[1]._.collisionMgr[5156] = (float)(v9[2] + (float)((float)(v8 * 0.000000059605) * v9[3])) * 1.5;
    *(float *)&v2[1]._.collisionMgr[5160] = (float)(v10 + (float)(v11 * (float)(v8 * 0.000000059605))) * 4.0;
  }
  v12 = dword_603CB5C4;
  if ( !v4 )
    v12 = &dword_603CB5C4[1];
  v13 = *(float *)v12;
  speed = 0x800000;
  target = (int)(float)((float)(2147500000.0
                              * (float)((float)(out.y * -0.020833) * (float)((float)(v13 * 3.1416) / 2147500000.0)))
                      / 3.1416);
  moveValueTo(&FIELD_U32(v2, 0x0)._.rotation.x, &target, &speed);
  v14 = dword_603CB5D8;
  if ( !v4 )
    v14 = &dword_603CB5D8[1];
  v15 = *(float *)v14;
  speed = 0x800000;
  target = (int)(float)((float)(2147500000.0
                              * (float)((float)(out.x * 0.020833) * (float)((float)(v15 * 3.1416) / 2147500000.0)))
                      / 3.1416);
  return (StateActor *)moveValueTo(&FIELD_U32(v2, 0x0)._.rotation.y, &target, &speed);
}

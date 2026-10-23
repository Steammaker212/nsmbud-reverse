/* CollisionMgr_init
 * address: 0x6014B9E8   size: 364   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall CollisionMgr_init(
        CollisionMgr *result,
        StateActor *owner,
        CollisionMgr_Sensor *blowSensor,
        CollisionMgr_Sensor *aboveSensor,
        CollisionMgr_Sensor *adjacentSensor)
{
  float a; // r12
  float b; // lr
  float c; // r2
  float v8; // r2
  float v9; // lr
  float v10; // r3
  char v11; // r2
  float v12; // r4
  float v13; // r5
  float v14; // r4
  float v15; // r5
  float v16; // s0
  float v17; // s0

  FIELD_U32(result, 0x8B0)[0x72] = 1;
  FIELD_U32(result, 0x8B0)[0x78] = 1;
  FIELD_U32(result, 0x8B0)[0x73] = 1;
  if ( blowSensor )
  {
    FIELD_U32(result, 0x8B0)[0x7C] = 0;
    a = FIELD_F32(blowSensor, 0x0);
    b = FIELD_F32(blowSensor, 0x4);
    c = FIELD_F32(blowSensor, 0x8);
    FIELD_U32(result, 0x958).a = a;
    FIELD_U32(result, 0x958).b = b;
  }
  else
  {
    c = 0.0;
    FIELD_U32(result, 0x8B0)[124] = 1;
    FIELD_U32(result, 0x958).a = 0.0;
    FIELD_U32(result, 0x958).b = 0.0;
  }
  FIELD_U32(result, 0x958).c = c;
  FIELD_U32(result, 0x8B0)[114] = 1;
  FIELD_U32(result, 0x8B0)[119] = 1;
  FIELD_U32(result, 0x8B0)[115] = 1;
  if ( aboveSensor )
  {
    FIELD_U32(result, 0x8B0)[0x7B] = 0;
    v8 = FIELD_F32(aboveSensor, 0x0);
    v9 = FIELD_F32(aboveSensor, 0x4);
    v10 = FIELD_F32(aboveSensor, 0x8);
    FIELD_U32(result, 0x94C).a = v8;
    FIELD_U32(result, 0x94C).b = v9;
    FIELD_U32(result, 0x94C).c = v10;
  }
  else
  {
    FIELD_U32(result, 0x8B0)[0x7B] = 1;
    FIELD_U32(result, 0x94C).a = 0.0;
    FIELD_U32(result, 0x94C).b = 0.0;
    FIELD_U32(result, 0x94C).c = 0.0;
  }
  FIELD_U32(result, 0x8B0)[0x72] = 1;
  FIELD_U32(result, 0x8B0)[0x75] = 1;
  FIELD_U32(result, 0x8B0)[0x73] = 1;
  if ( adjacentSensor )
  {
    v11 = 0;
    FIELD_U32(result, 0x8B0)[121] = 0;
    v12 = FIELD_F32(adjacentSensor, 0x4);
    v13 = FIELD_F32(adjacentSensor, 0x8);
    FIELD_U32(result, 0x934).a = FIELD_F32(adjacentSensor, 0x0);
    FIELD_U32(result, 0x934).b = v12;
    FIELD_U32(result, 0x934).c = v13;
    v14 = FIELD_F32(adjacentSensor, 0x0);
    v15 = FIELD_F32(adjacentSensor, 0x4);
    v16 = FIELD_F32(adjacentSensor, 0x8);
    FIELD_U32(result, 0x8B0)[0x72] = 1;
    FIELD_U32(result, 0x8B0)[0x76] = 1;
    FIELD_U32(result, 0x8B0)[0x73] = 1;
    FIELD_U32(result, 0x940).a = v14;
    FIELD_U32(result, 0x940).b = v15;
    v17 = -v16;
  }
  else
  {
    v17 = 0.0;
    FIELD_U32(result, 0x8B0)[121] = 1;
    FIELD_U32(result, 0x934).a = 0.0;
    FIELD_U32(result, 0x934).b = 0.0;
    FIELD_U32(result, 0x934).c = 0.0;
    FIELD_U32(result, 0x8B0)[114] = 1;
    FIELD_U32(result, 0x8B0)[118] = 1;
    FIELD_U32(result, 0x8B0)[115] = 1;
    FIELD_U32(result, 0x940).a = 0.0;
    FIELD_U32(result, 0x940).b = 0.0;
    v11 = 1;
  }
  FIELD_U32(result, 0x8B0)[122] = v11;
  FIELD_U32(result, 0x940).c = v17;
  FIELD_U32(result, 0x894) = &FIELD_U32(owner, 0x0)._;
  FIELD_U32(result, 0x89C) = &FIELD_U32(owner, 0x0)._.position;
  FIELD_U32(result, 0x8A0) = &FIELD_U32(owner, 0x0)._.field_248;
  FIELD_U32(result, 0x8A4) = (unsigned __int8 *)&FIELD_U32(owner, 0x0)._.field_56;
  FIELD_U32(result, 0x8A8) = (unsigned __int8 *)&FIELD_U32(owner, 0x0)._.field_57;
  FIELD_U32(result, 0x8AC) = &FIELD_U32(owner, 0x0)._.playerId;
  FIELD_U32(result, 0x8B0)[113] = 1;
}

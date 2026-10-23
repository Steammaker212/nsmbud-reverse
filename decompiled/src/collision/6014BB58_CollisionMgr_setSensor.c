/* CollisionMgr_setSensor
 * address: 0x6014BB58   size: 112   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall CollisionMgr_setSensor(CollisionMgr *a1, CollisionMgr_Sensor *sensor, int id)
{
  _BYTE *v3; // lr
  float *v4; // r0
  float a; // r2
  float b; // r3
  float c; // r1
  int *v8; // r0

  FIELD_U32(a1, 0x8B0)[114] = 1;
  FIELD_U32(a1, 0x8B0)[id + 117] = 1;
  v3 = &FIELD_U32(a1, 0x8B0)[id + 0x79];
  FIELD_U32(a1, 0x8B0)[115] = 1;
  if ( sensor )
  {
    *v3 = 0;
    v4 = (float *)(&FIELD_U32(a1, 0x0) + 3 * id);
    a = FIELD_F32(sensor, 0x0);
    b = FIELD_F32(sensor, 0x4);
    c = FIELD_F32(sensor, 0x8);
    v4[589] = a;
    v4[590] = b;
    v4[591] = c;
  }
  else
  {
    *v3 = 1;
    v8 = &FIELD_U32(a1, 0x0) + 3 * id;
    v8[589] = 0;
    v8[590] = 0;
    v8[591] = 0;
  }
}

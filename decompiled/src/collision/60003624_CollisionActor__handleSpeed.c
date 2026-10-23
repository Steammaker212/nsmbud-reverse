/* CollisionActor__handleSpeed
 * address: 0x60003624   size: 368   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall CollisionActor__handleSpeed(CollisionActor *this)
{
  unsigned int v2; // r0
  int v3; // r1
  float x; // s12
  float v5; // s2
  float v6; // s0
  float v7; // s2
  int *v8; // r0
  float v9; // s0
  float v10; // s2
  int *v11; // r1
  float v12; // s4
  int v13; // s6
  float result; // s0

  v2 = sub_6014C4A4((int)FIELD_U8(this, 0x288));
  v3 = (v2 >> 20) & 0xFF0;
  x = FIELD_U32(this, 0x0).speed.x;
  v5 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v6 = FIELD_U32(this, 0x0).speed.y
     + (float)(x * (float)(*(float *)((char *)sinLutTable + v3) + (float)(*(float *)((char *)&sinLutTable[1] + v3) * v5)));
  v7 = x * (float)(*(float *)((char *)&sinLutTable[2] + v3) + (float)(v5 * *(float *)((char *)&sinLutTable[3] + v3)));
  if ( FIELD_U8(this, 0x17A6) || FIELD_U8(this, 0x17A5) )
    v7 = v7 * 0.5;
  v8 = &FIELD_U32(this, 0x17AC);
  v9 = v6 + *(float *)&FIELD_U32(this, 0x178C);
  v10 = v7 + *(float *)&FIELD_U32(this, 0x1788);
  if ( FIELD_U32(this, 0x17AC) != 1 )
  {
    v12 = *(float *)&FIELD_U32(this, 0x1770);
    goto LABEL_16;
  }
  v11 = &FIELD_U32(this, 0x1770);
  if ( (FIELD_U8(this, 0x288)[2224] & 1) != 0 )
  {
    v12 = 0.0;
    *v11 = 0;
    *v8 = 0;
    goto LABEL_16;
  }
  v12 = *(float *)v11;
  v13 = FIELD_U32(this, 0x1774);
  if ( *(float *)v11 < 0.0 )
  {
    v12 = v12 + *(float *)&v13;
    if ( v12 <= 0.0 )
      goto LABEL_14;
LABEL_13:
    v12 = 0.0;
    *v11 = 0;
LABEL_15:
    *v8 = 0;
    goto LABEL_16;
  }
  if ( *(float *)v11 > 0.0 )
  {
    v12 = v12 - *(float *)&v13;
    if ( v12 < 0.0 )
      goto LABEL_13;
  }
LABEL_14:
  *(float *)v11 = v12;
  if ( v12 == 0.0 )
    goto LABEL_15;
LABEL_16:
  FIELD_U32(this, 0x0).position.x = FIELD_U32(this, 0x0).position.x + (float)(v10 + v12);
  result = v9 + FIELD_U32(this, 0x0).position.y;
  FIELD_U32(this, 0x0).position.y = result;
  return result;
}

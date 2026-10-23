/* TerrainEffects_init
 * address: 0x6070554C   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TerrainEffects_init(
        int this,
        char noLocation,
        int isLayer0,
        int type,
        float arg_positionX,
        float arg_positionY,
        float arg_positionZ,
        float arg_width,
        void *heap)
{
  int v10; // r0
  float v11; // s4
  float v12; // s0
  float v13; // s2
  float v14; // s0
  float v15; // s4
  float v16; // s8
  float v17; // s6
  float v18; // s10
  int type_1; // r0

  FIELD_U32(this, 0xFF44) = 0;
  FIELD_U8(this, 0xE8) = type;
  FIELD_F32(this, 0xC) = arg_positionX;
  FIELD_F32(this, 0x10) = arg_positionY;
  FIELD_F32(this, 0x14) = arg_positionZ;
  FIELD_F32(this, 0x90) = arg_width;
  FIELD_F32(this, 0x94) = arg_width * 0.5;
  v10 = (int)(float)(arg_width * 0.5);
  if ( (float)v10 != (float)(arg_width * 0.5) )
    --v10;
  if ( (float)(arg_width * 0.5) >= 0.0 )
    v10 = (int)(float)(arg_width * 0.5);
  if ( v10 >= 7200 )
    v10 = 7200;
  FIELD_U32(this, 0x98) = v10;
  v11 = arg_width + (float)((float)v10 * -2.0);
  FIELD_F32(this, 0x9C) = v11;
  if ( v11 == 0.0 )
    v12 = 1.0;
  else
    v12 = arg_width / (float)((float)v10 * 8.0);
  FIELD_F32(this, 0xA0) = v12;
  FIELD_U8(this, 0xE9) = noLocation;
  FIELD_U32(this, 0xB8) = 0;
  FIELD_U32(this, 0xBC) = 0;
  FIELD_U32(this, 0xC0) = 0;
  FIELD_U32(this, 0xC4) = 0;
  switch ( type )
  {
    case 1:
      v13 = 16.0;
      v14 = 24.0;
      v15 = -4.0;
      v16 = 4.0;
      v17 = 1.0;
      v18 = 1.25;
      FIELD_U32(this, 0xB0) = 5;
      break;
    case 2:
      v14 = 36.0;
      v17 = 1.6;
      v18 = 0.8;
      v13 = 16.0;
      v15 = 8.0;
      v16 = -4.0;
      FIELD_U32(this, 0xB0) = 7;
      break;
    case 3:
      v16 = 0.65;
      v18 = 60.0;
      v13 = 16.0;
      v14 = 2.5;
      v15 = 8.0;
      v17 = 4.0;
      FIELD_U32(this, 0xB0) = 2;
      break;
    case 4:
      v17 = 1.5;
      v13 = 4.0;
      v14 = 16.0;
      v15 = -1.25;
      v18 = 1.0;
      FIELD_U32(this, 0xB0) = -17;
      v16 = 1.5;
      break;
    default:
      v16 = 8.0;
      v14 = 20.0;
      v15 = -10.0;
      v17 = 1.5;
      v18 = 1.0;
      FIELD_U32(this, 0xB0) = -4;
      FIELD_U32(this, 0xB4) = 2;
      v13 = 8.0;
      break;
  }
  FIELD_F32(this, 0xE0) = v18;
  FIELD_F32(this, 0xE4) = v17;
  FIELD_U32(this, 0xC8) = (int)(float)((float)(v16 * 2147500000.0) / 180.0);
  FIELD_U32(this, 0xCC) = (int)(float)((float)(v15 * 2147500000.0) / 180.0);
  FIELD_U32(this, 0xD8) = (int)(float)((float)(v14 * 2147500000.0) / 180.0);
  FIELD_U32(this, 0xDC) = (int)(float)((float)(v13 * 2147500000.0) / 180.0);
  TerrainEffects_init_helper(this, isLayer0, heap);
  *(_DWORD *)(FIELD_U32(this, 4) + 115364) = FIELD_U32(this, 152);
  type_1 = FIELD_U8(this, 0xE8);
  if ( type_1 == 3 )
  {
    type_1 = TileMgr_instance;
    FIELD_U8(TileMgr_instance, 0x2820) = 1;
LABEL_21:
    FIELD_U8(type_1, 0x2821) = 1;
    return type_1;
  }
  if ( type_1 == 1 )
  {
    type_1 = FIELD_U8(this, 233);
    if ( FIELD_U8(this, 233) )
    {
      type_1 = TileMgr_instance;
      goto LABEL_21;
    }
  }
  return type_1;
}

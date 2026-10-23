/* TerrainEffects_setWaveValues
 * address: 0x60705E2C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall TerrainEffects_setWaveValues(
        int result,
        int height,
        int miniHeight,
        int speed,
        int miniSpeed,
        int width,
        int miniWidth)
{
  float speedVal; // s4
  float miniSpeedVal; // s6
  float heightVal; // s4
  float miniHeightVal; // s4
  float widthVal; // s4
  float v12; // s4
  float v13; // s0

  speedVal = TerrainEffects_speeds[speed] * 2147500000.0;
  miniSpeedVal = TerrainEffects_speedsMini[miniSpeed] * 2147500000.0;
  FIELD_U8(result, 0xE8) = 3;
  FIELD_U32(result, 0xC8) = (int)(float)(speedVal / 180.0);
  FIELD_U32(result, 0xCC) = (int)(float)(miniSpeedVal / 180.0);
  if ( height )
    heightVal = (float)(height - 1) * 10.0;
  else
    heightVal = 60.0;
  FIELD_F32(result, 0xE0) = heightVal;
  if ( miniHeight )
    miniHeightVal = (float)(miniHeight - 1) * 10.0;
  else
    miniHeightVal = 4.0;
  FIELD_F32(result, 228) = miniHeightVal;
  if ( width )
    widthVal = (float)(width - 1) * 0.5;
  else
    widthVal = 2.5;
  FIELD_U32(result, 0xD8) = (int)(float)((float)(widthVal * 2147500000.0) / 180.0);
  if ( miniWidth )
    v12 = (float)(miniWidth - 1) * 0.5;
  else
    v12 = 16.0;
  LODWORD(v13) = (int)(float)((float)(v12 * 2147500000.0) / 180.0);
  FIELD_F32(result, 0xDC) = v13;
  return v13;
}

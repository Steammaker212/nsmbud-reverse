/* SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2_helper
 * address: 0x6032C0DC   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned __int16 *__fastcall SE_BOSS_ROY_SR_KILLER_COUNTDOWN_ref_2_helper(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s16
  float v5; // s18
  int v6; // r6
  float v7; // s16
  unsigned __int16 *result; // r0

  v2 = FIELD_U32(a1, 13072);
  if ( v2 <= 8 )
  {
    v3 = flt_60AFF8AC[v2] + (float)((float)(int)(float)(FIELD_F32(a1, 112) * 0.0625) * 16.0);
    v4 = flt_60AFF888[v2] + (float)((float)(int)(float)(FIELD_F32(a1, 108) * 0.0625) * 16.0);
  }
  else
  {
    v3 = 0.0;
    v4 = 0.0;
  }
  v5 = -v3;
  v6 = TileMgr_instance;
  if ( (unsigned int)(sub_607162B8(
                        TileMgr_instance,
                        (unsigned __int16)(int)v4,
                        (unsigned __int16)(int)(float)-v3,
                        FIELD_U8(a1, 86),
                        COERCE_FLOAT((int)v4))
                    - 5) <= 2 )
    TileMgr_setTile(TileMgr_instance, (unsigned int)v4, (unsigned int)v5, FIELD_U8(a1, 86), 0);
  v7 = v4 + (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 16.0);
  result = (unsigned __int16 *)(sub_607162B8(
                                  v6,
                                  (unsigned __int16)(int)v7,
                                  (unsigned __int16)(int)v5,
                                  FIELD_U8(a1, 86),
                                  COERCE_FLOAT((int)v7))
                              - 5);
  if ( (unsigned int)result <= 2 )
    return TileMgr_setTile(TileMgr_instance, (unsigned int)v7, (unsigned int)v5, FIELD_U8(a1, 86), 0);
  return result;
}

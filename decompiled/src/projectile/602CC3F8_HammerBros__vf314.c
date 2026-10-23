/* HammerBros__vf314
 * address: 0x602CC3F8   size: 496   group: projectile
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BrosBase : 0x602631F8
// 
// Overridden by: None
_BYTE *__fastcall HammerBros__vf314(int a1)
{
  _BYTE *result; // r0
  int Area; // r0
  float v4; // s28
  int v5; // r5
  float v6; // s16
  float v7; // s26
  int v8; // [sp+0h] [bp-60h] BYREF
  float v9; // [sp+4h] [bp-5Ch]
  int v10; // [sp+8h] [bp-58h]
  float v11; // [sp+Ch] [bp-54h]

  FIELD_U32(a1, 12476) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 29;
  if ( (FIELD_U8(a1, 20) & 0x10) == 0 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 648));
    result = *(_BYTE **)(a1 + 112);
    FIELD_U32(a1, 12472) = result;
    return result;
  }
  v8 = 2139095039;
  v9 = 3.4028e38;
  v10 = -8388609;
  v11 = -3.4028e38;
  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  sub_60727620(Area, FIELD_U8(LevelInfo_instance, 20), &v8);
  v4 = FIELD_F32(a1, 112);
  v5 = 0;
  v6 = v11 - (float)(v11 - v9);
  while ( 1 )
  {
    v7 = v4;
    if ( (unsigned int)(sub_607161E4(
                          TileMgr_instance,
                          (unsigned __int16)(int)FIELD_F32(a1, 108),
                          (unsigned __int16)(int)(float)-(float)(v4 + -8.0),
                          FIELD_U8(a1, 86))
                      - 1) < 2 )
      break;
    v4 = v4 + -16.0;
LABEL_10:
    if ( ++v5 >= 24 )
      return StageActor__delete((StateActor *)a1, 0);
  }
  if ( (float)(v4 + -40.0) > v6 )
  {
    v4 = v4 + -16.0;
    if ( (unsigned int)(sub_607161E4(
                          TileMgr_instance,
                          (unsigned __int16)(int)FIELD_F32(a1, 108),
                          (unsigned __int16)(int)(float)-(float)((float)(v7 + -16.0) + -8.0),
                          FIELD_U8(a1, 86))
                      - 1) > 1
      || (unsigned int)(sub_607161E4(
                          TileMgr_instance,
                          (unsigned __int16)(int)FIELD_F32(a1, 108),
                          (unsigned __int16)(int)(float)-(float)((float)(v7 + -32.0) + -8.0),
                          FIELD_U8(a1, 86))
                      - 1) >= 2 )
    {
      goto LABEL_10;
    }
  }
  FIELD_F32(a1, 12472) = v7;
  return (_BYTE *)(a1 + 12472);
}

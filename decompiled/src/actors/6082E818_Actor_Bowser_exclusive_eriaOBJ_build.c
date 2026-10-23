/* Actor_Bowser_exclusive_eriaOBJ_build
 * address: 0x6082E818   size: 228   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

Actor *__fastcall Actor_Bowser_exclusive_eriaOBJ_build(ActorBuildInfo *a1)
{
  Actor *v2; // r4
  int v3; // r1
  int Area; // r0
  int settings1; // r1
  unsigned int settigns2; // r2
  char eventId1; // r1
  _DWORD v9[2]; // [sp+4h] [bp-34h] BYREF
  char v10; // [sp+Ch] [bp-2Ch]
  int v11; // [sp+10h] [bp-28h]
  char v12; // [sp+14h] [bp-24h]
  char v13; // [sp+15h] [bp-23h]
  float v14[8]; // [sp+18h] [bp-20h] BYREF

  v2 = (Actor *)operator_new(0x50u);
  Actor__ctor(v2, a1);
  v3 = LevelInfo_instance;
  FIELD_U32(v2, 0x0) = (int)off_60C2AB20;
  Area = Level_getArea(Level_instance, FIELD_U8(v3, 18));
  settings1 = FIELD_U32(v2, 0x14);
  v14[0] = 3.4028e38;
  v14[1] = 3.4028e38;
  v14[2] = -3.4028e38;
  v14[3] = -3.4028e38;
  LevelArea_getLocation(Area, v14, settings1 & 0xF);
  settigns2 = FIELD_U32(v2, 0x18);
  eventId1 = FIELD_U8(a1, 0x21);
  v9[0] = v14;
  v9[1] = settigns2 >> 28;
  v10 = HIBYTE(settigns2) & 0xF;
  v11 = (settigns2 >> 20) & 0xF;
  v12 = BYTE2(settigns2) & 0xF;
  v13 = eventId1;
  Actor_Bowser_exclusive_eriaOBJ_build_helper(
    dword_60CC6484 + 204,
    (int)v9,
    FIELD_U32(dword_60CC6484, 192),
    FIELD_U32(dword_60CC6484, 196));
  FIELD_U8(v2, 0x13) = 1;
  return v2;
}

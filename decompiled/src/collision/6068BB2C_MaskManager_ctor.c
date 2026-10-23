/* MaskManager_ctor
 * address: 0x6068BB2C   size: 1320   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_ctor(int a1)
{
  int Area; // r5
  float v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  unsigned __int8 v7; // [sp+7h] [bp-29h] BYREF
  float v8[10]; // [sp+8h] [bp-28h] BYREF

  Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v3 = FIELD_F32(dword_60CC6484, 36);
  v8[0] = FIELD_F32(dword_60CC6484, 24);
  v8[2] = v8[0];
  v8[1] = v3;
  v8[3] = v3;
  v7 = -1;
  sub_607276B8(Area, &v7, v8);
  v4 = sub_60727620(Area, v7, 0);
  FIELD_U32(a1, 16) = 0;
  if ( v4 )
    FIELD_U32(a1, 16) = FIELD_U8(v4, 17);
  FIELD_U8(a1, 20) = 0;
  v5 = (_DWORD *)operator_new(0x40u);
  FIELD_U32(a1, 24) = MaskManager_ctor_helper(v5);
  MaskManager_ctor_helper_68AF18();
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 316) = 0;
  FIELD_U32(a1, 320) = 0;
  FIELD_U32(a1, 324) = 0;
  FIELD_U32(a1, 328) = 0;
  FIELD_U32(a1, 332) = 0;
  FIELD_U16(a1, 344) = 0;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 168), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 56), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 96), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 136), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 28, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 28, FIELD_U8(a1, 345));
  FIELD_U32(a1, 1592) = 0;
  FIELD_U32(a1, 1596) = 0;
  FIELD_U32(a1, 1600) = 0;
  FIELD_U32(a1, 1604) = 0;
  FIELD_U32(a1, 1608) = 0;
  FIELD_U32(a1, 1612) = 0;
  FIELD_U16(a1, 1624) = 256;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 1448), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 1336), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 1376), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 1416), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 1308, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 1308, FIELD_U8(a1, 1625));
  FIELD_U32(a1, 632) = 0;
  FIELD_U32(a1, 636) = 0;
  FIELD_U32(a1, 640) = 0;
  FIELD_U32(a1, 644) = 0;
  FIELD_U32(a1, 648) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U16(a1, 664) = 1;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 488), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 376), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 416), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 456), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 348, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 348, FIELD_U8(a1, 665));
  FIELD_U32(a1, 1912) = 0;
  FIELD_U32(a1, 1916) = 0;
  FIELD_U32(a1, 1920) = 0;
  FIELD_U32(a1, 1924) = 0;
  FIELD_U32(a1, 1928) = 0;
  FIELD_U32(a1, 1932) = 0;
  FIELD_U16(a1, 1944) = 257;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 1768), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 1656), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 1696), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 1736), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 1628, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 1628, FIELD_U8(a1, 1945));
  FIELD_U32(a1, 952) = 0;
  FIELD_U32(a1, 956) = 0;
  FIELD_U32(a1, 960) = 0;
  FIELD_U32(a1, 964) = 0;
  FIELD_U32(a1, 968) = 0;
  FIELD_U32(a1, 972) = 0;
  FIELD_U16(a1, 984) = 2;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 808), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 696), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 736), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 776), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 668, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 668, FIELD_U8(a1, 985));
  FIELD_U32(a1, 2232) = 0;
  FIELD_U32(a1, 2236) = 0;
  FIELD_U32(a1, 2240) = 0;
  FIELD_U32(a1, 2244) = 0;
  FIELD_U32(a1, 2248) = 0;
  FIELD_U32(a1, 2252) = 0;
  FIELD_U16(a1, 2264) = 258;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 2088), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 1976), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 2016), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 2056), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 1948, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 1948, FIELD_U8(a1, 2265));
  FIELD_U32(a1, 1272) = 0;
  FIELD_U32(a1, 1276) = 0;
  FIELD_U32(a1, 1280) = 0;
  FIELD_U32(a1, 1284) = 0;
  FIELD_U32(a1, 1288) = 0;
  FIELD_U32(a1, 1292) = 0;
  FIELD_U16(a1, 1304) = 3;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 1128), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 1016), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 1056), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 1096), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 988, 0, 0);
  MaskManager_ctor_helper_68B770(a1 + 988, FIELD_U8(a1, 1305));
  FIELD_U32(a1, 2552) = 0;
  FIELD_U32(a1, 2556) = 0;
  FIELD_U32(a1, 2560) = 0;
  FIELD_U32(a1, 2564) = 0;
  FIELD_U32(a1, 2568) = 0;
  FIELD_U32(a1, 2572) = 0;
  FIELD_U16(a1, 2584) = 259;
  MaskManager_ctor_helper_68B3C4((_DWORD *)(a1 + 2408), 0);
  LightMask__init((RevealMaskRelated *)(a1 + 2296), 0, 2);
  LightMask__init((RevealMaskRelated *)(a1 + 2336), 0, 2);
  MaskManager_ctor_helper_68B778((_DWORD *)(a1 + 2376), 0, 3);
  MaskManager_ctor_helper_68B678(a1 + 2268, 0, 0);
  return MaskManager_ctor_helper_68B770(a1 + 2268, FIELD_U8(a1, 2585));
}

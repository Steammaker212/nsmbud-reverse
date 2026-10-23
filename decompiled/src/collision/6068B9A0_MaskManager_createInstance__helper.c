/* MaskManager_createInstance__helper
 * address: 0x6068B9A0   size: 388   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_createInstance__helper(int a1)
{
  *(_DWORD *)a1 = off_60C174EC;
  FIELD_U32(a1, 16) = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = 0;
  LightMask__ctor((RevealMaskRelated *)(a1 + 28));
  LightMask__ctor((RevealMaskRelated *)(a1 + 68));
  FIELD_U32(a1, 108) = off_60C17508;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = 0;
  sub_6068B390((_DWORD *)(a1 + 140));
  memset((void *)(a1 + 256), 0, 62);
  FIELD_U32(a1, 320) = off_60C174EC;
  FIELD_U32(a1, 336) = 0;
  FIELD_U32(a1, 340) = 0;
  FIELD_U32(a1, 344) = 0;
  LightMask__ctor((RevealMaskRelated *)(a1 + 348));
  LightMask__ctor((RevealMaskRelated *)(a1 + 388));
  FIELD_U32(a1, 428) = off_60C17508;
  FIELD_U32(a1, 432) = 0;
  FIELD_U32(a1, 436) = 0;
  FIELD_U32(a1, 440) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U32(a1, 448) = 0;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  sub_6068B390((_DWORD *)(a1 + 460));
  memset((void *)(a1 + 576), 0, 62);
  FIELD_U32(a1, 640) = off_60C174EC;
  FIELD_U32(a1, 656) = 0;
  FIELD_U32(a1, 660) = 0;
  FIELD_U32(a1, 664) = 0;
  LightMask__ctor((RevealMaskRelated *)(a1 + 668));
  LightMask__ctor((RevealMaskRelated *)(a1 + 708));
  FIELD_U32(a1, 748) = off_60C17508;
  FIELD_U32(a1, 752) = 0;
  FIELD_U32(a1, 756) = 0;
  FIELD_U32(a1, 760) = 0;
  FIELD_U32(a1, 764) = 0;
  FIELD_U32(a1, 768) = 0;
  FIELD_U32(a1, 772) = 0;
  FIELD_U32(a1, 776) = 0;
  sub_6068B390((_DWORD *)(a1 + 780));
  memset((void *)(a1 + 896), 0, 62);
  FIELD_U32(a1, 960) = off_60C174EC;
  FIELD_U32(a1, 976) = 0;
  FIELD_U32(a1, 980) = 0;
  FIELD_U32(a1, 984) = 0;
  LightMask__ctor((RevealMaskRelated *)(a1 + 988));
  LightMask__ctor((RevealMaskRelated *)(a1 + 1028));
  FIELD_U32(a1, 1068) = off_60C17508;
  FIELD_U32(a1, 1072) = 0;
  FIELD_U32(a1, 1076) = 0;
  FIELD_U32(a1, 1080) = 0;
  FIELD_U32(a1, 1084) = 0;
  FIELD_U32(a1, 1088) = 0;
  FIELD_U32(a1, 1092) = 0;
  FIELD_U32(a1, 1096) = 0;
  sub_6068B390((_DWORD *)(a1 + 1100));
  memset((void *)(a1 + 1216), 0, 62);
  return a1;
}

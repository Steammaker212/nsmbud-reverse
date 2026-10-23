/* sub_606E8BAC
 * address: 0x606E8BAC   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8BAC(int a1)
{
  int v2; // r4

  v2 = dword_60CBC000;
  if ( !dword_60CBC000 )
  {
    v2 = operator_new_8DE2C8(0xA9Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60C1FC00;
    dword_60CBBFFC = v2;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 20) = 0;
    FIELD_U32(v2, 16) = 0;
    FIELD_U32(v2, 32) = -943501440;
    FIELD_U32(v2, 36) = -943501440;
    FIELD_U32(v2, 40) = -943501440;
    FIELD_U32(v2, 44) = -943501440;
    FIELD_U32(v2, 48) = -998637568;
    FIELD_U32(v2, 52) = 1148846080;
    FIELD_U32(v2, 56) = -998637568;
    FIELD_U32(v2, 60) = 1148846080;
    FIELD_U8(v2, 168) = 0;
    memset((void *)(v2 + 64), 0, 103);
    memset((void *)(v2 + 256), 0, 1212);
    FIELD_U32(v2, 1660) = v2 + 1676;
    FIELD_U32(v2, 1672) = 0;
    FIELD_U32(v2, 1668) = 0;
    FIELD_U32(v2, 1664) = 8;
    FIELD_U32(v2, 1756) = 0;
    FIELD_U32(v2, 1708) = v2 + 1724;
    FIELD_U32(v2, 1712) = 8;
    FIELD_U32(v2, 1716) = 0;
    FIELD_U32(v2, 1720) = 0;
    EffectWrapper_ctor((EffectWrapper *)(v2 + 1760));
    FIELD_U32(v2, 1760) = off_60BC1450;
    sub_6045BF30();
    sub_6045BF30();
    FIELD_U32(v2, 2692) = 0;
    FIELD_U32(v2, 2696) = 75;
    FIELD_U32(v2, 2700) = 0;
    FIELD_U32(v2, 2704) = 0;
    FIELD_U32(v2, 2708) = 0;
    FIELD_U32(v2, 2712) = 0;
    FIELD_U32(v2, 184) = -1;
    FIELD_U32(v2, 180) = -1;
    FIELD_U32(v2, 176) = -1;
    FIELD_U32(v2, 172) = -1;
    FIELD_U8(v2, 189) = 0;
    FIELD_U8(v2, 188) = 0;
    FIELD_U8(v2, 191) = 0;
    FIELD_U8(v2, 190) = 0;
    memset((void *)(v2 + 256), 0, 1212);
    memset((void *)(v2 + 1580), 255, 0x50u);
    FIELD_U32(v2, 1672) = 0;
    FIELD_U32(v2, 1668) = 0;
    FIELD_U32(v2, 1720) = 0;
    FIELD_U32(v2, 1716) = 0;
    FIELD_U32(v2, 2672) = 0;
    FIELD_U32(v2, 2676) = 0;
    FIELD_U32(v2, 2680) = 0;
    dword_60CBC000 = v2;
  }
  return v2;
}

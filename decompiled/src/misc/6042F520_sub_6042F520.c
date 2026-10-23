/* sub_6042F520
 * address: 0x6042F520   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042F520(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C9C2D0;
  if ( !dword_60C9C2D0 )
  {
    v2 = operator_new_8DE2C8(0x118u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 16), a1, 3u);
    FIELD_U32(v2, 16) = off_60BFA5E0;
    dword_60C9C2CC = (int)v3;
    sead_IDisposer_ctor((sead_IDisposer *)v2);
    *(_DWORD *)v2 = off_60BFA5F0;
    FIELD_U8(v2, 32) = 0;
    FIELD_U8(v2, 52) = 0;
    FIELD_U32(v2, 48) = 0;
    FIELD_U32(v2, 44) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U32(v2, 36) = 0;
    FIELD_U8(v2, 68) = 0;
    FIELD_U32(v2, 64) = 0;
    FIELD_U32(v2, 60) = 0;
    FIELD_U32(v2, 56) = 0;
    FIELD_U8(v2, 84) = 0;
    FIELD_U32(v2, 80) = 0;
    FIELD_U32(v2, 76) = 0;
    FIELD_U32(v2, 72) = 0;
    FIELD_U8(v2, 100) = 0;
    FIELD_U32(v2, 96) = 0;
    FIELD_U32(v2, 92) = 0;
    FIELD_U32(v2, 88) = 0;
    FIELD_U8(v2, 116) = 0;
    FIELD_U32(v2, 112) = 0;
    FIELD_U32(v2, 108) = 0;
    FIELD_U32(v2, 104) = 0;
    FIELD_U8(v2, 132) = 0;
    FIELD_U32(v2, 128) = 0;
    FIELD_U32(v2, 124) = 0;
    FIELD_U32(v2, 120) = 0;
    FIELD_U8(v2, 148) = 0;
    FIELD_U32(v2, 144) = 0;
    FIELD_U32(v2, 140) = 0;
    FIELD_U32(v2, 136) = 0;
    FIELD_U8(v2, 164) = 0;
    FIELD_U32(v2, 160) = 0;
    FIELD_U32(v2, 156) = 0;
    FIELD_U32(v2, 152) = 0;
    FIELD_U8(v2, 180) = 0;
    FIELD_U32(v2, 176) = 0;
    FIELD_U32(v2, 172) = 0;
    FIELD_U32(v2, 168) = 0;
    FIELD_U8(v2, 196) = 0;
    FIELD_U32(v2, 192) = 0;
    FIELD_U32(v2, 188) = 0;
    FIELD_U32(v2, 184) = 0;
    FIELD_U8(v2, 212) = 0;
    FIELD_U32(v2, 208) = 0;
    FIELD_U32(v2, 204) = 0;
    FIELD_U32(v2, 200) = 0;
    FIELD_U8(v2, 228) = 0;
    FIELD_U32(v2, 224) = 0;
    FIELD_U32(v2, 220) = 0;
    FIELD_U32(v2, 216) = 0;
    FIELD_U8(v2, 244) = 0;
    FIELD_U32(v2, 240) = 0;
    FIELD_U32(v2, 236) = 0;
    FIELD_U32(v2, 232) = 0;
    FIELD_U8(v2, 260) = 0;
    FIELD_U32(v2, 256) = 0;
    FIELD_U32(v2, 252) = 0;
    FIELD_U32(v2, 248) = 0;
    FIELD_U8(v2, 276) = 0;
    FIELD_U32(v2, 264) = 0;
    FIELD_U32(v2, 268) = 0;
    FIELD_U32(v2, 272) = 0;
    dword_60C9C2D0 = v2;
  }
  return v2;
}

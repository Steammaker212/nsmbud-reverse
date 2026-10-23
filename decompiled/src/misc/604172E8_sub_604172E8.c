/* sub_604172E8
 * address: 0x604172E8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604172E8(int a1)
{
  int v2; // r4

  v2 = dword_60C9BAAC;
  if ( !dword_60C9BAAC )
  {
    v2 = operator_new_8DE2C8(0x348u, a1, 8);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BF9D10;
    dword_60C9BAA8 = v2;
    FIELD_U32(v2, 40) = 2139095039;
    FIELD_U32(v2, 44) = 2139095039;
    FIELD_U32(v2, 48) = -8388609;
    FIELD_U32(v2, 52) = -8388609;
    FIELD_U32(v2, 92) = 2139095039;
    FIELD_U32(v2, 96) = 2139095039;
    FIELD_U32(v2, 100) = -8388609;
    FIELD_U32(v2, 104) = -8388609;
    FIELD_U32(v2, 144) = 2139095039;
    FIELD_U32(v2, 148) = 2139095039;
    FIELD_U32(v2, 152) = -8388609;
    FIELD_U32(v2, 156) = -8388609;
    FIELD_U32(v2, 196) = 2139095039;
    FIELD_U32(v2, 200) = 2139095039;
    FIELD_U32(v2, 204) = -8388609;
    FIELD_U32(v2, 208) = -8388609;
    FIELD_U32(v2, 248) = 2139095039;
    FIELD_U32(v2, 252) = 2139095039;
    FIELD_U32(v2, 256) = -8388609;
    FIELD_U32(v2, 260) = -8388609;
    sub_6090B350(v2 + 276);
    sub_60959B54(v2 + 384);
    memset((void *)(v2 + 16), 0, 0x104u);
    FIELD_U32(v2, 280) &= ~1u;
    FIELD_U8(v2, 276) = 0;
    FIELD_U8(v2, 277) = 0;
    dword_60C9BAAC = v2;
  }
  return v2;
}

/* sub_6019ED68
 * address: 0x6019ED68   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019ED68(int a1)
{
  int v2; // r4

  v2 = dword_60C89E00;
  if ( !dword_60C89E00 )
  {
    v2 = operator_new_8DE2C8(0x40C8u, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60BD5E9C;
    dword_60C89DFC = v2;
    FIELD_U32(v2, 24) = 0;
    FIELD_U32(v2, 20) = v2 + 16;
    FIELD_U32(v2, 16) = v2 + 16;
    FIELD_U32(v2, 28) = -1;
    FIELD_U32(v2, 40) = 0;
    FIELD_U32(v2, 36) = v2 + 32;
    FIELD_U32(v2, 32) = v2 + 32;
    FIELD_U32(v2, 44) = -1;
    FIELD_U32(v2, 56) = 0;
    FIELD_U32(v2, 52) = v2 + 48;
    FIELD_U32(v2, 48) = v2 + 48;
    FIELD_U32(v2, 60) = -1;
    FIELD_U32(v2, 72) = 0;
    FIELD_U32(v2, 68) = v2 + 64;
    FIELD_U32(v2, 64) = v2 + 64;
    FIELD_U32(v2, 76) = -1;
    FIELD_U32(v2, 88) = 0;
    FIELD_U32(v2, 84) = v2 + 80;
    FIELD_U32(v2, 80) = v2 + 80;
    FIELD_U32(v2, 92) = -1;
    FIELD_U32(v2, 104) = 0;
    FIELD_U32(v2, 100) = v2 + 96;
    FIELD_U32(v2, 96) = v2 + 96;
    FIELD_U32(v2, 108) = -1;
    FIELD_U32(v2, 120) = 0;
    FIELD_U32(v2, 116) = v2 + 112;
    FIELD_U32(v2, 112) = v2 + 112;
    FIELD_U32(v2, 124) = -1;
    FIELD_U32(v2, 136) = 0;
    FIELD_U32(v2, 132) = v2 + 128;
    FIELD_U32(v2, 128) = v2 + 128;
    FIELD_U32(v2, 140) = -1;
    FIELD_U32(v2, 144) = v2 + 144;
    FIELD_U32(v2, 148) = v2 + 144;
    FIELD_U32(v2, 152) = 0;
    FIELD_U32(v2, 156) = -1;
    FIELD_U8(v2, 160) = 1;
    sub_601AAD34(v2 + 164);
    FIELD_U32(v2, 28) = 1836;
    FIELD_U32(v2, 44) = 1836;
    FIELD_U32(v2, 60) = 1836;
    FIELD_U32(v2, 76) = 1836;
    FIELD_U32(v2, 92) = 1836;
    FIELD_U32(v2, 108) = 1836;
    FIELD_U32(v2, 124) = 1836;
    FIELD_U32(v2, 140) = 1836;
    FIELD_U32(v2, 156) = 1836;
    sub_60218DAC(0);
    dword_60C89E00 = v2;
  }
  return v2;
}

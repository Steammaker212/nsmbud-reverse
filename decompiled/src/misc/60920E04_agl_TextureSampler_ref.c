/* agl_TextureSampler_ref
 * address: 0x60920E04   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_TextureSampler_ref(int a1)
{
  unsigned int *v2; // r6
  int v3; // r8
  int v4; // r2
  int v5; // r3
  int v6; // r4
  int v7; // r7
  int v8; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r7
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r7
  __int16 v16; // r1
  unsigned int v17; // r0

  sub_60917ACC(a1);
  agl_TextureData_ref(a1 + 16);
  sub_60972724(a1 + 288);
  sub_60972320(a1 + 324);
  FIELD_U32(a1, 328) = 255;
  v2 = (unsigned int *)(a1 + 328);
  FIELD_U8(a1, 332) = 32;
  FIELD_U32(a1, 336) = "agl__TextureSampler";
  if ( dword_60CD0A14 )
  {
    v3 = FIELD_U32(dword_60CD0A14, 28);
    v4 = FIELD_U32(v3, 20);
    v5 = FIELD_U32(v3, 24);
    v6 = FIELD_U32(v3, 28);
    v7 = FIELD_U32(v3, 32);
    FIELD_U32(a1, 16) = FIELD_U32(v3, 16);
    FIELD_U32(a1, 20) = v4;
    FIELD_U32(a1, 24) = v5;
    FIELD_U32(a1, 28) = v6;
    FIELD_U32(a1, 32) = v7;
    v8 = FIELD_U32(v3, 40);
    v9 = FIELD_U32(v3, 44);
    v10 = FIELD_U32(v3, 48);
    v11 = FIELD_U32(v3, 52);
    FIELD_U32(a1, 36) = FIELD_U32(v3, 36);
    FIELD_U32(a1, 40) = v8;
    FIELD_U32(a1, 44) = v9;
    FIELD_U32(a1, 48) = v10;
    FIELD_U32(a1, 52) = v11;
    v12 = FIELD_U32(v3, 60);
    v13 = FIELD_U32(v3, 64);
    v14 = FIELD_U32(v3, 68);
    v15 = FIELD_U32(v3, 72);
    FIELD_U32(a1, 56) = FIELD_U32(v3, 56);
    FIELD_U32(a1, 60) = v12;
    FIELD_U32(a1, 64) = v13;
    FIELD_U32(a1, 68) = v14;
    FIELD_U32(a1, 72) = v15;
    v16 = FIELD_U16(v3, 76);
    FIELD_U8(a1, 78) = FIELD_U8(v3, 78);
    FIELD_U16(a1, 76) = v16;
    sub_60917754(a1 + 80, v3 + 80);
    FIELD_U32(a1, 280) = FIELD_U32(v3, 280);
    do
      v17 = __ldrex(v2);
    while ( __strex(v17 | 1, v2) );
  }
  return a1;
}

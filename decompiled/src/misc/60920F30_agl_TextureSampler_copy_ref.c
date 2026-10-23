/* agl_TextureSampler_copy_ref
 * address: 0x60920F30   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_TextureSampler_copy_ref(int a1, int a2)
{
  unsigned int *v4; // r7
  int v5; // r2
  int v6; // r3
  int v7; // r4
  int v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r4
  int v12; // r5
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r5
  __int16 v17; // r1
  unsigned int v18; // r0

  sub_60917ACC(a1);
  agl_TextureData_ref(a1 + 16);
  sub_60972724(a1 + 288);
  sub_60972320(a1 + 324);
  FIELD_U32(a1, 328) = 255;
  v4 = (unsigned int *)(a1 + 328);
  FIELD_U8(a1, 332) = 32;
  FIELD_U32(a1, 336) = "agl__TextureSampler(copy)";
  v5 = FIELD_U32(a2, 4);
  v6 = FIELD_U32(a2, 8);
  v7 = FIELD_U32(a2, 12);
  v8 = FIELD_U32(a2, 16);
  FIELD_U32(a1, 16) = *(_DWORD *)a2;
  FIELD_U32(a1, 20) = v5;
  FIELD_U32(a1, 24) = v6;
  FIELD_U32(a1, 28) = v7;
  FIELD_U32(a1, 32) = v8;
  v9 = FIELD_U32(a2, 24);
  v10 = FIELD_U32(a2, 28);
  v11 = FIELD_U32(a2, 32);
  v12 = FIELD_U32(a2, 36);
  FIELD_U32(a1, 36) = FIELD_U32(a2, 20);
  FIELD_U32(a1, 40) = v9;
  FIELD_U32(a1, 44) = v10;
  FIELD_U32(a1, 48) = v11;
  FIELD_U32(a1, 52) = v12;
  v13 = FIELD_U32(a2, 44);
  v14 = FIELD_U32(a2, 48);
  v15 = FIELD_U32(a2, 52);
  v16 = FIELD_U32(a2, 56);
  FIELD_U32(a1, 56) = FIELD_U32(a2, 40);
  FIELD_U32(a1, 60) = v13;
  FIELD_U32(a1, 64) = v14;
  FIELD_U32(a1, 68) = v15;
  FIELD_U32(a1, 72) = v16;
  v17 = FIELD_U16(a2, 60);
  FIELD_U8(a1, 78) = FIELD_U8(a2, 62);
  FIELD_U16(a1, 76) = v17;
  sub_60917754(a1 + 80, a2 + 64);
  FIELD_U32(a1, 280) = FIELD_U32(a2, 264);
  do
    v18 = __ldrex(v4);
  while ( __strex(v18 | 1, v4) );
  return a1;
}

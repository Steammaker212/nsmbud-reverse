/* agl_TextureData_ref_9204B0
 * address: 0x609204B0   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall agl_TextureData_ref_9204B0(int a1, int a2)
{
  unsigned __int8 *v4; // r0
  unsigned int v5; // r0
  _WORD v7[19]; // [sp+40h] [bp-480h] BYREF
  char v8; // [sp+66h] [bp-45Ah]
  _DWORD v9[54]; // [sp+68h] [bp-458h] BYREF
  _DWORD v10[16]; // [sp+140h] [bp-380h] BYREF
  int v11; // [sp+180h] [bp-340h] BYREF
  _BYTE v12[80]; // [sp+298h] [bp-228h] BYREF
  _WORD v13[119]; // [sp+2E8h] [bp-1D8h] BYREF
  char v14; // [sp+3D6h] [bp-EAh]
  unsigned int v15[4]; // [sp+3E0h] [bp-E0h] BYREF
  _DWORD v16[4]; // [sp+3F0h] [bp-D0h] BYREF
  __int16 v17; // [sp+434h] [bp-8Ch] BYREF
  int v18; // [sp+438h] [bp-88h]

  v4 = (unsigned __int8 *)sub_6090B350((int)&v17);
  v18 &= ~1u;
  v17 = 0;
  sub_6090B4B0(v4, a2);
  sub_60972394(v7);
  v7[18] = 0;
  v8 = 1;
  sub_609175B8((int)v9);
  v9[50] = "agl__TextureData";
  sub_6091ABEC(v10);
  agl_TextureSampler_ref(v12);
  sub_60919E88(v16);
  v9[52] = v16;
  sub_60920EC8(v12, a1);
  v13[118] = 0;
  v14 = 1;
  do
    v5 = __ldrex(v15);
  while ( __strex(v5 | 4, v15) );
  sub_60920648();
  j_nullsub_280((int)v16);
  sub_609175E4((int)v13);
  sub_60917AE4((int)v12);
  sub_609175E4((int)&v11);
  return sub_609175E4((int)v9);
}

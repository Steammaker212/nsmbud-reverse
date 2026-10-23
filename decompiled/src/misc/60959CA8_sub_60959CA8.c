/* sub_60959CA8
 * address: 0x60959CA8   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60959CA8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  _DWORD *v7; // r7
  _DWORD *v9; // [sp+4h] [bp-44h]
  int (**v10)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v11; // [sp+20h] [bp-28h]

  v10 = &sead__SafeStringBase__vtable;
  v11 = "agllmap";
  v4 = param_root_ref(a1, &v10, 2, a4);
  *v4 = off_60C5EAA4;
  v9 = v4;
  v4[99] = &off_60C5EAE0;
  v5 = v4 + 99;
  v4 += 105;
  v5[8] = 0;
  v5[5] = 0;
  v5[4] = 0;
  v5[3] = 0;
  v5[2] = 0;
  v5[1] = 0;
  v5[7] = v4;
  v5[6] = v4;
  v5[9] = -1;
  v5[11] = 0;
  v5[12] = 0;
  v5[13] = 0;
  v5[14] = 0;
  agl_TextureData_ref((int)(v5 + 15));
  agl_TextureSampler_ref((int)(v5 + 83));
  v5[169] = 0;
  v5[170] = 0;
  v5[171] = 0;
  v5[172] = 0;
  agl_TextureData_ref((int)(v5 + 173));
  agl_TextureSampler_ref((int)(v5 + 241));
  v5[327] = 0;
  v5[328] = 0;
  v5[329] = 0;
  v5[330] = 0;
  agl_TextureData_ref((int)(v5 + 331));
  agl_TextureSampler_ref((int)(v5 + 399));
  v6 = v5 + 485;
  do
  {
    default_ref_9419C8(v6);
    *v6 = &off_60C5D898;
    v6[4] = v6 + 6;
    v6[3] = &BufferedSafeStringBase_char_vtable_probably;
    v7 = v6 + 3;
    v6[5] = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v6 + 3));
    *(_BYTE *)v6[4] = 0;
    v6[3] = &off_60BD4C20;
    default_ref_9419C8(v6 + 14);
    v6[14] = &off_60C5E4B0;
    v6[17] = off_60C5E500;
    *((_BYTE *)v6 + 77) = 4;
    qmemcpy(v6 + 22, &unk_60B46644, 0x24u);
    v6[31] = 1065353216;
    v6[32] = 1065353216;
    v6[33] = 1065353216;
    v6[34] = 1065353216;
    v6[35] = 1065353216;
    v6[36] = 1065353216;
    v6[37] = 1065353216;
    v6[38] = 1065353216;
    v6[39] = 1065353216;
    v6[40] = 1065353216;
    v6[41] = 1065353216;
    v6[42] = 1065353216;
    v6[43] = 1065353216;
    v6[44] = 1065353216;
    v6[45] = 1065353216;
    v6[46] = 1065353216;
    v6[47] = 1065353216;
    v6[48] = 1065353216;
    v6[49] = 1065353216;
    v6[50] = 1065353216;
    v6[51] = 1065353216;
    v6[21] = 7;
    v6[20] = 9;
    *((_BYTE *)v6 + 76) = 7;
    *((_BYTE *)v6 + 78) = 30;
    v6[18] = v6 + 22;
    *((_BYTE *)v6 + 79) = 9;
    v6 += 52;
  }
  while ( v7 + 49 != v5 + 2149 );
  sub_6090B350((int)(v9 + 2248));
  sub_6090B350((int)(v9 + 2274));
  sub_6090B350((int)(v9 + 2300));
  sub_6090B350((int)(v9 + 2326));
  sub_6090B350((int)(v9 + 2352));
  sub_6090B350((int)(v9 + 2378));
  sub_60947BCC(v9 + 2404);
  v9[2404] = &off_60C5DAF8;
  default_ref_9419C8(v9 + 2411);
  v9[2411] = &off_60C5D898;
  v9[2415] = v9 + 2417;
  v9[2414] = &BufferedSafeStringBase_char_vtable_probably;
  v9[2416] = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)(v9 + 2414));
  *(_BYTE *)v9[2415] = 0;
  v9[2414] = &off_60BD4C20;
  sub_60947BCC(v9 + 2425);
  v9[2425] = &off_60C5DAF8;
  v9[2432] = 1048576000;
  v9[2436] = 0;
  v9[2435] = 0;
  v9[2434] = 0;
  v9[2433] = 0;
  *((_WORD *)v9 + 4874) = 44;
  *((_BYTE *)v9 + 9750) = 0;
  sub_609394E8((int)(v9 + 2438));
  v10 = &sead__SafeStringBase__vtable;
  v11 = "Icon=LIGHT";
  sub_60969510(v5, &v10);
  v9[108] = 1744;
  return v9;
}

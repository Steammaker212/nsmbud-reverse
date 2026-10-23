/* sub_6081FAB4
 * address: 0x6081FAB4   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081FAB4(int a1)
{
  _DWORD *v1; // r7
  _DWORD *v2; // r11
  int v3; // r4
  void **v4; // r2
  int v5; // r0
  int v6; // r7
  _DWORD *v7; // r4
  _DWORD *v8; // r7
  int v9; // r11
  int result; // r0
  void **v11; // [sp+30h] [bp-178h]
  _DWORD *v12; // [sp+34h] [bp-174h]
  int v13; // [sp+38h] [bp-170h]
  _DWORD *v14; // [sp+3Ch] [bp-16Ch]
  int v15; // [sp+40h] [bp-168h] BYREF
  int v16; // [sp+44h] [bp-164h] BYREF
  int v17; // [sp+48h] [bp-160h] BYREF
  _BYTE v18[40]; // [sp+4Ch] [bp-15Ch] BYREF
  _BYTE v19[84]; // [sp+74h] [bp-134h] BYREF
  int (**v20)(); // [sp+C8h] [bp-E0h] BYREF
  int *v21; // [sp+CCh] [bp-DCh]
  int v22; // [sp+D0h] [bp-D8h]
  int v23; // [sp+D4h] [bp-D4h] BYREF
  _DWORD v24[21]; // [sp+154h] [bp-54h] BYREF

  v1 = (_DWORD *)(a1 + 2912);
  v2 = (_DWORD *)(a1 + 2160);
  v3 = 0;
  v4 = (void **)(a1 + 98484);
  v11 = (void **)(a1 + 98484);
  do
  {
    v14 = v2;
    memset(*v4, 0, 0x1100u);
    memset(&v24[1], 0, 44);
    v24[0] = &off_60BF9CF0;
    v21 = &v23;
    v20 = &BufferedSafeStringBase_char_vtable_probably;
    v22 = 128;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v20);
    *(_BYTE *)v21 = 0;
    v13 = v3 + 1;
    v20 = &off_60BD95A8;
    sub_608FDDF4((int)&v20, "Model/LookOffsetDataW%d.bin", v3 + 1);
    sub_608E6578(FIELD_U32(dword_60CCEBD0, 28));
    if ( v24[1] )
    {
      v12 = v1;
      sub_60904E6C(v19, v24, 0);
      v5 = sub_609049FC(v18, v19, *v11, 744);
      sub_609052F4(v5, 1);
      v6 = 31;
      v7 = v2;
      do
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        sub_609054D4(v18, &v15);
        sub_609054D4(v18, &v16);
        sub_609054D4(v18, &v17);
        --v6;
        *v7 = v15;
        v7[1] = v16;
        v7[2] = v17;
        v7 += 6;
      }
      while ( v6 );
      v8 = v12;
      v9 = 31;
      do
      {
        v15 = 0;
        v16 = 0;
        v17 = 0;
        sub_609054D4(v18, &v15);
        sub_609054D4(v18, &v16);
        sub_609054D4(v18, &v17);
        --v9;
        *(v8 - 2) = v15;
        *(v8 - 1) = v16;
        *v8 = v17;
        v8 += 6;
      }
      while ( v9 );
      sub_608E7A54(v24);
      sub_60904A80(v18);
      sub_60904F0C(v19);
      v1 = v12;
      v2 = v14;
    }
    v24[0] = &off_60BF9CF0;
    result = v24[2];
    if ( v24[2] )
      result = sub_608E6738(v24[2]);
    v3 = v13;
    v4 = v11;
    v1 += 372;
    v2 += 372;
  }
  while ( v13 != 9 );
  return result;
}

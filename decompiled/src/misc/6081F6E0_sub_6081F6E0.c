/* sub_6081F6E0
 * address: 0x6081F6E0   size: 948   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6081F6E0(int a1, unsigned int a2)
{
  void **v3; // r5
  int v4; // r6
  int v5; // r0
  _BYTE *v6; // r9
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r6
  _BYTE *v10; // r5
  int v11; // r8
  _BYTE *v12; // r9
  _BYTE *v13; // r10
  int i; // r1
  int v15; // r0
  size_t v16; // r4
  int v17; // r1
  int v18; // r2
  void **v20; // [sp+8h] [bp-198h]
  int v21; // [sp+14h] [bp-18Ch]
  int v23; // [sp+20h] [bp-180h]
  int (**v24)(); // [sp+24h] [bp-17Ch] BYREF
  _BYTE *v25; // [sp+28h] [bp-178h]
  int v26; // [sp+2Ch] [bp-174h] BYREF
  int v27; // [sp+30h] [bp-170h] BYREF
  int v28; // [sp+34h] [bp-16Ch] BYREF
  int v29; // [sp+38h] [bp-168h] BYREF
  _BYTE v30[8]; // [sp+3Ch] [bp-164h] BYREF
  _BYTE v31[40]; // [sp+44h] [bp-15Ch] BYREF
  _BYTE v32[84]; // [sp+6Ch] [bp-134h] BYREF
  int (**v33)(); // [sp+C0h] [bp-E0h] BYREF
  int *v34; // [sp+C4h] [bp-DCh]
  int v35; // [sp+C8h] [bp-D8h]
  int v36; // [sp+CCh] [bp-D4h] BYREF
  _DWORD v37[21]; // [sp+14Ch] [bp-54h] BYREF

  v3 = (void **)(a1 + 98484);
  memset(*(void **)(a1 + 98484), 0, 0x1100u);
  memset(&v37[1], 0, 44);
  v4 = 0;
  v37[0] = &off_60BF9CF0;
  v34 = &v36;
  v33 = &BufferedSafeStringBase_char_vtable_probably;
  v35 = 128;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v33);
  *(_BYTE *)v34 = 0;
  v33 = &off_60BD95A8;
  sub_608FDDF4((int)&v33, "Model/MarioOffsetDataW%d.bin", a2 + 1);
  sub_608E6578(FIELD_U32(dword_60CCEBD0, 28));
  if ( v37[1] )
  {
    sub_60904E6C(v32, v37, 0);
    v20 = v3;
    v5 = sub_609049FC(v31, v32, *v3, 4352);
    sub_609052F4(v5, 1);
    v6 = v30;
    v23 = 0;
    if ( a2 >= 9 )
      a2 = 0;
    do
    {
      v7 = 0;
      do
      {
        v21 = v7;
        v30[0] = sub_60905340(v31);
        v30[1] = sub_60905340(v31);
        v30[2] = sub_60905340(v31);
        v30[3] = sub_60905340(v31);
        v30[4] = sub_60905340(v31);
        v8 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        sub_609054D4(v31, &v27);
        sub_609054D4(v31, &v28);
        sub_609054D4(v31, &v29);
        v26 = 0;
        sub_60905424(v31, &v26);
        while ( 1 )
        {
          v9 = a2;
          v10 = v6;
          v24 = &sead__SafeStringBase__vtable;
          v25 = v6;
          v11 = a1 + 9216 * a2 + 4608 * v23 + 36 * v8;
          (*(void (__fastcall **)(int))(FIELD_U32(v11, 15540) + 12))(v11 + 15540);
          (*(void (__fastcall **)(int))(FIELD_U32(v11, 15540) + 12))(v11 + 15540);
          v12 = *(_BYTE **)(v11 + 15544);
          ((void (__fastcall *)(int (***)()))v24[3])(&v24);
          v13 = *(_BYTE **)(v11 + 15544);
          if ( v12 == v25 )
            break;
          for ( i = 1; v13[i - 1] == v25[i - 1]; i += 2 )
          {
            if ( !v13[i - 1] )
              goto LABEL_17;
            if ( i > 0x80000 || v13[i] != v25[i] )
              break;
            if ( !v13[i] )
              goto LABEL_17;
          }
          ++v8;
          v6 = v10;
          if ( v8 >= 128 )
            goto LABEL_22;
        }
LABEL_17:
        v6 = v10;
        if ( v13 != v10 )
        {
          v15 = FIELD_U32(v11, 15548);
          v16 = v15 - 1;
          if ( v15 > 4 )
            v16 = 4;
          qmemcpy(*(void **)(v11 + 15544), v10, v16);
          v13[v16] = 0;
        }
        a2 = v9;
        v17 = v28;
        v18 = v29;
        FIELD_U32(v11, 15560) = v27;
        FIELD_U32(v11, 15564) = v17;
        FIELD_U32(v11, 15568) = v18;
        FIELD_U32(v11, 15572) = v26;
LABEL_22:
        v7 = v21 + 1;
      }
      while ( v21 != 127 );
      ++v23;
    }
    while ( v23 != 2 );
    sub_608E7A54(v37);
    memset(*v20, 0, 0x1100u);
    sub_60904A80(v31);
    sub_60904F0C(v32);
    v4 = 1;
  }
  v37[0] = &off_60BF9CF0;
  if ( v37[2] )
    sub_608E6738(v37[2]);
  return v4;
}

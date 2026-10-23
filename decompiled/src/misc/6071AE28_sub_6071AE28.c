/* sub_6071AE28
 * address: 0x6071AE28   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071AE28(int a1)
{
  int v2; // r5
  int v3; // r1
  int result; // r0
  int v5; // r11
  _DWORD *v6; // r6
  int v7; // r8
  int v8; // r11
  int v9; // r7
  int v10; // r10
  int v11; // r0
  int v12; // r1
  int v13; // [sp+Ch] [bp-8Ch]
  int v14; // [sp+14h] [bp-84h]
  int v15; // [sp+24h] [bp-74h]
  int (**v16)(); // [sp+28h] [bp-70h] BYREF
  int *v17; // [sp+2Ch] [bp-6Ch]
  int v18; // [sp+30h] [bp-68h]
  int v19; // [sp+34h] [bp-64h] BYREF

  v15 = ArchiveManagerMaybe_instance;
  v17 = &v19;
  v16 = &BufferedSafeStringBase_char_vtable_probably;
  v18 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v16);
  v2 = 0;
  v3 = 0;
  *(_BYTE *)v17 = 0;
  v16 = &off_60BD4BF0;
  result = 0;
  do
  {
    v5 = v3;
    v14 = result;
    sub_608FDDF4((int)&v16, "course/course%d_bgdatL0.bin", v3 + 1);
    v6 = (_DWORD *)(a1 + 12 * v5);
    v6[6] = sub_60822320(v15, &v16, 0);
    sub_608FDDF4((int)&v16, "course/course%d_bgdatL1.bin", v5 + 1);
    v6[4] = sub_60822320(v15, &v16, 0);
    v13 = v5 + 1;
    sub_608FDDF4((int)&v16, "course/course%d_bgdatL2.bin", v5 + 1);
    v6[5] = sub_60822320(v15, &v16, 0);
    v7 = 4;
    v8 = v2;
    v9 = v14;
    do
    {
      v10 = a1 + v9;
      if ( **(_BYTE **)(a1 + v9 + 244) )
      {
        (*(void (__fastcall **)(int))(FIELD_U32(v10, 240) + 12))(v10 + 240);
        sub_608FDDF4((int)&v16, "BG_unt/%s_hd.bin", FIELD_U32(v10, 244));
        *(_DWORD *)(a1 + 4 * v8 + 112) = sub_608226EC(v15, v10 + 240, &v16, 0);
        (*(void (__fastcall **)(int))(FIELD_U32(v10, 240) + 12))(v10 + 240);
        sub_608FDDF4((int)&v16, "BG_unt/%s.bin", FIELD_U32(v10, 244));
        v11 = sub_608226EC(v15, v10 + 240, &v16, 0);
      }
      else
      {
        v11 = 0;
        *(_DWORD *)(a1 + 4 * v8 + 112) = 0;
      }
      v12 = a1 + 4 * v8;
      --v7;
      ++v8;
      v9 += 44;
      FIELD_U32(v12, 176) = v11;
    }
    while ( v7 );
    v3 = v13;
    v2 += 4;
    result = v14 + 176;
  }
  while ( v13 != 4 );
  return result;
}

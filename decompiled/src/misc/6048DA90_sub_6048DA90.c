/* sub_6048DA90
 * address: 0x6048DA90   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048DA90(int a1)
{
  int v1; // r7
  int v2; // r10
  int v3; // r4
  int result; // r0
  char v5; // r11
  _DWORD *v6; // r5
  void *v7; // r6
  int v8; // r0
  int v9; // r0
  float v10; // s16
  unsigned int U32; // r0
  int v12; // [sp+4h] [bp-4Ch]
  int (**v13)(); // [sp+8h] [bp-48h] BYREF
  int v14; // [sp+Ch] [bp-44h]

  v1 = 0;
  v12 = a1 + 13800;
  v2 = a1 + 47760;
  v3 = a1 + 47800;
  do
  {
    result = sub_60505350(*(_DWORD *)(*(_DWORD *)(v3 + 4 * v1) + 68));
    v5 = 0;
    if ( result == 1 )
    {
      v6 = *(_DWORD **)(v12 + 4 * v1);
      v7 = (void *)sead__GlobalRandom__sInstance;
      v8 = sub_60492F00(2);
      v13 = &sead__SafeStringBase__vtable;
      v14 = v8;
      sub_60473DE4(v6, 0, &v13, 0);
      v9 = sub_60492F00(3);
      v13 = &sead__SafeStringBase__vtable;
      v14 = v9;
      v5 = 1;
      sub_60473DE4(v6, 1u, &v13, 1);
      v10 = sub_604745C0((int)v6, 1u);
      U32 = sead__Random__getU32(v7);
      result = sub_6047455C((int)v6, 1u, (float)(v10 * (float)(COERCE_FLOAT((U32 >> 9) | 0x3F800000) + -1.0)) + 0.0);
    }
    *(_BYTE *)(v2 + v1++) = v5;
  }
  while ( v1 != 4 );
  return result;
}

/* sub_609A7954
 * address: 0x609A7954   size: 1032   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609A7954(int a1, int a2, void *a3)
{
  _DWORD *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r0
  int (**v12)(); // [sp+8h] [bp-30h] BYREF
  void *v13; // [sp+Ch] [bp-2Ch]
  int (**v14)(); // [sp+10h] [bp-28h] BYREF
  const char *v15; // [sp+14h] [bp-24h]
  int (**v16)(); // [sp+18h] [bp-20h] BYREF
  char *v17; // [sp+1Ch] [bp-1Ch]

  switch ( a1 )
  {
    case 0:
      v4 = (_DWORD *)operator_new_8DE25C(0xB4u, a3, 4);
      sub_609A76A8((int)v4, 0, a2);
      *v4 = off_60C60ECC;
      v4[5] = off_60C60EFC;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "offset_adjust";
      v13 = &unk_60AF1A43;
      v5 = default_ref_9419C8(v4 + 37);
      v4[37] = &off_60C5DC9C;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v5, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
      v4[40] = 0;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "reduce_scale";
      v13 = &unk_60AF1A69;
      v6 = default_ref_9419C8(v4 + 41);
      v4[41] = &off_60C5E01C;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v6, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
      goto LABEL_5;
    case 1:
      v4 = (_DWORD *)operator_new_8DE25C(0xB4u, a3, 4);
      sub_609A76A8((int)v4, 1, a2);
      *v4 = off_60C60F28;
      v4[5] = off_60C60F58;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "offset_adjust";
      v13 = &unk_60AF1A43;
      v7 = default_ref_9419C8(v4 + 37);
      v4[37] = &off_60C5DC9C;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v7, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
      v4[40] = 0;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "reduce_scale";
      v13 = &unk_60AF1A9E;
      v8 = default_ref_9419C8(v4 + 41);
      v4[41] = &off_60C5E01C;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v8, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
LABEL_5:
      v4[44] = 2;
      break;
    case 2:
      v4 = (_DWORD *)operator_new_8DE25C(0xC4u, a3, 4);
      sub_609A8CD4(v4, a2);
      break;
    case 3:
      v4 = (_DWORD *)operator_new_8DE25C(0x98u, a3, 4);
      sub_609A76A8((int)v4, 3, a2);
      *v4 = off_60C60FE0;
      v4[5] = off_60C61010;
      v4[37] = 0;
      break;
    case 4:
      v4 = (_DWORD *)operator_new_8DE25C(0xE4u, a3, 4);
      sub_609A986C(v4, a2);
      break;
    case 5:
      v4 = (_DWORD *)operator_new_8DE25C(0xD0u, a3, 4);
      sub_609A9CBC(v4, a2);
      break;
    case 6:
      v4 = (_DWORD *)operator_new_8DE25C(0xBCu, a3, 4);
      sub_609A76A8((int)v4, 6, a2);
      *v4 = off_60C610F4;
      v4[5] = off_60C61124;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "trim_center";
      v13 = &unk_60AF1BFD;
      v9 = default_ref_9419C8(v4 + 37);
      v4[37] = &off_60C5E120;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v9, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
      v4[40] = 0;
      v4[41] = 0;
      v14 = &sead__SafeStringBase__vtable;
      v12 = &sead__SafeStringBase__vtable;
      v15 = "trim_scale";
      v13 = &unk_60AEB989;
      v10 = default_ref_9419C8(v4 + 42);
      v4[42] = &off_60C5E120;
      v16 = &sead__SafeStringBase__vtable;
      v17 = &byte_60ABC94D;
      sub_60941A08((int)v10, (int *)&v14, (int)&v12, (int)&v16, (int)(v4 + 14));
      v4[45] = 1056964608;
      v4[46] = 1056964608;
      break;
    default:
      v4 = 0;
      break;
  }
  return v4;
}

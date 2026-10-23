/* sub_6071C14C
 * address: 0x6071C14C   size: 1196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071C14C(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r5
  int v5; // r6
  int v6; // r6
  int (**v8)(); // [sp+0h] [bp-20h] BYREF
  const char *v9; // [sp+4h] [bp-1Ch]

  v2 = 0;
  v3 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xDu )
    v3 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 48);
  Undefined_ref_91CC00(v3, 2, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "projection[0]";
  sub_6091CD98(v3, 0, &v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_rotate[0]";
  sub_6091CD98(v3, 1, &v8);
  Undefined_ref_91CE08(v3, 3, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture";
  sub_6091CFA0(v3, 0, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_texture";
  sub_6091CFA0(v3, 1u, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "lava_line_texture";
  sub_6091CFA0(v3, 2u, (int)&v8);
  if ( FIELD_U32(dword_60C9CD58, 16) > 0xDu )
    v2 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 52);
  Undefined_ref_91CC00(v2, 2, a1);
  v4 = 0;
  v8 = &sead__SafeStringBase__vtable;
  v9 = "projection[0]";
  sub_6091CD98(v2, 0, &v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_rotate[0]";
  sub_6091CD98(v2, 1, &v8);
  Undefined_ref_91CE08(v2, 3, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture";
  sub_6091CFA0(v2, 0, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_texture";
  sub_6091CFA0(v2, 1u, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "lava_line_texture";
  sub_6091CFA0(v2, 2u, (int)&v8);
  v5 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xFu )
    v5 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 56);
  Undefined_ref_91CC00(v5, 2, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "projection[0]";
  sub_6091CD98(v5, 0, &v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_rotate[0]";
  sub_6091CD98(v5, 1, &v8);
  Undefined_ref_91CE08(v5, 3, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture";
  sub_6091CFA0(v5, 0, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "normal_texture";
  sub_6091CFA0(v5, 1u, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "lava_line_texture";
  sub_6091CFA0(v5, 2u, (int)&v8);
  if ( FIELD_U32(dword_60C9CD58, 16) > 0xFu )
    v4 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 60);
  Undefined_ref_91CC00(v4, 2, a1);
  v6 = 0;
  v8 = &sead__SafeStringBase__vtable;
  v9 = "projection[0]";
  sub_6091CD98(v4, 0, &v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "circle_color";
  sub_6091CD98(v4, 1, &v8);
  Undefined_ref_91CE08(v4, 2, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture_layer0";
  sub_6091CFA0(v4, 0, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture_mask";
  sub_6091CFA0(v4, 1u, (int)&v8);
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0x11u )
    v6 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 64);
  Undefined_ref_91CC00(v6, 2, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "projection[0]";
  sub_6091CD98(v6, 0, &v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "circle_color";
  sub_6091CD98(v6, 1, &v8);
  Undefined_ref_91CE08(v6, 2, a1);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture_layer0";
  sub_6091CFA0(v6, 0, (int)&v8);
  v8 = &sead__SafeStringBase__vtable;
  v9 = "texture_mask";
  return sub_6091CFA0(v6, 1u, (int)&v8);
}

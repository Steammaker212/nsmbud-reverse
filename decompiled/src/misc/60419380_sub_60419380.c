/* sub_60419380
 * address: 0x60419380   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60419380(int a1, int a2, int a3, void *a4)
{
  int v6; // r0
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r6
  int (**v12)(); // [sp+8h] [bp-20h] BYREF
  const char *v13; // [sp+Ch] [bp-1Ch]

  v6 = operator_new_8DE25C(0x60u, a4, 4);
  v7 = Icon_LAYOUT_Security_agl_shader_ref(v6);
  FIELD_U32(a1, 220) = v7;
  sub_6091E838(v7);
  v8 = FIELD_U32(a1, 220);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "mii_icon";
  v9 = sub_6091F9A0(v8, &v12);
  v10 = 0;
  if ( v9 >= 0 && FIELD_U32(v8, 28) > (unsigned int)v9 )
    v10 = FIELD_U32(v8, 32) + 936 * v9;
  Undefined_ref(v10, 4, a4);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "aPosition";
  sub_6091CB20(v10, 0, &v12);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "aNormal";
  sub_6091CB20(v10, 1, &v12);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "aTexCoord";
  sub_6091CB20(v10, 2, &v12);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "aParameter";
  sub_6091CB20(v10, 3, &v12);
  Undefined_ref_91CE08(v10, 1, a4);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "cTex";
  sub_6091CFA0(v10, 0, (int)&v12);
  Undefined_ref_91D288(v10, 3, a4);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "VertexParameter";
  sub_6091D420(v10, 1, &v12);
  v12 = &sead__SafeStringBase__vtable;
  v13 = "FragmentParameter";
  sub_6091D420(v10, 2, &v12);
  FIELD_U32(a1, 224) = v10;
  sub_6091F558(FIELD_U32(a1, 220));
  return sub_6091DC90(FIELD_U32(a1, 224));
}

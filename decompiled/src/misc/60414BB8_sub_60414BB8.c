/* sub_60414BB8
 * address: 0x60414BB8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60414BB8(int a1)
{
  int i; // r7
  int v3; // r6
  unsigned int v4; // r0
  int result; // r0
  int (**v6)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v7; // [sp+20h] [bp-28h]

  for ( i = 0; i != 4; ++i )
  {
    v3 = 0;
    v4 = dword_60AF23C4[i];
    if ( FIELD_U32(dword_60C9CD58, 16) > v4 )
      v3 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 4 * v4);
    Undefined_ref_91CC00(v3, 7, a1);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cProjection[0]";
    sub_6091CD98(v3, 0, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cModelView[0]";
    sub_6091CD98(v3, 1, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cProjSize";
    sub_6091CD98(v3, 2, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cLightColor";
    sub_6091CD98(v3, 3, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cLightPos";
    sub_6091CD98(v3, 4, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cLightParam";
    sub_6091CD98(v3, 5, &v6);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cLightParam2";
    sub_6091CD98(v3, 6, &v6);
    Undefined_ref_91CE08(v3, 1, a1);
    v6 = &sead__SafeStringBase__vtable;
    v7 = "cGBufferMap";
    result = sub_6091CFA0(v3, 0, (int)&v6);
  }
  return result;
}

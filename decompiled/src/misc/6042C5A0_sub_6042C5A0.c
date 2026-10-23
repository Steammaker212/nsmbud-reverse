/* sub_6042C5A0
 * address: 0x6042C5A0   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042C5A0(int a1)
{
  int v2; // r4
  int (**v4)(); // [sp+0h] [bp-20h] BYREF
  const char *v5; // [sp+4h] [bp-1Ch]

  v2 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 0xBu )
    v2 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 40);
  Undefined_ref_91CC00(v2, 6, a1);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cWorldMtx[0]";
  sub_6091CD98(v2, 0, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cViewMtx[0]";
  sub_6091CD98(v2, 1, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cProjMtx[0]";
  sub_6091CD98(v2, 2, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cResolutionX";
  sub_6091CD98(v2, 3, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cResolutionY";
  sub_6091CD98(v2, 4, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "cLineWidth";
  sub_6091CD98(v2, 5, &v4);
  Undefined_ref_91CE08(v2, 2, a1);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "sampler_depth";
  sub_6091CFA0(v2, 0, (int)&v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "sampler_color";
  return sub_6091CFA0(v2, 1u, (int)&v4);
}

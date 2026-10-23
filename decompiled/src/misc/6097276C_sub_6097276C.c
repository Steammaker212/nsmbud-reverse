/* sub_6097276C
 * address: 0x6097276C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097276C(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r4
  int (**v7)(); // [sp+0h] [bp-18h] BYREF
  const char *v8; // [sp+4h] [bp-14h]

  v7 = &sead__SafeStringBase__vtable;
  v8 = "star_render";
  v4 = sub_6091F9A0(a1, &v7);
  v5 = 0;
  if ( v4 >= 0 && FIELD_U32(a1, 28) > (unsigned int)v4 )
    v5 = (_DWORD *)(FIELD_U32(a1, 32) + 936 * v4);
  Undefined_ref_91D288(v5, 2, a2);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "Context";
  sub_6091D420(v5, 0, (int)&v7);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "UnitInfo";
  return sub_6091D420(v5, 1u, (int)&v7);
}

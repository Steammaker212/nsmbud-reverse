/* sub_60728038
 * address: 0x60728038   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60728038(int a1)
{
  int v2; // r4
  int (**v4)(); // [sp+0h] [bp-20h] BYREF
  const char *v5; // [sp+4h] [bp-1Ch]

  v2 = 0;
  if ( FIELD_U32(dword_60C9CD58, 16) >= 9u )
    v2 = *(_DWORD *)(FIELD_U32(dword_60C9CD58, 24) + 32);
  Undefined_ref_91CC00(v2, 4, a1);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "projection[0]";
  sub_6091CD98(v2, 0, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "view[0]";
  sub_6091CD98(v2, 1, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "world[0]";
  sub_6091CD98(v2, 2, &v4);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "color";
  sub_6091CD98(v2, 3, &v4);
  Undefined_ref_91CE08(v2, 1, a1);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "texture";
  return sub_6091CFA0(v2, 0, (int)&v4);
}

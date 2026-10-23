/* sub_607279C0
 * address: 0x607279C0   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607279C0(int *a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int result; // r0
  int (**v6)(); // [sp+4h] [bp-54h] BYREF
  _BYTE *v7; // [sp+8h] [bp-50h]
  int v8; // [sp+Ch] [bp-4Ch]
  _BYTE v9[72]; // [sp+10h] [bp-48h] BYREF

  v7 = v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 40;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *v7 = 0;
  v6 = &off_60C21DCC;
  sub_608FDDF4((int)&v6, "course/course%d.bin", 1);
  v2 = sub_60822320(ArchiveManagerMaybe_instance, &v6, 0);
  if ( v2 )
  {
    a1[4] = 0;
    sub_60727340(a1 + 4, v2);
  }
  v7 = v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 40;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *v7 = 0;
  v6 = &off_60C21DCC;
  sub_608FDDF4((int)&v6, "course/course%d.bin", 2);
  v3 = sub_60822320(ArchiveManagerMaybe_instance, &v6, 0);
  if ( v3 )
  {
    a1[242] = 1;
    sub_60727340(a1 + 242, v3);
  }
  v7 = v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 40;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *v7 = 0;
  v6 = &off_60C21DCC;
  sub_608FDDF4((int)&v6, "course/course%d.bin", 3);
  v4 = sub_60822320(ArchiveManagerMaybe_instance, &v6, 0);
  if ( v4 )
  {
    a1[480] = 2;
    sub_60727340(a1 + 480, v4);
  }
  v7 = v9;
  v6 = &BufferedSafeStringBase_char_vtable_probably;
  v8 = 40;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
  *v7 = 0;
  v6 = &off_60C21DCC;
  sub_608FDDF4((int)&v6, "course/course%d.bin", 4);
  result = sub_60822320(ArchiveManagerMaybe_instance, &v6, 0);
  if ( result )
  {
    a1[718] = 3;
    return sub_60727340(a1 + 718, result);
  }
  return result;
}

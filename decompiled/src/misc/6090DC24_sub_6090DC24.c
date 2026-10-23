/* sub_6090DC24
 * address: 0x6090DC24   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6090DC24(int a1, const char *a2, ...)
{
  char *v4; // r5
  signed int v5; // r6
  int (**v7)(); // [sp+Ch] [bp-434h] BYREF
  char *v8; // [sp+10h] [bp-430h]
  signed int v9; // [sp+14h] [bp-42Ch]
  char v10; // [sp+18h] [bp-428h] BYREF
  va_list va; // [sp+438h] [bp-8h] BYREF

  va_start(va, a2);
  v4 = *(char **)(a1 + 68);
  if ( v4 )
  {
    v5 = FIELD_U32(a1, 72);
  }
  else
  {
    v5 = 512;
    v4 = &v10;
  }
  v8 = &v4[v5];
  v7 = &BufferedSafeStringBase_char_vtable_probably;
  v9 = v5;
  if ( v5 <= 0 )
  {
    v8 = 0;
    v9 = 0;
  }
  else
  {
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v7);
  }
  sead__BufferedSafeStringBase__formatV(&v7, a2, va);
  ((void (__fastcall *)(int (***)()))v7[3])(&v7);
  sub_60901A08(v4, v5, (int)v8, v5 - 1);
  return sub_6090E1F4(a1, v4, -1, 1, 0);
}

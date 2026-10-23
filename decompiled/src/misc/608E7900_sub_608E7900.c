/* sub_608E7900
 * address: 0x608E7900   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E7900(int a1, int a2)
{
  int (**v5)(); // [sp+4h] [bp-224h] BYREF
  int *v6; // [sp+8h] [bp-220h]
  int v7; // [sp+Ch] [bp-21Ch]
  int v8; // [sp+10h] [bp-218h] BYREF

  v6 = &v8;
  v5 = &BufferedSafeStringBase_char_vtable_probably;
  v7 = 512;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5);
  *(_BYTE *)v6 = 0;
  v5 = &off_60BF9F58;
  return (*(int (__fastcall **)(int, int (***)(), int))(*(_DWORD *)a1 + 120))(a1, &v5, a2);
}

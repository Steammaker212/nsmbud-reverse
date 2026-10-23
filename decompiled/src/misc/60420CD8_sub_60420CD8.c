/* sub_60420CD8
 * address: 0x60420CD8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60420CD8(int a1, int *a2)
{
  int result; // r0
  _DWORD *v4; // r4
  int v5; // t1
  int (**v6)(); // [sp+4h] [bp-21Ch] BYREF
  int *v7; // [sp+8h] [bp-218h]
  int v8; // [sp+Ch] [bp-214h]
  int v9; // [sp+10h] [bp-210h] BYREF

  result = *a2;
  if ( !*a2 )
  {
    v7 = &v9;
    v6 = &BufferedSafeStringBase_char_vtable_probably;
    v8 = 512;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v6);
    *(_BYTE *)v7 = 0;
    v6 = &off_60BF9F58;
    v5 = a2[2];
    v4 = a2 + 2;
    (*(void (__fastcall **)(_DWORD *))(v5 + 12))(v4);
    return sub_608FDDF4(
             (int)&v6,
             "File = {AGL_ROOT}\\tools\\bin\\Win32\\aglParameterBinaryConverter.exe , Arg = %s",
             (const char *)v4[1]);
  }
  return result;
}

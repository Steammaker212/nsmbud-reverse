/* sub_608E2AB0
 * address: 0x608E2AB0   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608E2AB0(_DWORD *a1, int a2)
{
  const char *v4; // r1
  int v5; // r1
  _BOOL4 result; // r0
  int (**v7)(); // [sp+4h] [bp-124h] BYREF
  nn__fs *v8; // [sp+8h] [bp-120h]
  int v9; // [sp+Ch] [bp-11Ch]
  int v10; // [sp+10h] [bp-118h] BYREF

  v8 = (nn__fs *)&v10;
  v7 = &BufferedSafeStringBase_char_vtable_probably;
  v9 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v7);
  *(_BYTE *)v8 = 0;
  v7 = &off_60BD94BC;
  if ( (*(int (__fastcall **)(_DWORD *, int (***)(), int))(*a1 + 124))(a1, &v7, a2) == 1 )
  {
    ((void (__fastcall *)(int (***)()))v7[3])(&v7);
    v5 = nn__fs__DeleteFile(v8, v4);
    result = v5 == 0;
  }
  else
  {
    v5 = 2560002;
    result = 0;
  }
  a1[20] = v5;
  return result;
}

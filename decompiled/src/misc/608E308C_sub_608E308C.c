/* sub_608E308C
 * address: 0x608E308C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E308C(_DWORD *a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r0
  _DWORD *v7; // r1
  int (**v9)(); // [sp+4h] [bp-124h] BYREF
  int *v10; // [sp+8h] [bp-120h]
  int v11; // [sp+Ch] [bp-11Ch]
  int v12; // [sp+10h] [bp-118h] BYREF

  v5 = sub_608E78F8(a1, a2);
  v10 = &v12;
  v9 = &BufferedSafeStringBase_char_vtable_probably;
  v11 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v9);
  *(_BYTE *)v10 = 0;
  v9 = &off_60BD94BC;
  if ( (*(int (__fastcall **)(_DWORD *, int (***)(), int))(*a1 + 124))(a1, &v9, a3) == 1 )
  {
    ((void (__fastcall *)(int (***)()))v9[3])(&v9);
    v6 = nn__fs__OpenDirectory(v5, v10, 3);
    v7 = a1;
    if ( v6 )
      v7 = 0;
  }
  else
  {
    v6 = 2560002;
    v7 = 0;
  }
  a1[20] = v6;
  return v7;
}

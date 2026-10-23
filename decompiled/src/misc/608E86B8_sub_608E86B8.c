/* sub_608E86B8
 * address: 0x608E86B8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E86B8(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  _BYTE *v9; // r0
  int (**v11)(); // [sp+4h] [bp-12Ch] BYREF
  int *v12; // [sp+8h] [bp-128h]
  int v13; // [sp+Ch] [bp-124h]
  int v14; // [sp+10h] [bp-120h] BYREF

  v12 = &v14;
  v11 = &BufferedSafeStringBase_char_vtable_probably;
  v13 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v11);
  *(_BYTE *)v12 = 0;
  v11 = &off_60BD94BC;
  v9 = (_BYTE *)sub_608E8770(a1, a3, &v11);
  if ( v9 )
    return sub_608E6578(v9, a2, (int)&v11, a4, a5);
  else
    return 0;
}

/* sub_60822378
 * address: 0x60822378   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60822378(int a1, int a2)
{
  int v3; // r0
  int result; // r0
  int (**v5)(); // [sp+4h] [bp-124h] BYREF
  int *v6; // [sp+8h] [bp-120h]
  int v7; // [sp+Ch] [bp-11Ch]
  int v8; // [sp+10h] [bp-118h] BYREF
  unsigned __int8 v9; // [sp+117h] [bp-11h] BYREF

  v6 = &v8;
  v5 = &BufferedSafeStringBase_char_vtable_probably;
  v7 = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v5);
  *(_BYTE *)v6 = 0;
  v5 = &off_60BF9688;
  v3 = sub_608E8770(dword_60CCEBD0, a2, &v5);
  if ( !v3 )
    return 0;
  v9 = 0;
  sub_608E6C9C(v3, &v9, &v5);
  result = v9;
  if ( v9 )
    return 1;
  return result;
}

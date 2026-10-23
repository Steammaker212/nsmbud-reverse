/* sub_6022CBE8
 * address: 0x6022CBE8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022CBE8(int a1, int a2, int a3)
{
  int v6; // r1
  int result; // r0
  int (**v8)(); // [sp+4h] [bp+0h] BYREF
  int *v9; // [sp+8h] [bp+4h]
  int v10; // [sp+Ch] [bp+8h]
  int v11; // [sp+10h] [bp+Ch] BYREF

  v9 = &v11;
  v8 = &BufferedSafeStringBase_char_vtable_probably;
  v10 = 8;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v8);
  *(_BYTE *)v9 = 0;
  v8 = &off_60BD4B8C;
  v6 = sub_60199FD4(a2, a3, &v8);
  result = 0;
  if ( v6 == 1 )
    return sub_6022C144(a1, &v8);
  return result;
}

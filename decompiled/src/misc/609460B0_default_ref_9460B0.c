/* default_ref_9460B0
 * address: 0x609460B0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall default_ref_9460B0(int a1, void *a2, int a3)
{
  _DWORD *v5; // r6
  int (**v7)(); // [sp+0h] [bp-20h] BYREF
  char *v8; // [sp+4h] [bp-1Ch]

  v5 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v7 = &sead__SafeStringBase__vtable;
  v8 = off_60C5CB34;
  *v5 = &off_60C5E40C;
  v5[2] = 0;
  v5[1] = sub_6090FEB4((int)"default");
  *v5 = &off_60C5E5F0;
  v5[2] = 0;
  ((void (__fastcall *)(int (***)()))v7[3])(&v7);
  v5[1] = sub_6090FEB4((int)v8);
  if ( a3 )
    sub_60947BFC(a3, v5);
  v5[3] = FIELD_U32(a1, 12);
  return v5;
}

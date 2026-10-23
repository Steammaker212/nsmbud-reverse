/* sub_6055B594
 * address: 0x6055B594   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055B594(int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v1 = (_DWORD *)(a1 + 36);
  FIELD_U8(a1, 13309) = 1;
  if ( FIELD_U8(a1, 13310) )
    v2 = InOutR_InOutL_ref(0);
  else
    v2 = InOutR_InOutL_ref(1);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = v2;
  return sub_60473DE4(v1, 0, v4, 0);
}

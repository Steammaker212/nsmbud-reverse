/* sub_60479414
 * address: 0x60479414   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60479414(int a1, int a2, int a3)
{
  sead_IDisposer *v6; // r0

  *(_DWORD *)a1 = off_60BFD104;
  FIELD_U32(a1, 4) = 0;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 12) = &off_60BFD114;
  v6 = sub_60475900((sead_IDisposer *)(a1 + 12), a1 + 3540, 1);
  FIELD_U32(v6, 0x0) = (int)&off_60BFD114;
  v6[220].field_8 = 0;
  v6[220].field_C = (int)&sead__SafeStringBase__vtable;
  v6[221].vtable = (int)&byte_60B3BA34;
  v6[221].containingHeap = 0;
  LOBYTE(v6[221].field_8) = 0;
  LOBYTE(v6[221].field_C) = 0;
  if ( a2 && a3 >= 1 )
  {
    FIELD_U32(a1, 4) = a3;
    FIELD_U32(a1, 8) = a2;
  }
  FIELD_U8(a1, 3561) = 0;
  return a1;
}

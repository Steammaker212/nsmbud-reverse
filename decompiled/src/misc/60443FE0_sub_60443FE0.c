/* sub_60443FE0
 * address: 0x60443FE0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60443FE0(int a1, int a2)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  FIELD_U32(a1, 16) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 20) = FIELD_U32(a2, 4);
  *(_DWORD *)a1 = off_60BFAEE0;
  FIELD_U8(a1, 24) = 0;
  memset((void *)(a1 + 28), 0, 40);
  aglenv_ref(a1 + 68);
  sub_60430600((_DWORD *)(a1 + 868));
  FIELD_U32(a1, 880) = 0;
  FIELD_U8(a1, 884) = 0;
  FIELD_U32(a1, 888) = 0;
  FIELD_U32(a1, 892) = 0;
  FIELD_U32(a1, 896) = 0;
  FIELD_U32(a1, 900) = 0;
  FIELD_U32(a1, 904) = 0;
  FIELD_U32(a1, 908) = 0;
  return a1;
}

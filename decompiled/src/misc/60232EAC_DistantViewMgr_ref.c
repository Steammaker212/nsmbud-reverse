/* DistantViewMgr_ref
 * address: 0x60232EAC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall DistantViewMgr_ref(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  int (**v5)(); // [sp+0h] [bp-10h] BYREF
  const char *v6; // [sp+4h] [bp-Ch]

  if ( FIELD_U8(a1, 4720) )
  {
    v5 = &sead__SafeStringBase__vtable;
    v6 = "DistantViewMgr";
    FIELD_U32(a1, 4624) = a1;
    FIELD_U32(a1, 4628) = sub_60233038;
    FIELD_U32(a1, 4632) = 0;
    FIELD_U32(a1, 4620) = off_60BD9504;
    sead__SafeStringBase__operator_assign(a1 + 4600, (int)&v5);
    FIELD_U32(a1, 4608) = 1;
    v2 = *(_DWORD **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
      v2 += 5;
    sub_6095537C(*v2, 4, a1 + 4584);
  }
  v5 = &sead__SafeStringBase__vtable;
  v6 = "DistantViewMgr";
  FIELD_U32(a1, 4692) = a1;
  FIELD_U32(a1, 4696) = sub_60233054;
  FIELD_U32(a1, 4700) = 0;
  FIELD_U32(a1, 4688) = off_60BD9504;
  sead__SafeStringBase__operator_assign(a1 + 4668, (int)&v5);
  FIELD_U32(a1, 4676) = 1;
  v3 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
    v3 += 5;
  return sub_6095537C(*v3, 5, a1 + 4652);
}

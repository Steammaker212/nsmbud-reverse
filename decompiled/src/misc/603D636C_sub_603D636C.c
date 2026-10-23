/* sub_603D636C
 * address: 0x603D636C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D636C(int a1)
{
  int v2; // r5
  int v3; // r5

  FIELD_F32(a1, 120) = flt_60AF1F80[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 == (*(int (**)(void))(dword_60C99054 + 8))() )
  {
    v3 = ((60 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 120;
  }
  else
  {
    v3 = 20;
    if ( !FIELD_U8(a1, 11819) )
      sub_603D907C(a1, 0, 1.0);
  }
  FIELD_U32(a1, 11836) = v3;
  FIELD_U32(a1, 104) = 1036831949;
  FIELD_F32(a1, 132) = flt_60AF1F80[FIELD_U32(a1, 80)];
  FIELD_U8(a1, 11820) = 0;
  FIELD_U32(a1, 11840) = 0;
  return 11840;
}

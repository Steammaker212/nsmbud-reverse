/* sub_603BC1D0
 * address: 0x603BC1D0   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BC1D0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r5

  v4 = FIELD_U32(a1, 6352);
  v2 = (_DWORD *)(a1 + 6352);
  v3 = v4;
  if ( v4 != 2 )
  {
    FIELD_U32(a1, 6356) = v3;
    *v2 = 2;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 96) = -1065353216;
  v5 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v5 == (*(int (**)(void))(dword_60C98310 + 8))() )
  {
    FIELD_U32(a1, 6836) = -201326592;
    FIELD_U32(a1, 3200) |= 0x40000000u;
    FIELD_U32(a1, 3192) |= 0x40000000u;
    FIELD_U32(a1, 3176) |= 0x40000000u;
    FIELD_U32(a1, 3184) |= 0x40000000u;
    FIELD_U32(a1, 116) = 1158414336;
  }
  FIELD_U8(a1, 6840) = 0;
  FIELD_U32(a1, 6860) = 0;
  FIELD_U32(a1, 6856) = 0;
  return 6856;
}

/* sub_60379C1C
 * address: 0x60379C1C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60379C1C(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  if ( v2 != (*(int (**)(void))(dword_60C965FC + 8))() )
    togezo_ref_3BD770(a1);
  v3 = dword_60C96640[FIELD_U32(a1, 80)];
  FIELD_U32(a1, 156) = 0x80000000;
  FIELD_U32(a1, 160) = v3;
  FIELD_F32(a1, 120) = sub_603BDB18(a1);
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U8(a1, 6876) = (FIELD_U16(a1, 22) & 1) == 0;
  v4 = FIELD_U32(a1, 6352);
  if ( v4 != 1 )
  {
    FIELD_U32(a1, 6356) = v4;
    FIELD_U32(a1, 6352) = 1;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_F32(a1, 100) = --0.1875;
  return --0.1875;
}

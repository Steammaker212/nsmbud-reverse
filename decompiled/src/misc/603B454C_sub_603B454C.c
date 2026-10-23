/* sub_603B454C
 * address: 0x603B454C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B454C(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int v4; // r1

  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = (*(int (**)(void))(dword_60C98020 + 8))();
  v4 = FIELD_U32(a1, 20);
  if ( v2 == v3 && (v4 & 0xF) != 0 )
  {
    FIELD_U32(a1, 6340) = 30;
    FIELD_F32(a1, 108) = FIELD_F32(a1, 108) + (float)((float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 8.0);
  }
  else
  {
    FIELD_U32(a1, 6340) = 30 * ((v4 >> 20) & 0xF);
  }
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}

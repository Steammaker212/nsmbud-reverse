/* sub_600867EC
 * address: 0x600867EC   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_600867EC(int a1)
{
  int v2; // r5
  __int16 v3; // r6
  unsigned int result; // r0

  FIELD_U32(a1, 328) = 9;
  sub_6015907C((ActiveCollider *)(a1 + 188), 16);
  sub_600009FC((StageActor *)a1);
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  v3 = 60;
  if ( v2 == (*(int (**)(void))(dword_60C81D4C + 8))() )
  {
    v3 = 20;
    FIELD_F32(a1, 120) = (float)byte_60AFE3F4[FIELD_U32(a1, 80)] * 5.0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 128) = 0;
  }
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 104) = 1031798784;
  FIELD_U32(a1, 160) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1060))(a1);
  result = FIELD_S8(a1, 84);
  if ( result <= 3 )
  {
    result = a1 + 2 * result;
    FIELD_U16(result, 6140) = v3;
  }
  return result;
}

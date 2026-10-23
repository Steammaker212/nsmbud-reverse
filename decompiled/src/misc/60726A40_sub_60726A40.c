/* sub_60726A40
 * address: 0x60726A40   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726A40(int a1)
{
  int v2; // r0
  int v3; // r2
  unsigned int v4; // r1
  int *v5; // r0
  int result; // r0

  FIELD_U32(a1, 192) = 0;
  FIELD_U32(a1, 196) = 1148846080;
  FIELD_U8(a1, 48) = 1;
  sub_6090C9A0(a1 + 44);
  FIELD_U32(a1, 284) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 272) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 288) = -1082130432;
  FIELD_U32(a1, 292) = 0;
  FIELD_U32(a1, 296) = 1065353216;
  FIELD_U32(a1, 300) = 0;
  (*(void (__fastcall **)(int, int))(FIELD_U32(a1, 216) + 16))(a1 + 216, a1 + 220);
  sub_60726B20(a1);
  v2 = dword_60CD0B40;
  v3 = FIELD_U32(dword_60CD0B40, 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v3 += 24;
  *(_DWORD *)(*(_DWORD *)v3 + 76) = a1 + 44;
  v4 = FIELD_U32(v2, 32);
  v5 = *(int **)(v2 + 36);
  if ( v4 > 6 )
    v5 += 6;
  result = *v5;
  FIELD_U32(result, 72) = a1 + 216;
  return result;
}

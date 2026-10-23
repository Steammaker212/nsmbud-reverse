/* sub_604E14E8
 * address: 0x604E14E8   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E14E8(int a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r3
  unsigned int v3; // r3
  int result; // r0

  v1 = FIELD_U32(a1, 5724);
  v2 = v1;
  if ( v1 >= 6 )
    v2 = 0;
  if ( !FIELD_U8(LevelInfo_instance, 28) && !FIELD_U8(LevelInfo_instance, 29) || FIELD_S32(a1, 5736) >= 0 )
  {
    *(_BYTE *)(dword_60C99DD4 + 72 * v2 + 323) = 0;
    v1 = FIELD_U32(a1, 5724);
  }
  v3 = 0;
  FIELD_U32(a1, 5740) = 0;
  FIELD_U8(a1, 5744) = 0;
  FIELD_U8(a1, 5746) = 0;
  FIELD_U8(a1, 5747) = 0;
  if ( v1 < 4 )
    v3 = v1;
  result = a1 + 4 * v3;
  FIELD_U32(result, 3664) = 3;
  return result;
}

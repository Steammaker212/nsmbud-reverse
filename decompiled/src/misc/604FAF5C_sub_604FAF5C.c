/* sub_604FAF5C
 * address: 0x604FAF5C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_604FAF5C(int a1)
{
  int v1; // r12
  int v2; // r1
  _DWORD *result; // r0
  _DWORD *v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r3
  unsigned int v7; // r3
  unsigned int v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // r3

  v1 = 0;
  v2 = FIELD_U32(a1, 40104);
  if ( v2 != 1 )
    LOBYTE(v2) = 0;
  FIELD_U8(a1, 36562) = v2;
  FIELD_U32(a1, 40084) = 0;
  result = (_DWORD *)(a1 + 40084);
  v4 = (_DWORD *)dword_60C99E1C;
  v5 = FIELD_U32(dword_60C99E1C, 16);
  if ( v5 <= 0x35 && *(_DWORD *)(dword_60C99E1C + 4424 * v5 + 236) == 1 )
  {
    v1 = 1;
    *result = 1;
  }
  v6 = v4[13];
  if ( v6 <= 0x35 && v4[1106 * v6 + 59] == 1 )
    *result = ++v1;
  v7 = v4[22];
  if ( v7 <= 0x35 && v4[1106 * v7 + 59] == 1 )
    *result = ++v1;
  v8 = v4[31];
  if ( v8 <= 0x35 && v4[1106 * v8 + 59] == 1 )
    *result = ++v1;
  v9 = v4[40];
  if ( v9 <= 0x35 && v4[1106 * v9 + 59] == 1 )
    *result = ++v1;
  v10 = v4[49];
  if ( v10 <= 0x35 && v4[1106 * v10 + 59] == 1 )
    *result = v1 + 1;
  return result;
}

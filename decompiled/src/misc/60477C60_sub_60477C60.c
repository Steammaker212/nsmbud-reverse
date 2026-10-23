/* sub_60477C60
 * address: 0x60477C60   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60477C60(int a1)
{
  int result; // r0
  int v3; // r1
  int *v4; // r0
  int v5; // r1
  int v6; // r1
  float v7; // s0

  if ( !FIELD_U8(a1, 160) )
  {
    v5 = FIELD_U32(a1, 112);
    if ( FIELD_F32(v5, 16) == 0.0 )
    {
      sub_60477B30((_DWORD *)a1, FIELD_U32(a1, 128));
      v4 = *(int **)(a1 + 128);
      goto LABEL_7;
    }
    sub_60477B30((_DWORD *)a1, v5);
    v4 = *(int **)(a1 + 112);
LABEL_10:
    v6 = *v4;
    v7 = -1.0;
    return (*(int (__fastcall **)(int *, _DWORD, float))(v6 + 92))(v4, 0, v7);
  }
  result = FIELD_U8(a1, 168);
  if ( FIELD_U8(a1, 168) )
    return result;
  v3 = FIELD_U32(a1, 128);
  if ( FIELD_F32(v3, 16) != 0.0 )
  {
    sub_60477B30((_DWORD *)a1, v3);
    v4 = *(int **)(a1 + 128);
    goto LABEL_10;
  }
  sub_60477B30((_DWORD *)a1, FIELD_U32(a1, 112));
  v4 = *(int **)(a1 + 112);
LABEL_7:
  v6 = *v4;
  v7 = 1.0;
  return (*(int (__fastcall **)(int *, _DWORD, float))(v6 + 92))(v4, 0, v7);
}

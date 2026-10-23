/* sub_60445044
 * address: 0x60445044   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60445044(int a1, unsigned int a2)
{
  int v4; // r0
  int *v5; // r4
  int v6; // r5
  int v7; // t1
  int v8; // r4
  int v9; // r7
  int v10; // r10
  int result; // r0
  int *v12; // r4
  int v13; // r5
  int v14; // t1

  if ( !FIELD_U8(a1, 24) )
  {
    v4 = FIELD_U32(a1, 28);
    if ( v4 )
    {
      v5 = *(int **)(a1 + 36);
      v6 = 4 * v4;
      do
      {
        v7 = *v5++;
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        v6 -= 4;
      }
      while ( v6 );
    }
    FIELD_U8(a1, 24) = 1;
  }
  v8 = FIELD_U32(a1, 900);
  if ( FIELD_U32(a1, 896) > a2 )
    v8 += a2 << 7;
  v9 = v8 + 52;
  v10 = v8 + 4;
  sub_60430818(
    a1 + 868,
    a2,
    v8 + 4,
    (float32x2_t *)(v8 + 52),
    FIELD_U32(v8, 116),
    (_DWORD *)(a1 + 616),
    *(float **)(v8 + 124));
  FIELD_U32(v8, 116) = 0;
  result = FIELD_U32(a1, 28);
  if ( result )
  {
    v12 = *(int **)(a1 + 36);
    v13 = 4 * result;
    do
    {
      v14 = *v12++;
      result = (*(int (__fastcall **)(int, unsigned int, int, int, int))(*(_DWORD *)v14 + 12))(v14, a2, v10, v9, a1);
      v13 -= 4;
    }
    while ( v13 );
  }
  return result;
}
